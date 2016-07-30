using UnityEngine;
using System.Collections;

public class metalObjectController : MonoBehaviour {

	private LineRenderer lineRenderer;
	private GameObject player;
	public bool isSelected = false;
	private bool allomancy;
	public Color lineColor;

	// Use this for initialization
	void Start () {
		lineRenderer = GetComponentInChildren<LineRenderer> ();
		lineRenderer.sortingLayerName = "Pausable";
		player = GameObject.Find ("Player");
		lineRenderer.SetPosition (0, transform.position);
		lineRenderer.SetWidth (0.1f, 0.1f);
	}
	
	// Update is called once per frame
	void Update () {
		allomancy = player.GetComponent<playerController> ().allomancy;
		if (allomancy) {
			lineRenderer.SetPosition (1, player.transform.position);
			lineRenderer.enabled = true;
		} else {
			lineRenderer.enabled = false;
		}

		if (!isSelected) {
			lineRenderer.SetColors (lineColor, lineColor);
			lineRenderer.SetWidth (0.1f, 0.1f);
		}
	}

}
