using UnityEngine;
using System.Collections;

public class playerController : MonoBehaviour {
	// screen bounds
	float xmin;
	float xmax;
	float ymax;
	float ymin;
	float padding = 0.7f;

	// player animator
	Animator anim;

	// movement variables
	public float moveSpeed = 10f;
	public float jumpSpeed = 20f;
	bool facingRight = true;
	float tapBuffer = 0.5f;
	float tapLength = 0;
	float tapThreshold = 0.2f;

	// ground checks for jumping
	bool grounded = false;
	bool wasGrounded = false;
	public Transform groundCheck;
	float groundRadius = 0.65f;
	public LayerMask whatIsGround;

	// push/pull off metal object
	public bool allomancy = false;
	GameObject[] metalObjects;
	GameObject currentMetalObject;
	public GameObject arrowPrefab;
	private Color startColor;
	public float force = 100f;
	Vector2 forceVector;
	GameObject pauseMask;
	Vector2 oldVelocity;

	// disable controls - for win/lose conditions
	public bool disableControls;

	// audio
	AudioSource audioSource;
	public AudioClip jumpClip;
	public AudioClip landClip;

	void Start() {
		disableControls = false;
		audioSource = GetComponent<AudioSource> ();

		// screen bounds to stop movement outside of screen
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint (new Vector3 (0, 0, distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint (new Vector3 (1, 0, distance));
		Vector3 topmost = Camera.main.ViewportToWorldPoint (new Vector3 (0, 1, distance));
		xmin = leftmost.x + padding;
		xmax = rightmost.x - padding;
		ymax = topmost.y - padding;

		anim = GetComponent<Animator> ();

		metalObjects = GameObject.FindGameObjectsWithTag("Metal");
		pauseMask = GameObject.Find ("PauseMask");
	}
	

	void Update () {
		// set grounded variables
		grounded = Physics2D.OverlapCircle (groundCheck.position, groundRadius, whatIsGround);
		anim.SetBool ("isGrounded", grounded);
		if (grounded && !wasGrounded) {
			anim.Play ("Landing");
		}

		// set velocity variables
		Vector2 velocity = GetComponent<Rigidbody2D> ().velocity;
		anim.SetFloat("vSpeed", velocity.y);

		// movement controls only apply when not in allomancy mode
		if (!allomancy && !disableControls) {
			
			// run and jump only when grounded
			if (Input.touchCount > 0 && grounded) {
				// tap length for the latest touch on the screen
				if (Input.GetTouch (Input.touchCount - 1).phase == TouchPhase.Began) {
					tapLength = 0;
				} else {
					tapLength += Time.deltaTime;
				}

				// if a touch has ended, see if it's short enough to jump
				if (Input.GetTouch (Input.touchCount - 1).phase == TouchPhase.Ended) {
					if (tapLength <= tapThreshold) {
						anim.Play ("Jumping");
						Invoke ("ApplyJump", 0.1f);
						tapLength = 0;
					} else {
						tapLength = 0;
					}
				}

				// controls for running left and right
				Vector2 touchPosition = Input.GetTouch (0).position;
				Vector2 worldPoint = Camera.main.ScreenToWorldPoint (touchPosition);
				if (worldPoint.x > transform.position.x + tapBuffer) {
					GetComponent<Rigidbody2D> ().velocity = new Vector2 (moveSpeed, velocity.y);
					anim.SetBool ("isRunning", true);
				} else if (worldPoint.x < transform.position.x - tapBuffer) {
					GetComponent<Rigidbody2D> ().velocity = new Vector2 (-moveSpeed, velocity.y);
					anim.SetBool ("isRunning", true);
				} else {
					anim.SetBool("isRunning", false);
				}

			} else {
				anim.SetBool("isRunning", false);
			}
		}
		// direction the player sprite is facing
		if (velocity.x > 0.1 && !facingRight) {
			Flip (velocity.x);
		} else if (velocity.x < -0.1 && facingRight) {
			Flip (velocity.x);
		}
		// keep track of grounded state
		wasGrounded = grounded;

		// select metal objects
		// touching a metal object activates allomancy mode and selects it
		if (Input.touchCount > 0 && !disableControls) {
			// get the object that was touched
			if (Input.GetTouch (Input.touchCount - 1).phase == TouchPhase.Began) {
				Vector3 wp = Camera.main.ScreenToWorldPoint (Input.GetTouch (Input.touchCount - 1).position);
				Vector2 touchPos = new Vector2 (wp.x, wp.y);
				Collider2D hit = Physics2D.OverlapPoint (touchPos);
				Debug.Log (hit);
				if (hit && hit.GetComponent<metalObjectController>()) {
					allomancy = true;
					// deselect all metal objects
					DestroyArrow();
					foreach (GameObject metalObject in metalObjects) {
						metalObject.GetComponent<metalObjectController> ().isSelected = false;
					}
					// select this one
					hit.gameObject.GetComponent<metalObjectController>().isSelected = true;
					currentMetalObject = hit.gameObject;
					DrawArrow();
				}
			}
		}


		// freeze character if in allomancy mode
		if (allomancy) {
			GetComponent<Rigidbody2D> ().gravityScale = 0;
			GetComponent<Rigidbody2D> ().velocity = new Vector2 (0, 0);
			// Create allomantic mode UI
			pauseMask.GetComponent<SpriteRenderer> ().enabled = true;
		}

		// restrict the player to the gamespace
		float newX = Mathf.Clamp (transform.position.x, xmin, xmax);
		float newY = Mathf.Clamp (transform.position.y, -20, ymax);
		transform.position = new Vector3 (newX, newY, transform.position.z);
		if (transform.position.y == ymax){
			GetComponent<Rigidbody2D> ().velocity = new Vector2 (GetComponent<Rigidbody2D> ().velocity.x, 0);
		}
	}
		
	// apply force to jump
	void ApplyJump(){
		GetComponent<Rigidbody2D> ().AddForce (Vector2.up * jumpSpeed, ForceMode2D.Impulse);
	}

	// flip character based on which way it's moving
	void Flip(float velocity) {
		facingRight = !facingRight;
		Vector3 theScale = transform.localScale;
		theScale.x *= -1;
		transform.localScale = theScale;
	}

	void EnterAllomancy(){
		// freeze character and select first object
		GetComponent<Rigidbody2D> ().gravityScale = 0;
		GetComponent<Rigidbody2D> ().velocity = new Vector2 (0, 0);
		// Create allomantic mode UI
		pauseMask.GetComponent<SpriteRenderer> ().enabled = true;
	}

	public void ExitAllomancy(){
		// get force based on the direction/size of arrow
		CalculateAllomanticForce ();
		// destroy allomantic mode UI
		pauseMask.GetComponent<SpriteRenderer> ().enabled = false;
		DestroyArrow ();
		// unpause and apply the force to the player
		GetComponent<Rigidbody2D> ().gravityScale = 1;
		GetComponent<Rigidbody2D> ().AddForce (forceVector, ForceMode2D.Impulse);

		allomancy = false;
	}

	void DrawArrow() {
		GameObject arrow = (GameObject)Instantiate (arrowPrefab);
		arrow.name = "arrow";
		arrow.transform.parent = currentMetalObject.transform;

		// rotate arrow to point between player and metalObject
		Vector2 relativePos = currentMetalObject.transform.position - transform.position;
		arrow.transform.position = transform.position;

		float angle = Vector2.Angle (relativePos, Vector2.right);
		Vector3 cross = Vector3.Cross(relativePos, Vector2.right);
		if (cross.z > 0) {
			angle = 360 - angle;
		}
		arrow.transform.Rotate (0, 0, angle);
	}

	void DestroyArrow(){
		GameObject arrow = GameObject.Find("Arrow");
		if (arrow) {
			Destroy (arrow.gameObject);
		}
	}

	void CalculateAllomanticForce (){
		GameObject arrow = GameObject.Find ("arrow");
		float forceScale = Mathf.Abs(arrow.transform.localScale.x);
		float angle = arrow.transform.rotation.eulerAngles.z;
		if (arrow.GetComponent<arrowController> ().direction == -1) {
			angle += 180;
		}

		Vector2 forceDirection = new Vector2 (Mathf.Cos(angle * Mathf.Deg2Rad), Mathf.Sin(angle * Mathf.Deg2Rad));

		forceVector = forceDirection * forceScale * force;
	}

	void PlayJumpSound(){
		if (PlayerPrefsManager.GetSfxSetting() == 1) {
			audioSource.clip = jumpClip;
			audioSource.volume = 1f;
			audioSource.Play ();
		}
	}

	void PlayLandSound(){
		if (PlayerPrefsManager.GetSfxSetting() == 1) {
			audioSource.clip = landClip;
			audioSource.volume = 0.7f;
			audioSource.Play ();
		}
	}
}
