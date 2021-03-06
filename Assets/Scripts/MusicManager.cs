﻿using UnityEngine;
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
		// if first time playing, set music and sfx to enabled
		if (PlayerPrefsManager.GetPlayedBefore () == 0) {
			PlayerPrefsManager.SetMusicSetting (1);
			PlayerPrefsManager.SetSfxSetting (1);
		}

		// music volumebased on setting
		else if (PlayerPrefsManager.GetMusicSetting () == 1) {
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
