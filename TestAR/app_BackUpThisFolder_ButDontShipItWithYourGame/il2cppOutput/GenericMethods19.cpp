﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21;
struct Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892;
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
struct Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3;
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04;
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9;
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
struct IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07;
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735;
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct KeyCollection_tA5A51C0A64CC4FC487C25315BEC828D08EA6BCCB;
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753;
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371;
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
struct Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct ValueCollection_tC846C7A49A946B31C69E32D006EC09E80202370B;
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct EntryU5BU5D_tFEDE80687C5442B827987E1B460C2287A5CDFB29;
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726;
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F;
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F;
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral537F955588893B499438876FBA6FFDB5522EB027;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsContext_Get_TisRuntimeObject_m0DA21A2EC755AAE4904ABB16FCF8C8E7062125B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD43D2E1699EA6FA4E146118FFFC8C401AFE8BA42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m13A3ECA61B031D94887181B9B50C294ADD8647C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m42F952D5AE9B49A054833911614120C670E67FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisRuntimeObject_mFDD3DADB7547F12419945DE07D5A0EFACED5266C_RuntimeMethod_var;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tFEDE80687C5442B827987E1B460C2287A5CDFB29* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tA5A51C0A64CC4FC487C25315BEC828D08EA6BCCB* ____keys_7;
	ValueCollection_tC846C7A49A946B31C69E32D006EC09E80202370B* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer_0;
};

struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	int32_t ____count_9;
	int32_t ____lastIndex_10;
	int32_t ____freeList_11;
	RuntimeObject* ____comparer_12;
	int32_t ____version_13;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371  : public RuntimeObject
{
	fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371_StaticFields
{
	fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215* ___s_emptyArray_5;
};

struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	int32_t ____size_1;
	int32_t ____version_2;
	RuntimeObject* ____syncRoot_3;
};

struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

struct MemberInfo_t  : public RuntimeObject
{
};

struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	String_t* ___Empty_6;
};

struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	StringBuilder_t* ___m_ChunkPrevious_1;
	int32_t ___m_ChunkLength_2;
	int32_t ___m_ChunkOffset_3;
	int32_t ___m_MaxCapacity_4;
};

struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running_0;
};

struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F  : public RuntimeObject
{
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____contextObjects_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

struct fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E  : public RuntimeObject
{
};

struct fsOption_t4278BEF99FB996B0A86CFD73812F3B6AE3D94E9C  : public RuntimeObject
{
};

struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3  : public RuntimeObject
{
};

struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	RuntimeObject* ____cachedAttributeQueries_1;
	int32_t ___DeclaredFlags_2;
};

struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC  : public RuntimeObject
{
	List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753* ____availableConverters_0;
	Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51* ____availableDirectConverters_1;
	List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* ____processors_2;
	fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* ____references_3;
	fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* ____lazyReferenceWriter_4;
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ____abstractTypeRemap_5;
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverterTypeInstances_6;
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverters_7;
	Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* ____cachedProcessors_8;
	fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* ___Context_9;
	fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___Config_10;
};

struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields
{
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____reservedKeywords_11;
	String_t* ___Key_ObjectReference_12;
	String_t* ___Key_ObjectDefinition_13;
	String_t* ___Key_InstanceType_14;
	String_t* ___Key_Version_15;
	String_t* ___Key_Content_16;
};

struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CinheritedAttributesU3Ek__BackingField_0;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CdefinedAttributesU3Ek__BackingField_1;
};

struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor_0;
};

struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};

struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	int32_t ___length_0;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue_1;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues_2;
};

struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length_0;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	int32_t ___length_0;
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue_1;
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues_2;
};

struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	int32_t ___length_0;
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length_0;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length_0;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	int32_t ___length_0;
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length_0;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue_1;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues_2;
};

struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue_0;
	bool ___value_1;
};

struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue_0;
	int32_t ___value_1;
};

struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	int32_t ___U3CresultU3Ek__BackingField_0;
	bool ___m_Complete_1;
};

struct Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r_0;
	float ___g_1;
	float ___b_2;
	float ___a_3;
};

struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};

struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code_0;
};

struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name_2;
	String_t* ___m_Id_3;
	String_t* ___m_Path_4;
	String_t* ___m_Interactions_5;
	String_t* ___m_Processors_6;
	String_t* ___m_Groups_7;
	String_t* ___m_Action_8;
	int32_t ___m_Flags_9;
	String_t* ___m_OverridePath_10;
	String_t* ___m_OverrideInteractions_11;
	String_t* ___m_OverrideProcessors_12;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name_0;
	String_t* ___m_BindingGroup_1;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};

struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
};

struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};

struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase_0;
	String_t* ___m_StringLowerCase_1;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};

struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField_3;
};

struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin_0;
	int32_t ___m_YMin_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};

struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};

struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

struct fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	String_t* ___VersionString_1;
	Type_t* ___ModelType_2;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

struct U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A__padding[1];
	};
};

struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	bool ___controlGroupingInitialized_17;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_18;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_pinvoke
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_18;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_com
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_18;
};

struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};

struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_0;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_0;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_0;
};

struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};

struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};

struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};

struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2__padding[1];
	};
};

struct U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};

struct ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21  : public Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB
{
};

struct ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21_StaticFields
{
	int32_t ___s_LastFrameUpdated_2;
};

struct ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68_StaticFields
{
	int32_t ___s_LastFrameUpdated_2;
};

struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	bool ___m_CannotMutateCallbacksArray_0;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks_1;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd_2;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove_3;
};

struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray_0;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	bool ___m_CannotMutateCallbacksArray_0;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks_1;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd_2;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove_3;
};

struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	int32_t ___length_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue_1;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues_2;
};

struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count_0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	int32_t ___m_Allocator_2;
};

struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue_0;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

struct Promise_1_t84779850E1895A40CC6BD94468F1EF05CA84D0D5 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue_0;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty_2;
};

struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle_0;
};

struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};

struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};

struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors_0;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField_1;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField_2;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls_3;
	int32_t ___m_ControlCount_4;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer_5;
	int32_t ___m_StateSizeInBytes_6;
	int32_t ___m_RecordCount_7;
	int32_t ___m_HistoryDepth_8;
	int32_t ___m_ExtraMemoryPerRecord_9;
	int32_t ___m_HeadIndex_10;
	uint32_t ___m_CurrentVersion_11;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask_12;
	bool ___m_AddNewControls_13;
};

struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};

struct fsEnumConverter_t2798C7B46A5AA11FCA5E04EFCEDEC140C9A35996  : public fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918
{
};

struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme_2;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme_2;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme_2;
};

struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField_0;
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	Type_t* ___U3CtypeU3Ek__BackingField_2;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField_3;
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	String_t* ___m_ExtendsLayout_5;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	int32_t ___m_ControlCount_7;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_8;
};

struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___time_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[8];
			uint32_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_2_OffsetPadding[12];
			int32_t ___controlIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_2_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_3_OffsetPadding[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_3_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_4_OffsetPadding[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_4_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_4_forAlignmentOnly;
		};
	};
};

struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	int32_t ___m_Format_2;
	int32_t ___m_Transformation_3;
};

struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

struct ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652_StaticFields
{
	int32_t ___s_LastFrameUpdated_2;
};

struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	int32_t ___length_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue_1;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues_2;
};

struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640  : public InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457
{
};

struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlIndex_1_OffsetPadding[20];
					uint16_t ___m_ControlIndex_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlIndex_1_OffsetPadding_forAlignmentOnly[20];
					uint16_t ___m_ControlIndex_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_BindingIndex_2_OffsetPadding[22];
					uint16_t ___m_BindingIndex_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_BindingIndex_2_OffsetPadding_forAlignmentOnly[22];
					uint16_t ___m_BindingIndex_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionIndex_3_OffsetPadding[24];
					uint16_t ___m_InteractionIndex_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionIndex_3_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___m_InteractionIndex_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StateIndex_4_OffsetPadding[26];
					uint8_t ___m_StateIndex_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StateIndex_4_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___m_StateIndex_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Phase_5_OffsetPadding[27];
					uint8_t ___m_Phase_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Phase_5_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___m_Phase_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StartTime_6_OffsetPadding[28];
					double ___m_StartTime_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StartTime_6_OffsetPadding_forAlignmentOnly[28];
					double ___m_StartTime_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ValueData_7_OffsetPadding[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ValueData_7_OffsetPadding_forAlignmentOnly[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_7_forAlignmentOnly;
				};
			};
		};
		uint8_t ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444__padding[37];
	};
};

struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name_0;
	int32_t ___m_Type_1;
	String_t* ___m_ExpectedControlType_2;
	String_t* ___m_Id_3;
	String_t* ___m_Processors_4;
	String_t* ___m_Interactions_5;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	int32_t ___m_Flags_7;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	int32_t ___m_BindingsStartIndex_9;
	int32_t ___m_BindingsCount_10;
	int32_t ___m_ControlStartIndex_11;
	int32_t ___m_ControlCount_12;
	int32_t ___m_ActionIndexInState_13;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	String_t* ___m_Path_2;
	String_t* ___m_DisplayName_3;
	String_t* ___m_DisplayNameFromLayout_4;
	String_t* ___m_ShortDisplayName_5;
	String_t* ___m_ShortDisplayNameFromLayout_6;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	int32_t ___m_UsageCount_11;
	int32_t ___m_UsageStartIndex_12;
	int32_t ___m_AliasCount_13;
	int32_t ___m_AliasStartIndex_14;
	int32_t ___m_ChildCount_15;
	int32_t ___m_ChildStartIndex_16;
	int32_t ___m_ControlFlags_17;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_2;
	Type_t* ___m_Type_3;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_4;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_5;
	int32_t ___m_StateSizeInBytes_6;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender_7;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts_8;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides_9;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages_10;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_11;
	String_t* ___m_DisplayName_12;
	String_t* ___m_Description_13;
	int32_t ___m_Flags_14;
};

struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant_0;
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts_15;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance_16;
	int32_t ___s_CacheInstanceRef_17;
};

struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

struct ARCoreProvider_tD2E93A65CCD3E86D401DF128FD49F8B050F21492  : public Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ProviderHandle_1;
	Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3* ___m_SetConfigurationCallback_2;
	Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892* ___beforeSetConfiguration_3;
	intptr_t ___m_RenderEventFunc_5;
};

struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind_1;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_2;
	Type_t* ___m_ControlType_3;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout_4;
	int32_t ___m_IncludePathCount_5;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths_6;
	int32_t ___m_ExcludePathCount_7;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths_8;
	int32_t ___m_TargetBindingIndex_9;
	String_t* ___m_BindingGroupForNewBinding_10;
	String_t* ___m_CancelBinding_11;
	float ___m_MagnitudeThreshold_12;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores_13;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes_14;
	double ___m_LastMatchTime_15;
	double ___m_StartTime_16;
	float ___m_Timeout_17;
	float ___m_WaitSecondsAfterMatch_18;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates_19;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete_20;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel_21;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch_22;
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath_23;
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore_24;
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding_25;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate_26;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_27;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache_28;
	StringBuilder_t* ___m_PathBuilder_29;
	int32_t ___m_Flags_30;
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations_31;
};

struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};

struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_21;
};

struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_21;
};

struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_21;
};

struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 ___m_ProcessorStack_21;
};

struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};

struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};

struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps_1;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls_2;
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions_3;
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors_4;
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites_5;
	int32_t ___totalProcessorCount_6;
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory_7;
	bool ___m_OnBeforeUpdateHooked_8;
	bool ___m_OnAfterUpdateHooked_9;
	bool ___m_InProcessControlStateChange_10;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_CurrentlyProcessingThisEvent_11;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate_12;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_13;
};

struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePromise_1__ctor_m0E3937932196DAB57D379A7DFA57B9F95E769568_gshared (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePromise_1_Resolve_m4666F463DF2E587C05F3D59FC7C94248A69CE4D3_gshared (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* __this, int32_t ___result0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___controlOfType2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, float ___value1, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___controlOfType2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___controlOfType2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___controlOfType2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___key0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, String_t*, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD (String_t* ___warning0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, Type_t* ___storageType1, Type_t* ___overrideConverterType2, RuntimeObject** ___result3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___storageType0, Type_t* ___overrideConverterType1, RuntimeObject* ___instance2, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___key0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, String_t*, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___value0, method);
}
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___value0, method);
}
inline RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2 (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemberInfo_t*, bool, const RuntimeMethod*))fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2_gshared)(___element0, ___shouldCache1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
inline fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4 (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* (*) (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
inline void List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9 (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
inline int32_t List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_inline (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6 (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, Type_t* ___storageType1, RuntimeObject** ___result2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___storageType0, RuntimeObject* ___instance1, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data2, const RuntimeMethod* method) ;
inline void ARCorePromise_1__ctor_m0E3937932196DAB57D379A7DFA57B9F95E769568 (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* __this, const RuntimeMethod* method)
{
	((  void (*) (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*, const RuntimeMethod*))ARCorePromise_1__ctor_m0E3937932196DAB57D379A7DFA57B9F95E769568_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, intptr_t, const RuntimeMethod*))Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline)(__this, ___obj0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void ARCorePromise_1_Resolve_m4666F463DF2E587C05F3D59FC7C94248A69CE4D3 (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*, int32_t, const RuntimeMethod*))ARCorePromise_1_Resolve_m4666F463DF2E587C05F3D59FC7C94248A69CE4D3_gshared)(__this, ___result0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___source0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA (int32_t ___phase0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___controlOfType2, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared)(__this, ___bindingIndex0, ___value1, ___controlOfType2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared)(__this, ___bindingIndex0, ___controlIndex1, ___ignoreComposites2, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
inline float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, float ___value1, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___controlOfType2, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, float, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared)(__this, ___bindingIndex0, ___value1, ___controlOfType2, method);
}
inline float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared)(__this, ___bindingIndex0, ___controlIndex1, ___ignoreComposites2, method);
}
inline float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___controlOfType2, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared)(__this, ___bindingIndex0, ___value1, ___controlOfType2, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared)(__this, ___bindingIndex0, ___controlIndex1, ___ignoreComposites2, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___controlOfType2, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared)(__this, ___bindingIndex0, ___value1, ___controlOfType2, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared)(__this, ___bindingIndex0, ___controlIndex1, ___ignoreComposites2, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared)(__this, method);
}
inline void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared)((CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___type0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___type0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___str0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___interaction0, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___processor0, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___layoutType0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___controlPath0, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___controlPath0, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
inline void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391 (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared)((ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) ;
inline ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 (*) (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*, RuntimeObject*, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline)(__this, ___processor0, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared)(__this, ___node0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9699ED5F3555D3CF8AFDDA89007319FB9499A0AC_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, bool* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		bool* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		bool* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(bool*)L_14 = ((*(bool*)((bool*)(bool*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5D7E87B5FB9D09493B6B102C640BBC0EE2F44529_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_14 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0BB99A1C8968D4ABA6F372441523D47A243D7A6D_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, int32_t* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		int32_t* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		int32_t* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(int32_t*)L_14 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE320E0BCF66F05110BDA9CD3CA08EFAF8015E9D7_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, int32_t* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		int32_t* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		int32_t* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(int32_t*)L_14 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisRuntimeObject_mFA5EB7CBBF10DD4DD46913E7500F7DF7091E25D7_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(RuntimeObject*));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		RuntimeObject** L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m417C24CA2E357E66FA9C54CF78C384C09ACFD9CA_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, float* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		float* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(float));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		float* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(float*)L_14 = ((*(float*)((float*)(float*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m99FA8D5FB2DA808B5B3DBC7945D5B5592F11C358_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_14 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE7AC87D2BB880EB5DA39180347AED8A66F8A8EEB_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_15, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16 = V_2;
		V_4 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisIl2CppFullySharedGenericAny_mD950968993B7222E483356975AAB178517564D4A_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Il2CppFullySharedGenericAny* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		V_1 = NULL;
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		Il2CppFullySharedGenericAny* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_14, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_14, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_18 = V_2;
		V_4 = L_18;
		goto IL_0061;
	}

IL_0061:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m85F1046E62C907066133FDC1BC81525FD8AC70A3_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, bool ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		bool L_4 = ___value3;
		bool L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m60BAAD30EC10F02B3923FC40DC368B3A98EA005B_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___value3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E8EFDEB55A7B76E3C3668F7F941D520027FF127_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, int32_t ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		int32_t L_4 = ___value3;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m242BBFE0FEA924DC26DF8F89B0BAF290C9B8EF4F_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, int32_t ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		int32_t L_4 = ___value3;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisRuntimeObject_m8DFC68C88C85F6E66FD21E09BE57EC29D1B086EC_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, RuntimeObject* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		RuntimeObject* L_4 = ___value3;
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_4, (&V_0), NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_8 = ___data0;
		String_t* L_9 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_10 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_8, L_9, L_10, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_1;
		V_3 = L_11;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD60669DF49F2636BE92B6B86E3E01370FAFE4B40_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, float ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		float L_4 = ___value3;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA477EC6F5D83CF9813DED311B44EB25069A67FD7_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___value3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB713137A72F280700A2ECEA7B05D487A15DBBEA4_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_5);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_10 = ___data0;
		String_t* L_11 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_10, L_11, L_12, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisIl2CppFullySharedGenericAny_m79CBD6541C56F6775C6AFE833F82B8B7DE1AD522_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, Il2CppFullySharedGenericAny ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___value3 : &___value3), SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_9 = ___data0;
		String_t* L_10 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_9, L_10, L_11, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_1;
		V_3 = L_12;
		goto IL_003b;
	}

IL_003b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsContext_Get_TisRuntimeObject_m0DA21A2EC755AAE4904ABB16FCF8C8E7062125B1_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_004c;
	}

IL_0026:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		Type_t* L_8 = L_7;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
			goto IL_003c;
		}
		G_B3_0 = L_8;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0041;
	}

IL_003c:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_1;
	}

IL_0041:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsContext_Get_TisRuntimeObject_m0DA21A2EC755AAE4904ABB16FCF8C8E7062125B1_RuntimeMethod_var)));
	}

