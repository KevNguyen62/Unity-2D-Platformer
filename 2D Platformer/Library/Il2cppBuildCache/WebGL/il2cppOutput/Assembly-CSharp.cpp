#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BlueReaperBehavior
struct BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Checkpoint
struct Checkpoint_t08A85562F7E5C088BFFF4CE96E0CF686C070FAEE;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// EnemyAttack
struct EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2;
// EnemyHealth
struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0;
// EnemyPatrol
struct EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91;
// EnemySounds
struct EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D;
// EvilWizardAttack
struct EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C;
// EvilWizardBehavior
struct EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB;
// EvilWizardHealth
struct EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991;
// FlipSprite
struct FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C;
// GameMaster
struct GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GoblinBehavior
struct GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1;
// HeartPickup
struct HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerCamera
struct PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC;
// PlayerHealth
struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// PlayerPosition
struct PlayerPosition_t9D9F6DA5997202DDAB30171D40EB758B0D8161B8;
// PortalTeleporter
struct PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// ReaperBehavior
struct ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F;
// ReaperHealth
struct ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// RougeKnightBehavior
struct RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11;
// RougeKnightHealth
struct RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SlimeBehavior
struct SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// VaseBreak
struct VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// PlayerHealth/<DamageAnimation>d__8
struct U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF;
// PortalTeleporter/<Teleport>d__4
struct U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral114161166B354D9E8A8D7EECC082BC6C52578EE9;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8BA29DC3071BBDD78E1F76B45627A51399EFB2;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral37268CF950D234084B790803AB82F9698DCAF256;
IL2CPP_EXTERN_C String_t* _stringLiteral5E2CA28D75C34C7E4F25A005301425EA07BCC33B;
IL2CPP_EXTERN_C String_t* _stringLiteral694FB035C8DE783EDEB5116B08F6EA69223E3E55;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral77D4D826BDF9EC1A40FBEDDE49D46F555ECD2F40;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA7319AC6C2D9E0AAA1616C63ECBA2EFDD91DB6;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral83A330A7BD15C1CED21087CC81D59932475870DA;
IL2CPP_EXTERN_C String_t* _stringLiteral85110B196EFCDD7B128BF7CF380D40EAFD32D70D;
IL2CPP_EXTERN_C String_t* _stringLiteralA2EF6352A5A5A13C946A7DBFD388C11277AFFE8F;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA30A36661ED3A7CB0047B2A283389EC1103E89;
IL2CPP_EXTERN_C String_t* _stringLiteralB0D0C71E2F7D78FCB6660AB6BF222E82D2C75DB9;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D036608812BF1848A3A256FA8E9C9AFABEDB5D;
IL2CPP_EXTERN_C String_t* _stringLiteralC885CA0BB0EE8309A7BBE65FBDA9E49EB94BFC95;
IL2CPP_EXTERN_C String_t* _stringLiteralC93C0D1AE357E9D3E92442C2269D6040BA6996A5;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDDCADB1A42485A4C3B89A749CD0495313F10CDB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF66DCFEF18076AC123D1B6AD2D00BC04BE0901CF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_mFA394F56F9684A3353BC09E894CB19D395433C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991_mB3ABA3A02E9A74CD46CFD3EADCCE94AB52A20BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD_m9418A2AF8F4948E6D763B4CDAB0CA6730797D329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB_m1C4F4329D7A3545EAC0CE540ACBDE5362E463641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548_mB4420ED29E78AF378A36E1230BD58EAD72454001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m50269907279F157FE9ACEA5A766CFEBFB9ADA708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m126F7C26DFD6F0D2016E0E369DCBCCD2448F9743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDamageAnimationU3Ed__8_System_Collections_IEnumerator_Reset_m164053DE9BA18DC3236F7DFD9E7E8F36E49346C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTeleportU3Ed__4_System_Collections_IEnumerator_Reset_m23C01FEEF777917E3BC021F9500CD8066D631ED6_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// PlayerHealth/<DamageAnimation>d__8
struct U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF  : public RuntimeObject
{
public:
	// System.Int32 PlayerHealth/<DamageAnimation>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerHealth/<DamageAnimation>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerHealth PlayerHealth/<DamageAnimation>d__8::<>4__this
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * ___U3CU3E4__this_2;
	// UnityEngine.SpriteRenderer[] PlayerHealth/<DamageAnimation>d__8::<srs>5__2
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* ___U3CsrsU3E5__2_3;
	// System.Int32 PlayerHealth/<DamageAnimation>d__8::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF, ___U3CU3E4__this_2)); }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsrsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF, ___U3CsrsU3E5__2_3)); }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* get_U3CsrsU3E5__2_3() const { return ___U3CsrsU3E5__2_3; }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF** get_address_of_U3CsrsU3E5__2_3() { return &___U3CsrsU3E5__2_3; }
	inline void set_U3CsrsU3E5__2_3(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* value)
	{
		___U3CsrsU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsrsU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// PortalTeleporter/<Teleport>d__4
struct U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF  : public RuntimeObject
{
public:
	// System.Int32 PortalTeleporter/<Teleport>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PortalTeleporter/<Teleport>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PortalTeleporter PortalTeleporter/<Teleport>d__4::<>4__this
	PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF, ___U3CU3E4__this_2)); }
	inline PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BlueReaperBehavior
struct BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single BlueReaperBehavior::speed
	float ___speed_4;
	// System.Single BlueReaperBehavior::attackRange
	float ___attackRange_5;
	// System.Single BlueReaperBehavior::enemyDetectionRange
	float ___enemyDetectionRange_6;
	// System.Single BlueReaperBehavior::playerDistance
	float ___playerDistance_7;
	// UnityEngine.Transform BlueReaperBehavior::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_8;
	// UnityEngine.Rigidbody2D BlueReaperBehavior::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// FlipSprite BlueReaperBehavior::flipSprite
	FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * ___flipSprite_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_attackRange_5() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___attackRange_5)); }
	inline float get_attackRange_5() const { return ___attackRange_5; }
	inline float* get_address_of_attackRange_5() { return &___attackRange_5; }
	inline void set_attackRange_5(float value)
	{
		___attackRange_5 = value;
	}

	inline static int32_t get_offset_of_enemyDetectionRange_6() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___enemyDetectionRange_6)); }
	inline float get_enemyDetectionRange_6() const { return ___enemyDetectionRange_6; }
	inline float* get_address_of_enemyDetectionRange_6() { return &___enemyDetectionRange_6; }
	inline void set_enemyDetectionRange_6(float value)
	{
		___enemyDetectionRange_6 = value;
	}

	inline static int32_t get_offset_of_playerDistance_7() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___playerDistance_7)); }
	inline float get_playerDistance_7() const { return ___playerDistance_7; }
	inline float* get_address_of_playerDistance_7() { return &___playerDistance_7; }
	inline void set_playerDistance_7(float value)
	{
		___playerDistance_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___player_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_8() const { return ___player_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_flipSprite_10() { return static_cast<int32_t>(offsetof(BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C, ___flipSprite_10)); }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * get_flipSprite_10() const { return ___flipSprite_10; }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C ** get_address_of_flipSprite_10() { return &___flipSprite_10; }
	inline void set_flipSprite_10(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * value)
	{
		___flipSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipSprite_10), (void*)value);
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// EvilWizardBehavior
struct EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single EvilWizardBehavior::speed
	float ___speed_4;
	// System.Single EvilWizardBehavior::attackRange
	float ___attackRange_5;
	// System.Single EvilWizardBehavior::enemyDetectionRange
	float ___enemyDetectionRange_6;
	// System.Single EvilWizardBehavior::playerDistance
	float ___playerDistance_7;
	// UnityEngine.Transform EvilWizardBehavior::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_8;
	// UnityEngine.Rigidbody2D EvilWizardBehavior::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// FlipSprite EvilWizardBehavior::flipSprite
	FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * ___flipSprite_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_attackRange_5() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___attackRange_5)); }
	inline float get_attackRange_5() const { return ___attackRange_5; }
	inline float* get_address_of_attackRange_5() { return &___attackRange_5; }
	inline void set_attackRange_5(float value)
	{
		___attackRange_5 = value;
	}

	inline static int32_t get_offset_of_enemyDetectionRange_6() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___enemyDetectionRange_6)); }
	inline float get_enemyDetectionRange_6() const { return ___enemyDetectionRange_6; }
	inline float* get_address_of_enemyDetectionRange_6() { return &___enemyDetectionRange_6; }
	inline void set_enemyDetectionRange_6(float value)
	{
		___enemyDetectionRange_6 = value;
	}

	inline static int32_t get_offset_of_playerDistance_7() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___playerDistance_7)); }
	inline float get_playerDistance_7() const { return ___playerDistance_7; }
	inline float* get_address_of_playerDistance_7() { return &___playerDistance_7; }
	inline void set_playerDistance_7(float value)
	{
		___playerDistance_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___player_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_8() const { return ___player_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_flipSprite_10() { return static_cast<int32_t>(offsetof(EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB, ___flipSprite_10)); }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * get_flipSprite_10() const { return ___flipSprite_10; }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C ** get_address_of_flipSprite_10() { return &___flipSprite_10; }
	inline void set_flipSprite_10(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * value)
	{
		___flipSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipSprite_10), (void*)value);
	}
};


// GoblinBehavior
struct GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single GoblinBehavior::speed
	float ___speed_4;
	// System.Single GoblinBehavior::attackRange
	float ___attackRange_5;
	// System.Single GoblinBehavior::enemyDetectionRange
	float ___enemyDetectionRange_6;
	// System.Single GoblinBehavior::playerDistance
	float ___playerDistance_7;
	// UnityEngine.Transform GoblinBehavior::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_8;
	// UnityEngine.Rigidbody2D GoblinBehavior::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// FlipSprite GoblinBehavior::flipSprite
	FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * ___flipSprite_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_attackRange_5() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___attackRange_5)); }
	inline float get_attackRange_5() const { return ___attackRange_5; }
	inline float* get_address_of_attackRange_5() { return &___attackRange_5; }
	inline void set_attackRange_5(float value)
	{
		___attackRange_5 = value;
	}

	inline static int32_t get_offset_of_enemyDetectionRange_6() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___enemyDetectionRange_6)); }
	inline float get_enemyDetectionRange_6() const { return ___enemyDetectionRange_6; }
	inline float* get_address_of_enemyDetectionRange_6() { return &___enemyDetectionRange_6; }
	inline void set_enemyDetectionRange_6(float value)
	{
		___enemyDetectionRange_6 = value;
	}

	inline static int32_t get_offset_of_playerDistance_7() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___playerDistance_7)); }
	inline float get_playerDistance_7() const { return ___playerDistance_7; }
	inline float* get_address_of_playerDistance_7() { return &___playerDistance_7; }
	inline void set_playerDistance_7(float value)
	{
		___playerDistance_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___player_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_8() const { return ___player_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_flipSprite_10() { return static_cast<int32_t>(offsetof(GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C, ___flipSprite_10)); }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * get_flipSprite_10() const { return ___flipSprite_10; }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C ** get_address_of_flipSprite_10() { return &___flipSprite_10; }
	inline void set_flipSprite_10(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * value)
	{
		___flipSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipSprite_10), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ReaperBehavior
struct ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single ReaperBehavior::speed
	float ___speed_4;
	// System.Single ReaperBehavior::attackRange
	float ___attackRange_5;
	// System.Single ReaperBehavior::enemyDetectionRange
	float ___enemyDetectionRange_6;
	// System.Single ReaperBehavior::playerDistance
	float ___playerDistance_7;
	// UnityEngine.Transform ReaperBehavior::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_8;
	// UnityEngine.Rigidbody2D ReaperBehavior::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// FlipSprite ReaperBehavior::flipSprite
	FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * ___flipSprite_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_attackRange_5() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___attackRange_5)); }
	inline float get_attackRange_5() const { return ___attackRange_5; }
	inline float* get_address_of_attackRange_5() { return &___attackRange_5; }
	inline void set_attackRange_5(float value)
	{
		___attackRange_5 = value;
	}

	inline static int32_t get_offset_of_enemyDetectionRange_6() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___enemyDetectionRange_6)); }
	inline float get_enemyDetectionRange_6() const { return ___enemyDetectionRange_6; }
	inline float* get_address_of_enemyDetectionRange_6() { return &___enemyDetectionRange_6; }
	inline void set_enemyDetectionRange_6(float value)
	{
		___enemyDetectionRange_6 = value;
	}

	inline static int32_t get_offset_of_playerDistance_7() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___playerDistance_7)); }
	inline float get_playerDistance_7() const { return ___playerDistance_7; }
	inline float* get_address_of_playerDistance_7() { return &___playerDistance_7; }
	inline void set_playerDistance_7(float value)
	{
		___playerDistance_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___player_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_8() const { return ___player_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_flipSprite_10() { return static_cast<int32_t>(offsetof(ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F, ___flipSprite_10)); }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * get_flipSprite_10() const { return ___flipSprite_10; }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C ** get_address_of_flipSprite_10() { return &___flipSprite_10; }
	inline void set_flipSprite_10(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * value)
	{
		___flipSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipSprite_10), (void*)value);
	}
};


