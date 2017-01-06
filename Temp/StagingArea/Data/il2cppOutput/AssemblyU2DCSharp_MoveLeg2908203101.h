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
#include "AssemblyU2DCSharp_State80204913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveLeg
struct  MoveLeg_t2908203101  : public MonoBehaviour_t667441552
{
public:
	// System.Single MoveLeg::initialDegree
	float ___initialDegree_2;
	// System.Single MoveLeg::initialX
	float ___initialX_3;
	// System.Single MoveLeg::initialY
	float ___initialY_4;
	// State MoveLeg::currentState
	State_t80204913  ___currentState_5;
	// State MoveLeg::nextState
	State_t80204913  ___nextState_6;
	// State MoveLeg::previousState
	State_t80204913  ___previousState_7;
	// System.Int32 MoveLeg::action
	int32_t ___action_8;
	// System.Int32 MoveLeg::previousAction
	int32_t ___previousAction_9;
	// System.Boolean MoveLeg::update
	bool ___update_10;
	// System.Int32 MoveLeg::triggerTime
	int32_t ___triggerTime_11;
	// System.Int32 MoveLeg::gapTime
	int32_t ___gapTime_12;
	// UnityEngine.GameObject MoveLeg::board
	GameObject_t3674682005 * ___board_13;
	// System.Int32 MoveLeg::mode
	int32_t ___mode_14;

public:
	inline static int32_t get_offset_of_initialDegree_2() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___initialDegree_2)); }
	inline float get_initialDegree_2() const { return ___initialDegree_2; }
	inline float* get_address_of_initialDegree_2() { return &___initialDegree_2; }
	inline void set_initialDegree_2(float value)
	{
		___initialDegree_2 = value;
	}

	inline static int32_t get_offset_of_initialX_3() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___initialX_3)); }
	inline float get_initialX_3() const { return ___initialX_3; }
	inline float* get_address_of_initialX_3() { return &___initialX_3; }
	inline void set_initialX_3(float value)
	{
		___initialX_3 = value;
	}

	inline static int32_t get_offset_of_initialY_4() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___initialY_4)); }
	inline float get_initialY_4() const { return ___initialY_4; }
	inline float* get_address_of_initialY_4() { return &___initialY_4; }
	inline void set_initialY_4(float value)
	{
		___initialY_4 = value;
	}

	inline static int32_t get_offset_of_currentState_5() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___currentState_5)); }
	inline State_t80204913  get_currentState_5() const { return ___currentState_5; }
	inline State_t80204913 * get_address_of_currentState_5() { return &___currentState_5; }
	inline void set_currentState_5(State_t80204913  value)
	{
		___currentState_5 = value;
	}

	inline static int32_t get_offset_of_nextState_6() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___nextState_6)); }
	inline State_t80204913  get_nextState_6() const { return ___nextState_6; }
	inline State_t80204913 * get_address_of_nextState_6() { return &___nextState_6; }
	inline void set_nextState_6(State_t80204913  value)
	{
		___nextState_6 = value;
	}

	inline static int32_t get_offset_of_previousState_7() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___previousState_7)); }
	inline State_t80204913  get_previousState_7() const { return ___previousState_7; }
	inline State_t80204913 * get_address_of_previousState_7() { return &___previousState_7; }
	inline void set_previousState_7(State_t80204913  value)
	{
		___previousState_7 = value;
	}

	inline static int32_t get_offset_of_action_8() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___action_8)); }
	inline int32_t get_action_8() const { return ___action_8; }
	inline int32_t* get_address_of_action_8() { return &___action_8; }
	inline void set_action_8(int32_t value)
	{
		___action_8 = value;
	}

	inline static int32_t get_offset_of_previousAction_9() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___previousAction_9)); }
	inline int32_t get_previousAction_9() const { return ___previousAction_9; }
	inline int32_t* get_address_of_previousAction_9() { return &___previousAction_9; }
	inline void set_previousAction_9(int32_t value)
	{
		___previousAction_9 = value;
	}

	inline static int32_t get_offset_of_update_10() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___update_10)); }
	inline bool get_update_10() const { return ___update_10; }
	inline bool* get_address_of_update_10() { return &___update_10; }
	inline void set_update_10(bool value)
	{
		___update_10 = value;
	}

	inline static int32_t get_offset_of_triggerTime_11() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___triggerTime_11)); }
	inline int32_t get_triggerTime_11() const { return ___triggerTime_11; }
	inline int32_t* get_address_of_triggerTime_11() { return &___triggerTime_11; }
	inline void set_triggerTime_11(int32_t value)
	{
		___triggerTime_11 = value;
	}

	inline static int32_t get_offset_of_gapTime_12() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___gapTime_12)); }
	inline int32_t get_gapTime_12() const { return ___gapTime_12; }
	inline int32_t* get_address_of_gapTime_12() { return &___gapTime_12; }
	inline void set_gapTime_12(int32_t value)
	{
		___gapTime_12 = value;
	}

	inline static int32_t get_offset_of_board_13() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___board_13)); }
	inline GameObject_t3674682005 * get_board_13() const { return ___board_13; }
	inline GameObject_t3674682005 ** get_address_of_board_13() { return &___board_13; }
	inline void set_board_13(GameObject_t3674682005 * value)
	{
		___board_13 = value;
		Il2CppCodeGenWriteBarrier(&___board_13, value);
	}

	inline static int32_t get_offset_of_mode_14() { return static_cast<int32_t>(offsetof(MoveLeg_t2908203101, ___mode_14)); }
	inline int32_t get_mode_14() const { return ___mode_14; }
	inline int32_t* get_address_of_mode_14() { return &___mode_14; }
	inline void set_mode_14(int32_t value)
	{
		___mode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
