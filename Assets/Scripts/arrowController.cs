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
	public float lineGrowth = 0.1f;
	float lineWidth;
	public float startWidth = 0.1f;

	void Start () {
		GetComponent<SpriteRenderer> ().color = pullColor;
		lineRenderer = transform.parent.FindChild ("LineRenderer").GetComponent<LineRenderer> ();
		lineRenderer.SetColors (pullColor, pullColor);
		lineWidth = startWidth;
		currentColor = pullColor;
	}
		
	void Update () {

		// Use up and down keys to set force of push and pull
		if (GetComponentInParent<metalObjectController>().isSelected) {
			Vector2 scale = transform.localScale;
			lineRenderer.SetWidth (lineWidth, lineWidth);
			lineRenderer.SetColors (currentColor, currentColor);

			// default size and direction of arrow, based on key pressed
			if (Input.GetKeyDown (KeyCode.RightArrow)) {
				// pull
				scale.y = scale.x = direction * 0.5f;
				lineWidth = startWidth;
			} else if (Input.GetKeyDown (KeyCode.LeftArrow)) {
				// push
				scale.y = scale.x = direction * 0.5f;
				lineWidth = startWidth;
			}

			// grow arrow while key pressed
			// push
			if (Input.GetKey (KeyCode.LeftArrow)) {
				direction = -1;
				GetComponent<SpriteRenderer> ().color = pushColor;
				currentColor = pushColor;
				scale.y = scale.x += direction * forceScale * Time.deltaTime;
				lineWidth += lineGrowth * Time.deltaTime;
			// pull
			} else if (Input.GetKey (KeyCode.RightArrow)) {
				direction = 1;
				GetComponent<SpriteRenderer> ().color = pullColor;
				currentColor = pullColor;
				scale.y = scale.x += direction * forceScale * Time.deltaTime;
				lineWidth += lineGrowth * Time.deltaTime;
	
			}
			// if key no longer pressed, exit allomancy
			else if (Input.GetKeyUp (KeyCode.RightArrow) || Input.GetKeyUp (KeyCode.LeftArrow)) {
				GameObject.FindObjectOfType<playerController>().ExitAllomancy();
				lineRenderer.SetWidth (startWidth, startWidth);
			}

			// bound arrow size
			if (Mathf.Abs(scale.x) <= 0.7f) {
				scale.y = scale.x = direction * 0.7f;
			} else if (Mathf.Abs(scale.x) >= 1.2f) {
				scale.y = scale.x = direction * 1.2f;
			}

			// bound line width
			if (lineWidth >= 0.18f) {
				lineWidth = 0.18f;
			}

			transform.localScale = scale;

		}
	}
}