// RougeKnightBehavior
struct RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single RougeKnightBehavior::speed
	float ___speed_4;
	// System.Single RougeKnightBehavior::attackRange
	float ___attackRange_5;
	// UnityEngine.Transform RougeKnightBehavior::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_6;
	// UnityEngine.Rigidbody2D RougeKnightBehavior::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_7;
	// FlipSprite RougeKnightBehavior::flipSprite
	FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * ___flipSprite_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_attackRange_5() { return static_cast<int32_t>(offsetof(RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11, ___attackRange_5)); }
	inline float get_attackRange_5() const { return ___attackRange_5; }
	inline float* get_address_of_attackRange_5() { return &___attackRange_5; }
	inline void set_attackRange_5(float value)
	{
		___attackRange_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11, ___player_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_6() const { return ___player_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11, ___rb_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_7), (void*)value);
	}

	inline static int32_t get_offset_of_flipSprite_8() { return static_cast<int32_t>(offsetof(RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11, ___flipSprite_8)); }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * get_flipSprite_8() const { return ___flipSprite_8; }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C ** get_address_of_flipSprite_8() { return &___flipSprite_8; }
	inline void set_flipSprite_8(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * value)
	{
		___flipSprite_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipSprite_8), (void*)value);
	}
};


// SlimeBehavior
struct SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single SlimeBehavior::speed
	float ___speed_4;
	// System.Single SlimeBehavior::attackRange
	float ___attackRange_5;
	// System.Single SlimeBehavior::enemyDetectionRange
	float ___enemyDetectionRange_6;
	// System.Single SlimeBehavior::playerDistance
	float ___playerDistance_7;
	// UnityEngine.Transform SlimeBehavior::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_8;
	// UnityEngine.Rigidbody2D SlimeBehavior::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// FlipSprite SlimeBehavior::flipSprite
	FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * ___flipSprite_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_attackRange_5() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___attackRange_5)); }
	inline float get_attackRange_5() const { return ___attackRange_5; }
	inline float* get_address_of_attackRange_5() { return &___attackRange_5; }
	inline void set_attackRange_5(float value)
	{
		___attackRange_5 = value;
	}

	inline static int32_t get_offset_of_enemyDetectionRange_6() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___enemyDetectionRange_6)); }
	inline float get_enemyDetectionRange_6() const { return ___enemyDetectionRange_6; }
	inline float* get_address_of_enemyDetectionRange_6() { return &___enemyDetectionRange_6; }
	inline void set_enemyDetectionRange_6(float value)
	{
		___enemyDetectionRange_6 = value;
	}

	inline static int32_t get_offset_of_playerDistance_7() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___playerDistance_7)); }
	inline float get_playerDistance_7() const { return ___playerDistance_7; }
	inline float* get_address_of_playerDistance_7() { return &___playerDistance_7; }
	inline void set_playerDistance_7(float value)
	{
		___playerDistance_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___player_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_8() const { return ___player_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_flipSprite_10() { return static_cast<int32_t>(offsetof(SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323, ___flipSprite_10)); }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * get_flipSprite_10() const { return ___flipSprite_10; }
	inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C ** get_address_of_flipSprite_10() { return &___flipSprite_10; }
	inline void set_flipSprite_10(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * value)
	{
		___flipSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipSprite_10), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Checkpoint
struct Checkpoint_t08A85562F7E5C088BFFF4CE96E0CF686C070FAEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameMaster Checkpoint::gameMaster
	GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * ___gameMaster_4;

public:
	inline static int32_t get_offset_of_gameMaster_4() { return static_cast<int32_t>(offsetof(Checkpoint_t08A85562F7E5C088BFFF4CE96E0CF686C070FAEE, ___gameMaster_4)); }
	inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * get_gameMaster_4() const { return ___gameMaster_4; }
	inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 ** get_address_of_gameMaster_4() { return &___gameMaster_4; }
	inline void set_gameMaster_4(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * value)
	{
		___gameMaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameMaster_4), (void*)value);
	}
};


// EnemyAttack
struct EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 EnemyAttack::attackDamage
	int32_t ___attackDamage_4;
	// UnityEngine.Vector3 EnemyAttack::attackOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___attackOffset_5;
	// System.Single EnemyAttack::attackRange
	float ___attackRange_6;
	// UnityEngine.LayerMask EnemyAttack::attackMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___attackMask_7;

public:
	inline static int32_t get_offset_of_attackDamage_4() { return static_cast<int32_t>(offsetof(EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2, ___attackDamage_4)); }
	inline int32_t get_attackDamage_4() const { return ___attackDamage_4; }
	inline int32_t* get_address_of_attackDamage_4() { return &___attackDamage_4; }
	inline void set_attackDamage_4(int32_t value)
	{
		___attackDamage_4 = value;
	}

	inline static int32_t get_offset_of_attackOffset_5() { return static_cast<int32_t>(offsetof(EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2, ___attackOffset_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_attackOffset_5() const { return ___attackOffset_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_attackOffset_5() { return &___attackOffset_5; }
	inline void set_attackOffset_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___attackOffset_5 = value;
	}

	inline static int32_t get_offset_of_attackRange_6() { return static_cast<int32_t>(offsetof(EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2, ___attackRange_6)); }
	inline float get_attackRange_6() const { return ___attackRange_6; }
	inline float* get_address_of_attackRange_6() { return &___attackRange_6; }
	inline void set_attackRange_6(float value)
	{
		___attackRange_6 = value;
	}

	inline static int32_t get_offset_of_attackMask_7() { return static_cast<int32_t>(offsetof(EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2, ___attackMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_attackMask_7() const { return ___attackMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_attackMask_7() { return &___attackMask_7; }
	inline void set_attackMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___attackMask_7 = value;
	}
};


// EnemyHealth
struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 EnemyHealth::health
	int32_t ___health_4;
	// UnityEngine.GameObject EnemyHealth::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_5;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_deathEffect_5() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___deathEffect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_5() const { return ___deathEffect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_5() { return &___deathEffect_5; }
	inline void set_deathEffect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_5), (void*)value);
	}
};


// EnemyPatrol
struct EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyPatrol::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Rigidbody2D EnemyPatrol::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}
};


// EnemySounds
struct EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource EnemySounds::blueReaperSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___blueReaperSound_4;
	// UnityEngine.AudioSource EnemySounds::goblinSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___goblinSound_5;
	// UnityEngine.AudioSource EnemySounds::slimeSound1
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___slimeSound1_6;
	// UnityEngine.AudioSource EnemySounds::slimeSound2
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___slimeSound2_7;
	// UnityEngine.AudioSource EnemySounds::slimeSound3
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___slimeSound3_8;
	// UnityEngine.AudioSource EnemySounds::reaperBossSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___reaperBossSound_9;
	// UnityEngine.AudioSource EnemySounds::evilWizardSound1
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___evilWizardSound1_10;
	// UnityEngine.AudioSource EnemySounds::evilWizardSound2
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___evilWizardSound2_11;
	// UnityEngine.AudioSource EnemySounds::rougeKnightSound1
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___rougeKnightSound1_12;
	// UnityEngine.AudioSource EnemySounds::rougeKnightSound2
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___rougeKnightSound2_13;
	// UnityEngine.AudioSource EnemySounds::rougeKnightSound3
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___rougeKnightSound3_14;

public:
	inline static int32_t get_offset_of_blueReaperSound_4() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___blueReaperSound_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_blueReaperSound_4() const { return ___blueReaperSound_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_blueReaperSound_4() { return &___blueReaperSound_4; }
	inline void set_blueReaperSound_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___blueReaperSound_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blueReaperSound_4), (void*)value);
	}

	inline static int32_t get_offset_of_goblinSound_5() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___goblinSound_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_goblinSound_5() const { return ___goblinSound_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_goblinSound_5() { return &___goblinSound_5; }
	inline void set_goblinSound_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___goblinSound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goblinSound_5), (void*)value);
	}

	inline static int32_t get_offset_of_slimeSound1_6() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___slimeSound1_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_slimeSound1_6() const { return ___slimeSound1_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_slimeSound1_6() { return &___slimeSound1_6; }
	inline void set_slimeSound1_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___slimeSound1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slimeSound1_6), (void*)value);
	}

	inline static int32_t get_offset_of_slimeSound2_7() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___slimeSound2_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_slimeSound2_7() const { return ___slimeSound2_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_slimeSound2_7() { return &___slimeSound2_7; }
	inline void set_slimeSound2_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___slimeSound2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slimeSound2_7), (void*)value);
	}

	inline static int32_t get_offset_of_slimeSound3_8() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___slimeSound3_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_slimeSound3_8() const { return ___slimeSound3_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_slimeSound3_8() { return &___slimeSound3_8; }
	inline void set_slimeSound3_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___slimeSound3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slimeSound3_8), (void*)value);
	}

	inline static int32_t get_offset_of_reaperBossSound_9() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___reaperBossSound_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_reaperBossSound_9() const { return ___reaperBossSound_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_reaperBossSound_9() { return &___reaperBossSound_9; }
	inline void set_reaperBossSound_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___reaperBossSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reaperBossSound_9), (void*)value);
	}

	inline static int32_t get_offset_of_evilWizardSound1_10() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___evilWizardSound1_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_evilWizardSound1_10() const { return ___evilWizardSound1_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_evilWizardSound1_10() { return &___evilWizardSound1_10; }
	inline void set_evilWizardSound1_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___evilWizardSound1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___evilWizardSound1_10), (void*)value);
	}

	inline static int32_t get_offset_of_evilWizardSound2_11() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___evilWizardSound2_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_evilWizardSound2_11() const { return ___evilWizardSound2_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_evilWizardSound2_11() { return &___evilWizardSound2_11; }
	inline void set_evilWizardSound2_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___evilWizardSound2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___evilWizardSound2_11), (void*)value);
	}

	inline static int32_t get_offset_of_rougeKnightSound1_12() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___rougeKnightSound1_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_rougeKnightSound1_12() const { return ___rougeKnightSound1_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_rougeKnightSound1_12() { return &___rougeKnightSound1_12; }
	inline void set_rougeKnightSound1_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___rougeKnightSound1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rougeKnightSound1_12), (void*)value);
	}

	inline static int32_t get_offset_of_rougeKnightSound2_13() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___rougeKnightSound2_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_rougeKnightSound2_13() const { return ___rougeKnightSound2_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_rougeKnightSound2_13() { return &___rougeKnightSound2_13; }
	inline void set_rougeKnightSound2_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___rougeKnightSound2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rougeKnightSound2_13), (void*)value);
	}

	inline static int32_t get_offset_of_rougeKnightSound3_14() { return static_cast<int32_t>(offsetof(EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D, ___rougeKnightSound3_14)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_rougeKnightSound3_14() const { return ___rougeKnightSound3_14; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_rougeKnightSound3_14() { return &___rougeKnightSound3_14; }
	inline void set_rougeKnightSound3_14(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___rougeKnightSound3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rougeKnightSound3_14), (void*)value);
	}
};


// EvilWizardAttack
struct EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 EvilWizardAttack::attackDamage
	int32_t ___attackDamage_4;
	// UnityEngine.Vector3 EvilWizardAttack::attackOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___attackOffset_5;
	// System.Single EvilWizardAttack::attackRange
	float ___attackRange_6;
	// UnityEngine.LayerMask EvilWizardAttack::attackMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___attackMask_7;

