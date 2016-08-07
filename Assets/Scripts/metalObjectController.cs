using UnityEngine;
using System.Collections;

public class metalObjectController : MonoBehaviour {

	private LineRenderer lineRenderer;
	private GameObject player;
	public bool isSelected = false;
	public Color lineColor;
	bool allomancy;

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

		// render lines if in allomancy mode
		if (allomancy) {
			lineRenderer.SetPosition (1, player.transform.position);
			lineRenderer.enabled = true;

			// selection behavior
			if (isSelected) {
				SelectObject ();
			} else {
				lineRenderer.SetColors (lineColor, lineColor);
				DeselectObject ();
			}
		} else {
			lineRenderer.enabled = false;
			DeselectObject ();
		}
	}

	void DestroyArrow() {
		arrowController arrow = GetComponentInChildren<arrowController>();
		if (arrow) {
			Destroy (arrow.gameObject);
		}
	}

	void SelectObject(){
		Behaviour halo = (Behaviour)GetComponent ("Halo");
		halo.enabled = true;
		GetComponent<ParticleSystem> ().Play ();
	}

	void DeselectObject(){
		Behaviour halo = (Behaviour)GetComponent ("Halo");
		halo.enabled = false;
		GetComponent<ParticleSystem> ().Stop ();
		DestroyArrow ();
	}

}