IL_004c:
	{
		RuntimeObject* L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	memset(V_2, 0, SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->rgctx_data, 1), L_6);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))), SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		goto IL_004c;
	}

IL_0026:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Type_t* L_10 = L_9;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
			goto IL_003c;
		}
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0041;
	}

IL_003c:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_0041:
	{
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_RuntimeMethod_var)));
	}

IL_004c:
	{
		il2cpp_codegen_memcpy(L_14, V_2, SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsContext_Has_TisIl2CppFullySharedGenericAny_m60702DAF2270011FD07AF8C14E9712D49CC0EDE8_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235(L_0, L_2, Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Set_TisRuntimeObject_mB0406DE627FEFA7F615A896B1551F6FCC628D21B_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_0);
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_0, L_2, L_3, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Set_TisIl2CppFullySharedGenericAny_mAB9E5A73CD1BC1599F11B9B5FF1CDAE55086E05C_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B);
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___obj0 : &___obj0), SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_3);
		NullCheck(L_0);
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_0, L_2, L_4, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsData_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD43D2E1699EA6FA4E146118FFFC8C401AFE8BA42_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(L_2, il2cpp_rgctx_data(method->rgctx_data, 0)))));
		goto IL_008e;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_5;
			G_B4_3 = L_5;
			goto IL_003a;
		}
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_5;
		G_B3_3 = L_5;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003f:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = G_B5_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		Type_t* L_11 = L_10;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = 3;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_005c;
		}
		G_B6_0 = L_11;
		G_B6_1 = 3;
		G_B6_2 = L_8;
		G_B6_3 = L_8;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0061:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B8_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		Type_t* L_17 = L_16;
		if (L_17)
		{
			G_B10_0 = L_17;
			G_B10_1 = 5;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			goto IL_007d;
		}
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_18;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0082:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD43D2E1699EA6FA4E146118FFFC8C401AFE8BA42_RuntimeMethod_var)));
	}

IL_008e:
	{
		bool L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double fsData_Cast_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m13A3ECA61B031D94887181B9B50C294ADD8647C0_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	double V_1 = 0.0;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->rgctx_data, 0)))));
		goto IL_008e;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_5;
			G_B4_3 = L_5;
			goto IL_003a;
		}
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_5;
		G_B3_3 = L_5;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003f:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = G_B5_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		Type_t* L_11 = L_10;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = 3;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_005c;
		}
		G_B6_0 = L_11;
		G_B6_1 = 3;
		G_B6_2 = L_8;
		G_B6_3 = L_8;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0061:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B8_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		Type_t* L_17 = L_16;
		if (L_17)
		{
			G_B10_0 = L_17;
			G_B10_1 = 5;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			goto IL_007d;
		}
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_18;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0082:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m13A3ECA61B031D94887181B9B50C294ADD8647C0_RuntimeMethod_var)));
	}

IL_008e:
	{
		double L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t fsData_Cast_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m42F952D5AE9B49A054833911614120C670E67FD4_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->rgctx_data, 0)))));
		goto IL_008e;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_5;
			G_B4_3 = L_5;
			goto IL_003a;
		}
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_5;
		G_B3_3 = L_5;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003f:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = G_B5_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		Type_t* L_11 = L_10;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = 3;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_005c;
		}
		G_B6_0 = L_11;
		G_B6_1 = 3;
		G_B6_2 = L_8;
		G_B6_3 = L_8;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0061:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B8_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		Type_t* L_17 = L_16;
		if (L_17)
		{
			G_B10_0 = L_17;
			G_B10_1 = 5;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			goto IL_007d;
		}
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_18;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0082:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m42F952D5AE9B49A054833911614120C670E67FD4_RuntimeMethod_var)));
	}

