using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class MusicManager : MonoBehaviour {
	private AudioSource audioSource;

	// Use this for initialization
	void Awake () {
		DontDestroyOnLoad (gameObject);
	}

	void Start(){
		audioSource = GetComponent<AudioSource> ();
		audioSource.loop = true;
		if (PlayerPrefsManager.GetMusicSetting()) {
			audioSource.volume = 1;
		} else {
			audioSource.volume = 0;
		}
		audioSource.Play ();
	}

	public void SetMusic(int enabled){
		audioSource.volume = enabled;
	}
}
