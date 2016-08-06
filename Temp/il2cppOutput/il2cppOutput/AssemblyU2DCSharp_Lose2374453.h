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
// UnityEngine.UI.Text
struct Text_t9039225;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lose
struct  Lose_t2374453  : public MonoBehaviour_t667441552
{
public:
	// LevelManager Lose::levelManager
	LevelManager_t2278695849 * ___levelManager_2;
	// UnityEngine.UI.Text Lose::winText
	Text_t9039225 * ___winText_3;
	// System.String[] Lose::loseMessages
	StringU5BU5D_t4054002952* ___loseMessages_4;

public:
	inline static int32_t get_offset_of_levelManager_2() { return static_cast<int32_t>(offsetof(Lose_t2374453, ___levelManager_2)); }
	inline LevelManager_t2278695849 * get_levelManager_2() const { return ___levelManager_2; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_2() { return &___levelManager_2; }
	inline void set_levelManager_2(LevelManager_t2278695849 * value)
	{
		___levelManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_2, value);
	}

	inline static int32_t get_offset_of_winText_3() { return static_cast<int32_t>(offsetof(Lose_t2374453, ___winText_3)); }
	inline Text_t9039225 * get_winText_3() const { return ___winText_3; }
	inline Text_t9039225 ** get_address_of_winText_3() { return &___winText_3; }
	inline void set_winText_3(Text_t9039225 * value)
	{
		___winText_3 = value;
		Il2CppCodeGenWriteBarrier(&___winText_3, value);
	}

	inline static int32_t get_offset_of_loseMessages_4() { return static_cast<int32_t>(offsetof(Lose_t2374453, ___loseMessages_4)); }
	inline StringU5BU5D_t4054002952* get_loseMessages_4() const { return ___loseMessages_4; }
	inline StringU5BU5D_t4054002952** get_address_of_loseMessages_4() { return &___loseMessages_4; }
	inline void set_loseMessages_4(StringU5BU5D_t4054002952* value)
	{
		___loseMessages_4 = value;
		Il2CppCodeGenWriteBarrier(&___loseMessages_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