IL_008e:
	{
		int64_t L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsData_Cast_TisRuntimeObject_mFDD3DADB7547F12419945DE07D5A0EFACED5266C_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_008e;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_5;
			G_B4_3 = L_5;
			goto IL_003a;
		}
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_5;
		G_B3_3 = L_5;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003f:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = G_B5_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		Type_t* L_11 = L_10;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = 3;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_005c;
		}
		G_B6_0 = L_11;
		G_B6_1 = 3;
		G_B6_2 = L_8;
		G_B6_3 = L_8;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0061:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B8_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		Type_t* L_17 = L_16;
		if (L_17)
		{
			G_B10_0 = L_17;
			G_B10_1 = 5;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			goto IL_007d;
		}
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_18;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0082:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisRuntimeObject_mFDD3DADB7547F12419945DE07D5A0EFACED5266C_RuntimeMethod_var)));
	}

IL_008e:
	{
		RuntimeObject* L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	const Il2CppFullySharedGenericAny L_23 = L_3;
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	memset(V_1, 0, SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		goto IL_008e;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_7;
			G_B4_3 = L_7;
			goto IL_003a;
		}
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_7;
		G_B3_3 = L_7;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003f:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B5_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		RuntimeObject* L_11 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		Type_t* L_13 = L_12;
		if (L_13)
		{
			G_B7_0 = L_13;
			G_B7_1 = 3;
			G_B7_2 = L_10;
			G_B7_3 = L_10;
			goto IL_005c;
		}
		G_B6_0 = L_13;
		G_B6_1 = 3;
		G_B6_2 = L_10;
		G_B6_3 = L_10;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0061:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B8_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		Type_t* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			G_B10_1 = 5;
			G_B10_2 = L_16;
			G_B10_3 = L_16;
			goto IL_007d;
		}
		G_B9_0 = L_19;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_20;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0082:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_22 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_RuntimeMethod_var)));
	}

IL_008e:
	{
		il2cpp_codegen_memcpy(L_23, V_1, SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_23, SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsEnumConverter_ArrayContains_TisRuntimeObject_m1AB5030DA6CFBDF78EB3A72537BBB0C3327539FD_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___values0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		RuntimeObject* L_5 = ___value1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_0021:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		int32_t L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___values0;
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0034:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsEnumConverter_ArrayContains_TisIl2CppFullySharedGenericAny_m4858946975F16253C1272A5B33762275FA856C06_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___values0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___value1 : &___value1), SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_5: *(void**)L_5));
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_0021:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		int32_t L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___values0;
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0034:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_Just_TisIl2CppFullySharedGenericAny_m29BB81EA3CFE4D1DC8CB7BEB746EF9C053DCF70C_gshared (Il2CppFullySharedGenericAny ___value0, fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4);
	const fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 L_2 = alloca(SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
	const fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 L_3 = L_2;
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 V_0 = alloca(SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
	memset(V_0, 0, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___value0 : &___value0), SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4);
		memset(L_2, 0, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
		fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4): *(void**)L_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_gshared (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___value0;
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_1;
		memset((&L_1), 0, sizeof(L_1));
		fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		MemberInfo_t* L_0 = ___element0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2(L_0, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___shouldCache1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_4;
		L_4 = fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8(L_0, L_2, L_3, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisIl2CppFullySharedGenericAny_mA1C841F0D830838BFD7F5B7F3853A6B2F04B26BA_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisIl2CppFullySharedGenericAny_m6014F94511870DB31B1749606A8168803AE915AF_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___shouldCache1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973(L_0, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsSerializer_RemoveProcessor_TisIl2CppFullySharedGenericAny_m03043ABAEDFAE8695A48DB25E081FE6F138A4185_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0005:
	{
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_0 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* L_2;
		L_2 = List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4(L_0, L_1, List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_4 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9(L_4, L_5, List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var);
		goto IL_0035;
	}

IL_002f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
	}

IL_0036:
	{
		int32_t L_7 = V_0;
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_8 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_inline(L_8, List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* L_11 = (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04*)il2cpp_codegen_object_new(Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6(L_11, Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var);
		__this->____cachedProcessors_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedProcessors_8), (void*)L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_TisRuntimeObject_m3FB630497C0D561959831E27DEC91D075D944267_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		RuntimeObject** L_0 = ___instance1;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_0 = L_1;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2(__this, L_2, L_4, (&V_0), NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = V_0;
		*(RuntimeObject**)L_8 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_003a:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_1;
		V_3 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_TisIl2CppFullySharedGenericAny_m8F46C3E4472E3EACA5D9F7A58E397A6D10546582_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, Il2CppFullySharedGenericAny* ___instance1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	RuntimeObject* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Il2CppFullySharedGenericAny* L_0 = ___instance1;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		V_0 = L_2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_3 = ___data0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2(__this, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___instance1;
		RuntimeObject* L_10 = V_0;
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->rgctx_data, 1), L_11);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))), SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))));
	}

