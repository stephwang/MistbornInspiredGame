using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class PlayerPrefsManager : MonoBehaviour {

	const string MUSIC = "music_enabled";
	const string SFX = "sfx_enabled";
	const string LEVEL_KEY = "level_unlocked_";
	const string PLAYED = "played";

	// get and set if first time played
	public static void SetPlayedBefore(int played) {
		PlayerPrefs.SetInt (PLAYED, played);
	}

	public static int GetPlayedBefore() {
		return PlayerPrefs.GetInt (PLAYED);
	}

	// Music settings
	public static void SetMusicSetting(int enabled) {
		PlayerPrefs.SetInt (MUSIC, enabled);
	}

	public static int GetMusicSetting() {
		return PlayerPrefs.GetInt (MUSIC);
	}

	// SFX settings
	public static void SetSfxSetting(int enabled) {
		PlayerPrefs.SetInt (SFX, enabled);
	}
		
	public static int GetSfxSetting() {
		return PlayerPrefs.GetInt (SFX);
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
