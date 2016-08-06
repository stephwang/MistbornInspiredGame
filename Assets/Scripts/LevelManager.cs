using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class LevelManager : MonoBehaviour {

	public float autoLoadNextLevelAfter;

	void Start() {
		if (autoLoadNextLevelAfter > 0) {
			Invoke ("LoadNextLevel", autoLoadNextLevelAfter);
		}
	}

	public void LoadLevel(string name){
		SceneManager.LoadScene (name);
	}

	public void LoadLevelByNumber (int num) {
		SceneManager.LoadScene (num + 1);
	}

	public void QuitRequest(){
		Application.Quit ();
	}

	public void LoadNextLevel () {
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void ReloadLevel () {
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex);
	}

	public int GetLevelNumber(){
		return SceneManager.GetActiveScene ().buildIndex - 1;
	}

}
