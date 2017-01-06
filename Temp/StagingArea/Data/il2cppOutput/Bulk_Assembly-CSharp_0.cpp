#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// MoveBody
struct MoveBody_t4254661939;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// MoveLeftLap
struct MoveLeftLap_t1854537443;
// MoveLeftLeg
struct MoveLeftLeg_t1854537558;
// MoveLeg
struct MoveLeg_t2908203101;
// MoveRightLap
struct MoveRightLap_t2796778736;
// MoveRightLeg
struct MoveRightLeg_t2796778851;
// QLearning
struct QLearning_t1263924879;
// QLearning_Body
struct QLearning_Body_t1129525618;
// test
struct test_t3556498;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_MoveBody4254661939.h"
#include "AssemblyU2DCSharp_MoveBody4254661939MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "AssemblyU2DCSharp_QLearning_Body1129525618MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_State80204913.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_Single4291918972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_QLearning_Body1129525618.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "AssemblyU2DCSharp_MoveLeftLap1854537443.h"
#include "AssemblyU2DCSharp_MoveLeftLap1854537443MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "AssemblyU2DCSharp_MoveLeftLeg1854537558.h"
#include "AssemblyU2DCSharp_MoveLeftLeg1854537558MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "AssemblyU2DCSharp_MoveLeg2908203101.h"
#include "AssemblyU2DCSharp_MoveLeg2908203101MethodDeclarations.h"
#include "AssemblyU2DCSharp_QLearning1263924879MethodDeclarations.h"
#include "AssemblyU2DCSharp_QLearning1263924879.h"
#include "AssemblyU2DCSharp_MoveRightLap2796778736.h"
#include "AssemblyU2DCSharp_MoveRightLap2796778736MethodDeclarations.h"
#include "AssemblyU2DCSharp_MoveRightLeg2796778851.h"
#include "AssemblyU2DCSharp_MoveRightLeg2796778851MethodDeclarations.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_IO_FileInfo3233670074MethodDeclarations.h"
#include "mscorlib_System_IO_TextWriter2304124208MethodDeclarations.h"
#include "mscorlib_System_IO_StreamWriter2705123075.h"
#include "mscorlib_System_IO_FileInfo3233670074.h"
#include "mscorlib_System_IO_StreamWriter2705123075MethodDeclarations.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "mscorlib_System_IO_File667612524MethodDeclarations.h"
#include "mscorlib_System_IO_TextReader2148718976MethodDeclarations.h"
#include "mscorlib_System_IO_StreamReader2549717843.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Char2862622538.h"
#include "mscorlib_System_IO_StreamReader2549717843MethodDeclarations.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "AssemblyU2DCSharp_State80204913MethodDeclarations.h"
#include "AssemblyU2DCSharp_test3556498.h"
#include "AssemblyU2DCSharp_test3556498MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m441016515_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m441016515(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(__this, method) ((  Rigidbody_t3346577219 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveBody::.ctor()
extern "C"  void MoveBody__ctor_m357952200 (MoveBody_t4254661939 * __this, const MethodInfo* method)
{
	{
		__this->set_action_11((-1));
		__this->set_previousAction_12((-1));
		__this->set_update_13((bool)1);
		__this->set_gapTime_15(1);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveBody::Start()
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral106907;
extern Il2CppCodeGenString* _stringLiteral93908710;
extern const uint32_t MoveBody_Start_m3600057288_MetadataUsageId;
extern "C"  void MoveBody_Start_m3600057288 (MoveBody_t4254661939 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveBody_Start_m3600057288_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameObject_t3674682005 * L_0 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral106907, /*hidden argument*/NULL);
		__this->set_lap_3(L_0);
		Vector3_t4282066566  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_anchor_4(L_1);
		GameObject_t3674682005 * L_2 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral93908710, /*hidden argument*/NULL);
		__this->set_board_16(L_2);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_localEulerAngles_m3489183428(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_z_3();
		__this->set_initialDegree_5(L_5);
		GameObject_t3674682005 * L_6 = __this->get_board_16();
		Transform_t1659122786 * L_7 = GameObject_get_transform_m1278640159(L_6, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_x_1();
		__this->set_initialX_6(L_9);
		GameObject_t3674682005 * L_10 = __this->get_board_16();
		Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = (&V_2)->get_y_2();
		__this->set_initialY_7(L_13);
		__this->set_triggerTime_14((-1));
		int32_t L_14 = __this->get_mode_2();
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00a7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		QLearning_Body_initial_m2232888683(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		State_t80204913  L_15 = MoveBody_formalState_m2862465510(__this, /*hidden argument*/NULL);
		__this->set_previousState_10(L_15);
		return;
	}
}
// System.Void MoveBody::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3363864990;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral102850835;
extern Il2CppCodeGenString* _stringLiteral4246661476;
extern Il2CppCodeGenString* _stringLiteral131328141;
extern Il2CppCodeGenString* _stringLiteral2297520447;
extern Il2CppCodeGenString* _stringLiteral3509566803;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t MoveBody_FixedUpdate_m2644939331_MetadataUsageId;
extern "C"  void MoveBody_FixedUpdate_m2644939331 (MoveBody_t4254661939 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveBody_FixedUpdate_m2644939331_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	String_t* G_B17_1 = NULL;
	int32_t G_B52_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_021c;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3363864990, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_1;
		V_1 = ((int32_t)100);
		goto IL_0065;
	}

IL_0024:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_3 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_4 = V_1;
		float L_5 = (L_3)->GetAt(L_4, 1, 0, 0);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_6 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_7 = V_1;
		float L_8 = (L_6)->GetAt(L_7, 1, 0, 1);
		G_B3_0 = L_2;
		if ((!(((float)L_5) > ((float)L_8))))
		{
			G_B4_0 = L_2;
			goto IL_004c;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_004d;
	}

IL_004c:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_004d:
	{
		V_10 = G_B5_0;
		String_t* L_9 = Int32_ToString_m1286526384((&V_10), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1825781833(NULL /*static, unused*/, G_B5_1, L_9, _stringLiteral32, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)150))))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_13 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_14;
		V_2 = ((int32_t)100);
		goto IL_00ac;
	}

IL_0084:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_16 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_17 = V_2;
		float L_18 = (L_16)->GetAt(L_17, 1, 0, 0);
		V_11 = (((int32_t)((int32_t)L_18)));
		String_t* L_19 = Int32_ToString_m1286526384((&V_11), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m1825781833(NULL /*static, unused*/, L_15, L_19, _stringLiteral32, /*hidden argument*/NULL);
		V_0 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)150))))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_23 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_24;
		V_3 = ((int32_t)100);
		goto IL_00f3;
	}

IL_00cb:
	{
		String_t* L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_26 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_27 = V_3;
		float L_28 = (L_26)->GetAt(L_27, 1, 0, 1);
		V_12 = (((int32_t)((int32_t)L_28)));
		String_t* L_29 = Int32_ToString_m1286526384((&V_12), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m1825781833(NULL /*static, unused*/, L_25, L_29, _stringLiteral32, /*hidden argument*/NULL);
		V_0 = L_30;
		int32_t L_31 = V_3;
		V_3 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00f3:
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)150))))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_33 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_34;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral102850835, /*hidden argument*/NULL);
		String_t* L_35 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_4 = L_35;
		V_5 = ((int32_t)100);
		goto IL_016b;
	}

IL_0124:
	{
		String_t* L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_37 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_38 = V_5;
		float L_39 = (L_37)->GetAt(L_38, 0, 0, 1);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_40 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_41 = V_5;
		float L_42 = (L_40)->GetAt(L_41, 0, 0, 0);
		G_B15_0 = L_36;
		if ((!(((float)L_39) > ((float)L_42))))
		{
			G_B16_0 = L_36;
			goto IL_014f;
		}
	}
	{
		G_B17_0 = 1;
		G_B17_1 = G_B15_0;
		goto IL_0150;
	}

IL_014f:
	{
		G_B17_0 = 0;
		G_B17_1 = G_B16_0;
	}

IL_0150:
	{
		V_13 = G_B17_0;
		String_t* L_43 = Int32_ToString_m1286526384((&V_13), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1825781833(NULL /*static, unused*/, G_B17_1, L_43, _stringLiteral32, /*hidden argument*/NULL);
		V_4 = L_44;
		int32_t L_45 = V_5;
		V_5 = ((int32_t)((int32_t)L_45-(int32_t)1));
	}

IL_016b:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) > ((int32_t)((int32_t)50))))
		{
			goto IL_0124;
		}
	}
	{
		String_t* L_47 = V_4;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_4 = L_48;
		V_6 = ((int32_t)100);
		goto IL_01b8;
	}

IL_018b:
	{
		String_t* L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_50 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_51 = V_6;
		float L_52 = (L_50)->GetAt(L_51, 0, 0, 1);
		V_14 = (((int32_t)((int32_t)L_52)));
		String_t* L_53 = Int32_ToString_m1286526384((&V_14), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Concat_m1825781833(NULL /*static, unused*/, L_49, L_53, _stringLiteral32, /*hidden argument*/NULL);
		V_4 = L_54;
		int32_t L_55 = V_6;
		V_6 = ((int32_t)((int32_t)L_55-(int32_t)1));
	}

IL_01b8:
	{
		int32_t L_56 = V_6;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)50))))
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_57 = V_4;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_4 = L_58;
		V_7 = ((int32_t)100);
		goto IL_0205;
	}

