#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playerController
struct  playerController_t3709302109  : public MonoBehaviour_t667441552
{
public:
	// System.Single playerController::xmin
	float ___xmin_2;
	// System.Single playerController::xmax
	float ___xmax_3;
	// System.Single playerController::ymax
	float ___ymax_4;
	// System.Single playerController::ymin
	float ___ymin_5;
	// System.Single playerController::padding
	float ___padding_6;
	// UnityEngine.Animator playerController::anim
	Animator_t2776330603 * ___anim_7;
	// System.Single playerController::moveSpeed
	float ___moveSpeed_8;
	// System.Single playerController::jumpSpeed
	float ___jumpSpeed_9;
	// System.Boolean playerController::facingRight
	bool ___facingRight_10;
	// System.Single playerController::tapBuffer
	float ___tapBuffer_11;
	// System.Single playerController::tapLength
	float ___tapLength_12;
	// System.Single playerController::tapThreshold
	float ___tapThreshold_13;
	// System.Boolean playerController::grounded
	bool ___grounded_14;
	// System.Boolean playerController::wasGrounded
	bool ___wasGrounded_15;
	// UnityEngine.Transform playerController::groundCheck
	Transform_t1659122786 * ___groundCheck_16;
	// System.Single playerController::groundRadius
	float ___groundRadius_17;
	// UnityEngine.LayerMask playerController::whatIsGround
	LayerMask_t3236759763  ___whatIsGround_18;
	// System.Boolean playerController::allomancy
	bool ___allomancy_19;
	// UnityEngine.GameObject[] playerController::metalObjects
	GameObjectU5BU5D_t2662109048* ___metalObjects_20;
	// UnityEngine.GameObject playerController::currentMetalObject
	GameObject_t3674682005 * ___currentMetalObject_21;
	// UnityEngine.GameObject playerController::arrowPrefab
	GameObject_t3674682005 * ___arrowPrefab_22;
	// UnityEngine.Color playerController::startColor
	Color_t4194546905  ___startColor_23;
	// System.Single playerController::force
	float ___force_24;
	// UnityEngine.Vector2 playerController::forceVector
	Vector2_t4282066565  ___forceVector_25;
	// UnityEngine.GameObject playerController::pauseMask
	GameObject_t3674682005 * ___pauseMask_26;
	// UnityEngine.Vector2 playerController::oldVelocity
	Vector2_t4282066565  ___oldVelocity_27;
	// System.Boolean playerController::disableControls
	bool ___disableControls_28;

public:
	inline static int32_t get_offset_of_xmin_2() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___xmin_2)); }
	inline float get_xmin_2() const { return ___xmin_2; }
	inline float* get_address_of_xmin_2() { return &___xmin_2; }
	inline void set_xmin_2(float value)
	{
		___xmin_2 = value;
	}

	inline static int32_t get_offset_of_xmax_3() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___xmax_3)); }
	inline float get_xmax_3() const { return ___xmax_3; }
	inline float* get_address_of_xmax_3() { return &___xmax_3; }
	inline void set_xmax_3(float value)
	{
		___xmax_3 = value;
	}

	inline static int32_t get_offset_of_ymax_4() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___ymax_4)); }
	inline float get_ymax_4() const { return ___ymax_4; }
	inline float* get_address_of_ymax_4() { return &___ymax_4; }
	inline void set_ymax_4(float value)
	{
		___ymax_4 = value;
	}

	inline static int32_t get_offset_of_ymin_5() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___ymin_5)); }
	inline float get_ymin_5() const { return ___ymin_5; }
	inline float* get_address_of_ymin_5() { return &___ymin_5; }
	inline void set_ymin_5(float value)
	{
		___ymin_5 = value;
	}

	inline static int32_t get_offset_of_padding_6() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___padding_6)); }
	inline float get_padding_6() const { return ___padding_6; }
	inline float* get_address_of_padding_6() { return &___padding_6; }
	inline void set_padding_6(float value)
	{
		___padding_6 = value;
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___anim_7)); }
	inline Animator_t2776330603 * get_anim_7() const { return ___anim_7; }
	inline Animator_t2776330603 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t2776330603 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_moveSpeed_8() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___moveSpeed_8)); }
	inline float get_moveSpeed_8() const { return ___moveSpeed_8; }
	inline float* get_address_of_moveSpeed_8() { return &___moveSpeed_8; }
	inline void set_moveSpeed_8(float value)
	{
		___moveSpeed_8 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_9() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___jumpSpeed_9)); }
	inline float get_jumpSpeed_9() const { return ___jumpSpeed_9; }
	inline float* get_address_of_jumpSpeed_9() { return &___jumpSpeed_9; }
	inline void set_jumpSpeed_9(float value)
	{
		___jumpSpeed_9 = value;
	}

	inline static int32_t get_offset_of_facingRight_10() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___facingRight_10)); }
	inline bool get_facingRight_10() const { return ___facingRight_10; }
	inline bool* get_address_of_facingRight_10() { return &___facingRight_10; }
	inline void set_facingRight_10(bool value)
	{
		___facingRight_10 = value;
	}

	inline static int32_t get_offset_of_tapBuffer_11() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___tapBuffer_11)); }
	inline float get_tapBuffer_11() const { return ___tapBuffer_11; }
	inline float* get_address_of_tapBuffer_11() { return &___tapBuffer_11; }
	inline void set_tapBuffer_11(float value)
	{
		___tapBuffer_11 = value;
	}

	inline static int32_t get_offset_of_tapLength_12() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___tapLength_12)); }
	inline float get_tapLength_12() const { return ___tapLength_12; }
	inline float* get_address_of_tapLength_12() { return &___tapLength_12; }
	inline void set_tapLength_12(float value)
	{
		___tapLength_12 = value;
	}

	inline static int32_t get_offset_of_tapThreshold_13() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___tapThreshold_13)); }
	inline float get_tapThreshold_13() const { return ___tapThreshold_13; }
	inline float* get_address_of_tapThreshold_13() { return &___tapThreshold_13; }
	inline void set_tapThreshold_13(float value)
	{
		___tapThreshold_13 = value;
	}

	inline static int32_t get_offset_of_grounded_14() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___grounded_14)); }
	inline bool get_grounded_14() const { return ___grounded_14; }
	inline bool* get_address_of_grounded_14() { return &___grounded_14; }
	inline void set_grounded_14(bool value)
	{
		___grounded_14 = value;
	}

	inline static int32_t get_offset_of_wasGrounded_15() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___wasGrounded_15)); }
	inline bool get_wasGrounded_15() const { return ___wasGrounded_15; }
	inline bool* get_address_of_wasGrounded_15() { return &___wasGrounded_15; }
	inline void set_wasGrounded_15(bool value)
	{
		___wasGrounded_15 = value;
	}

	inline static int32_t get_offset_of_groundCheck_16() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___groundCheck_16)); }
	inline Transform_t1659122786 * get_groundCheck_16() const { return ___groundCheck_16; }
	inline Transform_t1659122786 ** get_address_of_groundCheck_16() { return &___groundCheck_16; }
	inline void set_groundCheck_16(Transform_t1659122786 * value)
	{
		___groundCheck_16 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_16, value);
	}

	inline static int32_t get_offset_of_groundRadius_17() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___groundRadius_17)); }
	inline float get_groundRadius_17() const { return ___groundRadius_17; }
	inline float* get_address_of_groundRadius_17() { return &___groundRadius_17; }
	inline void set_groundRadius_17(float value)
	{
		___groundRadius_17 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_18() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___whatIsGround_18)); }
	inline LayerMask_t3236759763  get_whatIsGround_18() const { return ___whatIsGround_18; }
	inline LayerMask_t3236759763 * get_address_of_whatIsGround_18() { return &___whatIsGround_18; }
	inline void set_whatIsGround_18(LayerMask_t3236759763  value)
	{
		___whatIsGround_18 = value;
	}

	inline static int32_t get_offset_of_allomancy_19() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___allomancy_19)); }
	inline bool get_allomancy_19() const { return ___allomancy_19; }
	inline bool* get_address_of_allomancy_19() { return &___allomancy_19; }
	inline void set_allomancy_19(bool value)
	{
		___allomancy_19 = value;
	}

	inline static int32_t get_offset_of_metalObjects_20() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___metalObjects_20)); }
	inline GameObjectU5BU5D_t2662109048* get_metalObjects_20() const { return ___metalObjects_20; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_metalObjects_20() { return &___metalObjects_20; }
	inline void set_metalObjects_20(GameObjectU5BU5D_t2662109048* value)
	{
		___metalObjects_20 = value;
		Il2CppCodeGenWriteBarrier(&___metalObjects_20, value);
	}

	inline static int32_t get_offset_of_currentMetalObject_21() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___currentMetalObject_21)); }
	inline GameObject_t3674682005 * get_currentMetalObject_21() const { return ___currentMetalObject_21; }
	inline GameObject_t3674682005 ** get_address_of_currentMetalObject_21() { return &___currentMetalObject_21; }
	inline void set_currentMetalObject_21(GameObject_t3674682005 * value)
	{
		___currentMetalObject_21 = value;
		Il2CppCodeGenWriteBarrier(&___currentMetalObject_21, value);
	}

	inline static int32_t get_offset_of_arrowPrefab_22() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___arrowPrefab_22)); }
	inline GameObject_t3674682005 * get_arrowPrefab_22() const { return ___arrowPrefab_22; }
	inline GameObject_t3674682005 ** get_address_of_arrowPrefab_22() { return &___arrowPrefab_22; }
	inline void set_arrowPrefab_22(GameObject_t3674682005 * value)
	{
		___arrowPrefab_22 = value;
		Il2CppCodeGenWriteBarrier(&___arrowPrefab_22, value);
	}

	inline static int32_t get_offset_of_startColor_23() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___startColor_23)); }
	inline Color_t4194546905  get_startColor_23() const { return ___startColor_23; }
	inline Color_t4194546905 * get_address_of_startColor_23() { return &___startColor_23; }
	inline void set_startColor_23(Color_t4194546905  value)
	{
		___startColor_23 = value;
	}

	inline static int32_t get_offset_of_force_24() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___force_24)); }
	inline float get_force_24() const { return ___force_24; }
	inline float* get_address_of_force_24() { return &___force_24; }
	inline void set_force_24(float value)
	{
		___force_24 = value;
	}

	inline static int32_t get_offset_of_forceVector_25() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___forceVector_25)); }
	inline Vector2_t4282066565  get_forceVector_25() const { return ___forceVector_25; }
	inline Vector2_t4282066565 * get_address_of_forceVector_25() { return &___forceVector_25; }
	inline void set_forceVector_25(Vector2_t4282066565  value)
	{
		___forceVector_25 = value;
	}

	inline static int32_t get_offset_of_pauseMask_26() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___pauseMask_26)); }
	inline GameObject_t3674682005 * get_pauseMask_26() const { return ___pauseMask_26; }
	inline GameObject_t3674682005 ** get_address_of_pauseMask_26() { return &___pauseMask_26; }
	inline void set_pauseMask_26(GameObject_t3674682005 * value)
	{
		___pauseMask_26 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMask_26, value);
	}

	inline static int32_t get_offset_of_oldVelocity_27() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___oldVelocity_27)); }
	inline Vector2_t4282066565  get_oldVelocity_27() const { return ___oldVelocity_27; }
	inline Vector2_t4282066565 * get_address_of_oldVelocity_27() { return &___oldVelocity_27; }
	inline void set_oldVelocity_27(Vector2_t4282066565  value)
	{
		___oldVelocity_27 = value;
	}

	inline static int32_t get_offset_of_disableControls_28() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___disableControls_28)); }
	inline bool get_disableControls_28() const { return ___disableControls_28; }
	inline bool* get_address_of_disableControls_28() { return &___disableControls_28; }
	inline void set_disableControls_28(bool value)
	{
		___disableControls_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
