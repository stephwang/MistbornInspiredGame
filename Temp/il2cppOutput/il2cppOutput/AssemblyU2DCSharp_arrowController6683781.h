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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// arrowController
struct  arrowController_t6683781  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean arrowController::allomancy
	bool ___allomancy_2;
	// System.Single arrowController::forceScale
	float ___forceScale_3;
	// System.Int32 arrowController::direction
	int32_t ___direction_4;
	// UnityEngine.Color arrowController::pullColor
	Color_t4194546905  ___pullColor_5;
	// UnityEngine.Color arrowController::pushColor
	Color_t4194546905  ___pushColor_6;
	// UnityEngine.Color arrowController::currentColor
	Color_t4194546905  ___currentColor_7;
	// UnityEngine.LineRenderer arrowController::lineRenderer
	LineRenderer_t1892709339 * ___lineRenderer_8;
	// UnityEngine.Vector2 arrowController::scale
	Vector2_t4282066565  ___scale_9;

public:
	inline static int32_t get_offset_of_allomancy_2() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___allomancy_2)); }
	inline bool get_allomancy_2() const { return ___allomancy_2; }
	inline bool* get_address_of_allomancy_2() { return &___allomancy_2; }
	inline void set_allomancy_2(bool value)
	{
		___allomancy_2 = value;
	}

	inline static int32_t get_offset_of_forceScale_3() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___forceScale_3)); }
	inline float get_forceScale_3() const { return ___forceScale_3; }
	inline float* get_address_of_forceScale_3() { return &___forceScale_3; }
	inline void set_forceScale_3(float value)
	{
		___forceScale_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_pullColor_5() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___pullColor_5)); }
	inline Color_t4194546905  get_pullColor_5() const { return ___pullColor_5; }
	inline Color_t4194546905 * get_address_of_pullColor_5() { return &___pullColor_5; }
	inline void set_pullColor_5(Color_t4194546905  value)
	{
		___pullColor_5 = value;
	}

	inline static int32_t get_offset_of_pushColor_6() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___pushColor_6)); }
	inline Color_t4194546905  get_pushColor_6() const { return ___pushColor_6; }
	inline Color_t4194546905 * get_address_of_pushColor_6() { return &___pushColor_6; }
	inline void set_pushColor_6(Color_t4194546905  value)
	{
		___pushColor_6 = value;
	}

	inline static int32_t get_offset_of_currentColor_7() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___currentColor_7)); }
	inline Color_t4194546905  get_currentColor_7() const { return ___currentColor_7; }
	inline Color_t4194546905 * get_address_of_currentColor_7() { return &___currentColor_7; }
	inline void set_currentColor_7(Color_t4194546905  value)
	{
		___currentColor_7 = value;
	}

	inline static int32_t get_offset_of_lineRenderer_8() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___lineRenderer_8)); }
	inline LineRenderer_t1892709339 * get_lineRenderer_8() const { return ___lineRenderer_8; }
	inline LineRenderer_t1892709339 ** get_address_of_lineRenderer_8() { return &___lineRenderer_8; }
	inline void set_lineRenderer_8(LineRenderer_t1892709339 * value)
	{
		___lineRenderer_8 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_8, value);
	}

	inline static int32_t get_offset_of_scale_9() { return static_cast<int32_t>(offsetof(arrowController_t6683781, ___scale_9)); }
	inline Vector2_t4282066565  get_scale_9() const { return ___scale_9; }
	inline Vector2_t4282066565 * get_address_of_scale_9() { return &___scale_9; }
	inline void set_scale_9(Vector2_t4282066565  value)
	{
		___scale_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