public:
	inline static int32_t get_offset_of_attackDamage_4() { return static_cast<int32_t>(offsetof(EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C, ___attackDamage_4)); }
	inline int32_t get_attackDamage_4() const { return ___attackDamage_4; }
	inline int32_t* get_address_of_attackDamage_4() { return &___attackDamage_4; }
	inline void set_attackDamage_4(int32_t value)
	{
		___attackDamage_4 = value;
	}

	inline static int32_t get_offset_of_attackOffset_5() { return static_cast<int32_t>(offsetof(EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C, ___attackOffset_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_attackOffset_5() const { return ___attackOffset_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_attackOffset_5() { return &___attackOffset_5; }
	inline void set_attackOffset_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___attackOffset_5 = value;
	}

	inline static int32_t get_offset_of_attackRange_6() { return static_cast<int32_t>(offsetof(EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C, ___attackRange_6)); }
	inline float get_attackRange_6() const { return ___attackRange_6; }
	inline float* get_address_of_attackRange_6() { return &___attackRange_6; }
	inline void set_attackRange_6(float value)
	{
		___attackRange_6 = value;
	}

	inline static int32_t get_offset_of_attackMask_7() { return static_cast<int32_t>(offsetof(EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C, ___attackMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_attackMask_7() const { return ___attackMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_attackMask_7() { return &___attackMask_7; }
	inline void set_attackMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___attackMask_7 = value;
	}
};


// EvilWizardHealth
struct EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 EvilWizardHealth::health
	int32_t ___health_4;
	// UnityEngine.GameObject EvilWizardHealth::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_5;
	// UnityEngine.GameObject EvilWizardHealth::portal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___portal_6;
	// System.Boolean EvilWizardHealth::isInvulnerable
	bool ___isInvulnerable_7;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_deathEffect_5() { return static_cast<int32_t>(offsetof(EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991, ___deathEffect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_5() const { return ___deathEffect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_5() { return &___deathEffect_5; }
	inline void set_deathEffect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_5), (void*)value);
	}

	inline static int32_t get_offset_of_portal_6() { return static_cast<int32_t>(offsetof(EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991, ___portal_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_portal_6() const { return ___portal_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_portal_6() { return &___portal_6; }
	inline void set_portal_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___portal_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portal_6), (void*)value);
	}

	inline static int32_t get_offset_of_isInvulnerable_7() { return static_cast<int32_t>(offsetof(EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991, ___isInvulnerable_7)); }
	inline bool get_isInvulnerable_7() const { return ___isInvulnerable_7; }
	inline bool* get_address_of_isInvulnerable_7() { return &___isInvulnerable_7; }
	inline void set_isInvulnerable_7(bool value)
	{
		___isInvulnerable_7 = value;
	}
};


// FlipSprite
struct FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform FlipSprite::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_4;
	// System.Boolean FlipSprite::isFlipped
	bool ___isFlipped_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C, ___player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_4() const { return ___player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_isFlipped_5() { return static_cast<int32_t>(offsetof(FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C, ___isFlipped_5)); }
	inline bool get_isFlipped_5() const { return ___isFlipped_5; }
	inline bool* get_address_of_isFlipped_5() { return &___isFlipped_5; }
	inline void set_isFlipped_5(bool value)
	{
		___isFlipped_5 = value;
	}
};


// GameMaster
struct GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 GameMaster::lastCheckPointPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lastCheckPointPosition_5;

public:
	inline static int32_t get_offset_of_lastCheckPointPosition_5() { return static_cast<int32_t>(offsetof(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5, ___lastCheckPointPosition_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lastCheckPointPosition_5() const { return ___lastCheckPointPosition_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lastCheckPointPosition_5() { return &___lastCheckPointPosition_5; }
	inline void set_lastCheckPointPosition_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lastCheckPointPosition_5 = value;
	}
};

struct GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_StaticFields
{
public:
	// GameMaster GameMaster::instance
	GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_StaticFields, ___instance_4)); }
	inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * get_instance_4() const { return ___instance_4; }
	inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider HealthBar::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_4;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_4() const { return ___slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_4), (void*)value);
	}
};


// HeartPickup
struct HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerHealth HeartPickup::playerHealth
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * ___playerHealth_4;
	// HealthBar HeartPickup::healthBar
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___healthBar_5;
	// System.Int32 HeartPickup::healthAddAmount
	int32_t ___healthAddAmount_6;
	// UnityEngine.AudioSource HeartPickup::heartPickupSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___heartPickupSound_7;

public:
	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A, ___playerHealth_4)); }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * get_playerHealth_4() const { return ___playerHealth_4; }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 ** get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * value)
	{
		___playerHealth_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerHealth_4), (void*)value);
	}

	inline static int32_t get_offset_of_healthBar_5() { return static_cast<int32_t>(offsetof(HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A, ___healthBar_5)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_healthBar_5() const { return ___healthBar_5; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_healthBar_5() { return &___healthBar_5; }
	inline void set_healthBar_5(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___healthBar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBar_5), (void*)value);
	}

	inline static int32_t get_offset_of_healthAddAmount_6() { return static_cast<int32_t>(offsetof(HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A, ___healthAddAmount_6)); }
	inline int32_t get_healthAddAmount_6() const { return ___healthAddAmount_6; }
	inline int32_t* get_address_of_healthAddAmount_6() { return &___healthAddAmount_6; }
	inline void set_healthAddAmount_6(int32_t value)
	{
		___healthAddAmount_6 = value;
	}

	inline static int32_t get_offset_of_heartPickupSound_7() { return static_cast<int32_t>(offsetof(HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A, ___heartPickupSound_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_heartPickupSound_7() const { return ___heartPickupSound_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_heartPickupSound_7() { return &___heartPickupSound_7; }
	inline void set_heartPickupSound_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___heartPickupSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartPickupSound_7), (void*)value);
	}
};


// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerCamera
struct PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform PlayerCamera::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_4;
	// System.Single PlayerCamera::cameraDistance
	float ___cameraDistance_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC, ___player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_4() const { return ___player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraDistance_5() { return static_cast<int32_t>(offsetof(PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC, ___cameraDistance_5)); }
	inline float get_cameraDistance_5() const { return ___cameraDistance_5; }
	inline float* get_address_of_cameraDistance_5() { return &___cameraDistance_5; }
	inline void set_cameraDistance_5(float value)
	{
		___cameraDistance_5 = value;
	}
};


// PlayerHealth
struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlayerHealth::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 PlayerHealth::currentHealth
	int32_t ___currentHealth_5;
	// UnityEngine.GameObject PlayerHealth::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_6;
	// HealthBar PlayerHealth::healthBar
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___healthBar_7;
	// UnityEngine.AudioSource PlayerHealth::playerDamageSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___playerDamageSound_8;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___currentHealth_5)); }
	inline int32_t get_currentHealth_5() const { return ___currentHealth_5; }
	inline int32_t* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(int32_t value)
	{
		___currentHealth_5 = value;
	}

	inline static int32_t get_offset_of_deathEffect_6() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___deathEffect_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_6() const { return ___deathEffect_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_6() { return &___deathEffect_6; }
	inline void set_deathEffect_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_6), (void*)value);
	}

	inline static int32_t get_offset_of_healthBar_7() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___healthBar_7)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_healthBar_7() const { return ___healthBar_7; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_healthBar_7() { return &___healthBar_7; }
	inline void set_healthBar_7(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___healthBar_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBar_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerDamageSound_8() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___playerDamageSound_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_playerDamageSound_8() const { return ___playerDamageSound_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_playerDamageSound_8() { return &___playerDamageSound_8; }
	inline void set_playerDamageSound_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___playerDamageSound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDamageSound_8), (void*)value);
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D PlayerMovement::rigidBody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidBody_4;
	// System.Single PlayerMovement::horizontalDirection
	float ___horizontalDirection_5;
	// System.Single PlayerMovement::movementSpeed
	float ___movementSpeed_6;
	// System.Single PlayerMovement::jumpForce
	float ___jumpForce_7;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_8;
	// UnityEngine.Transform PlayerMovement::feetPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___feetPosition_9;
	// System.Single PlayerMovement::checkRadius
	float ___checkRadius_10;
	// UnityEngine.LayerMask PlayerMovement::whatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatIsGround_11;
	// System.Boolean PlayerMovement::canDoubleJump
	bool ___canDoubleJump_12;
	// UnityEngine.Animator PlayerMovement::myAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___myAnimator_13;

public:
	inline static int32_t get_offset_of_rigidBody_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___rigidBody_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidBody_4() const { return ___rigidBody_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidBody_4() { return &___rigidBody_4; }
	inline void set_rigidBody_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidBody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_4), (void*)value);
	}

	inline static int32_t get_offset_of_horizontalDirection_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___horizontalDirection_5)); }
	inline float get_horizontalDirection_5() const { return ___horizontalDirection_5; }
	inline float* get_address_of_horizontalDirection_5() { return &___horizontalDirection_5; }
	inline void set_horizontalDirection_5(float value)
	{
		___horizontalDirection_5 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___movementSpeed_6)); }
	inline float get_movementSpeed_6() const { return ___movementSpeed_6; }
	inline float* get_address_of_movementSpeed_6() { return &___movementSpeed_6; }
	inline void set_movementSpeed_6(float value)
	{
		___movementSpeed_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_isGrounded_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isGrounded_8)); }
	inline bool get_isGrounded_8() const { return ___isGrounded_8; }
	inline bool* get_address_of_isGrounded_8() { return &___isGrounded_8; }
	inline void set_isGrounded_8(bool value)
	{
		___isGrounded_8 = value;
	}

	inline static int32_t get_offset_of_feetPosition_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___feetPosition_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_feetPosition_9() const { return ___feetPosition_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_feetPosition_9() { return &___feetPosition_9; }
	inline void set_feetPosition_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___feetPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feetPosition_9), (void*)value);
	}

	inline static int32_t get_offset_of_checkRadius_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___checkRadius_10)); }
	inline float get_checkRadius_10() const { return ___checkRadius_10; }
	inline float* get_address_of_checkRadius_10() { return &___checkRadius_10; }
	inline void set_checkRadius_10(float value)
	{
		___checkRadius_10 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___whatIsGround_11)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatIsGround_11() const { return ___whatIsGround_11; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatIsGround_11() { return &___whatIsGround_11; }
	inline void set_whatIsGround_11(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatIsGround_11 = value;
	}

	inline static int32_t get_offset_of_canDoubleJump_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___canDoubleJump_12)); }
	inline bool get_canDoubleJump_12() const { return ___canDoubleJump_12; }
	inline bool* get_address_of_canDoubleJump_12() { return &___canDoubleJump_12; }
	inline void set_canDoubleJump_12(bool value)
	{
		___canDoubleJump_12 = value;
	}

	inline static int32_t get_offset_of_myAnimator_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___myAnimator_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_myAnimator_13() const { return ___myAnimator_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_myAnimator_13() { return &___myAnimator_13; }
	inline void set_myAnimator_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___myAnimator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myAnimator_13), (void*)value);
	}
};


// PlayerPosition
struct PlayerPosition_t9D9F6DA5997202DDAB30171D40EB758B0D8161B8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameMaster PlayerPosition::gameMaster
	GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * ___gameMaster_4;

public:
	inline static int32_t get_offset_of_gameMaster_4() { return static_cast<int32_t>(offsetof(PlayerPosition_t9D9F6DA5997202DDAB30171D40EB758B0D8161B8, ___gameMaster_4)); }
	inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * get_gameMaster_4() const { return ___gameMaster_4; }
	inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 ** get_address_of_gameMaster_4() { return &___gameMaster_4; }
	inline void set_gameMaster_4(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * value)
	{
		___gameMaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameMaster_4), (void*)value);
	}
};


// PortalTeleporter
struct PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PortalTeleporter::PortalDestination
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PortalDestination_4;
	// UnityEngine.GameObject PortalTeleporter::Player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Player_5;
	// UnityEngine.AudioSource PortalTeleporter::teleportSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___teleportSound_6;

public:
	inline static int32_t get_offset_of_PortalDestination_4() { return static_cast<int32_t>(offsetof(PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF, ___PortalDestination_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PortalDestination_4() const { return ___PortalDestination_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PortalDestination_4() { return &___PortalDestination_4; }
	inline void set_PortalDestination_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PortalDestination_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PortalDestination_4), (void*)value);
	}

	inline static int32_t get_offset_of_Player_5() { return static_cast<int32_t>(offsetof(PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF, ___Player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Player_5() const { return ___Player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Player_5() { return &___Player_5; }
	inline void set_Player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_5), (void*)value);
	}

	inline static int32_t get_offset_of_teleportSound_6() { return static_cast<int32_t>(offsetof(PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF, ___teleportSound_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_teleportSound_6() const { return ___teleportSound_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_teleportSound_6() { return &___teleportSound_6; }
	inline void set_teleportSound_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___teleportSound_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportSound_6), (void*)value);
	}
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Projectile::speed
	float ___speed_4;
	// System.Single Projectile::distance
	float ___distance_5;
	// System.Int32 Projectile::damage
	int32_t ___damage_6;
	// System.Single Projectile::lifeTime
	float ___lifeTime_7;
	// UnityEngine.LayerMask Projectile::whatIsSolid
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatIsSolid_8;
	// UnityEngine.GameObject Projectile::destroyEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___destroyEffect_9;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_damage_6() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___damage_6)); }
	inline int32_t get_damage_6() const { return ___damage_6; }
	inline int32_t* get_address_of_damage_6() { return &___damage_6; }
	inline void set_damage_6(int32_t value)
	{
		___damage_6 = value;
	}

	inline static int32_t get_offset_of_lifeTime_7() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___lifeTime_7)); }
	inline float get_lifeTime_7() const { return ___lifeTime_7; }
	inline float* get_address_of_lifeTime_7() { return &___lifeTime_7; }
	inline void set_lifeTime_7(float value)
	{
		___lifeTime_7 = value;
	}

	inline static int32_t get_offset_of_whatIsSolid_8() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___whatIsSolid_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatIsSolid_8() const { return ___whatIsSolid_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatIsSolid_8() { return &___whatIsSolid_8; }
	inline void set_whatIsSolid_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatIsSolid_8 = value;
	}

	inline static int32_t get_offset_of_destroyEffect_9() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___destroyEffect_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_destroyEffect_9() const { return ___destroyEffect_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_destroyEffect_9() { return &___destroyEffect_9; }
	inline void set_destroyEffect_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___destroyEffect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyEffect_9), (void*)value);
	}
};


