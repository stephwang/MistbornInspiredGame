struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 80 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//4. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//5. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//22. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//23. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//24. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//25. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//26. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//27. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//28. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//29. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//33. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//34. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//35. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//36. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//37. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//38. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//39. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//40. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//41. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//42. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//43. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//44. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//45. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//46. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//47. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//48. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//49. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//50. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//51. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//52. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//53. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//54. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//55. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//56. EdgeCollider2D
	void RegisterClass_EdgeCollider2D();
	RegisterClass_EdgeCollider2D();

	//57. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//58. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//59. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//60. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//61. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//62. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//63. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//64. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//65. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//66. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//67. Halo
	void RegisterClass_Halo();
	RegisterClass_Halo();

	//68. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//69. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//70. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//71. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//72. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//73. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//74. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//75. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//76. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//77. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//78. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//79. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
