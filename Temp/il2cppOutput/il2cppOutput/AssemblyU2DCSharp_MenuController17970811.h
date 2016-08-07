#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicManager
struct MusicManager_t2870594024;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuController
struct  MenuController_t17970811  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MenuController::menuActive
	bool ___menuActive_2;
	// MusicManager MenuController::musicManager
	MusicManager_t2870594024 * ___musicManager_3;
	// UnityEngine.UI.Toggle MenuController::musicToggle
	Toggle_t110812896 * ___musicToggle_4;
	// UnityEngine.UI.Toggle MenuController::sfxToggle
	Toggle_t110812896 * ___sfxToggle_5;

public:
	inline static int32_t get_offset_of_menuActive_2() { return static_cast<int32_t>(offsetof(MenuController_t17970811, ___menuActive_2)); }
	inline bool get_menuActive_2() const { return ___menuActive_2; }
	inline bool* get_address_of_menuActive_2() { return &___menuActive_2; }
	inline void set_menuActive_2(bool value)
	{
		___menuActive_2 = value;
	}

	inline static int32_t get_offset_of_musicManager_3() { return static_cast<int32_t>(offsetof(MenuController_t17970811, ___musicManager_3)); }
	inline MusicManager_t2870594024 * get_musicManager_3() const { return ___musicManager_3; }
	inline MusicManager_t2870594024 ** get_address_of_musicManager_3() { return &___musicManager_3; }
	inline void set_musicManager_3(MusicManager_t2870594024 * value)
	{
		___musicManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicManager_3, value);
	}

	inline static int32_t get_offset_of_musicToggle_4() { return static_cast<int32_t>(offsetof(MenuController_t17970811, ___musicToggle_4)); }
	inline Toggle_t110812896 * get_musicToggle_4() const { return ___musicToggle_4; }
	inline Toggle_t110812896 ** get_address_of_musicToggle_4() { return &___musicToggle_4; }
	inline void set_musicToggle_4(Toggle_t110812896 * value)
	{
		___musicToggle_4 = value;
		Il2CppCodeGenWriteBarrier(&___musicToggle_4, value);
	}

	inline static int32_t get_offset_of_sfxToggle_5() { return static_cast<int32_t>(offsetof(MenuController_t17970811, ___sfxToggle_5)); }
	inline Toggle_t110812896 * get_sfxToggle_5() const { return ___sfxToggle_5; }
	inline Toggle_t110812896 ** get_address_of_sfxToggle_5() { return &___sfxToggle_5; }
	inline void set_sfxToggle_5(Toggle_t110812896 * value)
	{
		___sfxToggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___sfxToggle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
