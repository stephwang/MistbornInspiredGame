#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelManager
struct LevelManager_t2278695849;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.String[]
struct StringU5BU5D_t4054002952;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// starController
struct  starController_t1593313166  : public MonoBehaviour_t667441552
{
public:
	// LevelManager starController::levelManager
	LevelManager_t2278695849 * ___levelManager_2;
	// UnityEngine.Animator starController::goalAnimator
	Animator_t2776330603 * ___goalAnimator_3;
	// UnityEngine.UI.Text starController::winText
	Text_t9039225 * ___winText_4;
	// System.String[] starController::winMessages
	StringU5BU5D_t4054002952* ___winMessages_5;
	// UnityEngine.AudioSource starController::audioSource
	AudioSource_t1740077639 * ___audioSource_6;

public:
	inline static int32_t get_offset_of_levelManager_2() { return static_cast<int32_t>(offsetof(starController_t1593313166, ___levelManager_2)); }
	inline LevelManager_t2278695849 * get_levelManager_2() const { return ___levelManager_2; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_2() { return &___levelManager_2; }
	inline void set_levelManager_2(LevelManager_t2278695849 * value)
	{
		___levelManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_2, value);
	}

	inline static int32_t get_offset_of_goalAnimator_3() { return static_cast<int32_t>(offsetof(starController_t1593313166, ___goalAnimator_3)); }
	inline Animator_t2776330603 * get_goalAnimator_3() const { return ___goalAnimator_3; }
	inline Animator_t2776330603 ** get_address_of_goalAnimator_3() { return &___goalAnimator_3; }
	inline void set_goalAnimator_3(Animator_t2776330603 * value)
	{
		___goalAnimator_3 = value;
		Il2CppCodeGenWriteBarrier(&___goalAnimator_3, value);
	}

	inline static int32_t get_offset_of_winText_4() { return static_cast<int32_t>(offsetof(starController_t1593313166, ___winText_4)); }
	inline Text_t9039225 * get_winText_4() const { return ___winText_4; }
	inline Text_t9039225 ** get_address_of_winText_4() { return &___winText_4; }
	inline void set_winText_4(Text_t9039225 * value)
	{
		___winText_4 = value;
		Il2CppCodeGenWriteBarrier(&___winText_4, value);
	}

	inline static int32_t get_offset_of_winMessages_5() { return static_cast<int32_t>(offsetof(starController_t1593313166, ___winMessages_5)); }
	inline StringU5BU5D_t4054002952* get_winMessages_5() const { return ___winMessages_5; }
	inline StringU5BU5D_t4054002952** get_address_of_winMessages_5() { return &___winMessages_5; }
	inline void set_winMessages_5(StringU5BU5D_t4054002952* value)
	{
		___winMessages_5 = value;
		Il2CppCodeGenWriteBarrier(&___winMessages_5, value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(starController_t1593313166, ___audioSource_6)); }
	inline AudioSource_t1740077639 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t1740077639 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
