using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Lose : MonoBehaviour {

	private LevelManager levelManager;
	private Text winText;
	private string[] loseMessages = new string[] { "Try again!", "Oh bummer!", ":(" };

	void Start() {
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
		winText = GameObject.Find ("WinText").GetComponent<Text> ();
		winText.text = "";
	}

	// Update is called once per frame
	void OnTriggerEnter2D () {
		winText.text = loseMessages[(int) Mathf.Floor(Random.Range(0, loseMessages.Length))];
		Invoke("ReloadLevel", 1);
	}

	void ReloadLevel () {
		levelManager.ReloadLevel ();
	}
}
