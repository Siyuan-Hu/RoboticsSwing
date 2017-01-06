#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// QLearning
struct QLearning_t1263924879;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_State80204913.h"

// System.Void QLearning::.ctor()
extern "C"  void QLearning__ctor_m689967036 (QLearning_t1263924879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning::.cctor()
extern "C"  void QLearning__cctor_m3727012721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning::initial()
extern "C"  void QLearning_initial_m3322763518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QLearning::chooseAction(State)
extern "C"  int32_t QLearning_chooseAction_m3735620666 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning::updateQ(State,System.Int32,State)
extern "C"  void QLearning_updateQ_m195104915 (Il2CppObject * __this /* static, unused */, State_t80204913  ___currentState0, int32_t ___action1, State_t80204913  ___nextState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QLearning::getRandomAction()
extern "C"  int32_t QLearning_getRandomAction_m1364264535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QLearning::getMaxAction(State)
extern "C"  int32_t QLearning_getMaxAction_m3617016195 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single QLearning::maximum(State,System.Boolean)
extern "C"  float QLearning_maximum_m3820502434 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, bool ___returnIndexOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single QLearning::reward(State)
extern "C"  float QLearning_reward_m358267894 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning::WriteQdata()
extern "C"  void QLearning_WriteQdata_m1544806596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning::ReadQdata()
extern "C"  void QLearning_ReadQdata_m1876238015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
