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

// QLearning_Body
struct QLearning_Body_t1129525618;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_State80204913.h"

// System.Void QLearning_Body::.ctor()
extern "C"  void QLearning_Body__ctor_m125705065 (QLearning_Body_t1129525618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning_Body::.cctor()
extern "C"  void QLearning_Body__cctor_m3414760804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning_Body::initial()
extern "C"  void QLearning_Body_initial_m2232888683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QLearning_Body::chooseAction(State)
extern "C"  int32_t QLearning_Body_chooseAction_m835852811 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning_Body::updateQ(State,System.Int32,State)
extern "C"  void QLearning_Body_updateQ_m3355422208 (Il2CppObject * __this /* static, unused */, State_t80204913  ___currentState0, int32_t ___action1, State_t80204913  ___nextState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QLearning_Body::getRandomAction()
extern "C"  int32_t QLearning_Body_getRandomAction_m1414878312 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QLearning_Body::getMaxAction(State)
extern "C"  int32_t QLearning_Body_getMaxAction_m717248340 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single QLearning_Body::maximum(State,System.Boolean)
extern "C"  float QLearning_Body_maximum_m1842247543 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, bool ___returnIndexOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single QLearning_Body::reward(State)
extern "C"  float QLearning_Body_reward_m2709602251 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning_Body::WriteQdata()
extern "C"  void QLearning_Body_WriteQdata_m3036354871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QLearning_Body::ReadQdata()
extern "C"  void QLearning_Body_ReadQdata_m2478541804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
