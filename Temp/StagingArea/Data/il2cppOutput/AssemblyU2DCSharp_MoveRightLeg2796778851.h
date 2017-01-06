#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveRightLeg
struct  MoveRightLeg_t2796778851  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody MoveRightLeg::rb
	Rigidbody_t3346577219 * ___rb_2;
	// System.Single MoveRightLeg::force
	float ___force_3;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(MoveRightLeg_t2796778851, ___rb_2)); }
	inline Rigidbody_t3346577219 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t3346577219 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(MoveRightLeg_t2796778851, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
