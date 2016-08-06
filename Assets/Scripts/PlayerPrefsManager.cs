﻿using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class PlayerPrefsManager : MonoBehaviour {

	const string MASTER_VOLUME_KEY = "master_volume";
	const string DIFFICULTY_KEY = "difficulty";
	const string LEVEL_KEY = "level_unlocked_";

	// Master volume settings
	public static void SetMasterVolume(float volume) {
		if (volume >= 0f && volume <= 1f) {
			PlayerPrefs.SetFloat (MASTER_VOLUME_KEY, volume);
		} else {
			Debug.LogError ("Master volume out of range.");
		}
	}

	public static float GetMasterVolume() {
		return PlayerPrefs.GetFloat (MASTER_VOLUME_KEY);
	}

	// Level tracking
	public static void Unlocklevel(int level) {
		if (level <= SceneManager.sceneCountInBuildSettings - 1) {
			PlayerPrefs.SetInt (LEVEL_KEY + level.ToString (), 1); // use 1 for true
		} else {
			Debug.LogError ("Trying to unlock level not in build order.");
		}
	}

	public static bool IsLevelUnlocked(int level) {
		if (level <= SceneManager.sceneCountInBuildSettings - 1) {
			return PlayerPrefs.GetInt (LEVEL_KEY + level.ToString ()) == 1;
		} else {
			Debug.LogError ("Trying to check a level not in build order.");
			return false;
		}
	}

	// Difficulty settings
	public static void SetDifficulty(float difficulty) {
		if (difficulty >= 1f && difficulty <= 3f) {
			PlayerPrefs.SetFloat (DIFFICULTY_KEY, difficulty);
		} else {
			Debug.LogError ("Difficulty volume out of range.");
		}
	}

	public static float GetDifficulty() {
		return PlayerPrefs.GetFloat (DIFFICULTY_KEY);
	}
}
