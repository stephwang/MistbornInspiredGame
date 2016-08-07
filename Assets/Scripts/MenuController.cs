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

		musicToggle.isOn = (PlayerPrefsManager.GetMusicSetting ());
		sfxToggle.isOn = (PlayerPrefsManager.GetSfxSetting ());

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

		foreach (Component item in menuItems) {
			if (item.name != "Menu" && item.name != "MenuButton" && item.name != "MenuText") {
				if (menuActive) {
					Time.timeScale = 1;
					item.gameObject.SetActive (false);
				} else {
					Time.timeScale = 0;
					item.gameObject.SetActive (true);
				}
			}
		}
		menuActive = !menuActive;
	}

	public void SaveSetting() {
		PlayerPrefsManager.SetMusicSetting (musicToggle.isOn);
		PlayerPrefsManager.SetSfxSetting (sfxToggle.isOn);
	}


}