IL_003a:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003e;
	}

IL_003e:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisRuntimeObject_m535933D428C9B51988896FE7C0658FE75A0C0D29_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___instance0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_3 = ___data1;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisIl2CppFullySharedGenericAny_mD467C2221EABCCED5F049B2996388895D66CD6A3_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Il2CppFullySharedGenericAny ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___instance0 : &___instance0), SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___data1;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* ARCoreProvider_ExecuteAsync_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m58D1F65D55CF1229491473A1AB700D966A535384_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___apiMethod0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* V_2 = NULL;
	{
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_0 = (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		ARCorePromise_1__ctor_m0E3937932196DAB57D379A7DFA57B9F95E769568(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_1 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D((RuntimeObject*)L_1, NULL);
		V_1 = L_2;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___apiMethod0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_1;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		NullCheck(L_3);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_3, L_5, NULL);
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_6 = V_0;
		V_2 = (Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB*)L_6;
		goto IL_001f;
	}

IL_001f:
	{
		Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* ARCoreProvider_ExecuteAsync_TisIl2CppFullySharedGenericAny_m0D23733EC9E3A64357A761F04DB9AFA28BCF3AF7_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___apiMethod0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* V_2 = NULL;
	{
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_0 = (ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_1 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D((RuntimeObject*)L_1, NULL);
		V_1 = L_2;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___apiMethod0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_1;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		NullCheck(L_3);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_3, L_5, NULL);
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_6 = V_0;
		V_2 = (Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278*)L_6;
		goto IL_001f;
	}

IL_001f:
	{
		Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_ResolvePromise_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m29F9B15ECFEF123E76E9DA2D73B5467918966454_gshared (intptr_t ___context0, int32_t ___arg1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* V_1 = NULL;
	bool V_2 = false;
	{
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_5 = V_1;
		int32_t L_6 = ___arg1;
		NullCheck(L_5);
		ARCorePromise_1_Resolve_m4666F463DF2E587C05F3D59FC7C94248A69CE4D3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0025:
	{
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_ResolvePromise_TisIl2CppFullySharedGenericStruct_mF698EFE2E47A93FD93F871AD6CF706D0AF22B46C_gshared (intptr_t ___context0, Il2CppFullySharedGenericStruct ___arg1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA4622C9D57959DCC87554997E413E664F64EEAD8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_tA4622C9D57959DCC87554997E413E664F64EEAD8);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* V_1 = NULL;
	bool V_2 = false;
	{
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* L_5 = V_1;
		il2cpp_codegen_memcpy(L_6, ___arg1, SizeOf_T_tA4622C9D57959DCC87554997E413E664F64EEAD8);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, L_6);
	}

IL_0025:
	{
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttribute_TisRuntimeObject_m8D7B16DA8433AA2FD4CC676A84EA8FE6D90195FC_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9(__this, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_TisRuntimeObject_mF38C8F9E5ADBB7CCB1F9A885311EB62F139E4063_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		RuntimeObject* L_3;
		L_3 = AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F(__this, L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_TisRuntimeObject_m33C55B47DD3C264A03B4158F49782290B1B7E4FD_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		bool L_3;
		L_3 = AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7(__this, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5(L_4, L_5, L_6, (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		float L_6 = V_0;
		NullCheck(L_4);
		float L_7;
		L_7 = InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0(L_4, L_5, L_6, (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		float L_11;
		L_11 = InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		float L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5(L_4, L_5, L_6, (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28(L_4, L_5, L_6, (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	const Il2CppFullySharedGenericStruct L_11 = L_6;
	const Il2CppFullySharedGenericStruct L_12 = L_6;
	const Il2CppFullySharedGenericStruct L_13 = L_6;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_2, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(G_B4_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		NullCheck(L_4);
		InvokerActionInvoker4< int32_t, Il2CppFullySharedGenericStruct, InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4, L_5, L_6, (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)NULL, (Il2CppFullySharedGenericStruct*)L_7);
		il2cpp_codegen_memcpy(G_B4_0, L_7, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		InvokerActionInvoker4< int32_t, int32_t, bool, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_8, L_9, L_10, (bool)0, (Il2CppFullySharedGenericStruct*)L_11);
		il2cpp_codegen_memcpy(G_B4_0, L_11, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_0051:
	{
		il2cpp_codegen_memcpy(V_0, G_B4_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_0053:
	{
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(V_2, L_12, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_0057;
	}

IL_0057:
	{
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		return;
	}
}
IL2CPP_EXTERN_C  void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_TisRuntimeObject_mD0F2FB39194CC7EAC8E22DFFCD9C9116BAFC7B5E_gshared (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* V_0 = NULL;
	{
		RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_RuntimeMethod_var)));
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors_0), L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_9, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_RuntimeMethod_var)));
	}

IL_0053:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_0;
		String_t* L_13;
		L_13 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_12, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B(__this, L_13, NULL);
		V_3 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_RuntimeMethod_var)));
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors_0), L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_9, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_RuntimeMethod_var)));
	}

IL_0053:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_0;
		String_t* L_13;
		L_13 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_12, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC(__this, L_13, NULL);
		V_3 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2;
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts_15), L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&V_1), NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_8);
		V_0 = L_9;
	}

IL_003e:
	{
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_10, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_3 = L_11;
		goto IL_0051;
	}

IL_0051:
	{
		String_t* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	const Il2CppFullySharedGenericStruct L_29 = L_22;
	const Il2CppFullySharedGenericStruct L_28 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_1, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	void* V_2 = NULL;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_4, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	{
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_0 = (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)__this->___m_Ptr_1;
		int32_t L_1;
		L_1 = ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_3 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F(__this, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D)), L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_RuntimeMethod_var)));
	}

