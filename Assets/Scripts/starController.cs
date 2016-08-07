using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class starController : MonoBehaviour {
	private LevelManager levelManager;
	private Animator goalAnimator;
	private Text winText;
	private string[] winMessages = new string[] { "Nice job!", "Well done!", "Good work!" , "Awesome!", "Great!"};

	// audio
	AudioSource audioSource;

	void Start() {
		audioSource = GetComponent<AudioSource> ();
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
		goalAnimator = GetComponent<Animator> ();
		winText = GameObject.Find ("WinText").GetComponent<Text> ();
		winText.text = "";
	}
		
	void OnTriggerEnter2D () {
		// Win!
		GameObject.FindObjectOfType<playerController> ().disableControls = true;
		winText.text = winMessages[(int) Mathf.Floor(Random.Range(0, winMessages.Length))];
		goalAnimator.SetTrigger ("Win");
		PlayerPrefsManager.Unlocklevel (levelManager.GetLevelNumber());
		Invoke("LoadNextLevel", 1);
	}

	void LoadNextLevel () {
		levelManager.LoadNextLevel ();
	}

	void PlayWinSound(){
		if (PlayerPrefsManager.GetSfxSetting ()) {
			audioSource.Play ();
		}
	}
}
