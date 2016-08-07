using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MenuController : MonoBehaviour {

	// game menu
	bool menuActive = true;

	// settings
	private MusicManager musicManager;
	public Toggle musicToggle, sfxToggle;

	void Start(){
		musicManager = GameObject.FindObjectOfType<MusicManager> ();

		musicToggle.isOn = (PlayerPrefsManager.GetMusicSetting () == 1);
		sfxToggle.isOn = (PlayerPrefsManager.GetSfxSetting () == 1);

		ToggleMenu ();
	}

	public void UpdateMusicSetting(){
		if (musicToggle.isOn) {
			musicManager.SetMusic (1);
		} else {
			musicManager.SetMusic (0);
		}
	}

	public void ToggleMenu(){
		Component[] menuItems = transform.parent.GetComponentsInChildren (typeof(Transform), true);

		if (menuActive) {
			Time.timeScale = 1;
			foreach (Component item in menuItems) {
				if (item.name != "Menu" && item.name != "MenuButton" && item.name != "MenuText") {
					item.gameObject.SetActive (false);
				}
			}
		} else {
			Time.timeScale = 0;
			foreach (Component item in menuItems) {
				item.gameObject.SetActive (true);
			}
		}
		menuActive = !menuActive;
	}

	public void SaveSetting() {
		int musicOn, sfxOn;
		if (musicToggle.isOn) {
			musicOn = 1;
		} else {
			musicOn = 0;
		}
		if (sfxToggle.isOn) {
			sfxOn = 1;
		} else {
			sfxOn = 0;
		}
	
		PlayerPrefsManager.SetMusicSetting (musicOn);
		PlayerPrefsManager.SetSfxSetting (sfxOn);
	}

}