IL_0063:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_22);
		il2cpp_codegen_memcpy(V_1, L_22, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		void* L_23;
		L_23 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((Il2CppFullySharedGenericStruct*)V_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_23;
		void* L_24 = V_2;
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_25 = (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)__this->___m_Ptr_1;
		uint8_t* L_26;
		L_26 = ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_25, NULL);
		int32_t L_27 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_24, (void*)L_26, ((int64_t)L_27), NULL);
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(V_4, L_28, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		goto IL_008a;
	}

IL_008a:
	{
		il2cpp_codegen_memcpy(L_29, V_4, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_29, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		return;
	}
}
IL2CPP_EXTERN_C  void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*>(__this + _offset);
	ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_RuntimeMethod_var)));
	}

IL_0019:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		NullCheck(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))));
		InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986* L_4 = (InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)(&((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)))->___m_ProcessorStack_21);
		RuntimeObject* L_5 = ___processor0;
		int32_t L_6;
		L_6 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_5);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___processor0, const RuntimeMethod* method)
{
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*>(__this + _offset);
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline(_thisAdjusted, ___processor0, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		V_0 = __this;
		goto IL_0016;
	}

IL_0016:
	{
		Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	const Il2CppFullySharedGenericStruct L_3 = L_2;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	memset(V_0, 0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	{
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)__this->___m_Owner_0;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
		NullCheck(L_0);
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		goto IL_001c;
	}

IL_001c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		return;
	}
}
IL2CPP_EXTERN_C  void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*>(__this + _offset);
	Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_001c:
	{
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_3 = (Api_tAE210A8378E537AFD1FA4B99562229CE842377FB*)__this->___m_Api_0;
		int32_t L_4 = (int32_t)__this->___m_RequestId_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9, L_3, L_4, (&V_0), (&V_1));
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7;
		L_7 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_4 = L_7;
		intptr_t L_8 = V_0;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		int32_t L_10 = V_1;
		int32_t L_11 = V_4;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_9, ((int32_t)(L_10/L_11)), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = L_12;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = V_5;
		V_6 = L_13;
		goto IL_0060;
	}

IL_0055:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_0060:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15 = V_6;
		return L_15;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_8 = ___array2;
		int32_t L_9 = ___length0;
		int32_t L_10 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_8 = L_11;
	}

IL_0033:
	{
		goto IL_0046;
	}

IL_0036:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_12 = ___array2;
		int32_t L_13 = ___length0;
		int32_t L_14 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_15), L_13, L_14, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_12 = L_15;
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mA59758011A49ED37FE547FB2E7C71E29DA35A08E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___array2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___array2;
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___array2;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_5 = ___length0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___array2;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___array2;
		int32_t L_9 = ___length0;
		int32_t L_10 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_8 = L_11;
	}

IL_0033:
	{
		goto IL_0046;
	}

IL_0036:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = ___array2;
		int32_t L_13 = ___length0;
		int32_t L_14 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_15), L_13, L_14, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_12 = L_15;
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____success_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) 
{
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CtypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_RuntimeMethod_var)));
	}

IL_0019:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		NullCheck(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))));
		InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986* L_4 = (InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)(&((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)))->___m_ProcessorStack_21);
		RuntimeObject* L_5 = ___processor0;
		int32_t L_6;
		L_6 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_5);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