// ReaperHealth
struct ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ReaperHealth::health
	int32_t ___health_4;
	// UnityEngine.GameObject ReaperHealth::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_5;
	// UnityEngine.GameObject ReaperHealth::portal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___portal_6;
	// System.Boolean ReaperHealth::isInvulnerable
	bool ___isInvulnerable_7;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_deathEffect_5() { return static_cast<int32_t>(offsetof(ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD, ___deathEffect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_5() const { return ___deathEffect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_5() { return &___deathEffect_5; }
	inline void set_deathEffect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_5), (void*)value);
	}

	inline static int32_t get_offset_of_portal_6() { return static_cast<int32_t>(offsetof(ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD, ___portal_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_portal_6() const { return ___portal_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_portal_6() { return &___portal_6; }
	inline void set_portal_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___portal_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portal_6), (void*)value);
	}

	inline static int32_t get_offset_of_isInvulnerable_7() { return static_cast<int32_t>(offsetof(ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD, ___isInvulnerable_7)); }
	inline bool get_isInvulnerable_7() const { return ___isInvulnerable_7; }
	inline bool* get_address_of_isInvulnerable_7() { return &___isInvulnerable_7; }
	inline void set_isInvulnerable_7(bool value)
	{
		___isInvulnerable_7 = value;
	}
};


// RougeKnightHealth
struct RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 RougeKnightHealth::health
	int32_t ___health_4;
	// UnityEngine.GameObject RougeKnightHealth::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_5;
	// UnityEngine.GameObject RougeKnightHealth::portal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___portal_6;
	// System.Boolean RougeKnightHealth::isInvulnerable
	bool ___isInvulnerable_7;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_deathEffect_5() { return static_cast<int32_t>(offsetof(RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB, ___deathEffect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_5() const { return ___deathEffect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_5() { return &___deathEffect_5; }
	inline void set_deathEffect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_5), (void*)value);
	}

	inline static int32_t get_offset_of_portal_6() { return static_cast<int32_t>(offsetof(RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB, ___portal_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_portal_6() const { return ___portal_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_portal_6() { return &___portal_6; }
	inline void set_portal_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___portal_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portal_6), (void*)value);
	}

	inline static int32_t get_offset_of_isInvulnerable_7() { return static_cast<int32_t>(offsetof(RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB, ___isInvulnerable_7)); }
	inline bool get_isInvulnerable_7() const { return ___isInvulnerable_7; }
	inline bool* get_address_of_isInvulnerable_7() { return &___isInvulnerable_7; }
	inline void set_isInvulnerable_7(bool value)
	{
		___isInvulnerable_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VaseBreak
struct VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 VaseBreak::health
	int32_t ___health_4;
	// UnityEngine.GameObject VaseBreak::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_5;
	// UnityEngine.GameObject VaseBreak::dropHeart
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dropHeart_6;
	// UnityEngine.AudioSource VaseBreak::vaseBreakSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___vaseBreakSound_7;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_deathEffect_5() { return static_cast<int32_t>(offsetof(VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548, ___deathEffect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_5() const { return ___deathEffect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_5() { return &___deathEffect_5; }
	inline void set_deathEffect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_5), (void*)value);
	}

	inline static int32_t get_offset_of_dropHeart_6() { return static_cast<int32_t>(offsetof(VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548, ___dropHeart_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dropHeart_6() const { return ___dropHeart_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dropHeart_6() { return &___dropHeart_6; }
	inline void set_dropHeart_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dropHeart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropHeart_6), (void*)value);
	}

	inline static int32_t get_offset_of_vaseBreakSound_7() { return static_cast<int32_t>(offsetof(VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548, ___vaseBreakSound_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_vaseBreakSound_7() const { return ___vaseBreakSound_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_vaseBreakSound_7() { return &___vaseBreakSound_7; }
	inline void set_vaseBreakSound_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___vaseBreakSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vaseBreakSound_7), (void*)value);
	}
};


// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Weapon::offset
	float ___offset_4;
	// UnityEngine.Transform Weapon::shotPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shotPoint_5;
	// UnityEngine.GameObject Weapon::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_6;
	// System.Single Weapon::timeBtwShots
	float ___timeBtwShots_7;
	// System.Single Weapon::startTimeBtwShots
	float ___startTimeBtwShots_8;
	// UnityEngine.SpriteRenderer Weapon::spriteRender
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRender_9;

public:
	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___offset_4)); }
	inline float get_offset_4() const { return ___offset_4; }
	inline float* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(float value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_shotPoint_5() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___shotPoint_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shotPoint_5() const { return ___shotPoint_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shotPoint_5() { return &___shotPoint_5; }
	inline void set_shotPoint_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shotPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shotPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_projectile_6() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___projectile_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_6() const { return ___projectile_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_6() { return &___projectile_6; }
	inline void set_projectile_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeBtwShots_7() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___timeBtwShots_7)); }
	inline float get_timeBtwShots_7() const { return ___timeBtwShots_7; }
	inline float* get_address_of_timeBtwShots_7() { return &___timeBtwShots_7; }
	inline void set_timeBtwShots_7(float value)
	{
		___timeBtwShots_7 = value;
	}

	inline static int32_t get_offset_of_startTimeBtwShots_8() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___startTimeBtwShots_8)); }
	inline float get_startTimeBtwShots_8() const { return ___startTimeBtwShots_8; }
	inline float* get_address_of_startTimeBtwShots_8() { return &___startTimeBtwShots_8; }
	inline void set_startTimeBtwShots_8(float value)
	{
		___startTimeBtwShots_8 = value;
	}

	inline static int32_t get_offset_of_spriteRender_9() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___spriteRender_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRender_9() const { return ___spriteRender_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRender_9() { return &___spriteRender_9; }
	inline void set_spriteRender_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRender_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRender_9), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * m_Items[1];

