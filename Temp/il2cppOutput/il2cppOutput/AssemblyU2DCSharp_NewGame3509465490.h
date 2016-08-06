#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewGame
struct  NewGame_t3509465490  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Button NewGame::button
	Button_t3896396478 * ___button_2;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(NewGame_t3509465490, ___button_2)); }
	inline Button_t3896396478 * get_button_2() const { return ___button_2; }
	inline Button_t3896396478 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t3896396478 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

struct NewGame_t3509465490_StaticFields
{
public:
	// UnityEngine.Events.UnityAction NewGame::<>f__am$cache1
	UnityAction_t594794173 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(NewGame_t3509465490_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline UnityAction_t594794173 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline UnityAction_t594794173 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(UnityAction_t594794173 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
