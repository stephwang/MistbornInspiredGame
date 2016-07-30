using UnityEngine;
using System.Collections;

public class arrowController : MonoBehaviour {
	public bool allomancy;
	public float forceScale = 0.5f;
	public int direction = 1;
	public Color pullColor;
	public Color pushColor;
	Color currentColor;
	LineRenderer lineRenderer;
	Vector2 scale;

	void Start () {
		GetComponent<SpriteRenderer> ().color = pullColor;
		lineRenderer = transform.parent.FindChild ("LineRenderer").GetComponent<LineRenderer> ();
		lineRenderer.SetColors (pullColor, pullColor);
		currentColor = pullColor;
		scale = transform.localScale;
	}
		
	void Update () {
		transform.localScale = scale;
		lineRenderer.SetColors (currentColor, currentColor);
		GetComponent<SpriteRenderer> ().color = currentColor;

		// grow arrow while dragging away from player
		if (Input.touchCount > 0) {
			// vector between player and metal object
			Vector2 playerPos = GameObject.Find ("Player").transform.position;
			Vector2 objectPos = transform.parent.transform.position;
			Vector2 playerToObject = objectPos - playerPos;

			// vector between player and touch position
			Vector2 touchPosition = Input.GetTouch (0).position;
			Vector2 worldPoint = Camera.main.ScreenToWorldPoint (touchPosition);
			Vector2 touchpointToObject = new Vector2 (worldPoint.x - objectPos.x, worldPoint.y - objectPos.y);

			// calculate force by projecting touch vector to player-metal vector
			float angle = Vector2.Angle (playerToObject, touchpointToObject);

			float projection = - touchpointToObject.magnitude * Mathf.Cos (angle * Mathf.Deg2Rad);

			scale.y = scale.x = forceScale * projection;

			if (projection > 0) {
				currentColor = pullColor;
				direction = 1;
			} else {
				currentColor = pushColor;
				direction = -1;
			}

			// bound arrow size
			if (Mathf.Abs(scale.x) <= 0f) {
				scale.y = scale.x = direction * 0f;
			} else if (Mathf.Abs(scale.x) >= 1.5f) {
				scale.y = scale.x = direction * 1.5f;
			}

			if (Input.GetTouch (0).phase == TouchPhase.Ended) {
				GameObject.FindObjectOfType<playerController>().ExitAllomancy();
			}
		}
	}
}
