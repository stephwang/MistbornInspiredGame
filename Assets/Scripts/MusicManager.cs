using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class MusicManager : MonoBehaviour {

	public AudioClip levelMusic;

	private AudioSource audioSource;

	// Use this for initialization
	void Awake () {
		DontDestroyOnLoad (gameObject);
	}

	void Start(){
		audioSource = GetComponent<AudioSource> ();
		if (levelMusic) {
			audioSource.clip = levelMusic;
			audioSource.loop = true;
			audioSource.Play ();
		}
	}

	public void SetMusic(int enabled){
		audioSource.volume = enabled;
	}
}
