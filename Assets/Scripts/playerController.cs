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

	// ground checks for jumping
	bool grounded = false;
	bool wasGrounded = false;
	public Transform groundCheck;
	float groundRadius = 0.65f;
	public LayerMask whatIsGround;

	// push/pull off metal object
	public bool allomancy = false;
	private Color startColor;
	int arrayPos = 0;
	GameObject[] metalObjects;
	GameObject currentMetalObject;
	public float force = 100f;
	public GameObject arrowPrefab;
	Vector2 forceVector;
	GameObject pauseMask;
	Vector2 oldVelocity;

	// disable controls - for win/lose conditions
	public bool disableControls;

	// game menu
	public GameObject menu;
	bool menuOpen = false;


	void Start() {
		disableControls = false;

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
		if (metalObjects.Length > 0) {
			currentMetalObject = metalObjects [arrayPos];
		}

		pauseMask = GameObject.Find ("PauseMask");

		menu = GameObject.Find ("Menu");
		CloseMenu ();
	}

	void FixedUpdate(){
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
			// player movement controls
			if (Input.GetKey (KeyCode.LeftArrow) && grounded) {
				GetComponent<Rigidbody2D> ().velocity = new Vector2 (-moveSpeed, velocity.y);
				anim.SetBool ("isRunning", true);
			} else if (Input.GetKey (KeyCode.RightArrow) && grounded) {
				GetComponent<Rigidbody2D> ().velocity = new Vector2 (moveSpeed, velocity.y);
				anim.SetBool ("isRunning", true);
			} else {
				anim.SetBool ("isRunning", false);
			}
		}
		// direction the player sprite is facing
		if (velocity.x > 0.1 && !facingRight) {
			Flip (velocity.x);
		} else if (velocity.x < -0.1 && facingRight) {
			Flip (velocity.x);
		}

		wasGrounded = grounded;
	}
	

	void Update () {

		// jump
		if (!allomancy && !disableControls) {
			// player jump
			if (Input.GetKeyDown (KeyCode.Space) && grounded) {
				anim.Play ("Jumping");
				Invoke("ApplyJump", 0.1f);
			}
		}

		// allomancy only works if there are metal objects
		// A always toggles mode
		if (metalObjects.Length > 0 && Input.GetKeyDown (KeyCode.A) && !disableControls) {
			allomancy = !allomancy;

			// if entering allomancy mode
			if (allomancy) {
				oldVelocity = GetComponent<Rigidbody2D> ().velocity;
				EnterAllomancy ();
			} 
			// exit allomancy mode
			else {
				GetComponent<Rigidbody2D> ().velocity = oldVelocity;
				ExitAllomancy ();
			}
		}

		// metal object selection
		if (allomancy) {
			GetComponent<Rigidbody2D> ().velocity = new Vector2 (0, 0);
			SelectMetalObject ();
		}

		// restrict the player to the gamespace
		float newX = Mathf.Clamp (transform.position.x, xmin, xmax);
		float newY = Mathf.Clamp (transform.position.y, -20, ymax);
		transform.position = new Vector3 (newX, newY, transform.position.z);

		// menu
		if (Input.GetKeyDown (KeyCode.Escape)) {
			if (!menuOpen) {
				OpenMenu ();
			} else {
				CloseMenu ();
			}
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

	void SelectMetalObject (){
		EnableHalo ();

		// Rotate forward in selections
		if (Input.GetKeyDown(KeyCode.UpArrow)) {
			// disable old halo and old arrow (new one will appear on next run of this function)
			DisableHalo ();
			DestroyArrow ();
			if (arrayPos >= metalObjects.Length -1) {
				arrayPos = 0;
			}
			else {
				arrayPos += 1;
			}
			currentMetalObject = metalObjects [arrayPos];
			// draw arrow for the newly selected metal object
			DrawArrow();
		}

		// Rotate backward in selections
		if (Input.GetKeyDown(KeyCode.DownArrow)) {
			// disable old halo and old arrow (new one will appear on next run of this function)
			DisableHalo ();
			DestroyArrow ();
			if (arrayPos == 0) {
				arrayPos = metalObjects.Length - 1;
			}
			else {
				arrayPos -= 1;
			}
			currentMetalObject = metalObjects [arrayPos];
			// draw arrow for the newly selected metal object
			DrawArrow();
		}

	}

	void EnterAllomancy(){
		// freeze character and select first object
		GetComponent<Rigidbody2D> ().gravityScale = 0;
		GetComponent<Rigidbody2D> ().velocity = new Vector2 (0, 0);
		// Create allomantic mode UI
		pauseMask.GetComponent<SpriteRenderer> ().enabled = true;
		SelectMetalObject ();
		DrawArrow ();
	}

	public void ExitAllomancy(){
		// get force based on the direction/size of arrow
		CalculateAllomanticForce ();
		// destroy allomantic mode UI
		pauseMask.GetComponent<SpriteRenderer> ().enabled = false;
		DisableHalo ();
		DestroyArrow ();
		// unpause and apply the force to the player
		GetComponent<Rigidbody2D> ().gravityScale = 1;
		GetComponent<Rigidbody2D> ().AddForce (forceVector, ForceMode2D.Impulse);

		allomancy = false;
	}

	void EnableHalo(){
		Behaviour halo = (Behaviour)currentMetalObject.GetComponent ("Halo");
		halo.enabled = true;
		currentMetalObject.GetComponent<ParticleSystem> ().Play();
		currentMetalObject.GetComponent<metalObjectController> ().isSelected = true;
	}


	void DisableHalo(){
		Behaviour halo = (Behaviour)currentMetalObject.GetComponent ("Halo");
		halo.enabled = false;
		currentMetalObject.GetComponent<ParticleSystem> ().Stop();
		currentMetalObject.GetComponent<metalObjectController> ().isSelected = false;
	}

	void DrawArrow() {
		// instantiate and place arrow
		GameObject arrow = (GameObject)Instantiate (arrowPrefab);
		arrow.name = "arrow";
		arrow.transform.parent = currentMetalObject.transform;

		// rotate arrow to point between player and metalObject
		Vector2 relativePos = currentMetalObject.transform.position - transform.position;
		arrow.transform.position = new Vector2(transform.position.x + relativePos.x/2, transform.position.y + relativePos.y/2);

		float angle = Vector2.Angle (relativePos, Vector2.right);
		Vector3 cross = Vector3.Cross(relativePos, Vector2.right);
		if (cross.z > 0) {
			angle = 360 - angle;
		}
		arrow.transform.Rotate (0, 0, angle);
	}

	void DestroyArrow(){
		GameObject arrow = GameObject.Find ("arrow");
		Destroy (arrow);
	}

	void CalculateAllomanticForce (){
		GameObject arrow = GameObject.Find ("arrow");
		float forceScale = Mathf.Pow(arrow.transform.localScale.x, 4);
		float angle = arrow.transform.rotation.eulerAngles.z;
		if (arrow.GetComponent<arrowController> ().direction == -1) {
			angle += 180;
		}

		Vector2 forceDirection = new Vector2 (Mathf.Cos(angle * Mathf.Deg2Rad), Mathf.Sin(angle * Mathf.Deg2Rad));

		forceVector = forceDirection * forceScale * force;
	}

	void OpenMenu(){
		Time.timeScale = 0;
		menu.SetActive (true);
		menuOpen = true;
	}

	public void CloseMenu(){
		Time.timeScale = 1;
		menu.SetActive (false);
		menuOpen = false;
	}
}
