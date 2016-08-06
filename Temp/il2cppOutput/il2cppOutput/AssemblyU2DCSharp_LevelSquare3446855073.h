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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelSquare
struct  LevelSquare_t3446855073  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 LevelSquare::level
	int32_t ___level_2;
	// LevelManager LevelSquare::levelManager
	LevelManager_t2278695849 * ___levelManager_3;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(LevelSquare_t3446855073, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_levelManager_3() { return static_cast<int32_t>(offsetof(LevelSquare_t3446855073, ___levelManager_3)); }
	inline LevelManager_t2278695849 * get_levelManager_3() const { return ___levelManager_3; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_3() { return &___levelManager_3; }
	inline void set_levelManager_3(LevelManager_t2278695849 * value)
	{
		___levelManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
