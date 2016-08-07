using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class PlayerPrefsManager : MonoBehaviour {

	const string MUSIC = "music_enabled";
	const string SFX = "sfx_enabled";
	const string LEVEL_KEY = "level_unlocked_";

	// Music settings
	public static void SetMusicSetting(bool enabled) {
		if (enabled == true) {
			PlayerPrefs.SetInt (MUSIC, 1);
		} else {
			PlayerPrefs.SetInt (MUSIC, 0);
		}
	}

	public static bool GetMusicSetting() {
		return (PlayerPrefs.GetInt (MUSIC) == 1);
	}

	// SFX settings
	public static void SetSfxSetting(bool enabled) {
		if (enabled == true) {
			PlayerPrefs.SetInt (SFX, 1);
		} else {
			PlayerPrefs.SetInt (SFX, 0);
		}
	}
		
	public static bool GetSfxSetting() {
		return (PlayerPrefs.GetInt (SFX) == 1);
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
}
