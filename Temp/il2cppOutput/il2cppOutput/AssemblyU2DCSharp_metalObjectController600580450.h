#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t1892709339;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// metalObjectController
struct  metalObjectController_t600580450  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.LineRenderer metalObjectController::lineRenderer
	LineRenderer_t1892709339 * ___lineRenderer_2;
	// UnityEngine.GameObject metalObjectController::player
	GameObject_t3674682005 * ___player_3;
	// System.Boolean metalObjectController::isSelected
	bool ___isSelected_4;
	// UnityEngine.Color metalObjectController::lineColor
	Color_t4194546905  ___lineColor_5;
	// System.Boolean metalObjectController::allomancy
	bool ___allomancy_6;

public:
	inline static int32_t get_offset_of_lineRenderer_2() { return static_cast<int32_t>(offsetof(metalObjectController_t600580450, ___lineRenderer_2)); }
	inline LineRenderer_t1892709339 * get_lineRenderer_2() const { return ___lineRenderer_2; }
	inline LineRenderer_t1892709339 ** get_address_of_lineRenderer_2() { return &___lineRenderer_2; }
	inline void set_lineRenderer_2(LineRenderer_t1892709339 * value)
	{
		___lineRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(metalObjectController_t600580450, ___player_3)); }
	inline GameObject_t3674682005 * get_player_3() const { return ___player_3; }
	inline GameObject_t3674682005 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t3674682005 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_isSelected_4() { return static_cast<int32_t>(offsetof(metalObjectController_t600580450, ___isSelected_4)); }
	inline bool get_isSelected_4() const { return ___isSelected_4; }
	inline bool* get_address_of_isSelected_4() { return &___isSelected_4; }
	inline void set_isSelected_4(bool value)
	{
		___isSelected_4 = value;
	}

	inline static int32_t get_offset_of_lineColor_5() { return static_cast<int32_t>(offsetof(metalObjectController_t600580450, ___lineColor_5)); }
	inline Color_t4194546905  get_lineColor_5() const { return ___lineColor_5; }
	inline Color_t4194546905 * get_address_of_lineColor_5() { return &___lineColor_5; }
	inline void set_lineColor_5(Color_t4194546905  value)
	{
		___lineColor_5 = value;
	}

	inline static int32_t get_offset_of_allomancy_6() { return static_cast<int32_t>(offsetof(metalObjectController_t600580450, ___allomancy_6)); }
	inline bool get_allomancy_6() const { return ___allomancy_6; }
	inline bool* get_address_of_allomancy_6() { return &___allomancy_6; }
	inline void set_allomancy_6(bool value)
	{
		___allomancy_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