IL_01d8:
	{
		String_t* L_59 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_60 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_61 = V_7;
		float L_62 = (L_60)->GetAt(L_61, 0, 0, 0);
		V_15 = (((int32_t)((int32_t)L_62)));
		String_t* L_63 = Int32_ToString_m1286526384((&V_15), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_64 = String_Concat_m1825781833(NULL /*static, unused*/, L_59, L_63, _stringLiteral32, /*hidden argument*/NULL);
		V_4 = L_64;
		int32_t L_65 = V_7;
		V_7 = ((int32_t)((int32_t)L_65-(int32_t)1));
	}

IL_0205:
	{
		int32_t L_66 = V_7;
		if ((((int32_t)L_66) > ((int32_t)((int32_t)50))))
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_67 = V_4;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_4 = L_68;
	}

IL_021c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_69 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)120), /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_03a0;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3363864990, /*hidden argument*/NULL);
		V_8 = _stringLiteral4246661476;
		String_t* L_70 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_71 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_72 = (L_71)->GetAddressAt(1, 1, 0, 1);
		String_t* L_73 = Single_ToString_m5736032(L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m138640077(NULL /*static, unused*/, L_70, L_73, /*hidden argument*/NULL);
		V_8 = L_74;
		String_t* L_75 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		V_8 = _stringLiteral131328141;
		String_t* L_76 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_77 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_78 = (L_77)->GetAddressAt(1, 1, 0, 0);
		String_t* L_79 = Single_ToString_m5736032(L_78, /*hidden argument*/NULL);
		String_t* L_80 = String_Concat_m138640077(NULL /*static, unused*/, L_76, L_79, /*hidden argument*/NULL);
		V_8 = L_80;
		String_t* L_81 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral102850835, /*hidden argument*/NULL);
		V_8 = _stringLiteral131328141;
		String_t* L_82 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_83 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_84 = (L_83)->GetAddressAt(0, 0, 0, 0);
		String_t* L_85 = Single_ToString_m5736032(L_84, /*hidden argument*/NULL);
		String_t* L_86 = String_Concat_m138640077(NULL /*static, unused*/, L_82, L_85, /*hidden argument*/NULL);
		V_8 = L_86;
		String_t* L_87 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		V_8 = _stringLiteral4246661476;
		String_t* L_88 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_89 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_90 = (L_89)->GetAddressAt(0, 0, 0, 1);
		String_t* L_91 = Single_ToString_m5736032(L_90, /*hidden argument*/NULL);
		String_t* L_92 = String_Concat_m138640077(NULL /*static, unused*/, L_88, L_91, /*hidden argument*/NULL);
		V_8 = L_92;
		String_t* L_93 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2297520447, /*hidden argument*/NULL);
		V_8 = _stringLiteral131328141;
		String_t* L_94 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_95 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_96 = (L_95)->GetAddressAt(1, 0, 0, 0);
		String_t* L_97 = Single_ToString_m5736032(L_96, /*hidden argument*/NULL);
		String_t* L_98 = String_Concat_m138640077(NULL /*static, unused*/, L_94, L_97, /*hidden argument*/NULL);
		V_8 = L_98;
		String_t* L_99 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_99, /*hidden argument*/NULL);
		V_8 = _stringLiteral4246661476;
		String_t* L_100 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_101 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_102 = (L_101)->GetAddressAt(1, 0, 0, 1);
		String_t* L_103 = Single_ToString_m5736032(L_102, /*hidden argument*/NULL);
		String_t* L_104 = String_Concat_m138640077(NULL /*static, unused*/, L_100, L_103, /*hidden argument*/NULL);
		V_8 = L_104;
		String_t* L_105 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3509566803, /*hidden argument*/NULL);
		V_8 = _stringLiteral4246661476;
		String_t* L_106 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_107 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_108 = (L_107)->GetAddressAt(0, 1, 0, 1);
		String_t* L_109 = Single_ToString_m5736032(L_108, /*hidden argument*/NULL);
		String_t* L_110 = String_Concat_m138640077(NULL /*static, unused*/, L_106, L_109, /*hidden argument*/NULL);
		V_8 = L_110;
		String_t* L_111 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_111, /*hidden argument*/NULL);
		V_8 = _stringLiteral131328141;
		String_t* L_112 = V_8;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_113 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_114 = (L_113)->GetAddressAt(0, 1, 0, 0);
		String_t* L_115 = Single_ToString_m5736032(L_114, /*hidden argument*/NULL);
		String_t* L_116 = String_Concat_m138640077(NULL /*static, unused*/, L_112, L_115, /*hidden argument*/NULL);
		V_8 = L_116;
		String_t* L_117 = V_8;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
	}