public:
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<FlipSprite>()
inline FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void FlipSprite::LookAtPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D (FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameMaster>()
inline GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerHealth>()
inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// System.Void EnemyHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Die_mA8BDF6A041B21ADF726398BF92C35859405C552F (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean EnemyPatrol::isFacingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyPatrol_isFacingRight_mF4CF84723BEF6F2B5EC6A6E880A7810BA9CADB0C (EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void EvilWizardHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth_Die_m0EFE4B66AC35FB6F061FAD9BA5EF04102654341E (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, const RuntimeMethod* method);
// System.Void EvilWizardHealth::SpawnPortal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth_SpawnPortal_mC85AC1AAF53D5F41EBFC3069BB53431EE3A3B29D (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<PlayerHealth>()
inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * Object_FindObjectOfType_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m126F7C26DFD6F0D2016E0E369DCBCCD2448F9743 (const RuntimeMethod* method)
{
	return ((  PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void HealthBar::SetHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void HealthBar::SetMaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerHealth::DamageAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_DamageAnimation_m8EE838AD2ABB5A47A124C6D155786915924377CE (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void PlayerHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Die_mBF97B09DFB17C4BBA27719DD2FFA1F4221E8CAB3 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Void PlayerHealth/<DamageAnimation>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAnimationU3Ed__8__ctor_mAE545FEE7A9EE4E1C91A36E352AC5B3E3BE400EE (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void PlayerMovement::handleRunning(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_handleRunning_mA02FC98C186F8CFB1F87358EB4E24D856EB52F17 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, float ___horizontalDirection0, const RuntimeMethod* method);
// System.Void PlayerMovement::handleDoubleJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_handleDoubleJump_m1C8F140E4FFFE51E47EDBB81E277FD23C8CEAE95 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PlayerMovement::jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_jump_mD0E1C576A3D5749DCFADBB373AFCB36005AF98D4 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator PortalTeleporter::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PortalTeleporter_Teleport_m3FCB8AF002D4671E162AAD7BC97EB4A72630BF05 (PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * __this, const RuntimeMethod* method);
// System.Void PortalTeleporter/<Teleport>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportU3Ed__4__ctor_mEC450A87698E50BF7DA59539DFF0AD4E7A02A2BC (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<EnemyHealth>()
inline EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * Component_GetComponent_TisEnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_mFA394F56F9684A3353BC09E894CB19D395433C87 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void EnemyHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_TakeDamage_m2F6DE42CE55261674A25F0DC5AF1A6C9931F8BC0 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, int32_t ___damage0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ReaperHealth>()
inline ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * Component_GetComponent_TisReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD_m9418A2AF8F4948E6D763B4CDAB0CA6730797D329 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void ReaperHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth_TakeDamage_m57A239C4B54F3F4964D67BC4D68219A007103474 (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, int32_t ___damage0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<EvilWizardHealth>()
inline EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * Component_GetComponent_TisEvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991_mB3ABA3A02E9A74CD46CFD3EADCCE94AB52A20BED (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void EvilWizardHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth_TakeDamage_m260D154DDE43D6461291F7C8F79EDABBAFD3D761 (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, int32_t ___damage0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<RougeKnightHealth>()
inline RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * Component_GetComponent_TisRougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB_m1C4F4329D7A3545EAC0CE540ACBDE5362E463641 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void RougeKnightHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth_TakeDamage_m4207254DF835E63E142A388DD776545185D379B1 (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, int32_t ___damage0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<VaseBreak>()
inline VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * Component_GetComponent_TisVaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548_mB4420ED29E78AF378A36E1230BD58EAD72454001 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void VaseBreak::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VaseBreak_TakeDamage_mCAD01CAE8BF76E1D6FDEA30FB2216D2809FC91C7 (VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Void Projectile::DestroyProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_DestroyProjectile_m4E98F8A498B9336961F69F70DDA9E5F32F00F98F (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void ReaperHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth_Die_m5DB6145676B9E3F18BDF17B4BA8C7B948E7F1901 (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, const RuntimeMethod* method);
// System.Void ReaperHealth::SpawnPortal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth_SpawnPortal_m4DDC98E846AF17763670ED7C5BCF0131F1AECA2A (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Void RougeKnightHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth_Die_m60297094F18E1018096F3B635D423E636D3B7F0D (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, const RuntimeMethod* method);
// System.Void RougeKnightHealth::SpawnPortal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth_SpawnPortal_mD9D3E40B82B55F57D03F698F6013ED4A53D8F3E1 (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, const RuntimeMethod* method);
// System.Void VaseBreak::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VaseBreak_Die_m1CC87F02C6594EE6ACEECA0ECB1B1B30811955A0 (VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* Component_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m50269907279F157FE9ACEA5A766CFEBFB9ADA708 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlueReaperBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueReaperBehavior_OnStateEnter_m40D8EC19CB1E15F6D289774E9586C625CFE3D232 (BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_8(L_1);
		// rb = animator.GetComponent<Rigidbody2D>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ___animator0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_9(L_3);
		// flipSprite = animator.GetComponent<FlipSprite>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_5;
		L_5 = Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6(L_4, /*hidden argument*/Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		__this->set_flipSprite_10(L_5);
		// }
		return;
	}
}
// System.Void BlueReaperBehavior::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueReaperBehavior_OnStateUpdate_mCD8F068FB2F90F81E46EE7BC6A92BB5BDB5FDB6E (BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66DCFEF18076AC123D1B6AD2D00BC04BE0901CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// flipSprite.LookAtPlayer();
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_0 = __this->get_flipSprite_10();
		FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D(L_0, /*hidden argument*/NULL);
		// playerDistance = Vector3.Distance(animator.transform.position, player.position);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_3, L_5, /*hidden argument*/NULL);
		__this->set_playerDistance_7(L_6);
		// if (playerDistance < enemyDetectionRange)
		float L_7 = __this->get_playerDistance_7();
		float L_8 = __this->get_enemyDetectionRange_6();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_007b;
		}
	}
	{
		// animator.transform.position = Vector2.MoveTowards(animator.transform.position, player.position, speed * Time.deltaTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_4();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (Vector2.Distance(player.position, rb.position) <= attackRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_23, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_24, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_attackRange_5();
		if ((!(((float)L_27) <= ((float)L_28))))
		{
			goto IL_00ae;
		}
	}
	{
		// animator.SetTrigger("blueReaperAttack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29 = ___animator0;
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_29, _stringLiteralF66DCFEF18076AC123D1B6AD2D00BC04BE0901CF, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void BlueReaperBehavior::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueReaperBehavior_OnStateExit_mD0BF54F45DB665E902A7000A560216FB9E77B27D (BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66DCFEF18076AC123D1B6AD2D00BC04BE0901CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.ResetTrigger("blueReaperAttack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_0, _stringLiteralF66DCFEF18076AC123D1B6AD2D00BC04BE0901CF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlueReaperBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueReaperBehavior__ctor_m765B20E1678A3C1CB5E121981126623F774E94A6 (BlueReaperBehavior_t57E7FEADAB3FFB40365A5276DE34712F5F4AEF5C * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Checkpoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_Start_m8624C188C5224A405489CD73B7D8624900B8CEF9 (Checkpoint_t08A85562F7E5C088BFFF4CE96E0CF686C070FAEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D0C71E2F7D78FCB6660AB6BF222E82D2C75DB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameMaster = GameObject.FindGameObjectWithTag("GameMaster").GetComponent<GameMaster>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB0D0C71E2F7D78FCB6660AB6BF222E82D2C75DB9, /*hidden argument*/NULL);
		GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * L_1;
		L_1 = GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65(L_0, /*hidden argument*/GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65_RuntimeMethod_var);
		__this->set_gameMaster_4(L_1);
		// }
		return;
	}
}
// System.Void Checkpoint::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_OnTriggerEnter2D_mCA2D259D3A067B724519EB3F5C00E04E36D14BD8 (Checkpoint_t08A85562F7E5C088BFFF4CE96E0CF686C070FAEE * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// gameMaster.lastCheckPointPosition = transform.position;
		GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * L_2 = __this->get_gameMaster_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		L_2->set_lastCheckPointPosition_5(L_5);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Checkpoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint__ctor_mFB52D3D23CF883C22ED75CA1AA39D6E2E48E3FC4 (Checkpoint_t08A85562F7E5C088BFFF4CE96E0CF686C070FAEE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyAttack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack_Attack_mD617E82A4959EAD9B9CF5CB87DAF251A1297916A (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		// pos += transform.right * attackOffset.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_attackOffset_5();
		float L_5 = L_4->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_6, /*hidden argument*/NULL);
		// pos += transform.up * attackOffset.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_attackOffset_5();
		float L_11 = L_10->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_12, /*hidden argument*/NULL);
		// Collider2D colInfo = Physics2D.OverlapCircle(pos, attackRange, attackMask);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_attackRange_6();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_16 = __this->get_attackMask_7();
		int32_t L_17;
		L_17 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18;
		L_18 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_14, L_15, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// if (colInfo != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		// colInfo.GetComponent<PlayerHealth>().TakeDamage(attackDamage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_21 = V_0;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_22;
		L_22 = Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77(L_21, /*hidden argument*/Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var);
		int32_t L_23 = __this->get_attackDamage_4();
		PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7(L_22, L_23, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void EnemyAttack::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack_OnDrawGizmosSelected_m4AFFCA22A402650E1D0FF6A0910488BC1F9CE809 (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		// pos += transform.right * attackOffset.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_attackOffset_5();
		float L_5 = L_4->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_6, /*hidden argument*/NULL);
		// pos += transform.up * attackOffset.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_attackOffset_5();
		float L_11 = L_10->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_12, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(pos, attackRange);
		float L_14 = __this->get_attackRange_6();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack__ctor_mC9F235199C3D3A8DE4EB00B0AD46F796B241FE08 (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, const RuntimeMethod* method)
{
	{
		// public int attackDamage = 20;
		__this->set_attackDamage_4(((int32_t)20));
		// public float attackRange = 1f;
		__this->set_attackRange_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_TakeDamage_m2F6DE42CE55261674A25F0DC5AF1A6C9931F8BC0 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		int32_t L_0 = __this->get_health_4();
		int32_t L_1 = ___damage0;
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// }
		return;
	}
}
// System.Void EnemyHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Update_mBCBBEB935216A5E61B4F9A5F6833A09301C0E8DF (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	{
		// if (health <= 0)
		int32_t L_0 = __this->get_health_4();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// Die();
		EnemyHealth_Die_mA8BDF6A041B21ADF726398BF92C35859405C552F(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Die_mA8BDF6A041B21ADF726398BF92C35859405C552F (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deathEffect_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// Destroy(death, 0.5f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_4, (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth__ctor_mF9FFC7A91A2AB12182655557BC05309E64E17AFE (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyPatrol::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatrol_Start_mD52F61D289161DDFC35E35FC48664E552DD47E94 (EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		// }
		return;
	}
}
// System.Void EnemyPatrol::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatrol_Update_m0A832259C4773BB72D40AB4532DE8905BFEADA87 (EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91 * __this, const RuntimeMethod* method)
{
	{
		// if (isFacingRight())
		bool L_0;
		L_0 = EnemyPatrol_isFacingRight_mF4CF84723BEF6F2B5EC6A6E880A7810BA9CADB0C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// rb.velocity = new Vector2(moveSpeed, 0f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_5();
		float L_2 = __this->get_moveSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// rb.velocity = new Vector2(-moveSpeed, 0f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_5();
		float L_5 = __this->get_moveSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((-L_5)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean EnemyPatrol::isFacingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyPatrol_isFacingRight_mF4CF84723BEF6F2B5EC6A6E880A7810BA9CADB0C (EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return transform.localScale.x > Mathf.Epsilon;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		float L_3 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		return (bool)((((float)L_2) > ((float)L_3))? 1 : 0);
	}
}
// System.Void EnemyPatrol::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatrol_OnTriggerExit2D_m9DD2B9F07E49669C12DB8875BBF38CB348FCCA93 (EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector2(-(Mathf.Sign(rb.velocity.x)), transform.localScale.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		float L_4;
		L_4 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((-L_4)), L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyPatrol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatrol__ctor_m20480FF116A957E904A3561DD5217CA4F4ECA066 (EnemyPatrol_tFC40C7BF87B27465495B54BD1A150C0CFE182C91 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float moveSpeed = 1f;
		__this->set_moveSpeed_4((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemySounds::blueReaperAttackSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_blueReaperAttackSound_m59147A7F72E7EE142DCB57D79EFAE5A2BA410001 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// blueReaperSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_blueReaperSound_4();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::goblinAttackSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_goblinAttackSound_mC8DE11DBBC1EB5080166543025617578F1B31319 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// goblinSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_goblinSound_5();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::slimeAttackSound1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_slimeAttackSound1_m3EEE0D068A4E7A0E2037227E05F6741D772983BC (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// slimeSound1.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_slimeSound1_6();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::slimeAttackSound2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_slimeAttackSound2_m76CC94F665C9BB02FAB1ACBB649D309AA8ADC034 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// slimeSound2.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_slimeSound2_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::slimeAttackSound3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_slimeAttackSound3_mE278109DA8AABA6B2F06AAE2371D5007483D9E6E (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// slimeSound3.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_slimeSound3_8();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::reaperBossAttack1Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_reaperBossAttack1Sound_mF71985A750D0DA30DE06ABABD1952A945CCCBA51 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// reaperBossSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_reaperBossSound_9();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::evilWizardBossAttack1Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_evilWizardBossAttack1Sound_mB28F885DF70D2B894035EB19285CC1749E557B3C (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// evilWizardSound1.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_evilWizardSound1_10();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::evilWizardBossAttack2Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_evilWizardBossAttack2Sound_m34973B210625A5DC7254E46454897D7D0867F0EE (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// evilWizardSound2.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_evilWizardSound2_11();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::rougeKnightAttack1Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_rougeKnightAttack1Sound_m596FDC800284A99D2DC55E584E5F27C4C0CFB886 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// rougeKnightSound1.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_rougeKnightSound1_12();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::rougeKnightAttack2Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_rougeKnightAttack2Sound_m528786A7B5BDED4B7AEBB83D3851DAAFC0ACE947 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// rougeKnightSound2.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_rougeKnightSound2_13();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::rougeKnightAttack3Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds_rougeKnightAttack3Sound_m437668878BD54A492DF7947B9034076CFFE86C29 (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		// rougeKnightSound3.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_rougeKnightSound3_14();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySounds__ctor_mFCD30D1DA8793F8A6C831B38D90A416081D9E1AD (EnemySounds_tBAE514478D7D411026A496D7923FC2ED8F427F6D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EvilWizardAttack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardAttack_Attack_m8CE4A1B341F4ED39885A270C468F3EF3C331EA2F (EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_0 = NULL;
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		// pos += transform.right * attackOffset.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_attackOffset_5();
		float L_5 = L_4->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_6, /*hidden argument*/NULL);
		// pos += transform.up * attackOffset.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_attackOffset_5();
		float L_11 = L_10->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_12, /*hidden argument*/NULL);
		// Collider2D colInfo = Physics2D.OverlapCircle(pos, attackRange, attackMask);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_attackRange_6();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_16 = __this->get_attackMask_7();
		int32_t L_17;
		L_17 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18;
		L_18 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_14, L_15, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// if (colInfo != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		// colInfo.GetComponent<PlayerHealth>().TakeDamage(attackDamage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_21 = V_0;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_22;
		L_22 = Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77(L_21, /*hidden argument*/Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var);
		int32_t L_23 = __this->get_attackDamage_4();
		PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7(L_22, L_23, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void EvilWizardAttack::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardAttack_OnDrawGizmosSelected_mF7D73C81D3E63FDD59F3BC0504A2B0551917A195 (EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C * __this, const RuntimeMethod* method)
{
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		// pos += transform.right * attackOffset.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_attackOffset_5();
		float L_5 = L_4->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_6, /*hidden argument*/NULL);
		// pos += transform.up * attackOffset.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_attackOffset_5();
		float L_11 = L_10->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_12, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(pos, attackRange);
		float L_14 = __this->get_attackRange_6();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EvilWizardAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardAttack__ctor_mBA7309B1D021CB7DC23B0844837A0C8533230640 (EvilWizardAttack_tF0DEA2434B3CA9BC74333AC4FB4C3635B633689C * __this, const RuntimeMethod* method)
{
	{
		// public int attackDamage = 20;
		__this->set_attackDamage_4(((int32_t)20));
		// public float attackRange = 1f;
		__this->set_attackRange_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EvilWizardBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardBehavior_OnStateEnter_mB7AB5482C96FBA1CF1285FFD9778B9EB0DB5EEDE (EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_8(L_1);
		// rb = animator.GetComponent<Rigidbody2D>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ___animator0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_9(L_3);
		// flipSprite = animator.GetComponent<FlipSprite>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_5;
		L_5 = Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6(L_4, /*hidden argument*/Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		__this->set_flipSprite_10(L_5);
		// }
		return;
	}
}
// System.Void EvilWizardBehavior::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardBehavior_OnStateUpdate_m6F4D77DA25670E614C14630E0E1362D423F279E3 (EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8BA29DC3071BBDD78E1F76B45627A51399EFB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// flipSprite.LookAtPlayer();
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_0 = __this->get_flipSprite_10();
		FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D(L_0, /*hidden argument*/NULL);
		// playerDistance = Vector3.Distance(animator.transform.position, player.position);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_3, L_5, /*hidden argument*/NULL);
		__this->set_playerDistance_7(L_6);
		// if (playerDistance < enemyDetectionRange)
		float L_7 = __this->get_playerDistance_7();
		float L_8 = __this->get_enemyDetectionRange_6();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_007b;
		}
	}
	{
		// animator.transform.position = Vector2.MoveTowards(animator.transform.position, player.position, speed * Time.deltaTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_4();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (Vector2.Distance(player.position, rb.position) <= attackRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_23, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_24, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_attackRange_5();
		if ((!(((float)L_27) <= ((float)L_28))))
		{
			goto IL_00ae;
		}
	}
	{
		// animator.SetTrigger("evilWizardAttack1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29 = ___animator0;
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_29, _stringLiteral1E8BA29DC3071BBDD78E1F76B45627A51399EFB2, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void EvilWizardBehavior::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardBehavior_OnStateExit_m820F210AE43AB9EEA8C2C91D0E9CC17B715B904B (EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8BA29DC3071BBDD78E1F76B45627A51399EFB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.ResetTrigger("evilWizardAttack1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_0, _stringLiteral1E8BA29DC3071BBDD78E1F76B45627A51399EFB2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EvilWizardBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardBehavior__ctor_mC96697902B25ACC3FFA6022AD214B691FC9D238B (EvilWizardBehavior_tCB2E90C18C941FE224042D9F2883B5A0DE9B7CFB * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EvilWizardHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth_TakeDamage_m260D154DDE43D6461291F7C8F79EDABBAFD3D761 (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA30A36661ED3A7CB0047B2A283389EC1103E89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isInvulnerable)
		bool L_0 = __this->get_isInvulnerable_7();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// health -= damage;
		int32_t L_1 = __this->get_health_4();
		int32_t L_2 = ___damage0;
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// if (health <= 40)
		int32_t L_3 = __this->get_health_4();
		if ((((int32_t)L_3) > ((int32_t)((int32_t)40))))
		{
			goto IL_0032;
		}
	}
	{
		// GetComponent<Animator>().SetBool("isEnraged", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteralAFA30A36661ED3A7CB0047B2A283389EC1103E89, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (health <= 0)
		int32_t L_5 = __this->get_health_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// Die();
		EvilWizardHealth_Die_m0EFE4B66AC35FB6F061FAD9BA5EF04102654341E(__this, /*hidden argument*/NULL);
		// SpawnPortal();
		EvilWizardHealth_SpawnPortal_mC85AC1AAF53D5F41EBFC3069BB53431EE3A3B29D(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void EvilWizardHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth_Die_m0EFE4B66AC35FB6F061FAD9BA5EF04102654341E (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deathEffect_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// Destroy(death, 3f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_4, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EvilWizardHealth::SpawnPortal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth_SpawnPortal_mC85AC1AAF53D5F41EBFC3069BB53431EE3A3B29D (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(portal, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_portal_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EvilWizardHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvilWizardHealth__ctor_mB2067ED2EE8B6D955B0AFF57E6B1EA28C74F0CA0 (EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * __this, const RuntimeMethod* method)
{
	{
		// public int health = 500;
		__this->set_health_4(((int32_t)500));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlipSprite::LookAtPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D (FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 flipped = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// flipped.z *= -1f;
		float* L_2 = (&V_0)->get_address_of_z_4();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f)));
		// if (transform.position.x > player.position.x && isFlipped)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		if ((!(((float)L_7) > ((float)L_10))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_11 = __this->get_isFlipped_5();
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		// transform.localScale = flipped;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_12, L_13, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 180, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_14, L_15, /*hidden argument*/NULL);
		// isFlipped = false;
		__this->set_isFlipped_5((bool)0);
		// }
		return;
	}

IL_0079:
	{
		// else if (transform.position.x < player.position.x && !isFlipped)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		if ((!(((float)L_18) < ((float)L_21))))
		{
			goto IL_00d5;
		}
	}
	{
		bool L_22 = __this->get_isFlipped_5();
		if (L_22)
		{
			goto IL_00d5;
		}
	}
	{
		// transform.localScale = flipped;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_23, L_24, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_25, L_26, /*hidden argument*/NULL);
		// isFlipped = true;
		__this->set_isFlipped_5((bool)1);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void FlipSprite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipSprite__ctor_mB674F6EBA371EA7EAC7263477A3D51EFC82D9AD6 (FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameMaster::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMaster_Awake_m01A0BBF85D2201337C50604F7463E7C5CF4FE70C (GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * L_0 = ((GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_StaticFields*)il2cpp_codegen_static_fields_for(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		((GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_StaticFields*)il2cpp_codegen_static_fields_for(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(instance);
		GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * L_2 = ((GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_StaticFields*)il2cpp_codegen_static_fields_for(GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameMaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMaster__ctor_m58B1D49103D1BA8FE4D6F77F44B437041AD90FED (GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoblinBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoblinBehavior_OnStateEnter_mDECCA9CAE4ADF09CCBA03FCE52A07063E579CD42 (GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_8(L_1);
		// rb = animator.GetComponent<Rigidbody2D>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ___animator0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_9(L_3);
		// flipSprite = animator.GetComponent<FlipSprite>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_5;
		L_5 = Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6(L_4, /*hidden argument*/Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		__this->set_flipSprite_10(L_5);
		// }
		return;
	}
}
// System.Void GoblinBehavior::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoblinBehavior_OnStateUpdate_mA2DB63E95814BAE515E071E83FEB2FA40E0DDD1A (GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93C0D1AE357E9D3E92442C2269D6040BA6996A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// flipSprite.LookAtPlayer();
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_0 = __this->get_flipSprite_10();
		FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D(L_0, /*hidden argument*/NULL);
		// playerDistance = Vector3.Distance(animator.transform.position, player.position);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_3, L_5, /*hidden argument*/NULL);
		__this->set_playerDistance_7(L_6);
		// if (playerDistance < enemyDetectionRange)
		float L_7 = __this->get_playerDistance_7();
		float L_8 = __this->get_enemyDetectionRange_6();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_007b;
		}
	}
	{
		// animator.transform.position = Vector2.MoveTowards(animator.transform.position, player.position, speed * Time.deltaTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_4();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (Vector2.Distance(player.position, rb.position) <= attackRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_23, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_24, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_attackRange_5();
		if ((!(((float)L_27) <= ((float)L_28))))
		{
			goto IL_00ae;
		}
	}
	{
		// animator.SetTrigger("goblinAttack1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29 = ___animator0;
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_29, _stringLiteralC93C0D1AE357E9D3E92442C2269D6040BA6996A5, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void GoblinBehavior::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoblinBehavior_OnStateExit_m56295BE1ADE6B78470D0CA7990BB718391888119 (GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93C0D1AE357E9D3E92442C2269D6040BA6996A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.ResetTrigger("goblinAttack1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_0, _stringLiteralC93C0D1AE357E9D3E92442C2269D6040BA6996A5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoblinBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoblinBehavior__ctor_m8DF0981792D0F9D2B41C24FBD2DA0A185BD60B7A (GoblinBehavior_tD811847A7B2FBF7F9B25E7A299B3318AA291EE6C * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HealthBar::SetHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method)
{
	{
		// slider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		int32_t L_1 = ___health0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void HealthBar::SetMaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method)
{
	{
		// slider.maxValue = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		int32_t L_1 = ___health0;
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_0, ((float)((float)L_1)), /*hidden argument*/NULL);
		// slider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_slider_4();
		int32_t L_3 = ___health0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)((float)L_3)));
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HeartPickup::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeartPickup_Awake_m56302AB37C3D2C16A10A016313F7CD056D2FCB56 (HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m126F7C26DFD6F0D2016E0E369DCBCCD2448F9743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerHealth = FindObjectOfType<PlayerHealth>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m126F7C26DFD6F0D2016E0E369DCBCCD2448F9743(/*hidden argument*/Object_FindObjectOfType_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m126F7C26DFD6F0D2016E0E369DCBCCD2448F9743_RuntimeMethod_var);
		__this->set_playerHealth_4(L_0);
		// }
		return;
	}
}
// System.Void HeartPickup::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeartPickup_OnTriggerEnter2D_mCCFD754F041B71BCADDE8359E45C72F06B954543 (HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (playerHealth.currentHealth < 100)
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_0 = __this->get_playerHealth_4();
		int32_t L_1 = L_0->get_currentHealth_5();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)100))))
		{
			goto IL_004b;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// healthBar.SetHealth(playerHealth.currentHealth += healthAddAmount);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_3 = __this->get_healthBar_5();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_4 = __this->get_playerHealth_4();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_5 = L_4;
		int32_t L_6 = L_5->get_currentHealth_5();
		int32_t L_7 = __this->get_healthAddAmount_6();
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		V_0 = L_8;
		L_5->set_currentHealth_5(L_8);
		int32_t L_9 = V_0;
		HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463(L_3, L_9, /*hidden argument*/NULL);
		// heartPickupSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = __this->get_heartPickupSound_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_10, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void HeartPickup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeartPickup__ctor_m40D56416F181D014395A62307CFDC43976F1D290 (HeartPickup_tB76A860D6B2882B13075C7FE1FF9D4C467D0865A * __this, const RuntimeMethod* method)
{
	{
		// public int healthAddAmount = 20;
		__this->set_healthAddAmount_6(((int32_t)20));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayGame_m96A3CE2743BCB00B665AA3AC575AE4EBD9ED40B0 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_QuitGame_m9F32E266C6F6CE345067D062258362159D267030 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E2CA28D75C34C7E4F25A005301425EA07BCC33B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Application Quit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5E2CA28D75C34C7E4F25A005301425EA07BCC33B, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_Awake_mFC8DAAD4D4B389CFEA1631D60025EF3AD247E627 (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<UnityEngine.Camera>().orthographicSize = ((Screen.height / 2) / cameraDistance);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_2 = __this->get_cameraDistance_5();
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_0, ((float)((float)((float)((float)((int32_t)((int32_t)L_1/(int32_t)2))))/(float)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerCamera::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_FixedUpdate_mA4EE465F8B2970E0C1E43ADC4DC1DAF0DF3A073A (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector3(player.position.x, player.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_3, L_6, L_9, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera__ctor_mEC7D02708FA0EE1799559A768E8CA74A42E3C26F (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Start_m78FD812EF2B87E9EC7A405A1BBB6ECB27BFF3589 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->get_maxHealth_4();
		__this->set_currentHealth_5(L_0);
		// healthBar.SetMaxHealth(maxHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_1 = __this->get_healthBar_7();
		int32_t L_2 = __this->get_maxHealth_4();
		HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// currentHealth -= damage;
		int32_t L_0 = __this->get_currentHealth_5();
		int32_t L_1 = ___damage0;
		__this->set_currentHealth_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// healthBar.SetHealth(currentHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_2 = __this->get_healthBar_7();
		int32_t L_3 = __this->get_currentHealth_5();
		HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463(L_2, L_3, /*hidden argument*/NULL);
		// playerDamageSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_playerDamageSound_8();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_4, /*hidden argument*/NULL);
		// StartCoroutine(DamageAnimation());
		RuntimeObject* L_5;
		L_5 = PlayerHealth_DamageAnimation_m8EE838AD2ABB5A47A124C6D155786915924377CE(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// if (currentHealth <= 0)
		int32_t L_7 = __this->get_currentHealth_5();
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// Die();
		PlayerHealth_Die_mBF97B09DFB17C4BBA27719DD2FFA1F4221E8CAB3(__this, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void PlayerHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Die_mBF97B09DFB17C4BBA27719DD2FFA1F4221E8CAB3 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerHealth::DamageAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_DamageAnimation_m8EE838AD2ABB5A47A124C6D155786915924377CE (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * L_0 = (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF *)il2cpp_codegen_object_new(U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF_il2cpp_TypeInfo_var);
		U3CDamageAnimationU3Ed__8__ctor_mAE545FEE7A9EE4E1C91A36E352AC5B3E3BE400EE(L_0, 0, /*hidden argument*/NULL);
		U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth__ctor_mE9AF3CA69205909E44287664BEAE503EC43875F1 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHealth = 100;
		__this->set_maxHealth_4(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigidBody_4(L_0);
		// myAnimator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_myAnimator_13(L_1);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// horizontalDirection = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_horizontalDirection_5(L_0);
		// handleRunning(horizontalDirection);
		float L_1 = __this->get_horizontalDirection_5();
		PlayerMovement_handleRunning_mA02FC98C186F8CFB1F87358EB4E24D856EB52F17(__this, L_1, /*hidden argument*/NULL);
		// handleDoubleJump();
		PlayerMovement_handleDoubleJump_m1C8F140E4FFFE51E47EDBB81E277FD23C8CEAE95(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::handleRunning(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_handleRunning_mA02FC98C186F8CFB1F87358EB4E24D856EB52F17 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, float ___horizontalDirection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rigidBody.velocity = new Vector2(horizontalDirection * movementSpeed, rigidBody.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidBody_4();
		float L_1 = ___horizontalDirection0;
		float L_2 = __this->get_movementSpeed_6();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rigidBody_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), L_5, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_6, /*hidden argument*/NULL);
		// if (horizontalDirection != 0 && !myAnimator.GetCurrentAnimatorStateInfo(0).IsName("jump"))
		float L_7 = ___horizontalDirection0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_006f;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_myAnimator_13();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_9;
		L_9 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_8, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10;
		L_10 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006f;
		}
	}
	{
		// myAnimator.SetBool("isRunning", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get_myAnimator_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_11, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, /*hidden argument*/NULL);
		// myAnimator.SetBool("jump", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_myAnimator_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_12, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0080;
	}

IL_006f:
	{
		// myAnimator.SetBool("isRunning", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = __this->get_myAnimator_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_13, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// if (horizontalDirection < 0)
		float L_14 = ___horizontalDirection0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_15, L_16, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// if (horizontalDirection > 0)
		float L_17 = ___horizontalDirection0;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, 180, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_18, L_19, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_jump_mD0E1C576A3D5749DCFADBB373AFCB36005AF98D4 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody.velocity = Vector2.up * jumpForce;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidBody_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_2 = __this->get_jumpForce_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_3, /*hidden argument*/NULL);
		// myAnimator.SetBool("jump", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_myAnimator_13();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::handleDoubleJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_handleDoubleJump_m1C8F140E4FFFE51E47EDBB81E277FD23C8CEAE95 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGrounded = Physics2D.OverlapCircle(feetPosition.position, checkRadius, whatIsGround);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_feetPosition_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_checkRadius_10();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_whatIsGround_11();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_2, L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		__this->set_isGrounded_8(L_7);
		// if (isGrounded == true && Input.GetKeyDown(KeyCode.Space))
		bool L_8 = __this->get_isGrounded_8();
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		bool L_9;
		L_9 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		// jump();
		PlayerMovement_jump_mD0E1C576A3D5749DCFADBB373AFCB36005AF98D4(__this, /*hidden argument*/NULL);
		// canDoubleJump = true;
		__this->set_canDoubleJump_12((bool)1);
	}

IL_004f:
	{
		// if (isGrounded == false && canDoubleJump == true && Input.GetKeyDown(KeyCode.Space))
		bool L_10 = __this->get_isGrounded_8();
		if (L_10)
		{
			goto IL_0075;
		}
	}
	{
		bool L_11 = __this->get_canDoubleJump_12();
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		bool L_12;
		L_12 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// jump();
		PlayerMovement_jump_mD0E1C576A3D5749DCFADBB373AFCB36005AF98D4(__this, /*hidden argument*/NULL);
		// canDoubleJump = false;
		__this->set_canDoubleJump_12((bool)0);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerPosition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPosition_Start_mD1FE6300CE255A402A04DF2DA9F66DF4FA0AF251 (PlayerPosition_t9D9F6DA5997202DDAB30171D40EB758B0D8161B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D0C71E2F7D78FCB6660AB6BF222E82D2C75DB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameMaster = GameObject.FindGameObjectWithTag("GameMaster").GetComponent<GameMaster>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB0D0C71E2F7D78FCB6660AB6BF222E82D2C75DB9, /*hidden argument*/NULL);
		GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * L_1;
		L_1 = GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65(L_0, /*hidden argument*/GameObject_GetComponent_TisGameMaster_t211F744990C51023489145C8C6065311ADEAC2A5_m3D3B7DAF077E6ECE6BC9B3F97A62349D9C286F65_RuntimeMethod_var);
		__this->set_gameMaster_4(L_1);
		// transform.position = gameMaster.lastCheckPointPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameMaster_t211F744990C51023489145C8C6065311ADEAC2A5 * L_3 = __this->get_gameMaster_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = L_3->get_lastCheckPointPosition_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerPosition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPosition_Update_m12E2BD6E303A9B77ABCF461A1AAF068D536695A7 (PlayerPosition_t9D9F6DA5997202DDAB30171D40EB758B0D8161B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1;
		L_1 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PlayerPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPosition__ctor_m571973EF37FEFCF11519854C14D464C32588BFE0 (PlayerPosition_t9D9F6DA5997202DDAB30171D40EB758B0D8161B8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PortalTeleporter::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PortalTeleporter_OnTriggerEnter2D_m839961C89FD88D77E7C8C56A4A3CF45EA53324C1 (PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// StartCoroutine(Teleport());
		RuntimeObject* L_4;
		L_4 = PortalTeleporter_Teleport_m3FCB8AF002D4671E162AAD7BC97EB4A72630BF05(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// teleportSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_teleportSound_6();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PortalTeleporter::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PortalTeleporter_Teleport_m3FCB8AF002D4671E162AAD7BC97EB4A72630BF05 (PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * L_0 = (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF *)il2cpp_codegen_object_new(U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF_il2cpp_TypeInfo_var);
		U3CTeleportU3Ed__4__ctor_mEC450A87698E50BF7DA59539DFF0AD4E7A02A2BC(L_0, 0, /*hidden argument*/NULL);
		U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PortalTeleporter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PortalTeleporter__ctor_mE468E6D470B681FF6C4E9E03936B40DE6B268B93 (PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Projectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Start_m065C53350564E17D5A0A0322FF064F8C9697DAB6 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDCADB1A42485A4C3B89A749CD0495313F10CDB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("DestroyProjectile", lifeTime);
		float L_0 = __this->get_lifeTime_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralDDCADB1A42485A4C3B89A749CD0495313F10CDB8, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_mFA394F56F9684A3353BC09E894CB19D395433C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991_mB3ABA3A02E9A74CD46CFD3EADCCE94AB52A20BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD_m9418A2AF8F4948E6D763B4CDAB0CA6730797D329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB_m1C4F4329D7A3545EAC0CE540ACBDE5362E463641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548_mB4420ED29E78AF378A36E1230BD58EAD72454001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114161166B354D9E8A8D7EECC082BC6C52578EE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral694FB035C8DE783EDEB5116B08F6EA69223E3E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA7319AC6C2D9E0AAA1616C63ECBA2EFDD91DB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D036608812BF1848A3A256FA8E9C9AFABEDB5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC885CA0BB0EE8309A7BBE65FBDA9E49EB94BFC95);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RaycastHit2D hitInfo = Physics2D.Raycast(transform.position, transform.up, distance, whatIsSolid);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_distance_5();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_7 = __this->get_whatIsSolid_8();
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_9;
		L_9 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_2, L_5, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (hitInfo.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10;
		L_10 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0139;
		}
	}
	{
		// if (hitInfo.collider.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		bool L_13;
		L_13 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_12, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		// hitInfo.collider.GetComponent<EnemyHealth>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14;
		L_14 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * L_15;
		L_15 = Component_GetComponent_TisEnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_mFA394F56F9684A3353BC09E894CB19D395433C87(L_14, /*hidden argument*/Component_GetComponent_TisEnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_mFA394F56F9684A3353BC09E894CB19D395433C87_RuntimeMethod_var);
		int32_t L_16 = __this->get_damage_6();
		EnemyHealth_TakeDamage_m2F6DE42CE55261674A25F0DC5AF1A6C9931F8BC0(L_15, L_16, /*hidden argument*/NULL);
		// }
		goto IL_0133;
	}

IL_0078:
	{
		// else if (hitInfo.collider.CompareTag("ReaperBoss"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17;
		L_17 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		bool L_18;
		L_18 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_17, _stringLiteralB4D036608812BF1848A3A256FA8E9C9AFABEDB5D, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b1;
		}
	}
	{
		// hitInfo.collider.GetComponent<ReaperHealth>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19;
		L_19 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * L_20;
		L_20 = Component_GetComponent_TisReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD_m9418A2AF8F4948E6D763B4CDAB0CA6730797D329(L_19, /*hidden argument*/Component_GetComponent_TisReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD_m9418A2AF8F4948E6D763B4CDAB0CA6730797D329_RuntimeMethod_var);
		int32_t L_21 = __this->get_damage_6();
		ReaperHealth_TakeDamage_m57A239C4B54F3F4964D67BC4D68219A007103474(L_20, L_21, /*hidden argument*/NULL);
		// Debug.Log("Reaper boss was hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral694FB035C8DE783EDEB5116B08F6EA69223E3E55, /*hidden argument*/NULL);
		// }
		goto IL_0133;
	}

IL_00b1:
	{
		// else if (hitInfo.collider.CompareTag("EvilWizardBoss"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_22;
		L_22 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		bool L_23;
		L_23 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_22, _stringLiteralC885CA0BB0EE8309A7BBE65FBDA9E49EB94BFC95, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00dd;
		}
	}
	{
		// hitInfo.collider.GetComponent<EvilWizardHealth>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24;
		L_24 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		EvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991 * L_25;
		L_25 = Component_GetComponent_TisEvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991_mB3ABA3A02E9A74CD46CFD3EADCCE94AB52A20BED(L_24, /*hidden argument*/Component_GetComponent_TisEvilWizardHealth_t2AD59588F8D901D11D33B9E1775A237C2982D991_mB3ABA3A02E9A74CD46CFD3EADCCE94AB52A20BED_RuntimeMethod_var);
		int32_t L_26 = __this->get_damage_6();
		EvilWizardHealth_TakeDamage_m260D154DDE43D6461291F7C8F79EDABBAFD3D761(L_25, L_26, /*hidden argument*/NULL);
		// }
		goto IL_0133;
	}

IL_00dd:
	{
		// else if (hitInfo.collider.CompareTag("RougeKnight"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27;
		L_27 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		bool L_28;
		L_28 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_27, _stringLiteral114161166B354D9E8A8D7EECC082BC6C52578EE9, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0109;
		}
	}
	{
		// hitInfo.collider.GetComponent<RougeKnightHealth>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_29;
		L_29 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * L_30;
		L_30 = Component_GetComponent_TisRougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB_m1C4F4329D7A3545EAC0CE540ACBDE5362E463641(L_29, /*hidden argument*/Component_GetComponent_TisRougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB_m1C4F4329D7A3545EAC0CE540ACBDE5362E463641_RuntimeMethod_var);
		int32_t L_31 = __this->get_damage_6();
		RougeKnightHealth_TakeDamage_m4207254DF835E63E142A388DD776545185D379B1(L_30, L_31, /*hidden argument*/NULL);
		// }
		goto IL_0133;
	}

IL_0109:
	{
		// else if (hitInfo.collider.CompareTag("Vase"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_32;
		L_32 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		bool L_33;
		L_33 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_32, _stringLiteral7DA7319AC6C2D9E0AAA1616C63ECBA2EFDD91DB6, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		// hitInfo.collider.GetComponent<VaseBreak>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_34;
		L_34 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * L_35;
		L_35 = Component_GetComponent_TisVaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548_mB4420ED29E78AF378A36E1230BD58EAD72454001(L_34, /*hidden argument*/Component_GetComponent_TisVaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548_mB4420ED29E78AF378A36E1230BD58EAD72454001_RuntimeMethod_var);
		int32_t L_36 = __this->get_damage_6();
		VaseBreak_TakeDamage_mCAD01CAE8BF76E1D6FDEA30FB2216D2809FC91C7(L_35, L_36, /*hidden argument*/NULL);
	}

IL_0133:
	{
		// DestroyProjectile();
		Projectile_DestroyProjectile_m4E98F8A498B9336961F69F70DDA9E5F32F00F98F(__this, /*hidden argument*/NULL);
	}

IL_0139:
	{
		// transform.Translate(Vector2.up * Time.deltaTime * speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_39;
		L_39 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_38, L_39, /*hidden argument*/NULL);
		float L_41 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		L_42 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_40, L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_42, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_37, L_43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::DestroyProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_DestroyProjectile_m4E98F8A498B9336961F69F70DDA9E5F32F00F98F (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(destroyEffect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_destroyEffect_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReaperBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperBehavior_OnStateEnter_m515E12DCAEC2ED7E178F364CE786C1C411334982 (ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_8(L_1);
		// rb = animator.GetComponent<Rigidbody2D>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ___animator0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_9(L_3);
		// flipSprite = animator.GetComponent<FlipSprite>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_5;
		L_5 = Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6(L_4, /*hidden argument*/Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		__this->set_flipSprite_10(L_5);
		// }
		return;
	}
}
// System.Void ReaperBehavior::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperBehavior_OnStateUpdate_m49166200E5AB5AAC05BFE46B3FE2900562CD5677 (ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A330A7BD15C1CED21087CC81D59932475870DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// flipSprite.LookAtPlayer();
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_0 = __this->get_flipSprite_10();
		FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D(L_0, /*hidden argument*/NULL);
		// playerDistance = Vector3.Distance(animator.transform.position, player.position);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_3, L_5, /*hidden argument*/NULL);
		__this->set_playerDistance_7(L_6);
		// if (playerDistance < enemyDetectionRange)
		float L_7 = __this->get_playerDistance_7();
		float L_8 = __this->get_enemyDetectionRange_6();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_007b;
		}
	}
	{
		// animator.transform.position = Vector2.MoveTowards(animator.transform.position, player.position, speed * Time.deltaTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_4();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (Vector2.Distance(player.position, rb.position) <= attackRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_23, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_24, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_attackRange_5();
		if ((!(((float)L_27) <= ((float)L_28))))
		{
			goto IL_00ae;
		}
	}
	{
		// animator.SetTrigger("reaperAttack1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29 = ___animator0;
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_29, _stringLiteral83A330A7BD15C1CED21087CC81D59932475870DA, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void ReaperBehavior::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperBehavior_OnStateExit_m6F30CFFBBA2AEBC2D48208F77769AB87BAF02901 (ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A330A7BD15C1CED21087CC81D59932475870DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.ResetTrigger("reaperAttack1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_0, _stringLiteral83A330A7BD15C1CED21087CC81D59932475870DA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReaperBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperBehavior__ctor_mD276A73C0E18E4D40CCCE80711EF4ACA092BBF8A (ReaperBehavior_tD3789EFC6A77E61604B4A3270B75FF6E1AC7621F * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReaperHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth_TakeDamage_m57A239C4B54F3F4964D67BC4D68219A007103474 (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// if (isInvulnerable)
		bool L_0 = __this->get_isInvulnerable_7();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// health -= damage;
		int32_t L_1 = __this->get_health_4();
		int32_t L_2 = ___damage0;
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// if (health <= 0)
		int32_t L_3 = __this->get_health_4();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// Die();
		ReaperHealth_Die_m5DB6145676B9E3F18BDF17B4BA8C7B948E7F1901(__this, /*hidden argument*/NULL);
		// SpawnPortal();
		ReaperHealth_SpawnPortal_m4DDC98E846AF17763670ED7C5BCF0131F1AECA2A(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void ReaperHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth_Die_m5DB6145676B9E3F18BDF17B4BA8C7B948E7F1901 (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deathEffect_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// Destroy(death, 3f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_4, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReaperHealth::SpawnPortal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth_SpawnPortal_m4DDC98E846AF17763670ED7C5BCF0131F1AECA2A (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(portal, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_portal_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ReaperHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaperHealth__ctor_mAF9702BA6BA60409273ECD59CC098DE6752DF074 (ReaperHealth_t0EAE2C86FB0574A48C16775612067FCE63CF5CBD * __this, const RuntimeMethod* method)
{
	{
		// public int health = 500;
		__this->set_health_4(((int32_t)500));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RougeKnightBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightBehavior_OnStateEnter_m236B46D03F8FC4DD00CC233C4DB11EDDD6C37E4E (RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_6(L_1);
		// rb = animator.GetComponent<Rigidbody2D>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ___animator0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_7(L_3);
		// flipSprite = animator.GetComponent<FlipSprite>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_5;
		L_5 = Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6(L_4, /*hidden argument*/Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		__this->set_flipSprite_8(L_5);
		// }
		return;
	}
}
// System.Void RougeKnightBehavior::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightBehavior_OnStateUpdate_mA89773497A249090D3A7A5D9155621F326D55110 (RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85110B196EFCDD7B128BF7CF380D40EAFD32D70D);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// flipSprite.LookAtPlayer();
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_0 = __this->get_flipSprite_8();
		FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D(L_0, /*hidden argument*/NULL);
		// Vector2 target = new Vector2(player.position.x, rb.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_player_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_3, L_6, /*hidden argument*/NULL);
		// Vector2 newPos = Vector2.MoveTowards(rb.position, target, speed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		float L_10 = __this->get_speed_4();
		float L_11;
		L_11 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_8, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_1 = L_12;
		// rb.MovePosition(newPos);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_1;
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_13, L_14, /*hidden argument*/NULL);
		// if (Vector2.Distance(player.position, rb.position) <= attackRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_player_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_18, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_17, L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_attackRange_5();
		if ((!(((float)L_20) <= ((float)L_21))))
		{
			goto IL_008f;
		}
	}
	{
		// animator.SetTrigger("rougeKnightAttack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_22 = ___animator0;
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_22, _stringLiteral85110B196EFCDD7B128BF7CF380D40EAFD32D70D, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void RougeKnightBehavior::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightBehavior_OnStateExit_mE8A2249010020D2BE50D1CB2B4755606EAE67021 (RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85110B196EFCDD7B128BF7CF380D40EAFD32D70D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.ResetTrigger("rougeKnightAttack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_0, _stringLiteral85110B196EFCDD7B128BF7CF380D40EAFD32D70D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RougeKnightBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightBehavior__ctor_mBEF71FC8B5A8CA5673E098BBA9DEE98424F7ECE7 (RougeKnightBehavior_t525D3EE76DA1C0B8C6DE4588B191DA85FE510F11 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1.5f;
		__this->set_speed_4((1.5f));
		// public float attackRange = 1f;
		__this->set_attackRange_5((1.0f));
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RougeKnightHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth_TakeDamage_m4207254DF835E63E142A388DD776545185D379B1 (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// if (isInvulnerable)
		bool L_0 = __this->get_isInvulnerable_7();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// health -= damage;
		int32_t L_1 = __this->get_health_4();
		int32_t L_2 = ___damage0;
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// if (health <= 0)
		int32_t L_3 = __this->get_health_4();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// Die();
		RougeKnightHealth_Die_m60297094F18E1018096F3B635D423E636D3B7F0D(__this, /*hidden argument*/NULL);
		// SpawnPortal();
		RougeKnightHealth_SpawnPortal_mD9D3E40B82B55F57D03F698F6013ED4A53D8F3E1(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void RougeKnightHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth_Die_m60297094F18E1018096F3B635D423E636D3B7F0D (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RougeKnightHealth::SpawnPortal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth_SpawnPortal_mD9D3E40B82B55F57D03F698F6013ED4A53D8F3E1 (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(portal, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_portal_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RougeKnightHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RougeKnightHealth__ctor_m91F70610B6B8065B5EC0E36B2F2DADAFBC8FBA30 (RougeKnightHealth_t470041FBF443C7F49A60B93098992641D733DDFB * __this, const RuntimeMethod* method)
{
	{
		// public int health = 500;
		__this->set_health_4(((int32_t)500));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlimeBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBehavior_OnStateEnter_m2B98886A26352083A7285BD2C4359CDC2493313E (SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_8(L_1);
		// rb = animator.GetComponent<Rigidbody2D>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ___animator0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_9(L_3);
		// flipSprite = animator.GetComponent<FlipSprite>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_5;
		L_5 = Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6(L_4, /*hidden argument*/Component_GetComponent_TisFlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C_mB296EE73E4BAD89D78A385B14439226618FAB8F6_RuntimeMethod_var);
		__this->set_flipSprite_10(L_5);
		// }
		return;
	}
}
// System.Void SlimeBehavior::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBehavior_OnStateUpdate_mCFE2F3606FF6768030A8EDDF473EC3478DDD24C1 (SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2EF6352A5A5A13C946A7DBFD388C11277AFFE8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// flipSprite.LookAtPlayer();
		FlipSprite_t0977E5F7E8304306E506458FB2C419712903D45C * L_0 = __this->get_flipSprite_10();
		FlipSprite_LookAtPlayer_m71D68F9AB749EAAFCFF86066B9AA9C8AB97DB52D(L_0, /*hidden argument*/NULL);
		// playerDistance = Vector3.Distance(animator.transform.position, player.position);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_3, L_5, /*hidden argument*/NULL);
		__this->set_playerDistance_7(L_6);
		// if (playerDistance < enemyDetectionRange)
		float L_7 = __this->get_playerDistance_7();
		float L_8 = __this->get_enemyDetectionRange_6();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_007b;
		}
	}
	{
		// animator.transform.position = Vector2.MoveTowards(animator.transform.position, player.position, speed * Time.deltaTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_4();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (Vector2.Distance(player.position, rb.position) <= attackRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_player_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_23, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_24, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_attackRange_5();
		if ((!(((float)L_27) <= ((float)L_28))))
		{
			goto IL_00ae;
		}
	}
	{
		// animator.SetTrigger("slimeAttack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29 = ___animator0;
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_29, _stringLiteralA2EF6352A5A5A13C946A7DBFD388C11277AFFE8F, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void SlimeBehavior::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBehavior_OnStateExit_m7876190F3BA9BEA5F926B003E3AD0F5180D3DC92 (SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2EF6352A5A5A13C946A7DBFD388C11277AFFE8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.ResetTrigger("slimeAttack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_0, _stringLiteralA2EF6352A5A5A13C946A7DBFD388C11277AFFE8F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SlimeBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBehavior__ctor_mFB8C0E8A42A691BA6FCE8EB55E425A85CD466FBC (SlimeBehavior_t8FA1BADD380995D10C0F30AD5C00AED2B510C323 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VaseBreak::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VaseBreak_TakeDamage_mCAD01CAE8BF76E1D6FDEA30FB2216D2809FC91C7 (VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		int32_t L_0 = __this->get_health_4();
		int32_t L_1 = ___damage0;
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// }
		return;
	}
}
// System.Void VaseBreak::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VaseBreak_Update_m6B8B92A761382593A13F3711C64F935118620AB0 (VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * __this, const RuntimeMethod* method)
{
	{
		// if (health <= 0)
		int32_t L_0 = __this->get_health_4();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// vaseBreakSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_vaseBreakSound_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// Die();
		VaseBreak_Die_m1CC87F02C6594EE6ACEECA0ECB1B1B30811955A0(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void VaseBreak::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VaseBreak_Die_m1CC87F02C6594EE6ACEECA0ECB1B1B30811955A0 (VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deathEffect_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// GameObject heart = Instantiate(dropHeart, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_dropHeart_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// Destroy(death, 0.4f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_4, (0.400000006f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VaseBreak::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VaseBreak__ctor_mCAD13158429463734A3141F1E8B2851EF0B32ED9 (VaseBreak_t65A8D0D43DB9DD3C1610079C846A2A9779D73548 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Weapon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Start_m7216819D285B8CDF5DD9E18550E3DF9F1DD76D5A (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRender = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRender_9(L_0);
		// }
		return;
	}
}
// System.Void Weapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Update_m03BCDE1EF0751A0F043AE300FD31A4BFA8B5D883 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37268CF950D234084B790803AB82F9698DCAF256);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D4D826BDF9EC1A40FBEDDE49D46F555ECD2F40);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2 difference = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// float rotZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		float L_10 = L_9.get_x_0();
		float L_11;
		L_11 = atan2f(L_8, L_10);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_11, (float)(57.2957802f)));
		// transform.rotation = Quaternion.Euler(0f, 0f, rotZ + offset);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_13 = V_1;
		float L_14 = __this->get_offset_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_15, /*hidden argument*/NULL);
		// if (rotZ < 89 && rotZ > -89)
		float L_16 = V_1;
		if ((!(((float)L_16) < ((float)(89.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		float L_17 = V_1;
		if ((!(((float)L_17) > ((float)(-89.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// Debug.Log("Facing Left");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral37268CF950D234084B790803AB82F9698DCAF256, /*hidden argument*/NULL);
		// spriteRender.flipY = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18 = __this->get_spriteRender_9();
		SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01(L_18, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_009d;
	}

IL_0087:
	{
		// Debug.Log("Facing Right");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral77D4D826BDF9EC1A40FBEDDE49D46F555ECD2F40, /*hidden argument*/NULL);
		// spriteRender.flipY = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_19 = __this->get_spriteRender_9();
		SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// if (timeBtwShots <= 0)
		float L_20 = __this->get_timeBtwShots_7();
		if ((!(((float)L_20) <= ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_21;
		L_21 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00fe;
		}
	}
	{
		// Instantiate(projectile, shotPoint.position, Quaternion.Euler(0f, 0f, rotZ + -90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_projectile_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = __this->get_shotPoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_add((float)L_25, (float)(-90.0f))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_22, L_24, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// timeBtwShots = startTimeBtwShots;
		float L_28 = __this->get_startTimeBtwShots_8();
		__this->set_timeBtwShots_7(L_28);
		// }
		return;
	}

IL_00ec:
	{
		// timeBtwShots -= Time.deltaTime;
		float L_29 = __this->get_timeBtwShots_7();
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeBtwShots_7(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
	}

IL_00fe:
	{
		// }
		return;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// public float offset = -180f;
		__this->set_offset_4((-180.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerHealth/<DamageAnimation>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAnimationU3Ed__8__ctor_mAE545FEE7A9EE4E1C91A36E352AC5B3E3BE400EE (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerHealth/<DamageAnimation>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAnimationU3Ed__8_System_IDisposable_Dispose_mF5DE2F959ACED7B49F4E56A3661F37FF1333A5D2 (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerHealth/<DamageAnimation>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDamageAnimationU3Ed__8_MoveNext_m6EF9DA7EDEB76A58CB6850EDDFE6BC7B9BB53A5C (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m50269907279F157FE9ACEA5A766CFEBFB9ADA708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * V_1 = NULL;
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* V_2 = NULL;
	int32_t V_3 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_00e0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpriteRenderer[] srs = GetComponentsInChildren<SpriteRenderer>();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_3 = V_1;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_4;
		L_4 = Component_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m50269907279F157FE9ACEA5A766CFEBFB9ADA708(L_3, /*hidden argument*/Component_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m50269907279F157FE9ACEA5A766CFEBFB9ADA708_RuntimeMethod_var);
		__this->set_U3CsrsU3E5__2_3(L_4);
		// for (int i = 0; i < 3; i++)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_00f7;
	}

IL_0041:
	{
		// foreach (SpriteRenderer sr in srs)
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_5 = __this->get_U3CsrsU3E5__2_3();
		V_2 = L_5;
		V_3 = 0;
		goto IL_006e;
	}

IL_004c:
	{
		// foreach (SpriteRenderer sr in srs)
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		// Color c = sr.color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10 = L_9;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// c.a = 0;
		(&V_4)->set_a_3((0.0f));
		// sr.color = c;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_4;
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_10, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_006e:
	{
		// foreach (SpriteRenderer sr in srs)
		int32_t L_14 = V_3;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		// yield return new WaitForSeconds(.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (SpriteRenderer sr in srs)
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_17 = __this->get_U3CsrsU3E5__2_3();
		V_2 = L_17;
		V_3 = 0;
		goto IL_00c1;
	}

IL_009f:
	{
		// foreach (SpriteRenderer sr in srs)
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		// Color c = sr.color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22 = L_21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		// c.a = 1;
		(&V_5)->set_a_3((1.0f));
		// sr.color = c;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = V_5;
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_22, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00c1:
	{
		// foreach (SpriteRenderer sr in srs)
		int32_t L_26 = V_3;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		// yield return new WaitForSeconds(.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00e0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < 3; i++)
		int32_t L_29 = __this->get_U3CiU3E5__3_4();
		V_3 = L_29;
		int32_t L_30 = V_3;
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
	}

IL_00f7:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_31 = __this->get_U3CiU3E5__3_4();
		if ((((int32_t)L_31) < ((int32_t)3)))
		{
			goto IL_0041;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerHealth/<DamageAnimation>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamageAnimationU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m050F91B4A2F7943752CF22C63608535906ED5599 (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerHealth/<DamageAnimation>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAnimationU3Ed__8_System_Collections_IEnumerator_Reset_m164053DE9BA18DC3236F7DFD9E7E8F36E49346C5 (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDamageAnimationU3Ed__8_System_Collections_IEnumerator_Reset_m164053DE9BA18DC3236F7DFD9E7E8F36E49346C5_RuntimeMethod_var)));
	}
}
// System.Object PlayerHealth/<DamageAnimation>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamageAnimationU3Ed__8_System_Collections_IEnumerator_get_Current_m2F2136697BDC5C79EF9946AAAE6355D1878ABE94 (U3CDamageAnimationU3Ed__8_tFF5AAA508D630145E6BB9EA1FEACB18F6D6A46FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PortalTeleporter/<Teleport>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportU3Ed__4__ctor_mEC450A87698E50BF7DA59539DFF0AD4E7A02A2BC (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PortalTeleporter/<Teleport>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportU3Ed__4_System_IDisposable_Dispose_m20C98E698114CBF33CAC798565CE2D08D1BE6345 (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PortalTeleporter/<Teleport>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTeleportU3Ed__4_MoveNext_m4B770F825F0422CACA9CCF8F9EFA37FD1FD7F45A (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Player.transform.position = new Vector2(PortalDestination.transform.position.x, PortalDestination.transform.position.y);
		PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_Player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * L_8 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_PortalDestination_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		PortalTeleporter_t2270CC54CFC89D2D59B4B2787DB707853F51B7AF * L_13 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_PortalDestination_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), L_12, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_18, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_19, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PortalTeleporter/<Teleport>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3D8CEA735BA9DD7CCFACD3B02B0E77306EA85ED4 (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PortalTeleporter/<Teleport>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportU3Ed__4_System_Collections_IEnumerator_Reset_m23C01FEEF777917E3BC021F9500CD8066D631ED6 (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTeleportU3Ed__4_System_Collections_IEnumerator_Reset_m23C01FEEF777917E3BC021F9500CD8066D631ED6_RuntimeMethod_var)));
	}
}
// System.Object PortalTeleporter/<Teleport>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportU3Ed__4_System_Collections_IEnumerator_get_Current_m90C137DB5169A815734284FD852350FC116B8561 (U3CTeleportU3Ed__4_tC92BA81EAD82A907C50214D916FBD31962EBFFCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
