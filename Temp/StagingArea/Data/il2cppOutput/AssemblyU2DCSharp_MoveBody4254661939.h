#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_State80204913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveBody
struct  MoveBody_t4254661939  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MoveBody::mode
	int32_t ___mode_2;
	// UnityEngine.GameObject MoveBody::lap
	GameObject_t3674682005 * ___lap_3;
	// UnityEngine.Vector3 MoveBody::anchor
	Vector3_t4282066566  ___anchor_4;
	// System.Single MoveBody::initialDegree
	float ___initialDegree_5;
	// System.Single MoveBody::initialX
	float ___initialX_6;
	// System.Single MoveBody::initialY
	float ___initialY_7;
	// State MoveBody::currentState
	State_t80204913  ___currentState_8;
	// State MoveBody::nextState
	State_t80204913  ___nextState_9;
	// State MoveBody::previousState
	State_t80204913  ___previousState_10;
	// System.Int32 MoveBody::action
	int32_t ___action_11;
	// System.Int32 MoveBody::previousAction
	int32_t ___previousAction_12;
	// System.Boolean MoveBody::update
	bool ___update_13;
	// System.Int32 MoveBody::triggerTime
	int32_t ___triggerTime_14;
	// System.Int32 MoveBody::gapTime
	int32_t ___gapTime_15;
	// UnityEngine.GameObject MoveBody::board
	GameObject_t3674682005 * ___board_16;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_lap_3() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___lap_3)); }
	inline GameObject_t3674682005 * get_lap_3() const { return ___lap_3; }
	inline GameObject_t3674682005 ** get_address_of_lap_3() { return &___lap_3; }
	inline void set_lap_3(GameObject_t3674682005 * value)
	{
		___lap_3 = value;
		Il2CppCodeGenWriteBarrier(&___lap_3, value);
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___anchor_4)); }
	inline Vector3_t4282066566  get_anchor_4() const { return ___anchor_4; }
	inline Vector3_t4282066566 * get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(Vector3_t4282066566  value)
	{
		___anchor_4 = value;
	}

	inline static int32_t get_offset_of_initialDegree_5() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___initialDegree_5)); }
	inline float get_initialDegree_5() const { return ___initialDegree_5; }
	inline float* get_address_of_initialDegree_5() { return &___initialDegree_5; }
	inline void set_initialDegree_5(float value)
	{
		___initialDegree_5 = value;
	}

	inline static int32_t get_offset_of_initialX_6() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___initialX_6)); }
	inline float get_initialX_6() const { return ___initialX_6; }
	inline float* get_address_of_initialX_6() { return &___initialX_6; }
	inline void set_initialX_6(float value)
	{
		___initialX_6 = value;
	}

	inline static int32_t get_offset_of_initialY_7() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___initialY_7)); }
	inline float get_initialY_7() const { return ___initialY_7; }
	inline float* get_address_of_initialY_7() { return &___initialY_7; }
	inline void set_initialY_7(float value)
	{
		___initialY_7 = value;
	}

	inline static int32_t get_offset_of_currentState_8() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___currentState_8)); }
	inline State_t80204913  get_currentState_8() const { return ___currentState_8; }
	inline State_t80204913 * get_address_of_currentState_8() { return &___currentState_8; }
	inline void set_currentState_8(State_t80204913  value)
	{
		___currentState_8 = value;
	}

	inline static int32_t get_offset_of_nextState_9() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___nextState_9)); }
	inline State_t80204913  get_nextState_9() const { return ___nextState_9; }
	inline State_t80204913 * get_address_of_nextState_9() { return &___nextState_9; }
	inline void set_nextState_9(State_t80204913  value)
	{
		___nextState_9 = value;
	}

	inline static int32_t get_offset_of_previousState_10() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___previousState_10)); }
	inline State_t80204913  get_previousState_10() const { return ___previousState_10; }
	inline State_t80204913 * get_address_of_previousState_10() { return &___previousState_10; }
	inline void set_previousState_10(State_t80204913  value)
	{
		___previousState_10 = value;
	}

	inline static int32_t get_offset_of_action_11() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___action_11)); }
	inline int32_t get_action_11() const { return ___action_11; }
	inline int32_t* get_address_of_action_11() { return &___action_11; }
	inline void set_action_11(int32_t value)
	{
		___action_11 = value;
	}

	inline static int32_t get_offset_of_previousAction_12() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___previousAction_12)); }
	inline int32_t get_previousAction_12() const { return ___previousAction_12; }
	inline int32_t* get_address_of_previousAction_12() { return &___previousAction_12; }
	inline void set_previousAction_12(int32_t value)
	{
		___previousAction_12 = value;
	}

	inline static int32_t get_offset_of_update_13() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___update_13)); }
	inline bool get_update_13() const { return ___update_13; }
	inline bool* get_address_of_update_13() { return &___update_13; }
	inline void set_update_13(bool value)
	{
		___update_13 = value;
	}

	inline static int32_t get_offset_of_triggerTime_14() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___triggerTime_14)); }
	inline int32_t get_triggerTime_14() const { return ___triggerTime_14; }
	inline int32_t* get_address_of_triggerTime_14() { return &___triggerTime_14; }
	inline void set_triggerTime_14(int32_t value)
	{
		___triggerTime_14 = value;
	}

	inline static int32_t get_offset_of_gapTime_15() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___gapTime_15)); }
	inline int32_t get_gapTime_15() const { return ___gapTime_15; }
	inline int32_t* get_address_of_gapTime_15() { return &___gapTime_15; }
	inline void set_gapTime_15(int32_t value)
	{
		___gapTime_15 = value;
	}

	inline static int32_t get_offset_of_board_16() { return static_cast<int32_t>(offsetof(MoveBody_t4254661939, ___board_16)); }
	inline GameObject_t3674682005 * get_board_16() const { return ___board_16; }
	inline GameObject_t3674682005 ** get_address_of_board_16() { return &___board_16; }
	inline void set_board_16(GameObject_t3674682005 * value)
	{
		___board_16 = value;
		Il2CppCodeGenWriteBarrier(&___board_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
