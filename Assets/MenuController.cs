using UnityEngine;
using System.Collections;

public class MenuController : MonoBehaviour {

	// game menu
	bool menuActive = true;

	void Start(){
		ToggleMenu ();
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
}
