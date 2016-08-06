using UnityEngine;
using System.Collections;

public class LevelSquare : MonoBehaviour {

	int level;
	LevelManager levelManager;

	// Use this for initialization
	void Start () {
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
		level = int.Parse(GetComponentInChildren<TextMesh> ().text);

		// color and make clickable if level is unlocked
		if (PlayerPrefsManager.IsLevelUnlocked (level)) {
			GetComponent<SpriteRenderer> ().color = new Color (0.49f, 0.89f, 1f, 1f);
		};
	}

	void OnMouseDown() {
		print ("trying to load level " + level);
		if (PlayerPrefsManager.IsLevelUnlocked (level)) {
			levelManager.LoadLevelByNumber (level);
		};
	}
}