IL_03a0:
	{
		int32_t L_118 = __this->get_mode_2();
		if ((!(((uint32_t)L_118) == ((uint32_t)2))))
		{
			goto IL_03bd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_119 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)98), /*hidden argument*/NULL);
		if (!L_119)
		{
			goto IL_03bd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		QLearning_Body_WriteQdata_m3036354871(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_03bd:
	{
		int32_t L_120 = __this->get_triggerTime_14();
		__this->set_triggerTime_14(((int32_t)((int32_t)L_120+(int32_t)1)));
		int32_t L_121 = __this->get_triggerTime_14();
		int32_t L_122 = __this->get_gapTime_15();
		if (!((int32_t)((int32_t)L_121%(int32_t)L_122)))
		{
			goto IL_03de;
		}
	}
	{
		return;
	}

IL_03de:
	{
		int32_t L_123 = __this->get_triggerTime_14();
		int32_t L_124 = __this->get_gapTime_15();
		__this->set_triggerTime_14(((int32_t)((int32_t)L_123%(int32_t)L_124)));
		V_9 = (0.0f);
		int32_t L_125 = __this->get_mode_2();
		if (L_125)
		{
			goto IL_040f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_126 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		V_9 = L_126;
	}

IL_040f:
	{
		int32_t L_127 = __this->get_mode_2();
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_0425;
		}
	}
	{
		int32_t L_128 = Random_Range_m75452833(NULL /*static, unused*/, (-1), 1, /*hidden argument*/NULL);
		V_9 = (((float)((float)L_128)));
	}

IL_0425:
	{
		float L_129 = V_9;
		if ((!(((float)L_129) > ((float)(0.0f)))))
		{
			goto IL_0438;
		}
	}
	{
		V_9 = (1.0f);
	}

IL_0438:
	{
		float L_130 = V_9;
		if ((!(((float)L_130) < ((float)(0.0f)))))
		{
			goto IL_044b;
		}
	}
	{
		V_9 = (-1.0f);
	}

IL_044b:
	{
		int32_t L_131 = __this->get_mode_2();
		if ((!(((uint32_t)L_131) == ((uint32_t)2))))
		{
			goto IL_04a8;
		}
	}
	{
		int32_t L_132 = __this->get_action_11();
		if ((((int32_t)L_132) < ((int32_t)0)))
		{
			goto IL_04a8;
		}
	}
	{
		State_t80204913  L_133 = MoveBody_formalState_m2862465510(__this, /*hidden argument*/NULL);
		__this->set_nextState_9(L_133);
		State_t80204913 * L_134 = __this->get_address_of_nextState_9();
		float L_135 = L_134->get_energy_3();
		State_t80204913 * L_136 = __this->get_address_of_previousState_10();
		float L_137 = L_136->get_energy_3();
		if ((((float)L_135) == ((float)L_137)))
		{
			goto IL_04a8;
		}
	}
	{
		State_t80204913  L_138 = __this->get_previousState_10();
		int32_t L_139 = __this->get_previousAction_12();
		State_t80204913  L_140 = __this->get_nextState_9();
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		QLearning_Body_updateQ_m3355422208(NULL /*static, unused*/, L_138, L_139, L_140, /*hidden argument*/NULL);
		__this->set_update_13((bool)1);
	}

IL_04a8:
	{
		State_t80204913  L_141 = MoveBody_formalState_m2862465510(__this, /*hidden argument*/NULL);
		__this->set_currentState_8(L_141);
		int32_t L_142 = __this->get_mode_2();
		if ((!(((uint32_t)L_142) == ((uint32_t)2))))
		{
			goto IL_0527;
		}
	}
	{
		bool L_143 = __this->get_update_13();
		if (!L_143)
		{
			goto IL_0500;
		}
	}
	{
		State_t80204913  L_144 = __this->get_currentState_8();
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		int32_t L_145 = QLearning_Body_chooseAction_m835852811(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		__this->set_action_11(L_145);
		int32_t L_146 = __this->get_action_11();
		__this->set_previousAction_12(L_146);
		State_t80204913  L_147 = __this->get_currentState_8();
		__this->set_previousState_10(L_147);
		__this->set_update_13((bool)0);
		goto IL_0511;
	}

IL_0500:
	{
		State_t80204913  L_148 = __this->get_currentState_8();
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		int32_t L_149 = QLearning_Body_chooseAction_m835852811(NULL /*static, unused*/, L_148, /*hidden argument*/NULL);
		__this->set_action_11(L_149);
	}

IL_0511:
	{
		int32_t L_150 = __this->get_action_11();
		if ((!(((uint32_t)L_150) == ((uint32_t)1))))
		{
			goto IL_0523;
		}
	}
	{
		G_B52_0 = (-1);
		goto IL_0524;
	}

IL_0523:
	{
		G_B52_0 = 1;
	}

IL_0524:
	{
		V_9 = (((float)((float)G_B52_0)));
	}

IL_0527:
	{
		Transform_t1659122786 * L_151 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_152 = __this->get_lap_3();
		Transform_t1659122786 * L_153 = GameObject_get_transform_m1278640159(L_152, /*hidden argument*/NULL);
		Vector3_t4282066566  L_154 = Transform_get_position_m2211398607(L_153, /*hidden argument*/NULL);
		Vector3_t4282066566  L_155 = __this->get_anchor_4();
		Vector3_t4282066566  L_156 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_154, L_155, /*hidden argument*/NULL);
		Vector3_t4282066566  L_157;
		memset(&L_157, 0, sizeof(L_157));
		Vector3__ctor_m2926210380(&L_157, (0.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		float L_158 = V_9;
		Transform_RotateAround_m2745906802(L_151, L_156, L_157, ((float)((float)(10.0f)*(float)L_158)), /*hidden argument*/NULL);
		return;
	}
}
// State MoveBody::formalState()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var;
extern const uint32_t MoveBody_formalState_m2862465510_MetadataUsageId;
extern "C"  State_t80204913  MoveBody_formalState_m2862465510 (MoveBody_t4254661939 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveBody_formalState_m2862465510_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	State_t80204913  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t4282066566  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t4282066566  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t4282066566  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t4282066566  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t4282066566  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t4282066566  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t4282066566  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t4282066566  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t4282066566  V_13;
	memset(&V_13, 0, sizeof(V_13));
	int32_t G_B6_0 = 0;
	State_t80204913 * G_B8_0 = NULL;
	State_t80204913 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	State_t80204913 * G_B9_1 = NULL;
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_localEulerAngles_m3489183428(L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		float L_2 = (&V_5)->get_z_3();
		if ((!(((float)L_2) < ((float)(180.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_localEulerAngles_m3489183428(L_3, /*hidden argument*/NULL);
		V_6 = L_4;
		float L_5 = (&V_6)->get_z_3();
		float L_6 = __this->get_initialDegree_5();
		V_0 = (((int32_t)((int32_t)((float)((float)L_5-(float)L_6)))));
		goto IL_005c;
	}

IL_0040:
	{
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Transform_get_localEulerAngles_m3489183428(L_7, /*hidden argument*/NULL);
		V_7 = L_8;
		float L_9 = (&V_7)->get_z_3();
		V_0 = (((int32_t)((int32_t)((float)((float)L_9-(float)(360.0f))))));
	}

IL_005c:
	{
		GameObject_t3674682005 * L_10 = __this->get_board_16();
		Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		V_8 = L_12;
		float L_13 = (&V_8)->get_x_1();
		float L_14 = __this->get_initialX_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_RoundToInt_m3163545820(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)L_13-(float)L_14))/(float)(0.1f)))+(float)(1.0f))), /*hidden argument*/NULL);
		V_1 = L_15;
		GameObject_t3674682005 * L_16 = __this->get_board_16();
		Rigidbody_t3346577219 * L_17 = GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(L_16, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var);
		Vector3_t4282066566  L_18 = Rigidbody_get_velocity_m2696244068(L_17, /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = (&V_9)->get_x_1();
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B6_0 = 0;
	}

IL_00b8:
	{
		V_2 = G_B6_0;
		int32_t L_20 = V_1;
		(&V_3)->set_x_0(L_20);
		GameObject_t3674682005 * L_21 = __this->get_board_16();
		Transform_t1659122786 * L_22 = GameObject_get_transform_m1278640159(L_21, /*hidden argument*/NULL);
		Vector3_t4282066566  L_23 = Transform_get_position_m2211398607(L_22, /*hidden argument*/NULL);
		V_10 = L_23;
		float L_24 = (&V_10)->get_x_1();
		float L_25 = __this->get_initialX_6();
		G_B7_0 = (&V_3);
		if ((!(((float)((float)((float)L_24-(float)L_25))) > ((float)(0.0f)))))
		{
			G_B8_0 = (&V_3);
			goto IL_00f3;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_00f4;
	}

IL_00f3:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00f4:
	{
		G_B9_1->set_x_0(G_B9_0);
		int32_t L_26 = V_2;
		(&V_3)->set_y_1(L_26);
		V_0 = 0;
		int32_t L_27 = V_0;
		(&V_3)->set_degree_2(L_27);
		GameObject_t3674682005 * L_28 = __this->get_board_16();
		Rigidbody_t3346577219 * L_29 = GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(L_28, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var);
		Vector3_t4282066566  L_30 = Rigidbody_get_velocity_m2696244068(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		GameObject_t3674682005 * L_31 = __this->get_board_16();
		Transform_t1659122786 * L_32 = GameObject_get_transform_m1278640159(L_31, /*hidden argument*/NULL);
		Vector3_t4282066566  L_33 = Transform_get_position_m2211398607(L_32, /*hidden argument*/NULL);
		V_11 = L_33;
		float L_34 = (&V_11)->get_y_2();
		float L_35 = __this->get_initialY_7();
		Vector3_t4282066566  L_36 = V_4;
		float L_37 = Vector3_SqrMagnitude_m1662776270(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		(&V_3)->set_energy_3(((float)((float)((float)((float)((float)((float)(9.8f)*(float)((float)((float)L_34-(float)L_35))))+(float)((float)((float)(0.5f)*(float)L_37))))*(float)(20.0f))));
		GameObject_t3674682005 * L_38 = __this->get_board_16();
		Transform_t1659122786 * L_39 = GameObject_get_transform_m1278640159(L_38, /*hidden argument*/NULL);
		Vector3_t4282066566  L_40 = Transform_get_position_m2211398607(L_39, /*hidden argument*/NULL);
		V_12 = L_40;
		float L_41 = (&V_12)->get_x_1();
		float L_42 = __this->get_initialX_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_43 = fabsf(((float)((float)L_41-(float)L_42)));
		Vector3_t4282066566  L_44 = V_4;
		float L_45 = Vector3_SqrMagnitude_m1662776270(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		(&V_3)->set_energy_3(((float)((float)((float)((float)((float)((float)(9.8f)*(float)L_43))+(float)((float)((float)(0.0f)*(float)L_45))))*(float)(20.0f))));
		GameObject_t3674682005 * L_46 = __this->get_board_16();
		Transform_t1659122786 * L_47 = GameObject_get_transform_m1278640159(L_46, /*hidden argument*/NULL);
		Vector3_t4282066566  L_48 = Transform_get_position_m2211398607(L_47, /*hidden argument*/NULL);
		V_13 = L_48;
		float L_49 = (&V_13)->get_x_1();
		float L_50 = __this->get_initialX_6();
		float L_51 = fabsf(((float)((float)L_49-(float)L_50)));
		float L_52 = asinf(((float)((float)L_51/(float)(12.0f))));
		(&V_3)->set_energy_3(((float)((float)L_52*(float)(100.0f))));
		Vector3_t4282066566  L_53 = V_4;
		float L_54 = Vector3_SqrMagnitude_m1662776270(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		(&V_3)->set_kineticEnergy_4(((float)((float)((float)((float)(0.5f)*(float)L_54))*(float)(20.0f))));
		State_t80204913  L_55 = V_3;
		return L_55;
	}
}
// System.Void MoveLeftLap::.ctor()
extern "C"  void MoveLeftLap__ctor_m2854128616 (MoveLeftLap_t1854537443 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveLeftLap::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t MoveLeftLap_Start_m1801266408_MetadataUsageId;
extern "C"  void MoveLeftLap_Start_m1801266408 (MoveLeftLap_t1854537443 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeftLap_Start_m1801266408_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_2(L_0);
		return;
	}
}
// System.Void MoveLeftLap::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t MoveLeftLap_FixedUpdate_m3833191267_MetadataUsageId;
extern "C"  void MoveLeftLap_FixedUpdate_m3833191267 (MoveLeftLap_t1854537443 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeftLap_FixedUpdate_m3833191267_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		Vector3__ctor_m2926210380((&V_1), ((-L_1)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_2 = __this->get_rb_2();
		Vector3_t4282066566  L_3 = V_1;
		float L_4 = __this->get_force_3();
		Vector3_t4282066566  L_5 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveLeftLeg::.ctor()
extern "C"  void MoveLeftLeg__ctor_m1729912021 (MoveLeftLeg_t1854537558 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveLeftLeg::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t MoveLeftLeg_Start_m677049813_MetadataUsageId;
extern "C"  void MoveLeftLeg_Start_m677049813 (MoveLeftLeg_t1854537558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeftLeg_Start_m677049813_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_2(L_0);
		return;
	}
}
// System.Void MoveLeftLeg::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t MoveLeftLeg_FixedUpdate_m956335760_MetadataUsageId;
extern "C"  void MoveLeftLeg_FixedUpdate_m956335760 (MoveLeftLeg_t1854537558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeftLeg_FixedUpdate_m956335760_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_001c:
	{
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		V_0 = (-1.0f);
	}

IL_002d:
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		Vector3_t4282066566  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2926210380(&L_7, (0.0f), (0.0f), ((float)((float)(10.0f)*(float)L_6)), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_3, L_5, L_7, ((float)((float)(1000.0f)*(float)L_8)), /*hidden argument*/NULL);
		float L_9 = V_0;
		Vector3__ctor_m2926210380((&V_1), L_9, (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_10 = __this->get_rb_2();
		Vector3_t4282066566  L_11 = V_1;
		float L_12 = __this->get_force_3();
		Vector3_t4282066566  L_13 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveLeg::.ctor()
extern "C"  void MoveLeg__ctor_m127705006 (MoveLeg_t2908203101 * __this, const MethodInfo* method)
{
	{
		__this->set_action_8((-1));
		__this->set_previousAction_9((-1));
		__this->set_update_10((bool)1);
		__this->set_gapTime_12(1);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveLeg::Start()
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral93908710;
extern const uint32_t MoveLeg_Start_m3369810094_MetadataUsageId;
extern "C"  void MoveLeg_Start_m3369810094 (MoveLeg_t2908203101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeg_Start_m3369810094_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameObject_t3674682005 * L_0 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral93908710, /*hidden argument*/NULL);
		__this->set_board_13(L_0);
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_localEulerAngles_m3489183428(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_z_3();
		__this->set_initialDegree_2(L_3);
		GameObject_t3674682005 * L_4 = __this->get_board_13();
		Transform_t1659122786 * L_5 = GameObject_get_transform_m1278640159(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_1();
		__this->set_initialX_3(L_7);
		GameObject_t3674682005 * L_8 = __this->get_board_13();
		Transform_t1659122786 * L_9 = GameObject_get_transform_m1278640159(L_8, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Transform_get_position_m2211398607(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_y_2();
		__this->set_initialY_4(L_11);
		__this->set_triggerTime_11((-1));
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		QLearning_initial_m3322763518(NULL /*static, unused*/, /*hidden argument*/NULL);
		State_t80204913  L_12 = MoveLeg_formalState_m2953216528(__this, /*hidden argument*/NULL);
		__this->set_previousState_7(L_12);
		return;
	}
}
// System.Void MoveLeg::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3363864990;
extern Il2CppCodeGenString* _stringLiteral4246661476;
extern Il2CppCodeGenString* _stringLiteral131328141;
extern Il2CppCodeGenString* _stringLiteral102850835;
extern Il2CppCodeGenString* _stringLiteral2297520447;
extern Il2CppCodeGenString* _stringLiteral3509566803;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t MoveLeg_FixedUpdate_m2884600489_MetadataUsageId;
extern "C"  void MoveLeg_FixedUpdate_m2884600489 (MoveLeg_t2908203101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeg_FixedUpdate_m2884600489_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = __this->get_mode_14();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		QLearning_WriteQdata_m1544806596(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0181;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3363864990, /*hidden argument*/NULL);
		V_0 = _stringLiteral4246661476;
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_4 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_5 = (L_4)->GetAddressAt(1, 1, 0, 1);
		String_t* L_6 = Single_ToString_m5736032(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m138640077(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = _stringLiteral131328141;
		String_t* L_9 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_10 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_11 = (L_10)->GetAddressAt(1, 1, 0, 0);
		String_t* L_12 = Single_ToString_m5736032(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_m138640077(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral102850835, /*hidden argument*/NULL);
		V_0 = _stringLiteral131328141;
		String_t* L_15 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_16 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_17 = (L_16)->GetAddressAt(0, 0, 0, 0);
		String_t* L_18 = Single_ToString_m5736032(L_17, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_m138640077(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = _stringLiteral4246661476;
		String_t* L_21 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_22 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_23 = (L_22)->GetAddressAt(0, 0, 0, 1);
		String_t* L_24 = Single_ToString_m5736032(L_23, /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_m138640077(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		String_t* L_26 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2297520447, /*hidden argument*/NULL);
		V_0 = _stringLiteral131328141;
		String_t* L_27 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_28 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_29 = (L_28)->GetAddressAt(1, 0, 0, 0);
		String_t* L_30 = Single_ToString_m5736032(L_29, /*hidden argument*/NULL);
		String_t* L_31 = String_Concat_m138640077(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		String_t* L_32 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = _stringLiteral4246661476;
		String_t* L_33 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_34 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_35 = (L_34)->GetAddressAt(1, 0, 0, 1);
		String_t* L_36 = Single_ToString_m5736032(L_35, /*hidden argument*/NULL);
		String_t* L_37 = String_Concat_m138640077(NULL /*static, unused*/, L_33, L_36, /*hidden argument*/NULL);
		V_0 = L_37;
		String_t* L_38 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3509566803, /*hidden argument*/NULL);
		V_0 = _stringLiteral4246661476;
		String_t* L_39 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_40 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_41 = (L_40)->GetAddressAt(0, 1, 0, 1);
		String_t* L_42 = Single_ToString_m5736032(L_41, /*hidden argument*/NULL);
		String_t* L_43 = String_Concat_m138640077(NULL /*static, unused*/, L_39, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		String_t* L_44 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_0 = _stringLiteral131328141;
		String_t* L_45 = V_0;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_46 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		float* L_47 = (L_46)->GetAddressAt(0, 1, 0, 0);
		String_t* L_48 = Single_ToString_m5736032(L_47, /*hidden argument*/NULL);
		String_t* L_49 = String_Concat_m138640077(NULL /*static, unused*/, L_45, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
		String_t* L_50 = V_0;
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
	}

IL_0181:
	{
		int32_t L_51 = __this->get_triggerTime_11();
		__this->set_triggerTime_11(((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = __this->get_triggerTime_11();
		int32_t L_53 = __this->get_gapTime_12();
		if (!((int32_t)((int32_t)L_52%(int32_t)L_53)))
		{
			goto IL_01a2;
		}
	}
	{
		return;
	}

IL_01a2:
	{
		int32_t L_54 = __this->get_triggerTime_11();
		int32_t L_55 = __this->get_gapTime_12();
		__this->set_triggerTime_11(((int32_t)((int32_t)L_54%(int32_t)L_55)));
		V_1 = (0.0f);
		int32_t L_56 = __this->get_mode_14();
		if (L_56)
		{
			goto IL_01d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_57 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_1 = L_57;
	}

IL_01d1:
	{
		int32_t L_58 = __this->get_mode_14();
		if ((!(((uint32_t)L_58) == ((uint32_t)1))))
		{
			goto IL_01e6;
		}
	}
	{
		int32_t L_59 = Random_Range_m75452833(NULL /*static, unused*/, (-1), 1, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_59)));
	}

IL_01e6:
	{
		float L_60 = V_1;
		if ((!(((float)L_60) > ((float)(0.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		V_1 = (1.0f);
	}

IL_01f7:
	{
		float L_61 = V_1;
		if ((!(((float)L_61) < ((float)(0.0f)))))
		{
			goto IL_0208;
		}
	}
	{
		V_1 = (-1.0f);
	}

IL_0208:
	{
		int32_t L_62 = __this->get_mode_14();
		if ((!(((uint32_t)L_62) == ((uint32_t)2))))
		{
			goto IL_0265;
		}
	}
	{
		int32_t L_63 = __this->get_action_8();
		if ((((int32_t)L_63) < ((int32_t)0)))
		{
			goto IL_0265;
		}
	}
	{
		State_t80204913  L_64 = MoveLeg_formalState_m2953216528(__this, /*hidden argument*/NULL);
		__this->set_nextState_6(L_64);
		State_t80204913 * L_65 = __this->get_address_of_nextState_6();
		float L_66 = L_65->get_energy_3();
		State_t80204913 * L_67 = __this->get_address_of_previousState_7();
		float L_68 = L_67->get_energy_3();
		if ((((float)L_66) == ((float)L_68)))
		{
			goto IL_0265;
		}
	}
	{
		State_t80204913  L_69 = __this->get_previousState_7();
		int32_t L_70 = __this->get_previousAction_9();
		State_t80204913  L_71 = __this->get_nextState_6();
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		QLearning_updateQ_m195104915(NULL /*static, unused*/, L_69, L_70, L_71, /*hidden argument*/NULL);
		__this->set_update_10((bool)1);
	}

IL_0265:
	{
		State_t80204913  L_72 = MoveLeg_formalState_m2953216528(__this, /*hidden argument*/NULL);
		__this->set_currentState_5(L_72);
		int32_t L_73 = __this->get_mode_14();
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_02e2;
		}
	}
	{
		bool L_74 = __this->get_update_10();
		if (!L_74)
		{
			goto IL_02bd;
		}
	}
	{
		State_t80204913  L_75 = __this->get_currentState_5();
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		int32_t L_76 = QLearning_chooseAction_m3735620666(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		__this->set_action_8(L_76);
		int32_t L_77 = __this->get_action_8();
		__this->set_previousAction_9(L_77);
		State_t80204913  L_78 = __this->get_currentState_5();
		__this->set_previousState_7(L_78);
		__this->set_update_10((bool)0);
		goto IL_02ce;
	}

IL_02bd:
	{
		State_t80204913  L_79 = __this->get_currentState_5();
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		int32_t L_80 = QLearning_chooseAction_m3735620666(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		__this->set_action_8(L_80);
	}

IL_02ce:
	{
		int32_t L_81 = __this->get_action_8();
		if (L_81)
		{
			goto IL_02df;
		}
	}
	{
		G_B26_0 = (-1);
		goto IL_02e0;
	}

IL_02df:
	{
		G_B26_0 = 1;
	}

IL_02e0:
	{
		V_1 = (((float)((float)G_B26_0)));
	}

IL_02e2:
	{
		Transform_t1659122786 * L_82 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_83 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_84 = Transform_get_position_m2211398607(L_83, /*hidden argument*/NULL);
		Vector3_t4282066566  L_85;
		memset(&L_85, 0, sizeof(L_85));
		Vector3__ctor_m2926210380(&L_85, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_86 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_84, L_85, /*hidden argument*/NULL);
		Vector3_t4282066566  L_87;
		memset(&L_87, 0, sizeof(L_87));
		Vector3__ctor_m2926210380(&L_87, (0.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		float L_88 = V_1;
		Transform_RotateAround_m2745906802(L_82, L_86, L_87, ((float)((float)(20.0f)*(float)L_88)), /*hidden argument*/NULL);
		return;
	}
}
// State MoveLeg::formalState()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var;
extern const uint32_t MoveLeg_formalState_m2953216528_MetadataUsageId;
extern "C"  State_t80204913  MoveLeg_formalState_m2953216528 (MoveLeg_t2908203101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveLeg_formalState_m2953216528_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	State_t80204913  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t4282066566  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t4282066566  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t4282066566  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t4282066566  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t4282066566  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t4282066566  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t4282066566  V_11;
	memset(&V_11, 0, sizeof(V_11));
	int32_t G_B6_0 = 0;
	State_t80204913 * G_B8_0 = NULL;
	State_t80204913 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	State_t80204913 * G_B9_1 = NULL;
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_localEulerAngles_m3489183428(L_0, /*hidden argument*/NULL);
		V_4 = L_1;
		float L_2 = (&V_4)->get_z_3();
		if ((!(((float)L_2) < ((float)(180.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_localEulerAngles_m3489183428(L_3, /*hidden argument*/NULL);
		V_5 = L_4;
		float L_5 = (&V_5)->get_z_3();
		float L_6 = __this->get_initialDegree_2();
		V_0 = (((int32_t)((int32_t)((float)((float)L_5-(float)L_6)))));
		goto IL_005c;
	}

IL_0040:
	{
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Transform_get_localEulerAngles_m3489183428(L_7, /*hidden argument*/NULL);
		V_6 = L_8;
		float L_9 = (&V_6)->get_z_3();
		V_0 = (((int32_t)((int32_t)((float)((float)L_9-(float)(360.0f))))));
	}

IL_005c:
	{
		GameObject_t3674682005 * L_10 = __this->get_board_13();
		Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		V_7 = L_12;
		float L_13 = (&V_7)->get_x_1();
		float L_14 = __this->get_initialX_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_RoundToInt_m3163545820(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)L_13-(float)L_14))/(float)(0.1f)))+(float)(1.0f))), /*hidden argument*/NULL);
		V_1 = L_15;
		GameObject_t3674682005 * L_16 = __this->get_board_13();
		Transform_t1659122786 * L_17 = GameObject_get_transform_m1278640159(L_16, /*hidden argument*/NULL);
		Vector3_t4282066566  L_18 = Transform_get_position_m2211398607(L_17, /*hidden argument*/NULL);
		V_8 = L_18;
		float L_19 = (&V_8)->get_y_2();
		float L_20 = __this->get_initialY_4();
		int32_t L_21 = Mathf_RoundToInt_m3163545820(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)L_19-(float)L_20))+(float)(0.3f)))/(float)(0.1f))), /*hidden argument*/NULL);
		V_2 = L_21;
		GameObject_t3674682005 * L_22 = __this->get_board_13();
		Rigidbody_t3346577219 * L_23 = GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(L_22, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var);
		Vector3_t4282066566  L_24 = Rigidbody_get_velocity_m2696244068(L_23, /*hidden argument*/NULL);
		V_9 = L_24;
		float L_25 = (&V_9)->get_x_1();
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_00e9;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B6_0 = 0;
	}

IL_00ea:
	{
		V_2 = G_B6_0;
		int32_t L_26 = V_1;
		(&V_3)->set_x_0(L_26);
		GameObject_t3674682005 * L_27 = __this->get_board_13();
		Transform_t1659122786 * L_28 = GameObject_get_transform_m1278640159(L_27, /*hidden argument*/NULL);
		Vector3_t4282066566  L_29 = Transform_get_position_m2211398607(L_28, /*hidden argument*/NULL);
		V_10 = L_29;
		float L_30 = (&V_10)->get_x_1();
		float L_31 = __this->get_initialX_3();
		G_B7_0 = (&V_3);
		if ((!(((float)((float)((float)L_30-(float)L_31))) > ((float)(0.0f)))))
		{
			G_B8_0 = (&V_3);
			goto IL_0125;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_0126;
	}

IL_0125:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0126:
	{
		G_B9_1->set_x_0(G_B9_0);
		int32_t L_32 = V_2;
		(&V_3)->set_y_1(L_32);
		V_0 = 0;
		int32_t L_33 = V_0;
		(&V_3)->set_degree_2(L_33);
		GameObject_t3674682005 * L_34 = __this->get_board_13();
		Transform_t1659122786 * L_35 = GameObject_get_transform_m1278640159(L_34, /*hidden argument*/NULL);
		Vector3_t4282066566  L_36 = Transform_get_position_m2211398607(L_35, /*hidden argument*/NULL);
		V_11 = L_36;
		float L_37 = (&V_11)->get_x_1();
		float L_38 = __this->get_initialX_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_39 = fabsf(((float)((float)L_37-(float)L_38)));
		float L_40 = asinf(((float)((float)L_39/(float)(12.0f))));
		(&V_3)->set_energy_3(((float)((float)L_40*(float)(100.0f))));
		(&V_3)->set_kineticEnergy_4((0.0f));
		State_t80204913  L_41 = V_3;
		return L_41;
	}
}
// System.Void MoveRightLap::.ctor()
extern "C"  void MoveRightLap__ctor_m110169003 (MoveRightLap_t2796778736 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveRightLap::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t MoveRightLap_Start_m3352274091_MetadataUsageId;
extern "C"  void MoveRightLap_Start_m3352274091 (MoveRightLap_t2796778736 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveRightLap_Start_m3352274091_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_2(L_0);
		return;
	}
}
// System.Void MoveRightLap::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t MoveRightLap_FixedUpdate_m640695526_MetadataUsageId;
extern "C"  void MoveRightLap_FixedUpdate_m640695526 (MoveRightLap_t2796778736 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveRightLap_FixedUpdate_m640695526_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		Vector3__ctor_m2926210380((&V_1), ((-L_1)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_2 = __this->get_rb_2();
		Vector3_t4282066566  L_3 = V_1;
		float L_4 = __this->get_force_3();
		Vector3_t4282066566  L_5 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveRightLeg::.ctor()
extern "C"  void MoveRightLeg__ctor_m3280919704 (MoveRightLeg_t2796778851 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveRightLeg::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t MoveRightLeg_Start_m2228057496_MetadataUsageId;
extern "C"  void MoveRightLeg_Start_m2228057496 (MoveRightLeg_t2796778851 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveRightLeg_Start_m2228057496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_2(L_0);
		return;
	}
}
// System.Void MoveRightLeg::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t MoveRightLeg_FixedUpdate_m2058807315_MetadataUsageId;
extern "C"  void MoveRightLeg_FixedUpdate_m2058807315 (MoveRightLeg_t2796778851 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MoveRightLeg_FixedUpdate_m2058807315_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_001c:
	{
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		V_0 = (-1.0f);
	}

IL_002d:
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		Vector3_t4282066566  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2926210380(&L_7, (0.0f), (0.0f), ((float)((float)(10.0f)*(float)L_6)), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_3, L_5, L_7, ((float)((float)(1000.0f)*(float)L_8)), /*hidden argument*/NULL);
		float L_9 = V_0;
		Vector3__ctor_m2926210380((&V_1), L_9, (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_10 = __this->get_rb_2();
		Vector3_t4282066566  L_11 = V_1;
		float L_12 = __this->get_force_3();
		Vector3_t4282066566  L_13 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QLearning::.ctor()
extern "C"  void QLearning__ctor_m689967036 (QLearning_t1263924879 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QLearning::.cctor()
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern Il2CppClass* SingleU5BU2CU2CU2CU5D_t2316563992_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32U5BU2CU2CU2CU5D_t3230847824_il2cpp_TypeInfo_var;
extern const uint32_t QLearning__cctor_m3727012721_MetadataUsageId;
extern "C"  void QLearning__cctor_m3727012721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning__cctor_m3727012721_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->set_R_6(((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)2)));
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2, (il2cpp_array_size_t)1, (il2cpp_array_size_t)2 };
		SingleU5BU2CU2CU2CU5D_t2316563992* L_0 = (SingleU5BU2CU2CU2CU5D_t2316563992*)GenArrayNew(SingleU5BU2CU2CU2CU5D_t2316563992_il2cpp_TypeInfo_var, L_1);
		((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->set_Q_7(L_0);
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2, (il2cpp_array_size_t)1, (il2cpp_array_size_t)2 };
		Int32U5BU2CU2CU2CU5D_t3230847824* L_2 = (Int32U5BU2CU2CU2CU5D_t3230847824*)GenArrayNew(Int32U5BU2CU2CU2CU5D_t3230847824_il2cpp_TypeInfo_var, L_3);
		((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->set_iteratorTimes_8(L_2);
		return;
	}
}
// System.Void QLearning::initial()
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_initial_m3322763518_MetadataUsageId;
extern "C"  void QLearning_initial_m3322763518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_initial_m3322763518_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->set_R_6(((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)2)));
		return;
	}
}
// System.Int32 QLearning::chooseAction(State)
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_chooseAction_m3735620666_MetadataUsageId;
extern "C"  int32_t QLearning_chooseAction_m3735620666 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_chooseAction_m3735620666_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, (-1), 2, /*hidden argument*/NULL);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_1 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_2 = (&___state0)->get_x_0();
		int32_t L_3 = (&___state0)->get_y_1();
		int32_t L_4 = (&___state0)->get_degree_2();
		float L_5 = (L_1)->GetAt(L_2, L_3, L_4, 0);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_6 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_7 = (&___state0)->get_x_0();
		int32_t L_8 = (&___state0)->get_y_1();
		int32_t L_9 = (&___state0)->get_degree_2();
		float L_10 = (L_6)->GetAt(L_7, L_8, L_9, 1);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		return 1;
	}

IL_0060:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		State_t80204913  L_12 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		int32_t L_13 = QLearning_getMaxAction_m3617016195(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0079;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		int32_t L_14 = QLearning_getRandomAction_m1364264535(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0079:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Void QLearning::updateQ(State,System.Int32,State)
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_updateQ_m195104915_MetadataUsageId;
extern "C"  void QLearning_updateQ_m195104915 (Il2CppObject * __this /* static, unused */, State_t80204913  ___currentState0, int32_t ___action1, State_t80204913  ___nextState2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_updateQ_m195104915_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		State_t80204913  L_0 = ___nextState2;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		float L_1 = QLearning_reward_m358267894(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (&___currentState0)->get_x_0();
		int32_t L_3 = (&___currentState0)->get_y_1();
		if ((!(((uint32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_4 = V_0;
		float L_5 = (&___nextState2)->get_energy_3();
		float L_6 = (&___currentState0)->get_energy_3();
		V_0 = ((float)((float)L_4+(float)((float)((float)((-L_5))+(float)L_6))));
	}

IL_002f:
	{
		int32_t L_7 = (&___currentState0)->get_x_0();
		int32_t L_8 = (&___currentState0)->get_y_1();
		if ((((int32_t)((int32_t)((int32_t)L_7+(int32_t)L_8))) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (&___nextState2)->get_energy_3();
		float L_11 = (&___currentState0)->get_energy_3();
		V_0 = ((float)((float)L_9+(float)((float)((float)L_10-(float)L_11))));
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		Int32U5BU2CU2CU2CU5D_t3230847824* L_12 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_iteratorTimes_8();
		int32_t L_13 = (&___currentState0)->get_x_0();
		int32_t L_14 = (&___currentState0)->get_y_1();
		int32_t L_15 = (&___currentState0)->get_degree_2();
		int32_t L_16 = ___action1;
		int32_t L_17 = (L_12)->GetAt(L_13, L_14, L_15, L_16);
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_18 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_19 = (&___currentState0)->get_x_0();
		int32_t L_20 = (&___currentState0)->get_y_1();
		int32_t L_21 = (&___currentState0)->get_degree_2();
		int32_t L_22 = ___action1;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_23 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_24 = (&___currentState0)->get_x_0();
		int32_t L_25 = (&___currentState0)->get_y_1();
		int32_t L_26 = (&___currentState0)->get_degree_2();
		int32_t L_27 = ___action1;
		float L_28 = (L_23)->GetAt(L_24, L_25, L_26, L_27);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_29 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_30 = (&___currentState0)->get_x_0();
		int32_t L_31 = (&___currentState0)->get_y_1();
		int32_t L_32 = (&___currentState0)->get_degree_2();
		int32_t L_33 = ___action1;
		float L_34 = (L_29)->GetAt(L_30, L_31, L_32, L_33);
		float L_35 = V_0;
		Int32U5BU2CU2CU2CU5D_t3230847824* L_36 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_iteratorTimes_8();
		int32_t L_37 = (&___currentState0)->get_x_0();
		int32_t L_38 = (&___currentState0)->get_y_1();
		int32_t L_39 = (&___currentState0)->get_degree_2();
		int32_t L_40 = ___action1;
		int32_t* L_41 = (L_36)->GetAddressAt(L_37, L_38, L_39, L_40);
		int32_t* L_42 = L_41;
		int32_t L_43 = ((int32_t)((int32_t)(*((int32_t*)L_42))+(int32_t)1));
		V_1 = L_43;
		*((int32_t*)(L_42)) = (int32_t)L_43;
		int32_t L_44 = V_1;
		(L_18)->SetAt(L_19, L_20, L_21, L_22, ((float)((float)L_28-(float)((float)((float)((float)((float)L_34-(float)L_35))/(float)(((float)((float)L_44))))))));
	}

IL_010d:
	{
		return;
	}
}
// System.Int32 QLearning::getRandomAction()
extern "C"  int32_t QLearning_getRandomAction_m1364264535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, (-1), 1, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0016:
	{
		V_0 = 0;
	}

IL_0018:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 QLearning::getMaxAction(State)
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_getMaxAction_m3617016195_MetadataUsageId;
extern "C"  int32_t QLearning_getMaxAction_m3617016195 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_getMaxAction_m3617016195_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		State_t80204913  L_0 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		float L_1 = QLearning_maximum_m3820502434(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_1)));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Single QLearning::maximum(State,System.Boolean)
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_maximum_m3820502434_MetadataUsageId;
extern "C"  float QLearning_maximum_m3820502434 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, bool ___returnIndexOnly1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_maximum_m3820502434_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (&___state0)->get_y_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		V_1 = 0;
	}

IL_000f:
	{
		int32_t L_1 = (&___state0)->get_x_0();
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_2 = (&___state0)->get_x_0();
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = (&___state0)->get_y_1();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_4 = (&___state0)->get_y_1();
		if ((((int32_t)L_4) >= ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_5 = (&___state0)->get_degree_2();
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_6 = (&___state0)->get_degree_2();
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_005f;
		}
	}

IL_005d:
	{
		V_2 = 0;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_7 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_8 = (&___state0)->get_x_0();
		int32_t L_9 = (&___state0)->get_y_1();
		int32_t L_10 = (&___state0)->get_degree_2();
		float L_11 = (L_7)->GetAt(L_8, L_9, L_10, 0);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_12 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_13 = (&___state0)->get_x_0();
		int32_t L_14 = (&___state0)->get_y_1();
		int32_t L_15 = (&___state0)->get_degree_2();
		float L_16 = (L_12)->GetAt(L_13, L_14, L_15, 1);
		if ((!(((float)L_11) > ((float)L_16))))
		{
			goto IL_00ab;
		}
	}
	{
		V_0 = 0;
		goto IL_00ad;
	}

IL_00ab:
	{
		V_0 = 1;
	}

IL_00ad:
	{
		bool L_17 = ___returnIndexOnly1;
		if (!L_17)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_18 = V_0;
		return (((float)((float)L_18)));
	}

IL_00b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_19 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_20 = (&___state0)->get_x_0();
		int32_t L_21 = (&___state0)->get_y_1();
		int32_t L_22 = (&___state0)->get_degree_2();
		int32_t L_23 = V_0;
		float L_24 = (L_19)->GetAt(L_20, L_21, L_22, L_23);
		return L_24;
	}
}
// System.Single QLearning::reward(State)
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_reward_m358267894_MetadataUsageId;
extern "C"  float QLearning_reward_m358267894 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_reward_m358267894_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3230847821* L_0 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_R_6();
		int32_t L_1 = (&___state0)->get_x_0();
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		State_t80204913  L_4 = ___state0;
		float L_5 = QLearning_maximum_m3820502434(NULL /*static, unused*/, L_4, (bool)0, /*hidden argument*/NULL);
		return ((float)((float)(((float)((float)L_3)))+(float)((float)((float)(0.0f)*(float)L_5))));
	}
}
// System.Void QLearning::WriteQdata()
extern Il2CppClass* FileInfo_t3233670074_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1160128140;
extern Il2CppCodeGenString* _stringLiteral32;
extern const uint32_t QLearning_WriteQdata_m1544806596_MetadataUsageId;
extern "C"  void QLearning_WriteQdata_m1544806596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_WriteQdata_m1544806596_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StreamWriter_t2705123075 * V_0 = NULL;
	FileInfo_t3233670074 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		FileInfo_t3233670074 * L_0 = (FileInfo_t3233670074 *)il2cpp_codegen_object_new(FileInfo_t3233670074_il2cpp_TypeInfo_var);
		FileInfo__ctor_m2163658659(L_0, _stringLiteral1160128140, /*hidden argument*/NULL);
		V_1 = L_0;
		FileInfo_t3233670074 * L_1 = V_1;
		StreamWriter_t2705123075 * L_2 = FileInfo_CreateText_m2045785373(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_2 = 0;
		goto IL_008b;
	}

IL_0019:
	{
		V_3 = 0;
		goto IL_0080;
	}

IL_0020:
	{
		V_4 = 0;
		goto IL_0069;
	}

IL_0028:
	{
		V_5 = 0;
		goto IL_005b;
	}

IL_0030:
	{
		StreamWriter_t2705123075 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_4 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = V_4;
		int32_t L_8 = V_5;
		float* L_9 = (L_4)->GetAddressAt(L_5, L_6, L_7, L_8);
		String_t* L_10 = Single_ToString_m5736032(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m138640077(NULL /*static, unused*/, L_10, _stringLiteral32, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.StreamWriter::Write(System.String) */, L_3, L_11);
		int32_t L_12 = V_5;
		V_5 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		StreamWriter_t2705123075 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_16, L_17);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		StreamWriter_t2705123075 * L_22 = V_0;
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.StreamWriter::Close() */, L_22);
		StreamWriter_t2705123075 * L_23 = V_0;
		TextWriter_Dispose_m183705414(L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QLearning::ReadQdata()
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t3324145743_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_t1263924879_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1160128140;
extern const uint32_t QLearning_ReadQdata_m1876238015_MetadataUsageId;
extern "C"  void QLearning_ReadQdata_m1876238015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_ReadQdata_m1876238015_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StreamReader_t2549717843 * V_0 = NULL;
	Exception_t3991598821 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StringU5BU5D_t4054002952* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (StreamReader_t2549717843 *)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		StreamReader_t2549717843 * L_0 = File_OpenText_m396847893(NULL /*static, unused*/, _stringLiteral1160128140, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0018;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t3991598821_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t3991598821 *)__exception_local);
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		V_3 = 0;
		V_4 = (-1);
		goto IL_0094;
	}

IL_0022:
	{
		int32_t L_1 = V_4;
		V_4 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		V_3 = ((int32_t)((int32_t)L_2+(int32_t)((int32_t)((int32_t)L_3/(int32_t)2))));
		int32_t L_4 = V_4;
		V_4 = ((int32_t)((int32_t)L_4%(int32_t)2));
		String_t* L_5 = V_2;
		CharU5BU5D_t3324145743* L_6 = ((CharU5BU5D_t3324145743*)SZArrayNew(CharU5BU5D_t3324145743_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		StringU5BU5D_t4054002952* L_7 = String_Split_m290179486(L_5, L_6, /*hidden argument*/NULL);
		V_5 = L_7;
		V_6 = 0;
		goto IL_008c;
	}

IL_0050:
	{
		V_7 = 0;
		goto IL_007e;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_t1263924879_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_8 = ((QLearning_t1263924879_StaticFields*)QLearning_t1263924879_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		int32_t L_11 = V_6;
		int32_t L_12 = V_7;
		StringU5BU5D_t4054002952* L_13 = V_5;
		int32_t L_14 = V_6;
		int32_t L_15 = V_7;
		int32_t L_16 = ((int32_t)((int32_t)((int32_t)((int32_t)L_14*(int32_t)2))+(int32_t)L_15));
		String_t* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = Single_Parse_m3022284664(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		(L_8)->SetAt(L_9, L_10, L_11, L_12, L_18);
		int32_t L_19 = V_7;
		V_7 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_20 = V_7;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_21 = V_6;
		V_6 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)1)))
		{
			goto IL_0050;
		}
	}

IL_0094:
	{
		StreamReader_t2549717843 * L_23 = V_0;
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.StreamReader::ReadLine() */, L_23);
		String_t* L_25 = L_24;
		V_2 = L_25;
		if (L_25)
		{
			goto IL_0022;
		}
	}
	{
		StreamReader_t2549717843 * L_26 = V_0;
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.StreamReader::Close() */, L_26);
		StreamReader_t2549717843 * L_27 = V_0;
		TextReader_Dispose_m377592054(L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QLearning_Body::.ctor()
extern "C"  void QLearning_Body__ctor_m125705065 (QLearning_Body_t1129525618 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QLearning_Body::.cctor()
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern Il2CppClass* SingleU5BU2CU2CU2CU5D_t2316563992_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32U5BU2CU2CU2CU5D_t3230847824_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body__cctor_m3414760804_MetadataUsageId;
extern "C"  void QLearning_Body__cctor_m3414760804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body__cctor_m3414760804_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->set_R_6(((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)2)));
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2, (il2cpp_array_size_t)1, (il2cpp_array_size_t)2 };
		SingleU5BU2CU2CU2CU5D_t2316563992* L_0 = (SingleU5BU2CU2CU2CU5D_t2316563992*)GenArrayNew(SingleU5BU2CU2CU2CU5D_t2316563992_il2cpp_TypeInfo_var, L_1);
		((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->set_Q_7(L_0);
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2, (il2cpp_array_size_t)1, (il2cpp_array_size_t)2 };
		Int32U5BU2CU2CU2CU5D_t3230847824* L_2 = (Int32U5BU2CU2CU2CU5D_t3230847824*)GenArrayNew(Int32U5BU2CU2CU2CU5D_t3230847824_il2cpp_TypeInfo_var, L_3);
		((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->set_iteratorTimes_8(L_2);
		return;
	}
}
// System.Void QLearning_Body::initial()
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body_initial_m2232888683_MetadataUsageId;
extern "C"  void QLearning_Body_initial_m2232888683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_initial_m2232888683_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->set_R_6(((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)2)));
		return;
	}
}
// System.Int32 QLearning_Body::chooseAction(State)
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body_chooseAction_m835852811_MetadataUsageId;
extern "C"  int32_t QLearning_Body_chooseAction_m835852811 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_chooseAction_m835852811_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, (-1), 2, /*hidden argument*/NULL);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_1 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_2 = (&___state0)->get_x_0();
		int32_t L_3 = (&___state0)->get_y_1();
		int32_t L_4 = (&___state0)->get_degree_2();
		float L_5 = (L_1)->GetAt(L_2, L_3, L_4, 0);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_6 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_7 = (&___state0)->get_x_0();
		int32_t L_8 = (&___state0)->get_y_1();
		int32_t L_9 = (&___state0)->get_degree_2();
		float L_10 = (L_6)->GetAt(L_7, L_8, L_9, 1);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		return 1;
	}

IL_0060:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		State_t80204913  L_12 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		int32_t L_13 = QLearning_Body_getMaxAction_m717248340(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0079;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		int32_t L_14 = QLearning_Body_getRandomAction_m1414878312(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0079:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Void QLearning_Body::updateQ(State,System.Int32,State)
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body_updateQ_m3355422208_MetadataUsageId;
extern "C"  void QLearning_Body_updateQ_m3355422208 (Il2CppObject * __this /* static, unused */, State_t80204913  ___currentState0, int32_t ___action1, State_t80204913  ___nextState2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_updateQ_m3355422208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		State_t80204913  L_0 = ___nextState2;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		float L_1 = QLearning_Body_reward_m2709602251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (&___currentState0)->get_x_0();
		int32_t L_3 = (&___currentState0)->get_y_1();
		if ((!(((uint32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_4 = V_0;
		float L_5 = (&___nextState2)->get_energy_3();
		float L_6 = (&___currentState0)->get_energy_3();
		V_0 = ((float)((float)L_4+(float)((float)((float)((-L_5))+(float)L_6))));
	}

IL_002f:
	{
		int32_t L_7 = (&___currentState0)->get_x_0();
		int32_t L_8 = (&___currentState0)->get_y_1();
		if ((((int32_t)((int32_t)((int32_t)L_7+(int32_t)L_8))) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (&___nextState2)->get_energy_3();
		float L_11 = (&___currentState0)->get_energy_3();
		V_0 = ((float)((float)L_9+(float)((float)((float)L_10-(float)L_11))));
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		Int32U5BU2CU2CU2CU5D_t3230847824* L_12 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_iteratorTimes_8();
		int32_t L_13 = (&___currentState0)->get_x_0();
		int32_t L_14 = (&___currentState0)->get_y_1();
		int32_t L_15 = (&___currentState0)->get_degree_2();
		int32_t L_16 = ___action1;
		int32_t L_17 = (L_12)->GetAt(L_13, L_14, L_15, L_16);
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_18 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_19 = (&___currentState0)->get_x_0();
		int32_t L_20 = (&___currentState0)->get_y_1();
		int32_t L_21 = (&___currentState0)->get_degree_2();
		int32_t L_22 = ___action1;
		SingleU5BU2CU2CU2CU5D_t2316563992* L_23 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_24 = (&___currentState0)->get_x_0();
		int32_t L_25 = (&___currentState0)->get_y_1();
		int32_t L_26 = (&___currentState0)->get_degree_2();
		int32_t L_27 = ___action1;
		float L_28 = (L_23)->GetAt(L_24, L_25, L_26, L_27);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_29 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_30 = (&___currentState0)->get_x_0();
		int32_t L_31 = (&___currentState0)->get_y_1();
		int32_t L_32 = (&___currentState0)->get_degree_2();
		int32_t L_33 = ___action1;
		float L_34 = (L_29)->GetAt(L_30, L_31, L_32, L_33);
		float L_35 = V_0;
		Int32U5BU2CU2CU2CU5D_t3230847824* L_36 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_iteratorTimes_8();
		int32_t L_37 = (&___currentState0)->get_x_0();
		int32_t L_38 = (&___currentState0)->get_y_1();
		int32_t L_39 = (&___currentState0)->get_degree_2();
		int32_t L_40 = ___action1;
		int32_t* L_41 = (L_36)->GetAddressAt(L_37, L_38, L_39, L_40);
		int32_t* L_42 = L_41;
		int32_t L_43 = ((int32_t)((int32_t)(*((int32_t*)L_42))+(int32_t)1));
		V_1 = L_43;
		*((int32_t*)(L_42)) = (int32_t)L_43;
		int32_t L_44 = V_1;
		(L_18)->SetAt(L_19, L_20, L_21, L_22, ((float)((float)L_28-(float)((float)((float)((float)((float)L_34-(float)L_35))/(float)(((float)((float)L_44))))))));
	}

IL_010d:
	{
		return;
	}
}
// System.Int32 QLearning_Body::getRandomAction()
extern "C"  int32_t QLearning_Body_getRandomAction_m1414878312 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, (-1), 1, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0016:
	{
		V_0 = 0;
	}

IL_0018:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 QLearning_Body::getMaxAction(State)
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body_getMaxAction_m717248340_MetadataUsageId;
extern "C"  int32_t QLearning_Body_getMaxAction_m717248340 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_getMaxAction_m717248340_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		State_t80204913  L_0 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		float L_1 = QLearning_Body_maximum_m1842247543(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_1)));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Single QLearning_Body::maximum(State,System.Boolean)
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body_maximum_m1842247543_MetadataUsageId;
extern "C"  float QLearning_Body_maximum_m1842247543 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, bool ___returnIndexOnly1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_maximum_m1842247543_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (&___state0)->get_y_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		V_1 = 0;
	}

IL_000f:
	{
		int32_t L_1 = (&___state0)->get_x_0();
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_2 = (&___state0)->get_x_0();
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = (&___state0)->get_y_1();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_4 = (&___state0)->get_y_1();
		if ((((int32_t)L_4) >= ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_5 = (&___state0)->get_degree_2();
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_6 = (&___state0)->get_degree_2();
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_005f;
		}
	}

IL_005d:
	{
		V_2 = 0;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_7 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_8 = (&___state0)->get_x_0();
		int32_t L_9 = (&___state0)->get_y_1();
		int32_t L_10 = (&___state0)->get_degree_2();
		float L_11 = (L_7)->GetAt(L_8, L_9, L_10, 0);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_12 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_13 = (&___state0)->get_x_0();
		int32_t L_14 = (&___state0)->get_y_1();
		int32_t L_15 = (&___state0)->get_degree_2();
		float L_16 = (L_12)->GetAt(L_13, L_14, L_15, 1);
		if ((!(((float)L_11) > ((float)L_16))))
		{
			goto IL_00ab;
		}
	}
	{
		V_0 = 0;
		goto IL_00ad;
	}

IL_00ab:
	{
		V_0 = 1;
	}

IL_00ad:
	{
		bool L_17 = ___returnIndexOnly1;
		if (!L_17)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_18 = V_0;
		return (((float)((float)L_18)));
	}

IL_00b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_19 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_20 = (&___state0)->get_x_0();
		int32_t L_21 = (&___state0)->get_y_1();
		int32_t L_22 = (&___state0)->get_degree_2();
		int32_t L_23 = V_0;
		float L_24 = (L_19)->GetAt(L_20, L_21, L_22, L_23);
		return L_24;
	}
}
// System.Single QLearning_Body::reward(State)
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern const uint32_t QLearning_Body_reward_m2709602251_MetadataUsageId;
extern "C"  float QLearning_Body_reward_m2709602251 (Il2CppObject * __this /* static, unused */, State_t80204913  ___state0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_reward_m2709602251_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3230847821* L_0 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_R_6();
		int32_t L_1 = (&___state0)->get_x_0();
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		State_t80204913  L_4 = ___state0;
		float L_5 = QLearning_Body_maximum_m1842247543(NULL /*static, unused*/, L_4, (bool)0, /*hidden argument*/NULL);
		return ((float)((float)(((float)((float)L_3)))+(float)((float)((float)(0.0f)*(float)L_5))));
	}
}
// System.Void QLearning_Body::WriteQdata()
extern Il2CppClass* FileInfo_t3233670074_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1420594766;
extern Il2CppCodeGenString* _stringLiteral32;
extern const uint32_t QLearning_Body_WriteQdata_m3036354871_MetadataUsageId;
extern "C"  void QLearning_Body_WriteQdata_m3036354871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_WriteQdata_m3036354871_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StreamWriter_t2705123075 * V_0 = NULL;
	FileInfo_t3233670074 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		FileInfo_t3233670074 * L_0 = (FileInfo_t3233670074 *)il2cpp_codegen_object_new(FileInfo_t3233670074_il2cpp_TypeInfo_var);
		FileInfo__ctor_m2163658659(L_0, _stringLiteral1420594766, /*hidden argument*/NULL);
		V_1 = L_0;
		FileInfo_t3233670074 * L_1 = V_1;
		StreamWriter_t2705123075 * L_2 = FileInfo_CreateText_m2045785373(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_2 = 0;
		goto IL_008b;
	}

IL_0019:
	{
		V_3 = 0;
		goto IL_0080;
	}

IL_0020:
	{
		V_4 = 0;
		goto IL_0069;
	}

IL_0028:
	{
		V_5 = 0;
		goto IL_005b;
	}

IL_0030:
	{
		StreamWriter_t2705123075 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_4 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = V_4;
		int32_t L_8 = V_5;
		float* L_9 = (L_4)->GetAddressAt(L_5, L_6, L_7, L_8);
		String_t* L_10 = Single_ToString_m5736032(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m138640077(NULL /*static, unused*/, L_10, _stringLiteral32, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.StreamWriter::Write(System.String) */, L_3, L_11);
		int32_t L_12 = V_5;
		V_5 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		StreamWriter_t2705123075 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_16, L_17);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		StreamWriter_t2705123075 * L_22 = V_0;
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.StreamWriter::Close() */, L_22);
		StreamWriter_t2705123075 * L_23 = V_0;
		TextWriter_Dispose_m183705414(L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QLearning_Body::ReadQdata()
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t3324145743_il2cpp_TypeInfo_var;
extern Il2CppClass* QLearning_Body_t1129525618_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1420594766;
extern const uint32_t QLearning_Body_ReadQdata_m2478541804_MetadataUsageId;
extern "C"  void QLearning_Body_ReadQdata_m2478541804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QLearning_Body_ReadQdata_m2478541804_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StreamReader_t2549717843 * V_0 = NULL;
	Exception_t3991598821 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StringU5BU5D_t4054002952* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (StreamReader_t2549717843 *)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		StreamReader_t2549717843 * L_0 = File_OpenText_m396847893(NULL /*static, unused*/, _stringLiteral1420594766, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0018;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t3991598821_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t3991598821 *)__exception_local);
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		V_3 = 0;
		V_4 = (-1);
		goto IL_0094;
	}

IL_0022:
	{
		int32_t L_1 = V_4;
		V_4 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		V_3 = ((int32_t)((int32_t)L_2+(int32_t)((int32_t)((int32_t)L_3/(int32_t)2))));
		int32_t L_4 = V_4;
		V_4 = ((int32_t)((int32_t)L_4%(int32_t)2));
		String_t* L_5 = V_2;
		CharU5BU5D_t3324145743* L_6 = ((CharU5BU5D_t3324145743*)SZArrayNew(CharU5BU5D_t3324145743_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		StringU5BU5D_t4054002952* L_7 = String_Split_m290179486(L_5, L_6, /*hidden argument*/NULL);
		V_5 = L_7;
		V_6 = 0;
		goto IL_008c;
	}

IL_0050:
	{
		V_7 = 0;
		goto IL_007e;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(QLearning_Body_t1129525618_il2cpp_TypeInfo_var);
		SingleU5BU2CU2CU2CU5D_t2316563992* L_8 = ((QLearning_Body_t1129525618_StaticFields*)QLearning_Body_t1129525618_il2cpp_TypeInfo_var->static_fields)->get_Q_7();
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		int32_t L_11 = V_6;
		int32_t L_12 = V_7;
		StringU5BU5D_t4054002952* L_13 = V_5;
		int32_t L_14 = V_6;
		int32_t L_15 = V_7;
		int32_t L_16 = ((int32_t)((int32_t)((int32_t)((int32_t)L_14*(int32_t)2))+(int32_t)L_15));
		String_t* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = Single_Parse_m3022284664(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		(L_8)->SetAt(L_9, L_10, L_11, L_12, L_18);
		int32_t L_19 = V_7;
		V_7 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_20 = V_7;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_21 = V_6;
		V_6 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)1)))
		{
			goto IL_0050;
		}
	}

IL_0094:
	{
		StreamReader_t2549717843 * L_23 = V_0;
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.StreamReader::ReadLine() */, L_23);
		String_t* L_25 = L_24;
		V_2 = L_25;
		if (L_25)
		{
			goto IL_0022;
		}
	}
	{
		StreamReader_t2549717843 * L_26 = V_0;
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.StreamReader::Close() */, L_26);
		StreamReader_t2549717843 * L_27 = V_0;
		TextReader_Dispose_m377592054(L_27, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: State
extern "C" void State_t80204913_marshal_pinvoke(const State_t80204913& unmarshaled, State_t80204913_marshaled_pinvoke& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___degree_2 = unmarshaled.get_degree_2();
	marshaled.___energy_3 = unmarshaled.get_energy_3();
	marshaled.___kineticEnergy_4 = unmarshaled.get_kineticEnergy_4();
}
extern "C" void State_t80204913_marshal_pinvoke_back(const State_t80204913_marshaled_pinvoke& marshaled, State_t80204913& unmarshaled)
{
	int32_t unmarshaled_x_temp_0 = 0;
	unmarshaled_x_temp_0 = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp_0);
	int32_t unmarshaled_y_temp_1 = 0;
	unmarshaled_y_temp_1 = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp_1);
	int32_t unmarshaled_degree_temp_2 = 0;
	unmarshaled_degree_temp_2 = marshaled.___degree_2;
	unmarshaled.set_degree_2(unmarshaled_degree_temp_2);
	float unmarshaled_energy_temp_3 = 0.0f;
	unmarshaled_energy_temp_3 = marshaled.___energy_3;
	unmarshaled.set_energy_3(unmarshaled_energy_temp_3);
	float unmarshaled_kineticEnergy_temp_4 = 0.0f;
	unmarshaled_kineticEnergy_temp_4 = marshaled.___kineticEnergy_4;
	unmarshaled.set_kineticEnergy_4(unmarshaled_kineticEnergy_temp_4);
}
// Conversion method for clean up from marshalling of: State
extern "C" void State_t80204913_marshal_pinvoke_cleanup(State_t80204913_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: State
extern "C" void State_t80204913_marshal_com(const State_t80204913& unmarshaled, State_t80204913_marshaled_com& marshaled)
{
	marshaled.___x_0 = unmarshaled.get_x_0();
	marshaled.___y_1 = unmarshaled.get_y_1();
	marshaled.___degree_2 = unmarshaled.get_degree_2();
	marshaled.___energy_3 = unmarshaled.get_energy_3();
	marshaled.___kineticEnergy_4 = unmarshaled.get_kineticEnergy_4();
}
extern "C" void State_t80204913_marshal_com_back(const State_t80204913_marshaled_com& marshaled, State_t80204913& unmarshaled)
{
	int32_t unmarshaled_x_temp_0 = 0;
	unmarshaled_x_temp_0 = marshaled.___x_0;
	unmarshaled.set_x_0(unmarshaled_x_temp_0);
	int32_t unmarshaled_y_temp_1 = 0;
	unmarshaled_y_temp_1 = marshaled.___y_1;
	unmarshaled.set_y_1(unmarshaled_y_temp_1);
	int32_t unmarshaled_degree_temp_2 = 0;
	unmarshaled_degree_temp_2 = marshaled.___degree_2;
	unmarshaled.set_degree_2(unmarshaled_degree_temp_2);
	float unmarshaled_energy_temp_3 = 0.0f;
	unmarshaled_energy_temp_3 = marshaled.___energy_3;
	unmarshaled.set_energy_3(unmarshaled_energy_temp_3);
	float unmarshaled_kineticEnergy_temp_4 = 0.0f;
	unmarshaled_kineticEnergy_temp_4 = marshaled.___kineticEnergy_4;
	unmarshaled.set_kineticEnergy_4(unmarshaled_kineticEnergy_temp_4);
}
// Conversion method for clean up from marshalling of: State
extern "C" void State_t80204913_marshal_com_cleanup(State_t80204913_marshaled_com& marshaled)
{
}
// System.Void test::.ctor()
extern "C"  void test__ctor_m2918730313 (test_t3556498 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void test::Start()
extern "C"  void test_Start_m1865868105 (test_t3556498 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void test::Update()
extern "C"  void test_Update_m2013188580 (test_t3556498 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_attach_2();
		Transform_t1659122786 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2926210380(&L_4, (0.0f), (0.0f), (0.6f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
