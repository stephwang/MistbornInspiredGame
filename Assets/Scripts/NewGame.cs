using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NewGame : MonoBehaviour {

	Button button;

	// Use this for initialization
	void Start () {
		button = GetComponent<Button> ();
		button.onClick.AddListener(() => PlayerPrefsManager.Unlocklevel(1));
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
