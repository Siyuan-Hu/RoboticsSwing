#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Single[,,,]
struct SingleU5BU2CU2CU2CU5D_t2316563992;
// System.Int32[,,,]
struct Int32U5BU2CU2CU2CU5D_t3230847824;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QLearning
struct  QLearning_t1263924879  : public Il2CppObject
{
public:

public:
};

struct QLearning_t1263924879_StaticFields
{
public:
	// System.Int32[] QLearning::R
	Int32U5BU5D_t3230847821* ___R_6;
	// System.Single[,,,] QLearning::Q
	SingleU5BU2CU2CU2CU5D_t2316563992* ___Q_7;
	// System.Int32[,,,] QLearning::iteratorTimes
	Int32U5BU2CU2CU2CU5D_t3230847824* ___iteratorTimes_8;

public:
	inline static int32_t get_offset_of_R_6() { return static_cast<int32_t>(offsetof(QLearning_t1263924879_StaticFields, ___R_6)); }
	inline Int32U5BU5D_t3230847821* get_R_6() const { return ___R_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_R_6() { return &___R_6; }
	inline void set_R_6(Int32U5BU5D_t3230847821* value)
	{
		___R_6 = value;
		Il2CppCodeGenWriteBarrier(&___R_6, value);
	}

	inline static int32_t get_offset_of_Q_7() { return static_cast<int32_t>(offsetof(QLearning_t1263924879_StaticFields, ___Q_7)); }
	inline SingleU5BU2CU2CU2CU5D_t2316563992* get_Q_7() const { return ___Q_7; }
	inline SingleU5BU2CU2CU2CU5D_t2316563992** get_address_of_Q_7() { return &___Q_7; }
	inline void set_Q_7(SingleU5BU2CU2CU2CU5D_t2316563992* value)
	{
		___Q_7 = value;
		Il2CppCodeGenWriteBarrier(&___Q_7, value);
	}

	inline static int32_t get_offset_of_iteratorTimes_8() { return static_cast<int32_t>(offsetof(QLearning_t1263924879_StaticFields, ___iteratorTimes_8)); }
	inline Int32U5BU2CU2CU2CU5D_t3230847824* get_iteratorTimes_8() const { return ___iteratorTimes_8; }
	inline Int32U5BU2CU2CU2CU5D_t3230847824** get_address_of_iteratorTimes_8() { return &___iteratorTimes_8; }
	inline void set_iteratorTimes_8(Int32U5BU2CU2CU2CU5D_t3230847824* value)
	{
		___iteratorTimes_8 = value;
		Il2CppCodeGenWriteBarrier(&___iteratorTimes_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
