struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 61 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//10. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//17. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//18. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//21. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//22. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//23. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//24. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//25. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//26. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//27. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//28. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//29. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//30. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//31. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//32. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//33. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//34. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//35. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//36. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//37. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//38. HingeJoint
	void RegisterClass_HingeJoint();
	RegisterClass_HingeJoint();

	//39. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//40. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//41. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//42. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//45. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//46. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//47. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//48. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//49. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//50. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//51. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//52. FixedJoint
	void RegisterClass_FixedJoint();
	RegisterClass_FixedJoint();

	//53. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//54. CharacterJoint
	void RegisterClass_CharacterJoint();
	RegisterClass_CharacterJoint();

	//55. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//56. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//57. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//58. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//59. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//60. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
