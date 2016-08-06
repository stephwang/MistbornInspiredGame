#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t2278695849  : public MonoBehaviour_t667441552
{
public:
	// System.Single LevelManager::autoLoadNextLevelAfter
	float ___autoLoadNextLevelAfter_2;

public:
	inline static int32_t get_offset_of_autoLoadNextLevelAfter_2() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___autoLoadNextLevelAfter_2)); }
	inline float get_autoLoadNextLevelAfter_2() const { return ___autoLoadNextLevelAfter_2; }
	inline float* get_address_of_autoLoadNextLevelAfter_2() { return &___autoLoadNextLevelAfter_2; }
	inline void set_autoLoadNextLevelAfter_2(float value)
	{
		___autoLoadNextLevelAfter_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
