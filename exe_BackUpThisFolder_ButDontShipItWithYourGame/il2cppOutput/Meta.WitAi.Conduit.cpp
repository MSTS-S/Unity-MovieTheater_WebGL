﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>
struct Dictionary_2_tC85CF4FE0A51DF2B8E882F8F065251A88AE26E72;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>
struct Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9;
// System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>
struct Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode>
struct Dictionary_2_tC2F17B4EBFD9F0FDFFCDED4E70FD0B5EBA0CF7EE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_t6D914FB0655333761474BA0B174390657A11C792;
// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct IEnumerable_1_t38A8DE593563558CD7D559161D89E5CC33273012;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.InvocationContext>
struct IEnumerable_1_tCBAF6B28EA05ED4CCFD2B6E4B66DCDE3AF1A56F7;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.ManifestParameter>
struct IEnumerable_1_t540FBD4D1E66265273F6270701EBAB44E2E809D0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.WitKeyword>
struct IEnumerable_1_t17FA952D93F726B6C8BEDBAD92ABB4C7656CA7F5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct KeyCollection_t3BAEF04D101851DB7331E6294767DE1C8FE80287;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Type>>
struct KeyCollection_t7873DE9493A24F083E9C7F34068DB8DE783D4B66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.Conduit.ConduitParameterValue>
struct KeyCollection_t5E0906E9D2922F394AAA213BFCCD8BFE13D14C8B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tC56501DE1B2A269ED38FABF7E0D89F5798188E3D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t94DD792BDF578F202193C4307B641B72F69191B2;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler>
struct List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>
struct List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D;
// System.Tuple`2<System.Reflection.MethodInfo,System.Type>
struct Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Type>>
struct ValueCollection_t6CFE310D01BC9F699BFECFD928FEC8ADD48866C7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.Conduit.ConduitParameterValue>
struct ValueCollection_t90FF2A19D983AE8419E5DE7021D4E44420D0185B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tB4A4AFDFE879C8371EFDEBF3D3E55DC0798A46C4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>[]
struct EntryU5BU5D_t22BB668C425F7640D6CAD46CED5113F65AA74787;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Type>>[]
struct EntryU5BU5D_t279C1871446B51713721D1F651D119B6A52E247F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.Conduit.ConduitParameterValue>[]
struct EntryU5BU5D_tBDEBB9563557730AE03EA401BC53DF9CC3EE9CDA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t048B8CF16B65A8CEBF0CF283C46905F2205DC063;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Meta.Conduit.InvocationContext[]
struct InvocationContextU5BU5D_t7D27F9A6F0BF055B4112332EC9586832945FC8ED;
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
// Meta.Conduit.ManifestAction[]
struct ManifestActionU5BU5D_tBE83D8A6718B54EB95C8B7E0BE29C46561E7DBAE;
// Meta.Conduit.ManifestEntity[]
struct ManifestEntityU5BU5D_t5B605F7D7952DAB5095BE72CEBDE854D89109231;
// Meta.Conduit.ManifestErrorHandler[]
struct ManifestErrorHandlerU5BU5D_t513B396C9E42AC2AE4516A2F2778FB4931519A19;
// Meta.Conduit.ManifestParameter[]
struct ManifestParameterU5BU5D_t11B6744CD6D16CEF1228A318B56EC0E548778B26;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;
// Meta.WitAi.Data.Info.WitEntityRoleInfo[]
struct WitEntityRoleInfoU5BU5D_t04D4D146ECDA2EF9AB18EF592F203AE0463E1A3C;
// Meta.Conduit.WitKeyword[]
struct WitKeywordU5BU5D_t4BFD60183369E40FC27B52CB0D0592C3EECB90B7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A;
// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tF1B82E6F0AB58F50ACDEF82312D9E42B00971C05;
// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4;
// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7;
// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tD40479BED307DEDCFD36BEC47D1DD4704F32B923;
// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tE982CA28EB1324B9DCF4F93D010E802A41297A3F;
// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_tD8B12A202DD244D99C86ABD0CF13E40E26B61F0C;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Meta.Conduit.HandleEntityResolutionFailure
struct HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F;
// Oculus.Interaction.Deprecated.HandleEntityResolutionFailureAttribute
struct HandleEntityResolutionFailureAttribute_t2933118A4083250751D4D57173BE3B9B95AD9022;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t9DB0F42120182B87787DF6413D5A8A57F1B136DB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Meta.Conduit.IInstanceResolver
struct IInstanceResolver_t47A1D14520343F632BA6BF48285A8DA7B48B1F9A;
// Meta.Conduit.IManifestLoader
struct IManifestLoader_t8EDD60C4BD242733C597A2E36940A81563FCE38E;
// Meta.Conduit.IManifestMethod
struct IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14;
// Meta.Conduit.InvocationContext
struct InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1;
// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6;
// Meta.Conduit.Manifest
struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB;
// Meta.Conduit.ManifestAction
struct ManifestAction_t122F3ADFF985A27A1D882333A955251018402685;
// Meta.Conduit.ManifestEntity
struct ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06;
// Meta.Conduit.ManifestErrorHandler
struct ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282;
// Meta.Conduit.ManifestLoader
struct ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524;
// Meta.Conduit.ManifestParameter
struct ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Interaction.Deprecated.OnConduitFailedParameterResolutionAttribute
struct OnConduitFailedParameterResolutionAttribute_t3D4873C7D9582CB649EBABCD4235FA3AED107A6E;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Meta.Conduit.ParameterProvider
struct ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.Conduit.WitKeyword
struct WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;
// Meta.Conduit.ConduitDispatcher/InvocationContextFilter
struct InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26;
// Meta.Conduit.ConduitUtilities/ProgressDelegate
struct ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38;
// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF;
// Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16;
// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23;

IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6D914FB0655333761474BA0B174390657A11C792_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t38A8DE593563558CD7D559161D89E5CC33273012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7794765A307BC9864E93E8DA3880C340152D0CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t330C0FA386BC76A62117E6C730E8F123E09E9EEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9CA3CEB58F9BD0080D9504E2B1017BBDE73D65C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceResolver_t47A1D14520343F632BA6BF48285A8DA7B48B1F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManifestLoader_t8EDD60C4BD242733C597A2E36940A81563FCE38E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestAction_t122F3ADFF985A27A1D882333A955251018402685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral02CC0B39116ABD35C7079A163B63FCBD3A7A28DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral12E2DF8D29931D0A7F6BAD259D3D8344D460ABA8;
IL2CPP_EXTERN_C String_t* _stringLiteral14DB4DEA8365D5E4F9AB6DB94C4130AA74ECB588;
IL2CPP_EXTERN_C String_t* _stringLiteral1AA7858C328063B10F93180DAA4F8CECEAAABBA4;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7CEFA994B6C7CAB324A6AC0F37639A23E691A0;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD210F72F823B7D5F53048538C393F3BEE13397;
IL2CPP_EXTERN_C String_t* _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E;
IL2CPP_EXTERN_C String_t* _stringLiteral3A7170386A08A61D5E84BC34FFF9B2C3419758FB;
IL2CPP_EXTERN_C String_t* _stringLiteral421ADF95C1916B0441998BC8F11F62C26D09310F;
IL2CPP_EXTERN_C String_t* _stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C572534613C66044C38AE3EBE85C27908D6FF28;
IL2CPP_EXTERN_C String_t* _stringLiteral53435DB29BE675C258FB6F7ED8FED333461E7E97;
IL2CPP_EXTERN_C String_t* _stringLiteral54DED7E6C4142C7A4B393F38A26EA7563C817E66;
IL2CPP_EXTERN_C String_t* _stringLiteral5681D5B3BD75209607373A22E88879E1A1FC5396;
IL2CPP_EXTERN_C String_t* _stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6;
IL2CPP_EXTERN_C String_t* _stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A13904391B9244725CDA479F017C96337B784A1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83;
IL2CPP_EXTERN_C String_t* _stringLiteral723AD9D4A305C071CE5BA68F3BE119C1321AEE08;
IL2CPP_EXTERN_C String_t* _stringLiteral7386C7C44A61AE887AD9CFD7CF0DA932BBA457ED;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3606EC2448DF9CCD84DF499ED72C8D6704E46E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D7471446741543FC8F6CF76ED088D1071EFDEE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E38BE81D2CAEC365D5A2348FB759622EB3AD325;
IL2CPP_EXTERN_C String_t* _stringLiteral814575F591B0E9CFD43287EB260866FE4422277C;
IL2CPP_EXTERN_C String_t* _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1;
IL2CPP_EXTERN_C String_t* _stringLiteral82F0949FE776481A958565B508A97E357FF9EC29;
IL2CPP_EXTERN_C String_t* _stringLiteral86E87BFFE44DF63E1177A08463C331A3BF1DED67;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2B0EE79B75C11DB007298C5EA80A923AA7E4AE;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral91FD9174190D760AB3905E0F489B7E36F0D28C94;
IL2CPP_EXTERN_C String_t* _stringLiteral93E063665B9B0BA4704D4E2337AEFCE11D860473;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9;
IL2CPP_EXTERN_C String_t* _stringLiteral9FDF9180296CDD3BFAEA23DC87830C15E2F3F69A;
IL2CPP_EXTERN_C String_t* _stringLiteralA504012C0A73DA581CCE241EE6A92AF955E01C66;
IL2CPP_EXTERN_C String_t* _stringLiteralC1611699FEF45A8574406A8E197A1B4C0494643A;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786;
IL2CPP_EXTERN_C String_t* _stringLiteralCF77B7EB56FFCA00EA027593FFC88A4FD633A891;
IL2CPP_EXTERN_C String_t* _stringLiteralD1298000113B6711F92B8CD9D9A7FD1C6C03D07B;
IL2CPP_EXTERN_C String_t* _stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6567631BB9A28800CA018833DBF7581A00BC16C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF072CEDCFB53DF9A7858641FFC5B592474D304;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E15B07E6778CBDAB69ADFF22826B6D46D292D5;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE6B1DD48E50A830EA9A74DD5B2A89599D6F01C5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AC6DCC7EE1605CE92D392470CBAE42DAC5BD4A;
IL2CPP_EXTERN_C String_t* _stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709;
IL2CPP_EXTERN_C String_t* _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896;
IL2CPP_EXTERN_C String_t* _stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDF8AFC94D560BD88EEA635CD05D9017B97E990;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFDFD7C73EDC4C382BFC197F2D672F32B3A524150;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFDE56E6F9A76A0A5A6DFDE40FF8B1AF1014EF4A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2F269BF7557A32E757C7C862AAB61F19F680B174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m040C78DD55C2C880875E0255B365717A90147289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m59412EB76A7C9D53E553667D93EB39D603904510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m201D4C32BA21CBF329B875E58C2515ABC9E29894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8333423E1B60528740D0CF38D0918FAA0FDE12DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA31507DC417938205138CC99DEE0407DFBB8D86C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD0F60043295B515B177407A0116DBD24A0C33E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD4185E69777B52FB227271B2F4549AB7C9120C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE5C23C612DABFA89D98A9B333F992863519AC3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9F366137F27E2FF10A5B92FB834793E5B0139E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDA78A8299D16DD1B42B93F0C63BE2D9CE92F8A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisWitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_m4CF7FA4CF7FE008DF1FD5333190AF04FDED7AC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mDECA5A7D2FF94431EB7A514F1F69F19284B1483D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mAE59B4116E15C8775F67B603063AAADF8EA4E75D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3602430875554621B9AAA9A707076184F906A350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m85690411E843E7A8E091143C1A15F608ABA7E4DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m91059E7EC442284B0EBA57CBA4535237D01F9019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA2183F479CA8E4A6449070267A26B07D47B008AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC684B6AA52FC891A27264CF060CA92FE12B39067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCF8CBD37EAAAB696E8E26CFEF73093A4CBABCCD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m05610CC5D9B4A6B3F19A2F7D8CEA22D10E290E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12A506D712876F04BD86BA9823E4F85B40C431F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m402143BA38652F8CC5B3E6A19CA6726169962C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m95A1F8B157CDCC42C154D34A9228C49ACDD0D5E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBA694667FDE9A4D21721BD4084D5001F2D65D431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF796C14D4EF5DF63DCD7E988F49E62CD1800A5D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m02A1F6644E4D3B4CEBC6FFA427D3A95468294DCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2F11D9C4E51E6A39DC93A948D49CE752C7276773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4D4C0E84CFA4BEFE9E1639DF04D9B412A797F434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m517F77C18E493A797C148AE62592F432A2AB3980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m879B042047E966B07836FB18157D91F19952ECA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAB224D7C396A7CF8EC73C86E90EBC2F5448E3DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_m8FF42AAAAD980FCE7BC682223963FF990C842832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_SerializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_mBC6496D48DF51233C15A713AE8E7C0E7249785DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m028C1B46460EAA3BB2B4349BE23DB673F511D661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_mAD3DF05B21AE795B7836B3ED94ECD95683407447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m7C5237B6086953A4FBAD6A2A502BA319E3B8D10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2DB6F6B4F5ADD18CDA1A6895B4AC9D70FEECEFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5229A9BE6FB48904924E5E17BD5C1D57039B351F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m65EFFF7C5B13CD4976A648E37107530804079F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m69602B946033E334F3B9E1A5BDDE144D3980715E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3B8A5EC544B96A585EB2BEB76D8C06D8B9FDDAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA25297A4CF576A77414984BE7A304D7F8BC8991B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB6DA373D70052DF30F55409071827A2CBA26EC75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED3E112F42E29814C2B9E1E75A2540F209F92ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m91051B30B6AB69098BA8356766D4E7BA9E38450D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFADFD9C19245102C37B606127FF10C26A410C5E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_ResolveEntities_m7B62D028B823F31F6F883F5A501DB49206B683E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisMethodInfo_t_TisType_t_m64F30CF793658CEA821C36F7102C7D0CD647B29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveAllActionsU3Eb__29_0_m295F65CEBA60EEB8DEC1C2B34256C02ED496166B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveAllActionsU3Eb__29_1_mE0055DB230637B270678E2099B7A670DA4937126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_0_m58FB8BE14EE5AE1F2BC567AD8305D05FC599443B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_1_m859CA6289AF3663B8947B2DE1623CD9FB248D76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_mE4077F5BBE84EE804C1640DEA16AB930F965E92A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m7CC47DCBD9FDD39B8A9EF46F8B59C03605C8AE65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m1EDEED0DFCB05955BF76B500B8BECDB2012CF6DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mD1639CCCC6F207E7F7FBA07172B043F84F195E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com;
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke;
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_com;
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF2375E49B1FFE41A4985FA21FAD33A9C313D5306 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t22BB668C425F7640D6CAD46CED5113F65AA74787* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3BAEF04D101851DB7331E6294767DE1C8FE80287* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>
struct Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t279C1871446B51713721D1F651D119B6A52E247F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7873DE9493A24F083E9C7F34068DB8DE783D4B66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6CFE310D01BC9F699BFECFD928FEC8ADD48866C7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>
struct Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBDEBB9563557730AE03EA401BC53DF9CC3EE9CDA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5E0906E9D2922F394AAA213BFCCD8BFE13D14C8B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t90FF2A19D983AE8419E5DE7021D4E44420D0185B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t048B8CF16B65A8CEBF0CF283C46905F2205DC063* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC56501DE1B2A269ED38FABF7E0D89F5798188E3D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB4A4AFDFE879C8371EFDEBF3D3E55DC0798A46C4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
};

// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t94DD792BDF578F202193C4307B641B72F69191B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InvocationContextU5BU5D_t7D27F9A6F0BF055B4112332EC9586832945FC8ED* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t94DD792BDF578F202193C4307B641B72F69191B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InvocationContextU5BU5D_t7D27F9A6F0BF055B4112332EC9586832945FC8ED* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestActionU5BU5D_tBE83D8A6718B54EB95C8B7E0BE29C46561E7DBAE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestActionU5BU5D_tBE83D8A6718B54EB95C8B7E0BE29C46561E7DBAE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestEntityU5BU5D_t5B605F7D7952DAB5095BE72CEBDE854D89109231* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestEntityU5BU5D_t5B605F7D7952DAB5095BE72CEBDE854D89109231* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler>
struct List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestErrorHandlerU5BU5D_t513B396C9E42AC2AE4516A2F2778FB4931519A19* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestErrorHandlerU5BU5D_t513B396C9E42AC2AE4516A2F2778FB4931519A19* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestParameterU5BU5D_t11B6744CD6D16CEF1228A318B56EC0E548778B26* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestParameterU5BU5D_t11B6744CD6D16CEF1228A318B56EC0E548778B26* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>
struct List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitKeywordU5BU5D_t4BFD60183369E40FC27B52CB0D0592C3EECB90B7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitKeywordU5BU5D_t4BFD60183369E40FC27B52CB0D0592C3EECB90B7* ___s_emptyArray_5;
};

// System.Tuple`2<System.Reflection.MethodInfo,System.Type>
struct Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	MethodInfo_t* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Type_t* ___m_Item2_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4  : public RuntimeObject
{
	// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::<Manifest>k__BackingField
	Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ___U3CManifestU3Ek__BackingField_0;
	// Meta.Conduit.IManifestLoader Meta.Conduit.ConduitDispatcher::_manifestLoader
	RuntimeObject* ____manifestLoader_1;
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcher::_instanceResolver
	RuntimeObject* ____instanceResolver_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ConduitDispatcher::_parameterToRoleMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____parameterToRoleMap_3;
	// System.Collections.Generic.HashSet`1<System.String> Meta.Conduit.ConduitDispatcher::_ignoredActionIds
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____ignoredActionIds_4;
};

// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7  : public RuntimeObject
{
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcherFactory::_instanceResolver
	RuntimeObject* ____instanceResolver_1;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcherFactory::_parameterProvider
	RuntimeObject* ____parameterProvider_2;
};

struct ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_StaticFields
{
	// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::Instance
	RuntimeObject* ___Instance_0;
};

// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516  : public RuntimeObject
{
};

struct ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_StaticFields
{
	// System.Text.RegularExpressions.Regex Meta.Conduit.ConduitUtilities::UnderscoreSplitter
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___UnderscoreSplitter_0;
};

// Oculus.Interaction.Deprecated.HandleEntityResolutionFailureAttribute
struct HandleEntityResolutionFailureAttribute_t2933118A4083250751D4D57173BE3B9B95AD9022  : public RuntimeObject
{
};

// Meta.Conduit.InvocationContext
struct InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1  : public RuntimeObject
{
	// System.Type Meta.Conduit.InvocationContext::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_0;
	// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::<MethodInfo>k__BackingField
	MethodInfo_t* ___U3CMethodInfoU3Ek__BackingField_1;
	// System.Single Meta.Conduit.InvocationContext::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_2;
	// System.Single Meta.Conduit.InvocationContext::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Boolean Meta.Conduit.InvocationContext::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.InvocationContext::<ParameterMap>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CParameterMapU3Ek__BackingField_5;
	// System.Type Meta.Conduit.InvocationContext::<CustomAttributeType>k__BackingField
	Type_t* ___U3CCustomAttributeTypeU3Ek__BackingField_6;
};

// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6  : public RuntimeObject
{
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanRead>k__BackingField
	bool ___U3CCanReadU3Ek__BackingField_0;
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanWrite>k__BackingField
	bool ___U3CCanWriteU3Ek__BackingField_1;
};

// Meta.Conduit.Manifest
struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB  : public RuntimeObject
{
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler> Meta.Conduit.Manifest::ErrorHandlers
	List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* ___ErrorHandlers_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::_methodLookup
	Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* ____methodLookup_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::<CustomEntityTypes>k__BackingField
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___U3CCustomEntityTypesU3Ek__BackingField_7;
};

struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.Manifest::WitResponseMatcherIntents
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___WitResponseMatcherIntents_8;
};

// Meta.Conduit.ManifestAction
struct ManifestAction_t122F3ADFF985A27A1D882333A955251018402685  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestAction::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestAction::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::<Parameters>k__BackingField
	List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ___U3CParametersU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_4;
};

// Meta.Conduit.ManifestEntity
struct ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestEntity::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestEntity::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestEntity::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestEntity::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword> Meta.Conduit.ManifestEntity::<Values>k__BackingField
	List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* ___U3CValuesU3Ek__BackingField_4;
	// System.String Meta.Conduit.ManifestEntity::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_5;
};

// Meta.Conduit.ManifestErrorHandler
struct ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestErrorHandler::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestErrorHandler::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestErrorHandler::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestErrorHandler::<Parameters>k__BackingField
	List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ___U3CParametersU3Ek__BackingField_3;
};

// Meta.Conduit.ManifestLoader
struct ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524  : public RuntimeObject
{
};

// Meta.Conduit.ManifestParameter
struct ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestParameter::_name
	String_t* ____name_0;
	// System.String Meta.Conduit.ManifestParameter::<InternalName>k__BackingField
	String_t* ___U3CInternalNameU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedName>k__BackingField
	String_t* ___U3CQualifiedNameU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestParameter::<TypeAssembly>k__BackingField
	String_t* ___U3CTypeAssemblyU3Ek__BackingField_3;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedTypeName>k__BackingField
	String_t* ___U3CQualifiedTypeNameU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Examples>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CExamplesU3Ek__BackingField_6;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OnConduitFailedParameterResolutionAttribute
struct OnConduitFailedParameterResolutionAttribute_t3D4873C7D9582CB649EBABCD4235FA3AED107A6E  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Meta.Conduit.ParameterProvider
struct ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Meta.Conduit.ParameterProvider::ActualParameters
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___ActualParameters_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ParameterProvider::_parameterToRoleMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____parameterToRoleMap_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>> Meta.Conduit.ParameterProvider::_parametersOfType
	Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* ____parametersOfType_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Meta.Conduit.ParameterProvider::_specializedParameters
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ____specializedParameters_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.ParameterProvider::_customTypes
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ____customTypes_7;
};

struct ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>> Meta.Conduit.ParameterProvider::BuiltInTypes
	Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* ___BuiltInTypes_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Meta.Conduit.WitKeyword
struct WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8  : public RuntimeObject
{
	// System.String Meta.Conduit.WitKeyword::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.Conduit.WitKeyword::synonyms
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___synonyms_1;
};

// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};

// Meta.Conduit.ConduitDispatcher/InvocationContextFilter
struct InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher/InvocationContextFilter::_actionContexts
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ____actionContexts_0;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcher/InvocationContextFilter::_parameterProvider
	RuntimeObject* ____parameterProvider_1;
	// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter::_relaxed
	bool ____relaxed_2;
};

// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF  : public RuntimeObject
{
};

struct U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields
{
	// Meta.Conduit.Manifest/<>c Meta.Conduit.Manifest/<>c::<>9
	U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> Meta.Conduit.Manifest/<>c::<>9__29_0
	Func_2_t6D914FB0655333761474BA0B174390657A11C792* ___U3CU3E9__29_0_1;
	// System.Comparison`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest/<>c::<>9__29_1
	Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* ___U3CU3E9__29_1_2;
	// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> Meta.Conduit.Manifest/<>c::<>9__30_0
	Func_2_t6D914FB0655333761474BA0B174390657A11C792* ___U3CU3E9__30_0_3;
	// System.Comparison`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest/<>c::<>9__30_1
	Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* ___U3CU3E9__30_1_4;
};

// Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF  : public RuntimeObject
{
	// Meta.Conduit.ParameterProvider Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::<>4__this
	ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* ___U3CU3E4__this_0;
	// System.String Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::value
	String_t* ___value_1;
};

// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16  : public RuntimeObject
{
	// Meta.Conduit.ConduitDispatcher/InvocationContextFilter Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::<>4__this
	InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* ___U3CU3E4__this_0;
	// System.Single Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::confidence
	float ___confidence_1;
	// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::partial
	bool ___partial_2;
};

// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::exactMatches
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___exactMatches_0;
	// System.Func`2<System.String,System.Boolean> Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::<>9__0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__0_1;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>
struct Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>
struct Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>
struct Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestErrorHandler>
struct Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>
struct Enumerator_tAF16A9A93390BF096A051217195583C174ACF226 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Type>
struct Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Type_t* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
struct Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Meta.Conduit.ConduitActionAttribute::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_0;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_1;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_5;
	// System.Boolean Meta.Conduit.ConduitActionAttribute::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_6;
};

// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tF1B82E6F0AB58F50ACDEF82312D9E42B00971C05  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tD40479BED307DEDCFD36BEC47D1DD4704F32B923  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Meta.Conduit.ConduitEntityAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Meta.Conduit.ConduitEntityAttribute::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_1;
};

// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tE982CA28EB1324B9DCF4F93D010E802A41297A3F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Examples>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CExamplesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_1;
};

// Meta.Conduit.ConduitParameterValue
struct ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A 
{
	// System.Object Meta.Conduit.ConduitParameterValue::Value
	RuntimeObject* ___Value_0;
	// System.Type Meta.Conduit.ConduitParameterValue::DataType
	Type_t* ___DataType_1;
};
// Native definition for P/Invoke marshalling of Meta.Conduit.ConduitParameterValue
struct ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_pinvoke
{
	Il2CppIUnknown* ___Value_0;
	Type_t* ___DataType_1;
};
// Native definition for COM marshalling of Meta.Conduit.ConduitParameterValue
struct ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_com
{
	Il2CppIUnknown* ___Value_0;
	Type_t* ___DataType_1;
};

// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_tD8B12A202DD244D99C86ABD0CF13E40E26B61F0C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String[] Meta.Conduit.ConduitValueAttribute::<Aliases>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CAliasesU3Ek__BackingField_0;
};

// Meta.Conduit.HandleEntityResolutionFailure
struct HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Void
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

// Meta.WitAi.Data.Info.WitEntityInfo
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 
{
	// System.String Meta.WitAi.Data.Info.WitEntityInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitEntityInfo::id
	String_t* ___id_1;
	// System.String[] Meta.WitAi.Data.Info.WitEntityInfo::lookups
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lookups_2;
	// Meta.WitAi.Data.Info.WitEntityRoleInfo[] Meta.WitAi.Data.Info.WitEntityInfo::roles
	WitEntityRoleInfoU5BU5D_t04D4D146ECDA2EF9AB18EF592F203AE0463E1A3C* ___roles_3;
	// Meta.WitAi.Data.Info.WitEntityKeywordInfo[] Meta.WitAi.Data.Info.WitEntityInfo::keywords
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* ___keywords_4;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitEntityInfo
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char** ___lookups_2;
	WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_pinvoke* ___roles_3;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke* ___keywords_4;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitEntityInfo
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar** ___lookups_2;
	WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_com* ___roles_3;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com* ___keywords_4;
};

// Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B 
{
	// System.String Meta.WitAi.Data.Info.WitEntityKeywordInfo::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Info.WitEntityKeywordInfo::synonyms
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke
{
	char* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com
{
	Il2CppChar* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};

// Meta.WitAi.Json.WitResponseClass
struct WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::m_Dict
	Dictionary_2_tC2F17B4EBFD9F0FDFFCDED4E70FD0B5EBA0CF7EE* ___m_Dict_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>
struct KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>
struct KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
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
// Native definition for COM marshalling of System.Delegate
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>
struct Enumerator_tC0B15325B02A013F59DA13D665506212890A2318 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC85CF4FE0A51DF2B8E882F8F065251A88AE26E72* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>
struct Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_t6D914FB0655333761474BA0B174390657A11C792  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Meta.Conduit.ConduitUtilities/ProgressDelegate
struct ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* m_Items[1];

	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811  : public RuntimeArray
{
	ALIGN_FIELD (8) WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B m_Items[1];

	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared (RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Json.JsonConvert::SerializeObject<System.Object>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_TisRuntimeObject_m38455FCF691812B499C0745839BE4B53DBC47D75_gshared (RuntimeObject* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject<System.Object>(System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m0EF3892D789879CC96C9463A168FC523969A84EB_gshared (String_t* ___jsonString0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9558C0226F554F138CCD9A7E4B579D216140DB9E_gshared (Dictionary_2_tC85CF4FE0A51DF2B8E882F8F065251A88AE26E72* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7FE29D4F015DC5A89F5EFDDFA7F8525718E10C65_gshared (Dictionary_2_tC85CF4FE0A51DF2B8E882F8F065251A88AE26E72* __this, RuntimeObject* ___key0, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC0B15325B02A013F59DA13D665506212890A2318 Dictionary_2_GetEnumerator_m993E8482918C397078DD37CD750945EBE54DA198_gshared (Dictionary_2_tC85CF4FE0A51DF2B8E882F8F065251A88AE26E72* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCD88839FA17785EA41833BBA96DE9893C71BCFB1_gshared (Enumerator_tC0B15325B02A013F59DA13D665506212890A2318* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE Enumerator_get_Current_m9461F8DD3B1549AA280CA3093B9924C75EF711FB_gshared_inline (Enumerator_tC0B15325B02A013F59DA13D665506212890A2318* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mF2B6D70C96DE2C79036B566B115E94DDBAA92929_gshared_inline (KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A KeyValuePair_2_get_Value_mED83098EBD05D3C381878ED761B693F143D8AC94_gshared_inline (KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m67CCC753F6E3B2DCEC73B75ED3543AB1E1E3BE2F_gshared (Enumerator_tC0B15325B02A013F59DA13D665506212890A2318* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m32F0B82886526DC0AC54F7E8899959DE07D33916_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m8FE9D015FE7A41331C354AB2F2E4F9DDACE40C8D_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_mFC741D856AB95314FDFB79565CF8CF2571D164E9_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_m1F304E5837CA3B4DBDD465DB00FF8CDFFD8B89D8_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_m3B9786A33371EE0A7D29DF9DCCAD277DA166120E_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::get_Manifest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitDispatcher::set_Manifest(Meta.Conduit.Manifest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitDispatcher_set_Manifest_m0878617A2A5313ABD9C33AF75DD26F6FF8E32B84_inline (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* Manifest_get_Actions_m8B2EF91B9121484FA6F79C35B40023206694C8CC_inline (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::GetEnumerator()
inline Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C (List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 (*) (List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::Dispose()
inline void Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1 (Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::get_Current()
inline ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_inline (Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643* __this, const RuntimeMethod* method)
{
	return ((  ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* (*) (Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::GetEnumerator()
inline Enumerator_tAF16A9A93390BF096A051217195583C174ACF226 List_1_GetEnumerator_m5229A9BE6FB48904924E5E17BD5C1D57039B351F (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAF16A9A93390BF096A051217195583C174ACF226 (*) (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::Dispose()
inline void Enumerator_Dispose_mC684B6AA52FC891A27264CF060CA92FE12B39067 (Enumerator_tAF16A9A93390BF096A051217195583C174ACF226* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAF16A9A93390BF096A051217195583C174ACF226*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::get_Current()
inline ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* Enumerator_get_Current_mAB224D7C396A7CF8EC73C86E90EBC2F5448E3DB8_inline (Enumerator_tAF16A9A93390BF096A051217195583C174ACF226* __this, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* (*) (Enumerator_tAF16A9A93390BF096A051217195583C174ACF226*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::MoveNext()
inline bool Enumerator_MoveNext_m12A506D712876F04BD86BA9823E4F85B40C431F2 (Enumerator_tAF16A9A93390BF096A051217195583C174ACF226* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAF16A9A93390BF096A051217195583C174ACF226*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::MoveNext()
inline bool Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2 (Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_m2E00FD463D1063AF63275FE29A77AEB88ECDC69A (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeError(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, String_t* ___actionId0, Exception_t* ___exception1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m7943297ED32FD0E92544C324E6793089056A2344 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Manifest_GetInvocationContexts_mF190BFA9E6EAD5527D527E24CC4BADC9C42F4D50 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___actionId0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter::.ctor(Meta.Conduit.IParameterProvider,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContextFilter__ctor_m367BFACDCC7D21FB957DAE6569CC766F6A073E20 (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* __this, RuntimeObject* ___parameterProvider0, List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ___actionContexts1, bool ___relaxed2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher/InvocationContextFilter::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t94DD792BDF578F202193C4307B641B72F69191B2* InvocationContextFilter_ResolveInvocationContexts_m88E97AB506B0906EFEBA7A8B6E8B51F654CCCBD7 (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* __this, String_t* ___actionId0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::get_Count()
inline int32_t List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_inline (List_1_t94DD792BDF578F202193C4307B641B72F69191B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::GetEnumerator()
inline Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2 (List_1_t94DD792BDF578F202193C4307B641B72F69191B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 (*) (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::Dispose()
inline void Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1 (Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::get_Current()
inline InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_inline (Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054* __this, const RuntimeMethod* method)
{
	return ((  InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* (*) (Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext,Meta.Conduit.IParameterProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_mC1474DEA8393AE0F216ECA44B0E189CA13DA211B (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___invocationContext0, RuntimeObject* ___parameterProvider1, bool ___relaxed2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::MoveNext()
inline bool Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F (Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetErrorHandlerContexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Manifest_GetErrorHandlerContexts_m0DE2B75A71ABAC22A2E7417F6BD630AC0EB988D5 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ParameterProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__ctor_m1F1A3EA5D91069D81E29A8AA1548CE27F1191628 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ParameterProvider::AddParameter(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_AddParameter_mCC7BFCBECF85236CFDE5E9FA3B8AFE64D4E97365 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, String_t* ___parameterName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.InvocationContext::get_ParameterMap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* InvocationContext_get_ParameterMap_m933EEB7EADCB585A6C4BB97FAAD1C18D428092A0_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m495887DD9D2DFD38613889A1DD5D0436F5281A4F (U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::.ctor()
inline void List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF (List_1_t94DD792BDF578F202193C4307B641B72F69191B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4932387574E68D73615432E11E76083973A30BEC (Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mAE59B4116E15C8775F67B603063AAADF8EA4E75D (RuntimeObject* ___source0, Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Enumerable_ToList_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mDECA5A7D2FF94431EB7A514F1F69F19284B1483D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t94DD792BDF578F202193C4307B641B72F69191B2* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5C4DA507A1E1B6C93F8F2E312C05E7BBFABE867F (U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m64F573CDAA0C379C24591B6C08F7172AEAE2AB96_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_mDE23073D58B32F8574BD3D5DF5C7B5966F1648D6_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_m09220F555BBEA805108A93A56DC229AFB78232D8_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(T)
inline bool HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(T)
inline bool HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1 (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Meta.Conduit.InvocationContext::set_ParameterMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ParameterMap_mC2241625BEB9C825F5DA62CDCB4748238B4F2BB6_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContextFilter_CompatibleInvocationContext_mB89BA0F2D93C4A642AA48860262C682F4E715472 (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___invocationContext0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_m0D50EEF79E168DE4AB3DED6904880651EC9E2509 (ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m47C2260B198890BC2E03D3614F09F94EF1C7A7A7 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m8E802C10B5A591BEA61FC00EA8E4AF398D815A90 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ConduitUtilities::StripWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_StripWhiteSpace_mE3B4D03D41AF77C085D16721525390DE3FB7390D (String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ConduitUtilities::SanitizeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeName_mC6A1737F89D48CCDF93C9558F3A819AF6207AF23 (String_t* ___input0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ConduitUtilities::SanitizeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeString_m44A4FF1FABAF37E2DF755AC9ED1634D76A19FC89 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___input0, String_t* ___pattern1, String_t* ___replacement2, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_mC2243C7446D54883585D9DE5162773505DB9A156 (ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_m0139C0346ABC769AF1AEE804FCE229D14C061730 (ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A* __this, RuntimeObject* ___value0, Type_t* ___dataType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::.ctor()
inline void List_1__ctor_mED3E112F42E29814C2B9E1E75A2540F209F92ECB (List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::.ctor()
inline void List_1__ctor_m3B8A5EC544B96A585EB2BEB76D8C06D8B9FDDAAA (List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler>::.ctor()
inline void List_1__ctor_mB6DA373D70052DF30F55409071827A2CBA26EC75 (List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_mE5C23C612DABFA89D98A9B333F992863519AC3B2 (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* Manifest_get_Entities_mE3AA0DB6D8213431FA83BEFE40505EC4E4122602_inline (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::GetEnumerator()
inline Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231 List_1_GetEnumerator_m69602B946033E334F3B9E1A5BDDE144D3980715E (List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231 (*) (List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>::Dispose()
inline void Enumerator_Dispose_m85690411E843E7A8E091143C1A15F608ABA7E4DA (Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>::get_Current()
inline ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* Enumerator_get_Current_m02A1F6644E4D3B4CEBC6FFA427D3A95468294DCE_inline (Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231* __this, const RuntimeMethod* method)
{
	return ((  ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* (*) (Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestEntity::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::get_CustomEntityTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* Manifest_get_CustomEntityTypes_m2989EE750AA255E385036B2EBC2B92B075866A55_inline (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>::MoveNext()
inline bool Enumerator_MoveNext_mF796C14D4EF5DF63DCD7E988F49E62CD1800A5D0 (Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Count()
inline int32_t List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_inline (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Item(System.Int32)
inline ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* List_1_get_Item_mFADFD9C19245102C37B606127FF10C26A410C5E8 (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* (*) (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo Meta.Conduit.Manifest::GetBestMethodMatch(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Manifest_GetBestMethodMatch_m73CB349AAD1448F2C115C07035BBD5E5AB6F3BB1 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, Type_t* ___targetType0, String_t* ___method1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameterTypes2, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Reflection.MethodInfo,System.Type>(T1,T2)
inline Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* Tuple_Create_TisMethodInfo_t_TisType_t_m64F30CF793658CEA821C36F7102C7D0CD647B29C (MethodInfo_t* ___item10, Type_t* ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* (*) (MethodInfo_t*, Type_t*, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared)(___item10, ___item21, method);
}
// System.Tuple`2<System.Reflection.MethodInfo,System.Type> Meta.Conduit.Manifest::GetMethodInfo(Meta.Conduit.IManifestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, RuntimeObject* ___action0, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Reflection.MethodInfo,System.Type>::get_Item1()
inline MethodInfo_t* Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_inline (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* __this, const RuntimeMethod* method)
{
	return ((  MethodInfo_t* (*) (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.Reflection.MethodInfo,System.Type>::get_Item2()
inline Type_t* Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_inline (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m060A8C1B90169CA46206852E8F643699D16C96BD (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m8FDF69B3BBF055D277DEB1BF31A9259A6634D9B4_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m779020E00E1CB14220D86EE95010E74E9D8AEB5B_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, MethodInfo_t* ___value0, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_m1AB668B87682791F5BA553EA0751A0E956D3B453_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m15AC7D051D0E28F5BD52A4D2D0879BA65609441D_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_m9CF249D68A9DE82992CE6462330CD8773B62160A_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m4E5E85844F36DCE65F2DA648C7C4C74C6D65EFDE_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_m83EA5CF9642717EF0BCB81D8FA30DE5521ED7568_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m9D70B4D7455C33EBFF95E86F34A7EE4BE3B5FBF9_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404 (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* __this, String_t* ___key0, List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1*, String_t*, List_1_t94DD792BDF578F202193C4307B641B72F69191B2*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Item(TKey)
inline List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2 (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t94DD792BDF578F202193C4307B641B72F69191B2* (*) (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Add(T)
inline void List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_inline (List_1_t94DD792BDF578F202193C4307B641B72F69191B2* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Values()
inline ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3 (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* (*) (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB6272D353A4F60B264AF1EAB4773E5408D622671 (Func_2_t6D914FB0655333761474BA0B174390657A11C792* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6D914FB0655333761474BA0B174390657A11C792*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF (RuntimeObject* ___source0, Func_2_t6D914FB0655333761474BA0B174390657A11C792* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6D914FB0655333761474BA0B174390657A11C792*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Comparison`1<Meta.Conduit.InvocationContext>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m5419357CB7E73386684DC5F24A8F765CD8140C32 (Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE (List_1_t94DD792BDF578F202193C4307B641B72F69191B2* __this, Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*, Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler>::GetEnumerator()
inline Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983 List_1_GetEnumerator_m65EFFF7C5B13CD4976A648E37107530804079F3A (List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983 (*) (List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestErrorHandler>::Dispose()
inline void Enumerator_Dispose_m91059E7EC442284B0EBA57CBA4535237D01F9019 (Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestErrorHandler>::get_Current()
inline ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* Enumerator_get_Current_m879B042047E966B07836FB18157D91F19952ECA5_inline (Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983* __this, const RuntimeMethod* method)
{
	return ((  ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* (*) (Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestErrorHandler::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_CustomAttributeType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_CustomAttributeType_m9D25D6AE3843F689A44401471FFFA3E4B9334B46_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestErrorHandler::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestErrorHandler>::MoveNext()
inline bool Enumerator_MoveNext_mBA694667FDE9A4D21721BD4084D5001F2D65D431 (Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.Manifest::ResolveAllActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveAllActions_m56DBD28949421B14C39DF62999A94723D9F0A58C (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.Manifest::ResolveErrorHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveErrorHandlers_mD02B0F2B901B134BC608ECCD3B122933D92D0E09 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mA605A28A04232563F51674827C52C17447DE686F (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, int32_t ___callConvention3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types4, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___modifiers5, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Json.JsonConvert::SerializeObject<Meta.Conduit.Manifest>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline String_t* JsonConvert_SerializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_mBC6496D48DF51233C15A713AE8E7C0E7249785DE (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_SerializeObject_TisRuntimeObject_m38455FCF691812B499C0745839BE4B53DBC47D75_gshared)(___inObject0, ___customConverters1, ___suppressWarnings2, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator()
inline Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7 ValueCollection_GetEnumerator_mD1639CCCC6F207E7F7FBA07172B043F84F195E55 (ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7 (*) (ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::Dispose()
inline void Enumerator_Dispose_mCF8CBD37EAAAB696E8E26CFEF73093A4CBABCCD6 (Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current()
inline List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Enumerator_get_Current_m517F77C18E493A797C148AE62592F432A2AB3980_inline (Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7* __this, const RuntimeMethod* method)
{
	return ((  List_1_t94DD792BDF578F202193C4307B641B72F69191B2* (*) (Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Type Meta.Conduit.InvocationContext::get_CustomAttributeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_CustomAttributeType_m2223CA7341C01FDE8645D4E79F9BB99A63A966C2_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::MoveNext()
inline bool Enumerator_MoveNext_m05610CC5D9B4A6B3F19A2F7D8CEA22D10E290E75 (Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1913A49CFFC2C2F65818EC640E1325EEC45929EB (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::.ctor()
inline void List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6 (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mF9EA05B7EA2EA454EF5ED0130E1FC7E71CE85FAD (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* ___other0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m8A82ADD01F8A114FDCF85D793BCABFB35D04FF7A_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.ManifestParameter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___first0, ___second1, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___first0, ___second1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>::.ctor()
inline void List_1__ctor_mA25297A4CF576A77414984BE7A304D7F8BC8991B (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>::get_Count()
inline int32_t List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_inline (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>::get_Item(System.Int32)
inline WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* List_1_get_Item_m91051B30B6AB69098BA8356766D4E7BA9E38450D (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* (*) (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Meta.WitAi.Data.Info.WitEntityKeywordInfo Meta.Conduit.WitKeyword::GetAsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B WitKeyword_GetAsInfo_m70E48753C5D4DF8EA252B72FD5A3BEF271685C0C (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m0BF2FD98F4EFF9B93EBDF376E054F97CFA534E2A (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* ___other0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_m9EF078EE7DE22609691C2B87FE18063D64FB5E3E_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.WitKeyword>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisWitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_m4CF7FA4CF7FE008DF1FD5333190AF04FDED7AC9D (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___first0, ___second1, method);
}
// System.Boolean Meta.Conduit.ManifestErrorHandler::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestErrorHandler_Equals_mC32401DA594687295CE3A1B001DA3A95718CB85A (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* ___other0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestErrorHandler::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_Assembly_m2321C9AD397DEDFF39AC89405896A5F1EA2A4C5F_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestErrorHandler::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ManifestErrorHandler_get_Parameters_m01EDADD0B736F2B2EAE35807FE8DE39BB3FDA228_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifestFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ManifestLoader_LoadManifestFromString_m2BE9B5E319D0898CCB078A09FB069F6D0CFA8C3E (ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524* __this, String_t* ___manifestText0, const RuntimeMethod* method) ;
// IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject<Meta.Conduit.Manifest>(System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* JsonConvert_DeserializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_m8FF42AAAAD980FCE7BC682223963FF990C842832 (String_t* ___jsonString0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method)
{
	return ((  Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* (*) (String_t*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m0EF3892D789879CC96C9463A168FC523969A84EB_gshared)(___jsonString0, ___customConverters1, ___suppressWarnings2, method);
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m580972D0FF5815587B6BBFC88552DB9EAA8B1465 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m074EDB140A18AB1C9F213546B40D9E275F5971D5 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m85EC73999DB25EFE2BB9583ED6A3850C876E008E (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* ___other0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_m6FE42728BFF410D4B0AE509068BD5E930BEF38CC_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_m7A3E52D9E4DBEC8663BF66694A831518A9C5138E (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.WitKeyword::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_mFCB55011EB7E9B59EC5CD488A55A793A4C50FE44 (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, String_t* ___keyword0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
inline void HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared)(__this, ___comparer0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.WitKeyword::Equals(Meta.Conduit.WitKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitKeyword_Equals_m389C6257F415C6BCBDD3120FFC5046CF4C6EB36E (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* ___other0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
inline KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::Clear()
inline void Dictionary_2_Clear_m2F269BF7557A32E757C7C862AAB61F19F680B174 (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>::.ctor()
inline void Dictionary_2__ctor_mD0F60043295B515B177407A0116DBD24A0C33E20 (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31*, const RuntimeMethod*))Dictionary_2__ctor_m9558C0226F554F138CCD9A7E4B579D216140DB9E_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> Meta.Conduit.ParameterProvider::GetParameterTypes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterTypes_m7C684D208196F0BBB11B517E3DFBD55A9ECC9E51 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, String_t* ___typeString0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
inline Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Type>::Dispose()
inline void Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Type>::get_Current()
inline Type_t* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847 (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFDE56E6F9A76A0A5A6DFDE40FF8B1AF1014EF4A8 (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* __this, Type_t* ___key0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*, Type_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::get_Item(TKey)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24 (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Type>::MoveNext()
inline bool Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::First<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Type_t* Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>::Add(TKey,TValue)
inline void Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3 (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* __this, String_t* ___key0, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31*, String_t*, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A, const RuntimeMethod*))Dictionary_2_Add_m7FE29D4F015DC5A89F5EFDDFA7F8525718E10C65_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Meta.Conduit.ParameterProvider::PopulateParameters(System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateParameters_mCCAFA3A2DF200B4043C3C7E750075A7BF20EA80C (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* ___actualParameters0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDA78A8299D16DD1B42B93F0C63BE2D9CE92F8A00 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>::GetEnumerator()
inline Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D Dictionary_2_GetEnumerator_m59412EB76A7C9D53E553667D93EB39D603904510 (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D (*) (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m993E8482918C397078DD37CD750945EBE54DA198_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>::Dispose()
inline void Enumerator_Dispose_mA2183F479CA8E4A6449070267A26B07D47B008AE (Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D*, const RuntimeMethod*))Enumerator_Dispose_mCD88839FA17785EA41833BBA96DE9893C71BCFB1_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>::get_Current()
inline KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1 Enumerator_get_Current_m2F11D9C4E51E6A39DC93A948D49CE752C7276773_inline (Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1 (*) (Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D*, const RuntimeMethod*))Enumerator_get_Current_m9461F8DD3B1549AA280CA3093B9924C75EF711FB_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m7C5237B6086953A4FBAD6A2A502BA319E3B8D10F_inline (KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF2B6D70C96DE2C79036B566B115E94DDBAA92929_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>::get_Value()
inline ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A KeyValuePair_2_get_Value_m2DB6F6B4F5ADD18CDA1A6895B4AC9D70FEECEFFF_inline (KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1* __this, const RuntimeMethod* method)
{
	return ((  ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A (*) (KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1*, const RuntimeMethod*))KeyValuePair_2_get_Value_mED83098EBD05D3C381878ED761B693F143D8AC94_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>::MoveNext()
inline bool Enumerator_MoveNext_m95A1F8B157CDCC42C154D34A9228C49ACDD0D5E6 (Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D*, const RuntimeMethod*))Enumerator_MoveNext_m67CCC753F6E3B2DCEC73B75ED3543AB1E1E3BE2F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ParameterProvider::GetActualParameterName(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterProvider_GetActualParameterName_m94C422230627624BE7B7B27E4F0D96E165DFC363 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterMap1, bool ___relaxed2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12 (Type_t* ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___value0, Type_t* ___conversionType1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9F366137F27E2FF10A5B92FB834793E5B0139E21 (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* __this, Type_t* ___key0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*, Type_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::get_Count()
inline int32_t KeyCollection_get_Count_mAD3DF05B21AE795B7836B3ED94ECD95683407447 (KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
inline Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD KeyCollection_GetEnumerator_m028C1B46460EAA3BB2B4349BE23DB673F511D661 (KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD (*) (KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m3602430875554621B9AAA9A707076184F906A350 (Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::get_Current()
inline String_t* Enumerator_get_Current_m4D4C0E84CFA4BEFE9E1639DF04D9B412A797F434_inline (Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m402143BA38652F8CC5B3E6A19CA6726169962C3B (Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mFA80DC08AC41F62317346BDA7E2184ACA6E7C438 (U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(TKey)
inline Type_t* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m040C78DD55C2C880875E0255B365717A90147289 (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::get_Item(TKey)
inline List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9 (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* (*) (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::GetParameterNamesOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ParameterProvider_GetParameterNamesOfType_mA0B6DD8FDCE30D7F1023C8E3ED8C448A353C5963 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::get_AllParameterNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ParameterProvider_get_AllParameterNames_m8C3DB0580EB37F76321508CAFED206F6A6614B3A (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m8333423E1B60528740D0CF38D0918FAA0FDE12DB (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m201D4C32BA21CBF329B875E58C2515ABC9E29894 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_mA31507DC417938205138CC99DEE0407DFBB8D86C (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor()
inline void Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::.ctor()
inline void Dictionary_2__ctor_mD4185E69777B52FB227271B2F4549AB7C9120C66 (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2 (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* __this, String_t* ___key0, List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9*, String_t*, List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Meta.Conduit.ParameterProvider::PerfectTypeMatch(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_PerfectTypeMatch_m814AFCB8DB6390A8335460B6DFF51BC0D97F17BF (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Type_t* ___targetType0, String_t* ___value1, const RuntimeMethod* method) ;
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
// System.Void Oculus.Interaction.Deprecated.HandleEntityResolutionFailureAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleEntityResolutionFailureAttribute__ctor_mE513B9E37B18DF7DA67531614D5F7CD0769AB23A (HandleEntityResolutionFailureAttribute_t2933118A4083250751D4D57173BE3B9B95AD9022* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Oculus.Interaction.Deprecated.OnConduitFailedParameterResolutionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConduitFailedParameterResolutionAttribute__ctor_m238CDBE11A96B6559FE144AFA894C0A1687DD934 (OnConduitFailedParameterResolutionAttribute_t3D4873C7D9582CB649EBABCD4235FA3AED107A6E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Meta.Conduit.ConduitActionAttribute::get_Intent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitActionAttribute_get_Intent_m8E49B0E5F9C95D7FAF2E011F09999FC078431D89 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = __this->___U3CIntentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m32F0B82886526DC0AC54F7E8899959DE07D33916 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CIntentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_m1AB668B87682791F5BA553EA0751A0E956D3B453 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_mFC741D856AB95314FDFB79565CF8CF2571D164E9 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_m9CF249D68A9DE82992CE6462330CD8773B62160A (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_m1F304E5837CA3B4DBDD465DB00FF8CDFFD8B89D8 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitActionAttribute_get_Aliases_m26E79038AED50136F172E80867B6A5A4BE13B37B (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m8FE9D015FE7A41331C354AB2F2E4F9DDACE40C8D (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_m83EA5CF9642717EF0BCB81D8FA30DE5521ED7568 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_m3B9786A33371EE0A7D29DF9DCCAD277DA166120E (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_m893F2F8BBAD169427CCE757EEF0E08C3550C8750 (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, String_t* ___intent0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m32F0B82886526DC0AC54F7E8899959DE07D33916_inline(__this, L_0, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___aliases1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_1, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m8FE9D015FE7A41331C354AB2F2E4F9DDACE40C8D_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.Single,System.Single,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_mDD815F166271E464D875C0FBBA24D4AAF602828E (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, String_t* ___intent0, float ___minConfidence1, float ___maxConfidence2, bool ___validatePartial3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", float minConfidence = DEFAULT_MIN_CONFIDENCE, float maxConfidence = DEFAULT_MAX_CONFIDENCE, bool validatePartial = false, params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m32F0B82886526DC0AC54F7E8899959DE07D33916_inline(__this, L_0, NULL);
		// this.MinConfidence = minConfidence;
		float L_1 = ___minConfidence1;
		ConduitActionAttribute_set_MinConfidence_mFC741D856AB95314FDFB79565CF8CF2571D164E9_inline(__this, L_1, NULL);
		// this.MaxConfidence = maxConfidence;
		float L_2 = ___maxConfidence2;
		ConduitActionAttribute_set_MaxConfidence_m1F304E5837CA3B4DBDD465DB00FF8CDFFD8B89D8_inline(__this, L_2, NULL);
		// this.ValidatePartial = validatePartial;
		bool L_3 = ___validatePartial3;
		ConduitActionAttribute_set_ValidatePartial_m3B9786A33371EE0A7D29DF9DCCAD277DA166120E_inline(__this, L_3, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___aliases4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5;
		L_5 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_4, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m8FE9D015FE7A41331C354AB2F2E4F9DDACE40C8D_inline(__this, L_5, NULL);
		// }
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
// System.Void Meta.Conduit.ConduitAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitAssemblyAttribute__ctor_m9D0D2AC3476EEBBB872CCD49B8DC47806461A328 (ConduitAssemblyAttribute_tF1B82E6F0AB58F50ACDEF82312D9E42B00971C05* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.String Meta.Conduit.ConduitEntityAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitEntityAttribute_get_Name_m10E50242C91214E78F93A660E743EE1BB4B4A2EC (ConduitEntityAttribute_tD40479BED307DEDCFD36BEC47D1DD4704F32B923* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Meta.Conduit.ConduitEntityAttribute::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitEntityAttribute_get_ID_m86CC2471DEA6B5A3AF5084F7D2B564470EB54824 (ConduitEntityAttribute_tD40479BED307DEDCFD36BEC47D1DD4704F32B923* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitEntityAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitEntityAttribute__ctor_m07225D537713C9690CE5057FCB4C291ED3707C49 (ConduitEntityAttribute_tD40479BED307DEDCFD36BEC47D1DD4704F32B923* __this, String_t* ___name0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// public ConduitEntityAttribute(string name, string id = null)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		// this.ID = id;
		String_t* L_1 = ___id1;
		__this->___U3CIDU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_1), (void*)L_1);
		// }
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
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Examples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitParameterAttribute_get_Examples_m86A17028B8E89EFA9671FA4C9E153C946C457794 (ConduitParameterAttribute_tE982CA28EB1324B9DCF4F93D010E802A41297A3F* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Examples { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CExamplesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitParameterAttribute_get_Aliases_m01D15641868CF26DD5DFFF63B14CBE4E9A15DA9A (ConduitParameterAttribute_tE982CA28EB1324B9DCF4F93D010E802A41297A3F* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_m5433EB4473BC2EA25654023725580733EE32446E (ConduitParameterAttribute_tE982CA28EB1324B9DCF4F93D010E802A41297A3F* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___examples0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(params string[] examples)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Examples = examples.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___examples0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_0, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		__this->___U3CExamplesU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExamplesU3Ek__BackingField_0), (void*)L_1);
		// this.Aliases = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_m42AA6A372E82C2354025155B7C3E7551F26BA849 (ConduitParameterAttribute_tE982CA28EB1324B9DCF4F93D010E802A41297A3F* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___examples1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(string[] aliases, params string[] examples)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Examples = examples.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___examples1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_0, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		__this->___U3CExamplesU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExamplesU3Ek__BackingField_0), (void*)L_1);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___aliases0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_2, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_1), (void*)L_3);
		// }
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
// System.Void Meta.Conduit.ConduitValueAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitValueAttribute__ctor_mD1E9C760C95142E5F3DD99DD445C43E113D3DB15 (ConduitValueAttribute_tD8B12A202DD244D99C86ABD0CF13E40E26B61F0C* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases0, const RuntimeMethod* method) 
{
	{
		// public ConduitValueAttribute(params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Aliases = aliases;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___aliases0;
		__this->___U3CAliasesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.String[] Meta.Conduit.ConduitValueAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ConduitValueAttribute_get_Aliases_mEBC58D38B21D90A233CAE9D4EB7D580EB50514D5 (ConduitValueAttribute_tD8B12A202DD244D99C86ABD0CF13E40E26B61F0C* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Aliases { get; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CAliasesU3Ek__BackingField_0;
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
// System.Void Meta.Conduit.HandleEntityResolutionFailure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleEntityResolutionFailure__ctor_m81FF1B049B4417C91088703057BE8DFE65F0BB78 (HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F* __this, const RuntimeMethod* method) 
{
	{
		// public HandleEntityResolutionFailure()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
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
// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::get_Manifest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, const RuntimeMethod* method) 
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0 = __this->___U3CManifestU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::set_Manifest(Meta.Conduit.Manifest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_set_Manifest_m0878617A2A5313ABD9C33AF75DD26F6FF8E32B84 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0 = ___value0;
		__this->___U3CManifestU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CManifestU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m47C2260B198890BC2E03D3614F09F94EF1C7A7A7 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, string> _parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____parameterToRoleMap_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterToRoleMap_3), (void*)L_0);
		// private readonly HashSet<string> _ignoredActionIds = new HashSet<string>();
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->____ignoredActionIds_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ignoredActionIds_4), (void*)L_1);
		// public ConduitDispatcher(IManifestLoader manifestLoader, IInstanceResolver instanceResolver)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _manifestLoader = manifestLoader;
		RuntimeObject* L_2 = ___manifestLoader0;
		__this->____manifestLoader_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manifestLoader_1), (void*)L_2);
		// _instanceResolver = instanceResolver;
		RuntimeObject* L_3 = ___instanceResolver1;
		__this->____instanceResolver_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____instanceResolver_2), (void*)L_3);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_Initialize_mB911E4FB63D84603C3A342CAD2904BF2F2158D81 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, String_t* ___manifestFilePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC684B6AA52FC891A27264CF060CA92FE12B39067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12A506D712876F04BD86BA9823E4F85B40C431F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAB224D7C396A7CF8EC73C86E90EBC2F5448E3DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManifestLoader_t8EDD60C4BD242733C597A2E36940A81563FCE38E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5229A9BE6FB48904924E5E17BD5C1D57039B351F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tAF16A9A93390BF096A051217195583C174ACF226 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* V_2 = NULL;
	{
		// if (Manifest != null)
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0;
		L_0 = ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline(__this, NULL);
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
		// Manifest = _manifestLoader.LoadManifest(manifestFilePath);
		RuntimeObject* L_1 = __this->____manifestLoader_1;
		String_t* L_2 = ___manifestFilePath0;
		NullCheck(L_1);
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_3;
		L_3 = InterfaceFuncInvoker1< Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB*, String_t* >::Invoke(0 /* Meta.Conduit.Manifest Meta.Conduit.IManifestLoader::LoadManifest(System.String) */, IManifestLoader_t8EDD60C4BD242733C597A2E36940A81563FCE38E_il2cpp_TypeInfo_var, L_1, L_2);
		ConduitDispatcher_set_Manifest_m0878617A2A5313ABD9C33AF75DD26F6FF8E32B84_inline(__this, L_3, NULL);
		// if (Manifest == null)
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_4;
		L_4 = ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline(__this, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// foreach (var action in Manifest.Actions)
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_5;
		L_5 = ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline(__this, NULL);
		NullCheck(L_5);
		List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* L_6;
		L_6 = Manifest_get_Actions_m8B2EF91B9121484FA6F79C35B40023206694C8CC_inline(L_5, NULL);
		NullCheck(L_6);
		Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 L_7;
		L_7 = List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C(L_6, List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1((&V_0), Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0096_1;
			}

IL_0037_1:
			{
				// foreach (var action in Manifest.Actions)
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_8;
				L_8 = Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_inline((&V_0), Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_RuntimeMethod_var);
				// foreach (var parameter in action.Parameters)
				NullCheck(L_8);
				List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_9;
				L_9 = ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline(L_8, NULL);
				NullCheck(L_9);
				Enumerator_tAF16A9A93390BF096A051217195583C174ACF226 L_10;
				L_10 = List_1_GetEnumerator_m5229A9BE6FB48904924E5E17BD5C1D57039B351F(L_9, List_1_GetEnumerator_m5229A9BE6FB48904924E5E17BD5C1D57039B351F_RuntimeMethod_var);
				V_1 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0088_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC684B6AA52FC891A27264CF060CA92FE12B39067((&V_1), Enumerator_Dispose_mC684B6AA52FC891A27264CF060CA92FE12B39067_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_007d_2;
					}

IL_004b_2:
					{
						// foreach (var parameter in action.Parameters)
						ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_11;
						L_11 = Enumerator_get_Current_mAB224D7C396A7CF8EC73C86E90EBC2F5448E3DB8_inline((&V_1), Enumerator_get_Current_mAB224D7C396A7CF8EC73C86E90EBC2F5448E3DB8_RuntimeMethod_var);
						V_2 = L_11;
						// if (!_parameterToRoleMap.ContainsKey(parameter.InternalName))
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = __this->____parameterToRoleMap_3;
						ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_13 = V_2;
						NullCheck(L_13);
						String_t* L_14;
						L_14 = ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline(L_13, NULL);
						NullCheck(L_12);
						bool L_15;
						L_15 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_12, L_14, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
						if (L_15)
						{
							goto IL_007d_2;
						}
					}
					{
						// _parameterToRoleMap.Add(parameter.InternalName, parameter.QualifiedName);
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = __this->____parameterToRoleMap_3;
						ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_17 = V_2;
						NullCheck(L_17);
						String_t* L_18;
						L_18 = ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline(L_17, NULL);
						ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_19 = V_2;
						NullCheck(L_19);
						String_t* L_20;
						L_20 = ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B_inline(L_19, NULL);
						NullCheck(L_16);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_16, L_18, L_20, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
					}

IL_007d_2:
					{
						// foreach (var parameter in action.Parameters)
						bool L_21;
						L_21 = Enumerator_MoveNext_m12A506D712876F04BD86BA9823E4F85B40C431F2((&V_1), Enumerator_MoveNext_m12A506D712876F04BD86BA9823E4F85B40C431F2_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_004b_2;
						}
					}
					{
						goto IL_0096_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0096_1:
			{
				// foreach (var action in Manifest.Actions)
				bool L_22;
				L_22 = Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2((&V_0), Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeAction(Meta.Conduit.IParameterProvider,System.String,System.Boolean,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeAction_m24F26CF97DAAA78229F31FD310B5B344D8018576 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, RuntimeObject* ___parameterProvider0, String_t* ___actionId1, bool ___relaxed2, float ___confidence3, bool ___partial4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5681D5B3BD75209607373A22E88879E1A1FC5396);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral814575F591B0E9CFD43287EB260866FE4422277C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E15B07E6778CBDAB69ADFF22826B6D46D292D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709);
		s_Il2CppMethodInitialized = true;
	}
	InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* V_0 = NULL;
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 V_4;
	memset((&V_4), 0, sizeof(V_4));
	InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	int32_t G_B13_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	String_t* G_B13_3 = NULL;
	ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* G_B13_4 = NULL;
	int32_t G_B12_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* G_B12_4 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B14_4 = NULL;
	ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* G_B14_5 = NULL;
	{
		// if (!Manifest.ContainsAction(actionId))
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0;
		L_0 = ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline(__this, NULL);
		String_t* L_1 = ___actionId1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Manifest_ContainsAction_m2E00FD463D1063AF63275FE29A77AEB88ECDC69A(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_006c;
		}
	}
	{
		// var hasBeenHandledWithoutConduit = Manifest.WitResponseMatcherIntents.Contains(actionId);
		il2cpp_codegen_runtime_class_init_inline(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8;
		String_t* L_4 = ___actionId1;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_3, L_4, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_3 = L_5;
		// if (!_ignoredActionIds.Contains(actionId) && !hasBeenHandledWithoutConduit)
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = __this->____ignoredActionIds_4;
		String_t* L_7 = ___actionId1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_6, L_7, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_006a;
		}
	}
	{
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		// _ignoredActionIds.Add(actionId);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = __this->____ignoredActionIds_4;
		String_t* L_11 = ___actionId1;
		NullCheck(L_10);
		bool L_12;
		L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_10, L_11, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		// InvokeError(actionId, new Exception($"Conduit did not find intent '{actionId}' in manifest."));
		String_t* L_13 = ___actionId1;
		String_t* L_14 = ___actionId1;
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709, L_14, _stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E, NULL);
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_16, L_15, NULL);
		bool L_17;
		L_17 = ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041(__this, L_13, L_16, NULL);
		// VLog.W($"Conduit did not find intent '{actionId}' in manifest.");
		String_t* L_18 = ___actionId1;
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709, L_18, _stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_19, NULL);
	}

IL_006a:
	{
		// return false;
		return (bool)0;
	}

IL_006c:
	{
		// parameterProvider.PopulateRoles(_parameterToRoleMap);
		RuntimeObject* L_20 = ___parameterProvider0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = __this->____parameterToRoleMap_3;
		NullCheck(L_20);
		InterfaceActionInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Void Meta.Conduit.IParameterProvider::PopulateRoles(System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var, L_20, L_21);
		// var filter =
		//     new InvocationContextFilter(parameterProvider, Manifest.GetInvocationContexts(actionId), relaxed);
		RuntimeObject* L_22 = ___parameterProvider0;
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_23;
		L_23 = ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline(__this, NULL);
		String_t* L_24 = ___actionId1;
		NullCheck(L_23);
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_25;
		L_25 = Manifest_GetInvocationContexts_mF190BFA9E6EAD5527D527E24CC4BADC9C42F4D50(L_23, L_24, NULL);
		bool L_26 = ___relaxed2;
		InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* L_27 = (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26*)il2cpp_codegen_object_new(InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		InvocationContextFilter__ctor_m367BFACDCC7D21FB957DAE6569CC766F6A073E20(L_27, L_22, L_25, L_26, NULL);
		V_0 = L_27;
		// var invocationContexts = filter.ResolveInvocationContexts(actionId, confidence, partial);
		InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* L_28 = V_0;
		String_t* L_29 = ___actionId1;
		float L_30 = ___confidence3;
		bool L_31 = ___partial4;
		NullCheck(L_28);
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_32;
		L_32 = InvocationContextFilter_ResolveInvocationContexts_m88E97AB506B0906EFEBA7A8B6E8B51F654CCCBD7(L_28, L_29, L_30, L_31, NULL);
		V_1 = L_32;
		// if (invocationContexts.Count < 1)
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_inline(L_33, List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		if ((((int32_t)L_34) >= ((int32_t)1)))
		{
			goto IL_0148;
		}
	}
	{
		// if (!partial && filter.ResolveInvocationContexts(actionId, confidence, true).Count < 1)
		bool L_35 = ___partial4;
		if (L_35)
		{
			goto IL_0146;
		}
	}
	{
		InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* L_36 = V_0;
		String_t* L_37 = ___actionId1;
		float L_38 = ___confidence3;
		NullCheck(L_36);
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_39;
		L_39 = InvocationContextFilter_ResolveInvocationContexts_m88E97AB506B0906EFEBA7A8B6E8B51F654CCCBD7(L_36, L_37, L_38, (bool)1, NULL);
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_inline(L_39, List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		if ((((int32_t)L_40) >= ((int32_t)1)))
		{
			goto IL_0146;
		}
	}
	{
		// VLog.W(
		//      $"Failed to resolve {(partial ? "partial" : "final")} method for {actionId} with supplied context");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral5681D5B3BD75209607373A22E88879E1A1FC5396);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5681D5B3BD75209607373A22E88879E1A1FC5396);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		bool L_44 = ___partial4;
		G_B9_0 = 1;
		G_B9_1 = L_43;
		G_B9_2 = L_43;
		if (L_44)
		{
			G_B10_0 = 1;
			G_B10_1 = L_43;
			G_B10_2 = L_43;
			goto IL_00db;
		}
	}
	{
		G_B11_0 = _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00e0;
	}

IL_00db:
	{
		G_B11_0 = _stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00e0:
	{
		NullCheck(G_B11_2);
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = G_B11_3;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral814575F591B0E9CFD43287EB260866FE4422277C);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral814575F591B0E9CFD43287EB260866FE4422277C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		String_t* L_47 = ___actionId1;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_46;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteralE3E15B07E6778CBDAB69ADFF22826B6D46D292D5);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE3E15B07E6778CBDAB69ADFF22826B6D46D292D5);
		String_t* L_49;
		L_49 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_48, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_49, NULL);
		// InvokeError(actionId, new Exception($"Failed to resolve {(partial ? "partial" : "final")} method for {actionId} with supplied context")
		// );
		String_t* L_50 = ___actionId1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral5681D5B3BD75209607373A22E88879E1A1FC5396);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5681D5B3BD75209607373A22E88879E1A1FC5396);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		bool L_54 = ___partial4;
		G_B12_0 = 1;
		G_B12_1 = L_53;
		G_B12_2 = L_53;
		G_B12_3 = L_50;
		G_B12_4 = __this;
		if (L_54)
		{
			G_B13_0 = 1;
			G_B13_1 = L_53;
			G_B13_2 = L_53;
			G_B13_3 = L_50;
			G_B13_4 = __this;
			goto IL_011c;
		}
	}
	{
		G_B14_0 = _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		G_B14_5 = G_B12_4;
		goto IL_0121;
	}

IL_011c:
	{
		G_B14_0 = _stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
		G_B14_5 = G_B13_4;
	}

IL_0121:
	{
		NullCheck(G_B14_2);
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = G_B14_3;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteral814575F591B0E9CFD43287EB260866FE4422277C);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral814575F591B0E9CFD43287EB260866FE4422277C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		String_t* L_57 = ___actionId1;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_56;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteralE3E15B07E6778CBDAB69ADFF22826B6D46D292D5);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE3E15B07E6778CBDAB69ADFF22826B6D46D292D5);
		String_t* L_59;
		L_59 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_58, NULL);
		Exception_t* L_60 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_60, L_59, NULL);
		NullCheck(G_B14_5);
		bool L_61;
		L_61 = ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041(G_B14_5, G_B14_4, L_60, NULL);
	}

IL_0146:
	{
		// return false;
		return (bool)0;
	}

IL_0148:
	{
		// var allSucceeded = true;
		V_2 = (bool)1;
		// foreach (var invocationContext in invocationContexts)
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_62 = V_1;
		NullCheck(L_62);
		Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 L_63;
		L_63 = List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2(L_62, List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var);
		V_4 = L_63;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1((&V_4), Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01a5_1;
			}

IL_0154_1:
			{
				// foreach (var invocationContext in invocationContexts)
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_64;
				L_64 = Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_inline((&V_4), Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var);
				V_5 = L_64;
			}
			try
			{// begin try (depth: 2)
				{
					// if (!InvokeMethod(invocationContext, parameterProvider, relaxed))
					InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_65 = V_5;
					RuntimeObject* L_66 = ___parameterProvider0;
					bool L_67 = ___relaxed2;
					bool L_68;
					L_68 = ConduitDispatcher_InvokeMethod_mC1474DEA8393AE0F216ECA44B0E189CA13DA211B(__this, L_65, L_66, L_67, NULL);
					if (L_68)
					{
						goto IL_016b_2;
					}
				}
				{
					// allSucceeded = false;
					V_2 = (bool)0;
				}

IL_016b_2:
				{
					// }
					goto IL_01a5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_016d_1;
				}
				throw e;
			}

CATCH_016d_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// VLog.W($"Failed to invoke {invocationContext.MethodInfo.Name}. {e}");
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_69 = V_5;
				NullCheck(L_69);
				MethodInfo_t* L_70;
				L_70 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_69, NULL);
				NullCheck(L_70);
				String_t* L_71;
				L_71 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_70);
				Exception_t* L_72 = V_6;
				String_t* L_73;
				L_73 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53)), L_71, L_72, NULL);
				VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_73, NULL);
				// allSucceeded = false;
				V_2 = (bool)0;
				// InvokeError( invocationContext.MethodInfo.Name, e);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_74 = V_5;
				NullCheck(L_74);
				MethodInfo_t* L_75;
				L_75 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_74, NULL);
				NullCheck(L_75);
				String_t* L_76;
				L_76 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_75);
				Exception_t* L_77 = V_6;
				bool L_78;
				L_78 = ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041(__this, L_76, L_77, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_01a5_1;
			}// end catch (depth: 2)

IL_01a5_1:
			{
				// foreach (var invocationContext in invocationContexts)
				bool L_79;
				L_79 = Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F((&V_4), Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var);
				if (L_79)
				{
					goto IL_0154_1;
				}
			}
			{
				goto IL_01be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01be:
	{
		// return allSucceeded;
		bool L_80 = V_2;
		return L_80;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeError(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041 (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, String_t* ___actionId0, Exception_t* ___exception1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91FD9174190D760AB3905E0F489B7E36F0D28C94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* V_1 = NULL;
	ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* V_2 = NULL;
	{
		// var contexts = Manifest.GetErrorHandlerContexts();
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0;
		L_0 = ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_1;
		L_1 = Manifest_GetErrorHandlerContexts_m0DE2B75A71ABAC22A2E7417F6BD630AC0EB988D5(L_0, NULL);
		// foreach (var context in contexts)
		NullCheck(L_1);
		Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 L_2;
		L_2 = List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2(L_1, List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1((&V_0), Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0013_1:
			{
				// foreach (var context in contexts)
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_3;
				L_3 = Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_inline((&V_0), Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var);
				V_1 = L_3;
				// var parameterProvider = new ParameterProvider();
				ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* L_4 = (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7*)il2cpp_codegen_object_new(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				ParameterProvider__ctor_m1F1A3EA5D91069D81E29A8AA1548CE27F1191628(L_4, NULL);
				V_2 = L_4;
				// parameterProvider.AddParameter("intent", actionId);
				ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* L_5 = V_2;
				String_t* L_6 = ___actionId0;
				NullCheck(L_5);
				ParameterProvider_AddParameter_mCC7BFCBECF85236CFDE5E9FA3B8AFE64D4E97365(L_5, _stringLiteral91FD9174190D760AB3905E0F489B7E36F0D28C94, L_6, NULL);
				// parameterProvider.AddParameter("error", exception);
				ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* L_7 = V_2;
				Exception_t* L_8 = ___exception1;
				NullCheck(L_7);
				ParameterProvider_AddParameter_mCC7BFCBECF85236CFDE5E9FA3B8AFE64D4E97365(L_7, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, L_8, NULL);
				// InvokeMethod(context, parameterProvider, true);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_9 = V_1;
				ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* L_10 = V_2;
				bool L_11;
				L_11 = ConduitDispatcher_InvokeMethod_mC1474DEA8393AE0F216ECA44B0E189CA13DA211B(__this, L_9, L_10, (bool)1, NULL);
			}

IL_0043_1:
			{
				// foreach (var context in contexts)
				bool L_12;
				L_12 = Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F((&V_0), Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext,Meta.Conduit.IParameterProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_mC1474DEA8393AE0F216ECA44B0E189CA13DA211B (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___invocationContext0, RuntimeObject* ___parameterProvider1, bool ___relaxed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceResolver_t47A1D14520343F632BA6BF48285A8DA7B48B1F9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	StringBuilder_t* V_4 = NULL;
	Exception_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var method = invocationContext.MethodInfo;
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_0 = ___invocationContext0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_0, NULL);
		V_0 = L_1;
		// var formalParametersInfo = method.GetParameters();
		MethodInfo_t* L_2 = V_0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_1 = L_3;
		// var parameterObjects = new object[formalParametersInfo.Length];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = V_1;
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_2 = L_5;
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		V_3 = 0;
		goto IL_00a3;
	}

IL_001e:
	{
		// var log = new StringBuilder();
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_4 = L_6;
		// parameterObjects[i] = parameterProvider.GetParameterValue(formalParametersInfo[i],
		//     invocationContext.ParameterMap, relaxed);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_2;
		int32_t L_8 = V_3;
		RuntimeObject* L_9 = ___parameterProvider1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_14 = ___invocationContext0;
		NullCheck(L_14);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15;
		L_15 = InvocationContext_get_ParameterMap_m933EEB7EADCB585A6C4BB97FAAD1C18D428092A0_inline(L_14, NULL);
		bool L_16 = ___relaxed2;
		NullCheck(L_9);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, bool >::Invoke(6 /* System.Object Meta.Conduit.IParameterProvider::GetParameterValue(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean) */, IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var, L_9, L_13, L_15, L_16);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_17);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_17);
		// if (parameterObjects[i] == null)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (L_21)
		{
			goto IL_009f;
		}
	}
	{
		// InvokeError( invocationContext.MethodInfo.Name, new Exception(
		//         $"Failed to find method param while invoking\nType: {invocationContext.Type.FullName}\nMethod: {invocationContext.MethodInfo.Name}\nParameter Issues\n{log}"
		//     ));
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_22 = ___invocationContext0;
		NullCheck(L_22);
		MethodInfo_t* L_23;
		L_23 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_25 = ___invocationContext0;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113_inline(L_25, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_26);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_28 = ___invocationContext0;
		NullCheck(L_28);
		MethodInfo_t* L_29;
		L_29 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_28, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		StringBuilder_t* L_31 = V_4;
		String_t* L_32;
		L_32 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A, L_27, L_30, L_31, NULL);
		Exception_t* L_33 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_33, L_32, NULL);
		bool L_34;
		L_34 = ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041(__this, L_24, L_33, NULL);
		// VLog.W(
		//     $"Failed to find method param while invoking\nType: {invocationContext.Type.FullName}\nMethod: {invocationContext.MethodInfo.Name}\nParameter Issues\n{log}");
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_35 = ___invocationContext0;
		NullCheck(L_35);
		Type_t* L_36;
		L_36 = InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113_inline(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_36);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_38 = ___invocationContext0;
		NullCheck(L_38);
		MethodInfo_t* L_39;
		L_39 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_38, NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
		StringBuilder_t* L_41 = V_4;
		String_t* L_42;
		L_42 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A, L_37, L_40, L_41, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_42, NULL);
		// return false;
		return (bool)0;
	}

IL_009f:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00a3:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_44 = V_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_45 = V_1;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// if (method.IsStatic)
		MethodInfo_t* L_46 = V_0;
		NullCheck(L_46);
		bool L_47;
		L_47 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_46, NULL);
		if (!L_47)
		{
			goto IL_00fb;
		}
	}
	try
	{// begin try (depth: 1)
		// method.Invoke(null, parameterObjects.ToArray());
		MethodInfo_t* L_48 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50;
		L_50 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D((RuntimeObject*)L_49, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		NullCheck(L_48);
		RuntimeObject* L_51;
		L_51 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_48, NULL, L_50, NULL);
		// }
		goto IL_00f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_00c4:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VLog.W($"Failed to invoke static method {method.Name}. {e}");
		MethodInfo_t* L_52 = V_0;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_52);
		Exception_t* L_54 = V_5;
		String_t* L_55;
		L_55 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9)), L_53, L_54, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_55, NULL);
		// InvokeError( invocationContext.MethodInfo.Name, e);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_56 = ___invocationContext0;
		NullCheck(L_56);
		MethodInfo_t* L_57;
		L_57 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_56, NULL);
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_57);
		Exception_t* L_59 = V_5;
		bool L_60;
		L_60 = ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041(__this, L_58, L_59, NULL);
		// return false;
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0180;
	}// end catch (depth: 1)

IL_00f9:
	{
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// var allSucceeded = true;
		V_7 = (bool)1;
		// foreach (var obj in _instanceResolver.GetObjectsOfType(invocationContext.Type))
		RuntimeObject* L_61 = __this->____instanceResolver_2;
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_62 = ___invocationContext0;
		NullCheck(L_62);
		Type_t* L_63;
		L_63 = InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113_inline(L_62, NULL);
		NullCheck(L_61);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<System.Object> Meta.Conduit.IInstanceResolver::GetObjectsOfType(System.Type) */, IInstanceResolver_t47A1D14520343F632BA6BF48285A8DA7B48B1F9A_il2cpp_TypeInfo_var, L_61, L_63);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var, L_64);
		V_8 = L_65;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0171:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_66 = V_8;
					if (!L_66)
					{
						goto IL_017c;
					}
				}
				{
					RuntimeObject* L_67 = V_8;
					NullCheck(L_67);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_67);
				}

IL_017c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0166_1;
			}

IL_0118_1:
			{
				// foreach (var obj in _instanceResolver.GetObjectsOfType(invocationContext.Type))
				RuntimeObject* L_68 = V_8;
				NullCheck(L_68);
				RuntimeObject* L_69;
				L_69 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var, L_68);
				V_9 = L_69;
			}
			try
			{// begin try (depth: 2)
				// method.Invoke(obj, parameterObjects.ToArray());
				MethodInfo_t* L_70 = V_0;
				RuntimeObject* L_71 = V_9;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73;
				L_73 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D((RuntimeObject*)L_72, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
				NullCheck(L_70);
				RuntimeObject* L_74;
				L_74 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_70, L_71, L_73, NULL);
				// }
				goto IL_0166_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0132_1;
				}
				throw e;
			}

CATCH_0132_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// VLog.W($"Failed to invoke method {method.Name}. {e} on {obj}");
				MethodInfo_t* L_75 = V_0;
				NullCheck(L_75);
				String_t* L_76;
				L_76 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_75);
				Exception_t* L_77 = V_10;
				RuntimeObject* L_78 = V_9;
				String_t* L_79;
				L_79 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC)), L_76, L_77, L_78, NULL);
				VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_79, NULL);
				// allSucceeded = false;
				V_7 = (bool)0;
				// InvokeError( invocationContext.MethodInfo.Name,e);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_80 = ___invocationContext0;
				NullCheck(L_80);
				MethodInfo_t* L_81;
				L_81 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_80, NULL);
				NullCheck(L_81);
				String_t* L_82;
				L_82 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_81);
				Exception_t* L_83 = V_10;
				bool L_84;
				L_84 = ConduitDispatcher_InvokeError_m53EA479A3455B375951BF4BAF9A4DCF32F199041(__this, L_82, L_83, NULL);
				// continue;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0166_1;
			}// end catch (depth: 2)

IL_0166_1:
			{
				// foreach (var obj in _instanceResolver.GetObjectsOfType(invocationContext.Type))
				RuntimeObject* L_85 = V_8;
				NullCheck(L_85);
				bool L_86;
				L_86 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_85);
				if (L_86)
				{
					goto IL_0118_1;
				}
			}
			{
				goto IL_017d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_017d:
	{
		// return allSucceeded;
		bool L_87 = V_7;
		return L_87;
	}

IL_0180:
	{
		// }
		bool L_88 = V_6;
		return L_88;
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
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter::.ctor(Meta.Conduit.IParameterProvider,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContextFilter__ctor_m367BFACDCC7D21FB957DAE6569CC766F6A073E20 (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* __this, RuntimeObject* ___parameterProvider0, List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ___actionContexts1, bool ___relaxed2, const RuntimeMethod* method) 
{
	{
		// public InvocationContextFilter(IParameterProvider parameterProvider, List<InvocationContext> actionContexts,
		//     bool relaxed = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _parameterProvider = parameterProvider;
		RuntimeObject* L_0 = ___parameterProvider0;
		__this->____parameterProvider_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterProvider_1), (void*)L_0);
		// _actionContexts = actionContexts;
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_1 = ___actionContexts1;
		__this->____actionContexts_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actionContexts_0), (void*)L_1);
		// _relaxed = relaxed;
		bool L_2 = ___relaxed2;
		__this->____relaxed_2 = L_2;
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher/InvocationContextFilter::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t94DD792BDF578F202193C4307B641B72F69191B2* InvocationContextFilter_ResolveInvocationContexts_m88E97AB506B0906EFEBA7A8B6E8B51F654CCCBD7 (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* __this, String_t* ___actionId0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mDECA5A7D2FF94431EB7A514F1F69F19284B1483D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mAE59B4116E15C8775F67B603063AAADF8EA4E75D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m7CC47DCBD9FDD39B8A9EF46F8B59C03605C8AE65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* L_0 = (U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m495887DD9D2DFD38613889A1DD5D0436F5281A4F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* L_2 = V_0;
		float L_3 = ___confidence1;
		NullCheck(L_2);
		L_2->___confidence_1 = L_3;
		U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* L_4 = V_0;
		bool L_5 = ___partial2;
		NullCheck(L_4);
		L_4->___partial_2 = L_5;
		// return _actionContexts != null ? _actionContexts.Where(context => CompatibleInvocationContext(context, confidence, partial))
		//     .ToList() : new List<InvocationContext>();
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_6 = __this->____actionContexts_0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_7 = (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*)il2cpp_codegen_object_new(List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF(L_7, List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
		return L_7;
	}

IL_0029:
	{
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_8 = __this->____actionContexts_0;
		U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* L_9 = V_0;
		Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0* L_10 = (Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0*)il2cpp_codegen_object_new(Func_2_tF2189E41E0E3309C9E37438B3D56D3CFE31384B0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m4932387574E68D73615432E11E76083973A30BEC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m7CC47DCBD9FDD39B8A9EF46F8B59C03605C8AE65_RuntimeMethod_var), NULL);
		RuntimeObject* L_11;
		L_11 = Enumerable_Where_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mAE59B4116E15C8775F67B603063AAADF8EA4E75D(L_8, L_10, Enumerable_Where_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mAE59B4116E15C8775F67B603063AAADF8EA4E75D_RuntimeMethod_var);
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_12;
		L_12 = Enumerable_ToList_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mDECA5A7D2FF94431EB7A514F1F69F19284B1483D(L_11, Enumerable_ToList_TisInvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_mDECA5A7D2FF94431EB7A514F1F69F19284B1483D_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContextFilter_CompatibleInvocationContext_mB89BA0F2D93C4A642AA48860262C682F4E715472 (InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___invocationContext0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m1EDEED0DFCB05955BF76B500B8BECDB2012CF6DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AA7858C328063B10F93180DAA4F8CECEAAABBA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7CEFA994B6C7CAB324A6AC0F37639A23E691A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7386C7C44A61AE887AD9CFD7CF0DA932BBA457ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3606EC2448DF9CCD84DF499ED72C8D6704E46E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1611699FEF45A8574406A8E197A1B4C0494643A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF77B7EB56FFCA00EA027593FFC88A4FD633A891);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	bool V_4 = false;
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* V_5 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_6 = NULL;
	int32_t V_7 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_8 = NULL;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_9 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_10 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_11 = NULL;
	String_t* G_B11_0 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B24_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B24_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B23_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B23_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_0 = (U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m5C4DA507A1E1B6C93F8F2E312C05E7BBFABE867F(L_0, NULL);
		V_0 = L_0;
		// var parameterMap = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_1 = L_1;
		// var parameters = invocationContext.MethodInfo.GetParameters();
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_2 = ___invocationContext0;
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_2, NULL);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4;
		L_4 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_2 = L_4;
		// if (invocationContext.ValidatePartial != partial)
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_5 = ___invocationContext0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InvocationContext_get_ValidatePartial_m64F573CDAA0C379C24591B6C08F7172AEAE2AB96_inline(L_5, NULL);
		bool L_7 = ___partial2;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// if (invocationContext.MinConfidence > confidence || confidence > invocationContext.MaxConfidence)
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_8 = ___invocationContext0;
		NullCheck(L_8);
		float L_9;
		L_9 = InvocationContext_get_MinConfidence_mDE23073D58B32F8574BD3D5DF5C7B5966F1648D6_inline(L_8, NULL);
		float L_10 = ___confidence1;
		if ((((float)L_9) > ((float)L_10)))
		{
			goto IL_0035;
		}
	}
	{
		float L_11 = ___confidence1;
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_12 = ___invocationContext0;
		NullCheck(L_12);
		float L_13;
		L_13 = InvocationContext_get_MaxConfidence_m09220F555BBEA805108A93A56DC229AFB78232D8_inline(L_12, NULL);
		if ((!(((float)L_11) > ((float)L_13))))
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// var exactMatches = new HashSet<string>();
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_14 = V_0;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_15, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		NullCheck(L_14);
		L_14->___exactMatches_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___exactMatches_0), (void*)L_15);
		// var log = new StringBuilder();
		StringBuilder_t* L_16 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_16, NULL);
		V_3 = L_16;
		// var allParametersMatched = true;
		V_4 = (bool)1;
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17 = V_2;
		V_6 = L_17;
		V_7 = 0;
		goto IL_00be;
	}

IL_0053:
	{
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_6;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_8 = L_21;
		// if (_parameterProvider.ContainsParameter(parameter, log))
		RuntimeObject* L_22 = __this->____parameterProvider_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_23 = V_8;
		StringBuilder_t* L_24 = V_3;
		NullCheck(L_22);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*, StringBuilder_t* >::Invoke(4 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo,System.Text.StringBuilder) */, IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var, L_22, L_23, L_24);
		if (!L_25)
		{
			goto IL_007f;
		}
	}
	{
		// exactMatches.Add(parameter.Name);
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_26 = V_0;
		NullCheck(L_26);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_27 = L_26->___exactMatches_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_28 = V_8;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_28);
		NullCheck(L_27);
		bool L_30;
		L_30 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_27, L_29, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		// continue;
		goto IL_00b8;
	}

IL_007f:
	{
		// VLog.D(!_relaxed
		//     ? $"Could not find value for parameter: {parameter.Name}"
		//     : $"Could not find exact value for parameter: {parameter.Name}. Will attempt resolving by type.");
		bool L_31 = __this->____relaxed_2;
		if (!L_31)
		{
			goto IL_009f;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_32 = V_8;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_32);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralCF77B7EB56FFCA00EA027593FFC88A4FD633A891, L_33, _stringLiteral7386C7C44A61AE887AD9CFD7CF0DA932BBA457ED, NULL);
		G_B11_0 = L_34;
		goto IL_00b0;
	}

IL_009f:
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_35 = V_8;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_35);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1AA7858C328063B10F93180DAA4F8CECEAAABBA4, L_36, NULL);
		G_B11_0 = L_37;
	}

IL_00b0:
	{
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(G_B11_0, NULL);
		// allParametersMatched = false;
		V_4 = (bool)0;
	}

IL_00b8:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00be:
	{
		// foreach (var parameter in parameters)
		int32_t L_39 = V_7;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_40 = V_6;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		// if (allParametersMatched)
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00cc;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00cc:
	{
		// if (!_relaxed)
		bool L_42 = __this->____relaxed_2;
		if (L_42)
		{
			goto IL_00fc;
		}
	}
	{
		// VLog.D(
		//     $"Failed to resolve parameters. \nType: {invocationContext.Type.FullName}\nMethod: {invocationContext.MethodInfo.Name}\n{log}");
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_43 = ___invocationContext0;
		NullCheck(L_43);
		Type_t* L_44;
		L_44 = InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113_inline(L_43, NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_44);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_46 = ___invocationContext0;
		NullCheck(L_46);
		MethodInfo_t* L_47;
		L_47 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_46, NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_47);
		StringBuilder_t* L_49 = V_3;
		String_t* L_50;
		L_50 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral7A3606EC2448DF9CCD84DF499ED72C8D6704E46E, L_45, L_48, L_49, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_50, NULL);
		// return false;
		return (bool)0;
	}

IL_00fc:
	{
		// var actualTypes = new HashSet<Type>();
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_51 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_51, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_5 = L_51;
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_52 = V_2;
		V_6 = L_52;
		V_7 = 0;
		goto IL_01df;
	}

IL_010e:
	{
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_53 = V_6;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_9 = L_56;
		// if (exactMatches.Contains(parameter.Name))
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_57 = V_0;
		NullCheck(L_57);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_58 = L_57->___exactMatches_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_59 = V_9;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_59);
		NullCheck(L_58);
		bool L_61;
		L_61 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_58, L_60, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (L_61)
		{
			goto IL_01d9;
		}
	}
	{
		// if (actualTypes.Contains(parameter.ParameterType))
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_62 = V_5;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_63 = V_9;
		NullCheck(L_63);
		Type_t* L_64;
		L_64 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_63);
		NullCheck(L_62);
		bool L_65;
		L_65 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_62, L_64, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		if (!L_65)
		{
			goto IL_0154;
		}
	}
	{
		// VLog.D(
		//     $"Failed to resolve parameters by type. More than one value of type {parameter.ParameterType} were provided.");
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_66 = V_9;
		NullCheck(L_66);
		Type_t* L_67;
		L_67 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_66);
		String_t* L_68;
		L_68 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1C7CEFA994B6C7CAB324A6AC0F37639A23E691A0, L_67, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_68, NULL);
		// return false;
		return (bool)0;
	}

IL_0154:
	{
		// actualTypes.Add(parameter.ParameterType);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_69 = V_5;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_70 = V_9;
		NullCheck(L_70);
		Type_t* L_71;
		L_71 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_70);
		NullCheck(L_69);
		bool L_72;
		L_72 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_69, L_71, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		// var actualParameterNames = _parameterProvider.GetParameterNamesOfType(parameter.ParameterType)
		//     .Where(parameterName => !exactMatches.Contains(parameterName)).ToList();
		RuntimeObject* L_73 = __this->____parameterProvider_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_74 = V_9;
		NullCheck(L_74);
		Type_t* L_75;
		L_75 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_74);
		NullCheck(L_73);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_76;
		L_76 = InterfaceFuncInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, Type_t* >::Invoke(7 /* System.Collections.Generic.List`1<System.String> Meta.Conduit.IParameterProvider::GetParameterNamesOfType(System.Type) */, IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14_il2cpp_TypeInfo_var, L_73, L_75);
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_77 = V_0;
		NullCheck(L_77);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_78 = L_77->___U3CU3E9__0_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_79 = L_78;
		G_B23_0 = L_79;
		G_B23_1 = L_76;
		if (L_79)
		{
			G_B24_0 = L_79;
			G_B24_1 = L_76;
			goto IL_0196;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_80 = V_0;
		U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* L_81 = V_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_82 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_82, L_81, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m1EDEED0DFCB05955BF76B500B8BECDB2012CF6DA_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_83 = L_82;
		V_11 = L_83;
		NullCheck(L_80);
		L_80->___U3CU3E9__0_1 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&L_80->___U3CU3E9__0_1), (void*)L_83);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_84 = V_11;
		G_B24_0 = L_84;
		G_B24_1 = G_B23_1;
	}

IL_0196:
	{
		RuntimeObject* L_85;
		L_85 = Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A(G_B24_1, G_B24_0, Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_86;
		L_86 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_85, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		V_10 = L_86;
		// if (actualParameterNames.Count != 1)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_87 = V_10;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_87, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_88) == ((int32_t)1)))
		{
			goto IL_01c4;
		}
	}
	{
		// VLog.D($"Failed to find compatible value for {parameter.Name}");
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_89 = V_9;
		NullCheck(L_89);
		String_t* L_90;
		L_90 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_89);
		String_t* L_91;
		L_91 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC1611699FEF45A8574406A8E197A1B4C0494643A, L_90, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_91, NULL);
		// return false;
		return (bool)0;
	}

IL_01c4:
	{
		// parameterMap[parameter.Name] = actualParameterNames[0];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_92 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_93 = V_9;
		NullCheck(L_93);
		String_t* L_94;
		L_94 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_93);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_95 = V_10;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_95, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_92);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_92, L_94, L_96, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_01d9:
	{
		int32_t L_97 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_01df:
	{
		// foreach (var parameter in parameters)
		int32_t L_98 = V_7;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_99 = V_6;
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))))
		{
			goto IL_010e;
		}
	}
	{
		// invocationContext.ParameterMap = parameterMap;
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_100 = ___invocationContext0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_101 = V_1;
		NullCheck(L_100);
		InvocationContext_set_ParameterMap_mC2241625BEB9C825F5DA62CDCB4748238B4F2BB6_inline(L_100, L_101, NULL);
		// return true;
		return (bool)1;
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
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m495887DD9D2DFD38613889A1DD5D0436F5281A4F (U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::<ResolveInvocationContexts>b__0(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m7CC47DCBD9FDD39B8A9EF46F8B59C03605C8AE65 (U3CU3Ec__DisplayClass4_0_t184D41063548C430031B3A365D2E7464D56CBB16* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___context0, const RuntimeMethod* method) 
{
	{
		// return _actionContexts != null ? _actionContexts.Where(context => CompatibleInvocationContext(context, confidence, partial))
		InvocationContextFilter_t8413A2AA4B704BDD23311BDD0811195C2E1EBC26* L_0 = __this->___U3CU3E4__this_0;
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_1 = ___context0;
		float L_2 = __this->___confidence_1;
		bool L_3 = __this->___partial_2;
		NullCheck(L_0);
		bool L_4;
		L_4 = InvocationContextFilter_CompatibleInvocationContext_mB89BA0F2D93C4A642AA48860262C682F4E715472(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5C4DA507A1E1B6C93F8F2E312C05E7BBFABE867F (U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::<CompatibleInvocationContext>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m1EDEED0DFCB05955BF76B500B8BECDB2012CF6DA (U3CU3Ec__DisplayClass5_0_t4A1444CA482A9A29A345D256E48DD2D1E34F8D23* __this, String_t* ___parameterName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(parameterName => !exactMatches.Contains(parameterName)).ToList();
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___exactMatches_0;
		String_t* L_1 = ___parameterName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_1, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void Meta.Conduit.ConduitDispatcherFactory::.ctor(Meta.Conduit.IInstanceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcherFactory__ctor_m86A0D2879737CB31C396825D779293046D3A9BAF (ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7* __this, RuntimeObject* ___instanceResolver0, const RuntimeMethod* method) 
{
	{
		// public ConduitDispatcherFactory(IInstanceResolver instanceResolver)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this._instanceResolver = instanceResolver;
		RuntimeObject* L_0 = ___instanceResolver0;
		__this->____instanceResolver_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____instanceResolver_1), (void*)L_0);
		// }
		return;
	}
}
// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::GetDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConduitDispatcherFactory_GetDispatcher_m069263C88D7F809EB1900540778B839288A11E6B (ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return Instance = Instance ??
		//                   new ConduitDispatcher(new ManifestLoader(), this._instanceResolver);
		RuntimeObject* L_0 = ((ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_il2cpp_TypeInfo_var))->___Instance_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524* L_2 = (ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524*)il2cpp_codegen_object_new(ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ManifestLoader__ctor_m0D50EEF79E168DE4AB3DED6904880651EC9E2509(L_2, NULL);
		RuntimeObject* L_3 = __this->____instanceResolver_1;
		ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* L_4 = (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4*)il2cpp_codegen_object_new(ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ConduitDispatcher__ctor_m47C2260B198890BC2E03D3614F09F94EF1C7A7A7(L_4, L_2, L_3, NULL);
		G_B2_0 = ((RuntimeObject*)(L_4));
	}

IL_0019:
	{
		RuntimeObject* L_5 = G_B2_0;
		((ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_il2cpp_TypeInfo_var))->___Instance_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_t8E74B42CC2D728C6130649788CD0B36188D26BD7_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_5);
		return L_5;
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
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m074EDB140A18AB1C9F213546B40D9E275F5971D5 (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnderscoreSplitter.Replace(input, "_$1");
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0;
		String_t* L_1 = ___input0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Regex_Replace_m8E802C10B5A591BEA61FC00EA8E4AF398D815A90(L_0, L_1, _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E, NULL);
		return L_2;
	}
}
// System.Boolean Meta.Conduit.ConduitUtilities::ContainsIgnoringWhitespace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitUtilities_ContainsIgnoringWhitespace_m2AED57D0FABE454D9D48EEBCDE5AE08EB868E0A5 (String_t* ___stringToSearch0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stringToSearch = StripWhiteSpace(stringToSearch);
		String_t* L_0 = ___stringToSearch0;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_StripWhiteSpace_mE3B4D03D41AF77C085D16721525390DE3FB7390D(L_0, NULL);
		___stringToSearch0 = L_1;
		// value = StripWhiteSpace(value);
		String_t* L_2 = ___value1;
		String_t* L_3;
		L_3 = ConduitUtilities_StripWhiteSpace_mE3B4D03D41AF77C085D16721525390DE3FB7390D(L_2, NULL);
		___value1 = L_3;
		// return stringToSearch.Contains(value);
		String_t* L_4 = ___stringToSearch0;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_4, L_5, NULL);
		return L_6;
	}
}
// System.String Meta.Conduit.ConduitUtilities::StripWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_StripWhiteSpace_mE3B4D03D41AF77C085D16721525390DE3FB7390D (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.IsNullOrEmpty(input) ? string.Empty :
		//     input.Replace(" ", string.Empty)
		//     .Replace("\n", string.Empty)
		//     .Replace("\r", string.Empty);
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_2 = ___input0;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_3, NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_5, NULL);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, L_7, NULL);
		return L_8;
	}

IL_0037:
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_9;
	}
}
// System.String Meta.Conduit.ConduitUtilities::GetEntityEnumName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_GetEntityEnumName_m7A8586B8E5E601B43AE784B02C44C9B44B413DFB (String_t* ___entityRole0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SanitizeName(entityRole);
		String_t* L_0 = ___entityRole0;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_SanitizeName_mC6A1737F89D48CCDF93C9558F3A819AF6207AF23(L_0, NULL);
		return L_1;
	}
}
// System.String Meta.Conduit.ConduitUtilities::GetEntityEnumValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_GetEntityEnumValue_m3E72D56A810296B1F2EE87884FEF9F786AB420B6 (String_t* ___entityValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SanitizeString(entityValue);
		String_t* L_0 = ___entityValue0;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_SanitizeString_m44A4FF1FABAF37E2DF755AC9ED1634D76A19FC89(L_0, NULL);
		return L_1;
	}
}
// System.String Meta.Conduit.ConduitUtilities::SanitizeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeName_mC6A1737F89D48CCDF93C9558F3A819AF6207AF23 (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (string.IsNullOrEmpty(input))
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000e:
	{
		// var result = SanitizeString(input);
		String_t* L_3 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = ConduitUtilities_SanitizeString_m44A4FF1FABAF37E2DF755AC9ED1634D76A19FC89(L_3, NULL);
		V_0 = L_4;
		// return result[0].ToString().ToUpper() + result.Substring(1);
		String_t* L_5 = V_0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 0, NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		String_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_9, 1, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, L_10, NULL);
		return L_11;
	}
}
// System.String Meta.Conduit.ConduitUtilities::SanitizeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeString_m44A4FF1FABAF37E2DF755AC9ED1634D76A19FC89 (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F0949FE776481A958565B508A97E357FF9EC29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1298000113B6711F92B8CD9D9A7FD1C6C03D07B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (string.IsNullOrEmpty(input))
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000e:
	{
		// var result = Regex.Replace(input, @"[^\w_-]", "");
		String_t* L_3 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_3, _stringLiteral82F0949FE776481A958565B508A97E357FF9EC29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_4;
		// if (Regex.IsMatch(result[0].ToString(), @"^\d$"))
		String_t* L_5 = V_0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 0, NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		bool L_8;
		L_8 = Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA(L_7, _stringLiteralD1298000113B6711F92B8CD9D9A7FD1C6C03D07B, NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// result = $"N{result}";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, L_9, NULL);
		V_0 = L_10;
	}

IL_0046:
	{
		// return result;
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__cctor_m569120730BC126BB86E5593EB88ECA000A8E05A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Regex UnderscoreSplitter = new Regex("(\\B[A-Z])", RegexOptions.Compiled);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896, 8, NULL);
		((ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0), (void*)L_0);
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
void ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_Multicast(ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* currentDelegate = reinterpret_cast<ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___status0, ___progress1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_OpenInst(ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	NullCheck(___status0);
	typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___status0, ___progress1, method);
}
void ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_OpenStatic(ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___status0, ___progress1, method);
}
void ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_OpenStaticInvoker(ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___status0, ___progress1);
}
void ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_ClosedStaticInvoker(ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___status0, ___progress1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38 (ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___status0' to native representation
	char* ____status0_marshaled = NULL;
	____status0_marshaled = il2cpp_codegen_marshal_string(___status0);

	// Native function invocation
	il2cppPInvokeFunc(____status0_marshaled, ___progress1);

	// Marshaling cleanup of parameter '___status0' native representation
	il2cpp_codegen_marshal_free(____status0_marshaled);
	____status0_marshaled = NULL;

}
// System.Void Meta.Conduit.ConduitUtilities/ProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressDelegate__ctor_m8AC717003E4AF270D134F798898E15FD125B9916 (ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107_Multicast;
}
// System.Void Meta.Conduit.ConduitUtilities/ProgressDelegate::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressDelegate_Invoke_mB1C19B81BD726CE27BB7B3DC3ECA5EBC537E9107 (ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___status0, ___progress1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Meta.Conduit.ConduitUtilities/ProgressDelegate::BeginInvoke(System.String,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProgressDelegate_BeginInvoke_m06AE983527AB1CE7FD4F97FAE3372AC90AEAB716 (ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, String_t* ___status0, float ___progress1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___status0;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___progress1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Meta.Conduit.ConduitUtilities/ProgressDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressDelegate_EndInvoke_mE73CA877DA097B0C040C52C8F34FA323B40633EB (ProgressDelegate_t2CEE281528880481B58351F5A2EFD57B7DD0DC38* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshal_pinvoke(const ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A& unmarshaled, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshal_pinvoke_back(const ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_pinvoke& marshaled, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A& unmarshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshal_pinvoke_cleanup(ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshal_com(const ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A& unmarshaled, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_com& marshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshal_com_back(const ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_com& marshaled, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A& unmarshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshal_com_cleanup(ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_com& marshaled)
{
}
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_mC2243C7446D54883585D9DE5162773505DB9A156 (ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value;
		RuntimeObject* L_0 = ___value0;
		__this->___Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_0);
		// DataType = value.GetType();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		__this->___DataType_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataType_1), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConduitParameterValue__ctor_mC2243C7446D54883585D9DE5162773505DB9A156_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A*>(__this + _offset);
	ConduitParameterValue__ctor_mC2243C7446D54883585D9DE5162773505DB9A156(_thisAdjusted, ___value0, method);
}
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_m0139C0346ABC769AF1AEE804FCE229D14C061730 (ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A* __this, RuntimeObject* ___value0, Type_t* ___dataType1, const RuntimeMethod* method) 
{
	{
		// Value = value;
		RuntimeObject* L_0 = ___value0;
		__this->___Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_0);
		// DataType = dataType;
		Type_t* L_1 = ___dataType1;
		__this->___DataType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataType_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConduitParameterValue__ctor_m0139C0346ABC769AF1AEE804FCE229D14C061730_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, Type_t* ___dataType1, const RuntimeMethod* method)
{
	ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A*>(__this + _offset);
	ConduitParameterValue__ctor_m0139C0346ABC769AF1AEE804FCE229D14C061730(_thisAdjusted, ___value0, ___dataType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m8FDF69B3BBF055D277DEB1BF31A9259A6634D9B4 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodInfoU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m779020E00E1CB14220D86EE95010E74E9D8AEB5B (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, MethodInfo_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = ___value0;
		__this->___U3CMethodInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_mDE23073D58B32F8574BD3D5DF5C7B5966F1648D6 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m15AC7D051D0E28F5BD52A4D2D0879BA65609441D (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_m09220F555BBEA805108A93A56DC229AFB78232D8 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m4E5E85844F36DCE65F2DA648C7C4C74C6D65EFDE (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m64F573CDAA0C379C24591B6C08F7172AEAE2AB96 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m9D70B4D7455C33EBFF95E86F34A7EE4BE3B5FBF9 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.InvocationContext::get_ParameterMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* InvocationContext_get_ParameterMap_m933EEB7EADCB585A6C4BB97FAAD1C18D428092A0 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CParameterMapU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_ParameterMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_ParameterMap_mC2241625BEB9C825F5DA62CDCB4748238B4F2BB6 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->___U3CParameterMapU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterMapU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Type Meta.Conduit.InvocationContext::get_CustomAttributeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_CustomAttributeType_m2223CA7341C01FDE8645D4E79F9BB99A63A966C2 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public Type CustomAttributeType { get; set; }
		Type_t* L_0 = __this->___U3CCustomAttributeTypeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_CustomAttributeType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_CustomAttributeType_m9D25D6AE3843F689A44401471FFFA3E4B9334B46 (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type CustomAttributeType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CCustomAttributeTypeU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomAttributeTypeU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m060A8C1B90169CA46206852E8F643699D16C96BD (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MaxConfidence { get; set; } = 1;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = (1.0f);
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CParameterMapU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterMapU3Ek__BackingField_5), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Meta.Conduit.Manifest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest__ctor_m287D7617867E7291196273DB8CE87360E635B131 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE5C23C612DABFA89D98A9B333F992863519AC3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3B8A5EC544B96A585EB2BEB76D8C06D8B9FDDAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB6DA373D70052DF30F55409071827A2CBA26EC75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED3E112F42E29814C2B9E1E75A2540F209F92ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* L_0 = (List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21*)il2cpp_codegen_object_new(List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED3E112F42E29814C2B9E1E75A2540F209F92ECB(L_0, List_1__ctor_mED3E112F42E29814C2B9E1E75A2540F209F92ECB_RuntimeMethod_var);
		__this->___U3CEntitiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntitiesU3Ek__BackingField_3), (void*)L_0);
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* L_1 = (List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD*)il2cpp_codegen_object_new(List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3B8A5EC544B96A585EB2BEB76D8C06D8B9FDDAAA(L_1, List_1__ctor_m3B8A5EC544B96A585EB2BEB76D8C06D8B9FDDAAA_RuntimeMethod_var);
		__this->___U3CActionsU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionsU3Ek__BackingField_4), (void*)L_1);
		// public List<ManifestErrorHandler> ErrorHandlers = new List<ManifestErrorHandler>();
		List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* L_2 = (List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177*)il2cpp_codegen_object_new(List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mB6DA373D70052DF30F55409071827A2CBA26EC75(L_2, List_1__ctor_mB6DA373D70052DF30F55409071827A2CBA26EC75_RuntimeMethod_var);
		__this->___ErrorHandlers_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ErrorHandlers_5), (void*)L_2);
		// private readonly Dictionary<string, List<InvocationContext>> _methodLookup =
		//     new Dictionary<string, List<InvocationContext>>(StringComparer.OrdinalIgnoreCase);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3;
		L_3 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_4 = (Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1*)il2cpp_codegen_object_new(Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mE5C23C612DABFA89D98A9B333F992863519AC3B2(L_4, L_3, Dictionary_2__ctor_mE5C23C612DABFA89D98A9B333F992863519AC3B2_RuntimeMethod_var);
		__this->____methodLookup_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____methodLookup_6), (void*)L_4);
		// public Dictionary<string, Type> CustomEntityTypes { get; } = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_5 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_5, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		__this->___U3CCustomEntityTypesU3Ek__BackingField_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomEntityTypesU3Ek__BackingField_7), (void*)L_5);
		// public Manifest() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public Manifest() { }
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_ID_m0548F44B82F439F4CA688880834A88ED6BFD314B (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_ID_mAC9527DFB6B872BB9D6A9E8090ABF9CFFD225333 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Version_m9924D1483BFBDC8C13E6879E0CD60A9545A71C99 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; set; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Version_mFC96BB7181345936A55F7245B69D34FE5E978727 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Version { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Domain_mF8052864550E054EADA32F56A2A6752DA162E8E1 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Domain_mECFA345ADF1F4907662EB18898FCC5AE108B9A03 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* Manifest_get_Entities_mE3AA0DB6D8213431FA83BEFE40505EC4E4122602 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* L_0 = __this->___U3CEntitiesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Entities(System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Entities_mA75C6DEB2C9F939D9D66614599167FED14137C2C (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* L_0 = ___value0;
		__this->___U3CEntitiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntitiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* Manifest_get_Actions_m8B2EF91B9121484FA6F79C35B40023206694C8CC (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* L_0 = __this->___U3CActionsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Actions(System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Actions_m470B47F450B912979A7998DE5F47A842EF542454 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* L_0 = ___value0;
		__this->___U3CActionsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::get_CustomEntityTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* Manifest_get_CustomEntityTypes_m2989EE750AA255E385036B2EBC2B92B075866A55 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, Type> CustomEntityTypes { get; } = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = __this->___U3CCustomEntityTypesU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveEntities_m7B62D028B823F31F6F883F5A501DB49206B683E8 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m85690411E843E7A8E091143C1A15F608ABA7E4DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF796C14D4EF5DF63DCD7E988F49E62CD1800A5D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m02A1F6644E4D3B4CEBC6FFA427D3A95468294DCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69602B946033E334F3B9E1A5BDDE144D3980715E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_ResolveEntities_m7B62D028B823F31F6F883F5A501DB49206B683E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* V_2 = NULL;
	String_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// bool allResolved = true;
		V_0 = (bool)1;
		// foreach (var entity in Entities)
		List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* L_0;
		L_0 = Manifest_get_Entities_mE3AA0DB6D8213431FA83BEFE40505EC4E4122602_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_tADB88321102422AC3BDF0CDC60C3B4D755064231 L_1;
		L_1 = List_1_GetEnumerator_m69602B946033E334F3B9E1A5BDDE144D3980715E(L_0, List_1_GetEnumerator_m69602B946033E334F3B9E1A5BDDE144D3980715E_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m85690411E843E7A8E091143C1A15F608ABA7E4DA((&V_1), Enumerator_Dispose_m85690411E843E7A8E091143C1A15F608ABA7E4DA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b_1;
			}

IL_0010_1:
			{
				// foreach (var entity in Entities)
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_2;
				L_2 = Enumerator_get_Current_m02A1F6644E4D3B4CEBC6FFA427D3A95468294DCE_inline((&V_1), Enumerator_get_Current_m02A1F6644E4D3B4CEBC6FFA427D3A95468294DCE_RuntimeMethod_var);
				V_2 = L_2;
				// var typeName = string.IsNullOrEmpty(entity.Namespace) ? entity.ID : $"{entity.Namespace}.{entity.ID}";
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_3 = V_2;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(L_3, NULL);
				bool L_5;
				L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
				if (L_5)
				{
					goto IL_003d_1;
				}
			}
			{
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_6 = V_2;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(L_6, NULL);
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(L_8, NULL);
				String_t* L_10;
				L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, NULL);
				G_B5_0 = L_10;
				goto IL_0043_1;
			}

IL_003d_1:
			{
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(L_11, NULL);
				G_B5_0 = L_12;
			}

IL_0043_1:
			{
				// var qualifiedTypeName = $"{typeName},{entity.Assembly}";
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC_inline(L_13, NULL);
				String_t* L_15;
				L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_0, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_14, NULL);
				V_3 = L_15;
				// var type = Type.GetType(qualifiedTypeName);
				String_t* L_16 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = il2cpp_codegen_get_type(L_16, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Manifest_ResolveEntities_m7B62D028B823F31F6F883F5A501DB49206B683E8_RuntimeMethod_var);
				V_4 = L_17;
				// if (type == null)
				Type_t* L_18 = V_4;
				bool L_19;
				L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, (Type_t*)NULL, NULL);
				if (!L_19)
				{
					goto IL_0078_1;
				}
			}
			{
				// VLog.E($"Failed to resolve type: {qualifiedTypeName}");
				String_t* L_20 = V_3;
				String_t* L_21;
				L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_20, NULL);
				VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_21, NULL);
				// allResolved = false;
				V_0 = (bool)0;
			}

IL_0078_1:
			{
				// CustomEntityTypes[entity.Name] = type;
				Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_22;
				L_22 = Manifest_get_CustomEntityTypes_m2989EE750AA255E385036B2EBC2B92B075866A55_inline(__this, NULL);
				ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_23 = V_2;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline(L_23, NULL);
				Type_t* L_25 = V_4;
				NullCheck(L_22);
				Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_22, L_24, L_25, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
			}

IL_008b_1:
			{
				// foreach (var entity in Entities)
				bool L_26;
				L_26 = Enumerator_MoveNext_mF796C14D4EF5DF63DCD7E988F49E62CD1800A5D0((&V_1), Enumerator_MoveNext_mF796C14D4EF5DF63DCD7E988F49E62CD1800A5D0_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// return allResolved;
		bool L_27 = V_0;
		return L_27;
	}
}
// System.Tuple`2<System.Reflection.MethodInfo,System.Type> Meta.Conduit.Manifest::GetMethodInfo(Meta.Conduit.IManifestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFADFD9C19245102C37B606127FF10C26A410C5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisMethodInfo_t_TisType_t_m64F30CF793658CEA821C36F7102C7D0CD647B29C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	MethodInfo_t* V_6 = NULL;
	int32_t V_7 = 0;
	ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* V_8 = NULL;
	String_t* V_9 = NULL;
	{
		// var lastPeriod = action.ID.LastIndexOf('.');
		RuntimeObject* L_0 = ___action0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Meta.Conduit.IManifestMethod::get_ID() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_1, ((int32_t)46), NULL);
		V_0 = L_2;
		// if (lastPeriod <= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		// VLog.E($"Invalid Action ID: {action.ID}");
		RuntimeObject* L_4 = ___action0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Meta.Conduit.IManifestMethod::get_ID() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_5, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_6, NULL);
		// return null;
		return (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349*)NULL;
	}

IL_0029:
	{
		// var typeName = action.ID.Substring(0, lastPeriod);
		RuntimeObject* L_7 = ___action0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Meta.Conduit.IManifestMethod::get_ID() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_7);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_8, 0, L_9, NULL);
		V_1 = L_10;
		// var qualifiedTypeName = $"{typeName},{action.Assembly}";
		String_t* L_11 = V_1;
		RuntimeObject* L_12 = ___action0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String Meta.Conduit.IManifestMethod::get_Assembly() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_12);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_13, NULL);
		V_2 = L_14;
		// var method = action.ID.Substring(lastPeriod + 1);
		RuntimeObject* L_15 = ___action0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Meta.Conduit.IManifestMethod::get_ID() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_15);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		V_3 = L_18;
		// var targetType = Type.GetType(qualifiedTypeName);
		String_t* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = il2cpp_codegen_get_type(L_19, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65_RuntimeMethod_var);
		V_4 = L_20;
		// if (targetType == null)
		Type_t* L_21 = V_4;
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, (Type_t*)NULL, NULL);
		if (!L_22)
		{
			goto IL_007c;
		}
	}
	{
		// VLog.E($"Failed to resolve type: {qualifiedTypeName}");
		String_t* L_23 = V_2;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_23, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_24, NULL);
		// return  null;
		return (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349*)NULL;
	}

IL_007c:
	{
		// var types = new Type[action.Parameters.Count];
		RuntimeObject* L_25 = ___action0;
		NullCheck(L_25);
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_26;
		L_26 = InterfaceFuncInvoker0< List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* >::Invoke(2 /* System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.IManifestMethod::get_Parameters() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_inline(L_26, List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_28 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)L_27);
		V_5 = L_28;
		// for (var i = 0; i < action.Parameters.Count; i++)
		V_7 = 0;
		goto IL_00ec;
	}

IL_0093:
	{
		// var manifestParameter = action.Parameters[i];
		RuntimeObject* L_29 = ___action0;
		NullCheck(L_29);
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_30;
		L_30 = InterfaceFuncInvoker0< List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* >::Invoke(2 /* System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.IManifestMethod::get_Parameters() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_29);
		int32_t L_31 = V_7;
		NullCheck(L_30);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_32;
		L_32 = List_1_get_Item_mFADFD9C19245102C37B606127FF10C26A410C5E8(L_30, L_31, List_1_get_Item_mFADFD9C19245102C37B606127FF10C26A410C5E8_RuntimeMethod_var);
		V_8 = L_32;
		// var fullTypeName = $"{manifestParameter.QualifiedTypeName},{manifestParameter.TypeAssembly}";
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_33 = V_8;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(L_33, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_35 = V_8;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491_inline(L_35, NULL);
		String_t* L_37;
		L_37 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_34, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_36, NULL);
		V_9 = L_37;
		// types[i] = Type.GetType(fullTypeName);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_38 = V_5;
		int32_t L_39 = V_7;
		String_t* L_40 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = il2cpp_codegen_get_type(L_40, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65_RuntimeMethod_var);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Type_t*)L_41);
		// if (types[i] == null)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_42 = V_5;
		int32_t L_43 = V_7;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Type_t* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, (Type_t*)NULL, NULL);
		if (!L_46)
		{
			goto IL_00e6;
		}
	}
	{
		// VLog.E($"Failed to resolve type: {fullTypeName}");
		String_t* L_47 = V_9;
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_47, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_48, NULL);
	}

IL_00e6:
	{
		// for (var i = 0; i < action.Parameters.Count; i++)
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00ec:
	{
		// for (var i = 0; i < action.Parameters.Count; i++)
		int32_t L_50 = V_7;
		RuntimeObject* L_51 = ___action0;
		NullCheck(L_51);
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_52;
		L_52 = InterfaceFuncInvoker0< List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* >::Invoke(2 /* System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.IManifestMethod::get_Parameters() */, IManifestMethod_t93CE48B5D37413D21D8D1471E0E19056ADB350E3_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_inline(L_52, List_1_get_Count_m4555D5DF56C32876D2071F9229FC202025819AF7_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_53)))
		{
			goto IL_0093;
		}
	}
	{
		// var targetMethod = GetBestMethodMatch(targetType, method, types);
		Type_t* L_54 = V_4;
		String_t* L_55 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_56 = V_5;
		MethodInfo_t* L_57;
		L_57 = Manifest_GetBestMethodMatch_m73CB349AAD1448F2C115C07035BBD5E5AB6F3BB1(__this, L_54, L_55, L_56, NULL);
		V_6 = L_57;
		// if (targetMethod == null)
		MethodInfo_t* L_58 = V_6;
		bool L_59;
		L_59 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_58, (MethodInfo_t*)NULL, NULL);
		if (!L_59)
		{
			goto IL_0144;
		}
	}
	{
		// VLog.E($"Failed to resolve method {typeName}.{method}.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		String_t* L_63 = V_1;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_62;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		String_t* L_66 = V_3;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_65;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		String_t* L_68;
		L_68 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_67, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_68, NULL);
		// return  null;
		return (Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349*)NULL;
	}

IL_0144:
	{
		// return Tuple.Create( targetMethod, targetType);
		MethodInfo_t* L_69 = V_6;
		Type_t* L_70 = V_4;
		Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_71;
		L_71 = Tuple_Create_TisMethodInfo_t_TisType_t_m64F30CF793658CEA821C36F7102C7D0CD647B29C(L_69, L_70, Tuple_Create_TisMethodInfo_t_TisType_t_m64F30CF793658CEA821C36F7102C7D0CD647B29C_RuntimeMethod_var);
		return L_71;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveAllActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveAllActions_m56DBD28949421B14C39DF62999A94723D9F0A58C (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6D914FB0655333761474BA0B174390657A11C792_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t38A8DE593563558CD7D559161D89E5CC33273012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t330C0FA386BC76A62117E6C730E8F123E09E9EEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveAllActionsU3Eb__29_0_m295F65CEBA60EEB8DEC1C2B34256C02ED496166B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveAllActionsU3Eb__29_1_mE0055DB230637B270678E2099B7A670DA4937126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* V_2 = NULL;
	Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	Type_t* V_5 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_6 = NULL;
	ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* V_7 = NULL;
	InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* V_8 = NULL;
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	Func_2_t6D914FB0655333761474BA0B174390657A11C792* G_B16_0 = NULL;
	ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* G_B16_1 = NULL;
	Func_2_t6D914FB0655333761474BA0B174390657A11C792* G_B15_0 = NULL;
	ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* G_B15_1 = NULL;
	Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* G_B20_0 = NULL;
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* G_B20_1 = NULL;
	Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* G_B19_0 = NULL;
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* G_B19_1 = NULL;
	{
		// var resolvedAll = true;
		V_0 = (bool)1;
		// foreach (var action in this.Actions)
		List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* L_0;
		L_0 = Manifest_get_Actions_m8B2EF91B9121484FA6F79C35B40023206694C8CC_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t865B5B4B86A7C2721D9F5B372B3955754533A643 L_1;
		L_1 = List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C(L_0, List_1_GetEnumerator_mCBBD5C4282D08EC34584016BBD75F28004028C1C_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0130:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1((&V_1), Enumerator_Dispose_m0803B69C99A7A2A78D36C5158C600DBDAB58B9E1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0122_1;
			}

IL_0013_1:
			{
				// foreach (var action in this.Actions)
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_2;
				L_2 = Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_inline((&V_1), Enumerator_get_Current_mD2E137A7519B209F05EDB336A911C1D1434559D5_RuntimeMethod_var);
				V_2 = L_2;
				// var methodInfo = GetMethodInfo(action);
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_3 = V_2;
				Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_4;
				L_4 = Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65(__this, L_3, NULL);
				V_3 = L_4;
				// if (methodInfo == null)
				Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_5 = V_3;
				if (L_5)
				{
					goto IL_002e_1;
				}
			}
			{
				// return false;
				V_9 = (bool)0;
				goto IL_01ba;
			}

IL_002e_1:
			{
				// var targetMethod = methodInfo.Item1;
				Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_6 = V_3;
				NullCheck(L_6);
				MethodInfo_t* L_7;
				L_7 = Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_inline(L_6, Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_RuntimeMethod_var);
				V_4 = L_7;
				// var targetType = methodInfo.Item2;
				Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_8 = V_3;
				NullCheck(L_8);
				Type_t* L_9;
				L_9 = Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_inline(L_8, Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_RuntimeMethod_var);
				V_5 = L_9;
				// if (targetMethod == null)
				MethodInfo_t* L_10 = V_4;
				bool L_11;
				L_11 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_10, (MethodInfo_t*)NULL, NULL);
				if (!L_11)
				{
					goto IL_0064_1;
				}
			}
			{
				// VLog.E($"Invalid Action ID: {action.ID}");
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(L_12, NULL);
				String_t* L_14;
				L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_13, NULL);
				VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_14, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_0122_1;
			}

IL_0064_1:
			{
				// var attributes = targetMethod.GetCustomAttributes(typeof(ConduitActionAttribute), false);
				MethodInfo_t* L_15 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				NullCheck(L_15);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
				L_18 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_15, L_17, (bool)0);
				V_6 = L_18;
				// if (attributes.Length == 0)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_6;
				NullCheck(L_19);
				if ((((RuntimeArray*)L_19)->max_length))
				{
					goto IL_0095_1;
				}
			}
			{
				// VLog.E($"{targetMethod} - Did not have expected Conduit attribute");
				MethodInfo_t* L_20 = V_4;
				String_t* L_21;
				L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A, L_20, NULL);
				VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_21, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_0122_1;
			}

IL_0095_1:
			{
				// var actionAttribute = attributes.First() as ConduitActionAttribute;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_6;
				RuntimeObject* L_23;
				L_23 = Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6((RuntimeObject*)L_22, Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
				V_7 = ((ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A*)IsInstClass((RuntimeObject*)L_23, ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A_il2cpp_TypeInfo_var));
				// var invocationContext = new InvocationContext()
				// {
				//     Type = targetType,
				//     MethodInfo = targetMethod,
				//     MinConfidence = actionAttribute.MinConfidence,
				//     MaxConfidence = actionAttribute.MaxConfidence,
				//     ValidatePartial = actionAttribute.ValidatePartial,
				// };
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_24 = (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1*)il2cpp_codegen_object_new(InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				InvocationContext__ctor_m060A8C1B90169CA46206852E8F643699D16C96BD(L_24, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_25 = L_24;
				Type_t* L_26 = V_5;
				NullCheck(L_25);
				InvocationContext_set_Type_m8FDF69B3BBF055D277DEB1BF31A9259A6634D9B4_inline(L_25, L_26, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_27 = L_25;
				MethodInfo_t* L_28 = V_4;
				NullCheck(L_27);
				InvocationContext_set_MethodInfo_m779020E00E1CB14220D86EE95010E74E9D8AEB5B_inline(L_27, L_28, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_29 = L_27;
				ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* L_30 = V_7;
				NullCheck(L_30);
				float L_31;
				L_31 = ConduitActionAttribute_get_MinConfidence_m1AB668B87682791F5BA553EA0751A0E956D3B453_inline(L_30, NULL);
				NullCheck(L_29);
				InvocationContext_set_MinConfidence_m15AC7D051D0E28F5BD52A4D2D0879BA65609441D_inline(L_29, L_31, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_32 = L_29;
				ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* L_33 = V_7;
				NullCheck(L_33);
				float L_34;
				L_34 = ConduitActionAttribute_get_MaxConfidence_m9CF249D68A9DE82992CE6462330CD8773B62160A_inline(L_33, NULL);
				NullCheck(L_32);
				InvocationContext_set_MaxConfidence_m4E5E85844F36DCE65F2DA648C7C4C74C6D65EFDE_inline(L_32, L_34, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_35 = L_32;
				ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* L_36 = V_7;
				NullCheck(L_36);
				bool L_37;
				L_37 = ConduitActionAttribute_get_ValidatePartial_m83EA5CF9642717EF0BCB81D8FA30DE5521ED7568_inline(L_36, NULL);
				NullCheck(L_35);
				InvocationContext_set_ValidatePartial_m9D70B4D7455C33EBFF95E86F34A7EE4BE3B5FBF9_inline(L_35, L_37, NULL);
				V_8 = L_35;
				// if (!_methodLookup.ContainsKey(action.Name))
				Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_38 = __this->____methodLookup_6;
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_39 = V_2;
				NullCheck(L_39);
				String_t* L_40;
				L_40 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(L_39, NULL);
				NullCheck(L_38);
				bool L_41;
				L_41 = Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F(L_38, L_40, Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_010a_1;
				}
			}
			{
				// _methodLookup.Add(action.Name, new List<InvocationContext>());
				Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_42 = __this->____methodLookup_6;
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_43 = V_2;
				NullCheck(L_43);
				String_t* L_44;
				L_44 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(L_43, NULL);
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_45 = (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*)il2cpp_codegen_object_new(List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
				NullCheck(L_45);
				List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF(L_45, List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
				NullCheck(L_42);
				Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404(L_42, L_44, L_45, Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404_RuntimeMethod_var);
			}

IL_010a_1:
			{
				// _methodLookup[action.Name].Add(invocationContext);
				Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_46 = __this->____methodLookup_6;
				ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_47 = V_2;
				NullCheck(L_47);
				String_t* L_48;
				L_48 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(L_47, NULL);
				NullCheck(L_46);
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_49;
				L_49 = Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2(L_46, L_48, Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_50 = V_8;
				NullCheck(L_49);
				List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_inline(L_49, L_50, List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var);
			}

IL_0122_1:
			{
				// foreach (var action in this.Actions)
				bool L_51;
				L_51 = Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2((&V_1), Enumerator_MoveNext_mC395CB2FFF73D90D36D80C27ABF656375AE7DCB2_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_013e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013e:
	{
		// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
		//              invocationContext.Count > 1))
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_52 = __this->____methodLookup_6;
		NullCheck(L_52);
		ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* L_53;
		L_53 = Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3(L_52, Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_54 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__29_0_1;
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_55 = L_54;
		G_B15_0 = L_55;
		G_B15_1 = L_53;
		if (L_55)
		{
			G_B16_0 = L_55;
			G_B16_1 = L_53;
			goto IL_0168;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* L_56 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_57 = (Func_2_t6D914FB0655333761474BA0B174390657A11C792*)il2cpp_codegen_object_new(Func_2_t6D914FB0655333761474BA0B174390657A11C792_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Func_2__ctor_mB6272D353A4F60B264AF1EAB4773E5408D622671(L_57, L_56, (intptr_t)((void*)U3CU3Ec_U3CResolveAllActionsU3Eb__29_0_m295F65CEBA60EEB8DEC1C2B34256C02ED496166B_RuntimeMethod_var), NULL);
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_58 = L_57;
		((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__29_0_1 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__29_0_1), (void*)L_58);
		G_B16_0 = L_58;
		G_B16_1 = G_B15_1;
	}

IL_0168:
	{
		RuntimeObject* L_59;
		L_59 = Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF(G_B16_1, G_B16_0, Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF_RuntimeMethod_var);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator() */, IEnumerable_1_t38A8DE593563558CD7D559161D89E5CC33273012_il2cpp_TypeInfo_var, L_59);
		V_10 = L_60;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01ac:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_61 = V_10;
					if (!L_61)
					{
						goto IL_01b7;
					}
				}
				{
					RuntimeObject* L_62 = V_10;
					NullCheck(L_62);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_62);
				}

IL_01b7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01a1_1;
			}

IL_0176_1:
			{
				// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_63 = V_10;
				NullCheck(L_63);
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_64;
				L_64 = InterfaceFuncInvoker0< List_1_t94DD792BDF578F202193C4307B641B72F69191B2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current() */, IEnumerator_1_t330C0FA386BC76A62117E6C730E8F123E09E9EEF_il2cpp_TypeInfo_var, L_63);
				// invocationContext.Sort((one, two) =>
				//     two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_65 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__29_1_2;
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_66 = L_65;
				G_B19_0 = L_66;
				G_B19_1 = L_64;
				if (L_66)
				{
					G_B20_0 = L_66;
					G_B20_1 = L_64;
					goto IL_019c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
				U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* L_67 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_68 = (Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4*)il2cpp_codegen_object_new(Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4_il2cpp_TypeInfo_var);
				NullCheck(L_68);
				Comparison_1__ctor_m5419357CB7E73386684DC5F24A8F765CD8140C32(L_68, L_67, (intptr_t)((void*)U3CU3Ec_U3CResolveAllActionsU3Eb__29_1_mE0055DB230637B270678E2099B7A670DA4937126_RuntimeMethod_var), NULL);
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_69 = L_68;
				((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__29_1_2 = L_69;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__29_1_2), (void*)L_69);
				G_B20_0 = L_69;
				G_B20_1 = G_B19_1;
			}

IL_019c_1:
			{
				NullCheck(G_B20_1);
				List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE(G_B20_1, G_B20_0, List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE_RuntimeMethod_var);
			}

IL_01a1_1:
			{
				// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_70 = V_10;
				NullCheck(L_70);
				bool L_71;
				L_71 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_70);
				if (L_71)
				{
					goto IL_0176_1;
				}
			}
			{
				goto IL_01b8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01b8:
	{
		// return resolvedAll;
		bool L_72 = V_0;
		return L_72;
	}

IL_01ba:
	{
		// }
		bool L_73 = V_9;
		return L_73;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveErrorHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveErrorHandlers_mD02B0F2B901B134BC608ECCD3B122933D92D0E09 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m91059E7EC442284B0EBA57CBA4535237D01F9019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA694667FDE9A4D21721BD4084D5001F2D65D431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m879B042047E966B07836FB18157D91F19952ECA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6D914FB0655333761474BA0B174390657A11C792_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t38A8DE593563558CD7D559161D89E5CC33273012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t330C0FA386BC76A62117E6C730E8F123E09E9EEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m65EFFF7C5B13CD4976A648E37107530804079F3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_0_m58FB8BE14EE5AE1F2BC567AD8305D05FC599443B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_1_m859CA6289AF3663B8947B2DE1623CD9FB248D76C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53435DB29BE675C258FB6F7ED8FED333461E7E97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Func_2_t6D914FB0655333761474BA0B174390657A11C792* G_B18_0 = NULL;
	ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* G_B18_1 = NULL;
	Func_2_t6D914FB0655333761474BA0B174390657A11C792* G_B17_0 = NULL;
	ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* G_B17_1 = NULL;
	Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* G_B22_0 = NULL;
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* G_B22_1 = NULL;
	Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* G_B21_0 = NULL;
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* G_B21_1 = NULL;
	{
		// if (this.ErrorHandlers == null)
		List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* L_0 = __this->___ErrorHandlers_5;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// var resolvedAll = true;
		V_0 = (bool)1;
		// foreach (var action in this.ErrorHandlers)
		List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* L_1 = __this->___ErrorHandlers_5;
		NullCheck(L_1);
		Enumerator_tA4523A9B5727054E0CDE5BEA57B4523EDEFDC983 L_2;
		L_2 = List_1_GetEnumerator_m65EFFF7C5B13CD4976A648E37107530804079F3A(L_1, List_1_GetEnumerator_m65EFFF7C5B13CD4976A648E37107530804079F3A_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m91059E7EC442284B0EBA57CBA4535237D01F9019((&V_1), Enumerator_Dispose_m91059E7EC442284B0EBA57CBA4535237D01F9019_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010f_1;
			}

IL_001d_1:
			{
				// foreach (var action in this.ErrorHandlers)
				ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* L_3;
				L_3 = Enumerator_get_Current_m879B042047E966B07836FB18157D91F19952ECA5_inline((&V_1), Enumerator_get_Current_m879B042047E966B07836FB18157D91F19952ECA5_RuntimeMethod_var);
				V_2 = L_3;
				// var methodInfo = GetMethodInfo(action);
				ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* L_4 = V_2;
				Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_5;
				L_5 = Manifest_GetMethodInfo_mDB8A6976E74AEE2E24AA871161CC3ACD572BBC65(__this, L_4, NULL);
				// var targetMethod = methodInfo.Item1;
				Tuple_2_tB822D04EAC26661A992EEB1B849D2DC245054349* L_6 = L_5;
				NullCheck(L_6);
				MethodInfo_t* L_7;
				L_7 = Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_inline(L_6, Tuple_2_get_Item1_m3596F08E636CE5A0222E8F2291893DBF5A3B37F2_RuntimeMethod_var);
				V_3 = L_7;
				// var targetType = methodInfo.Item2;
				NullCheck(L_6);
				Type_t* L_8;
				L_8 = Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_inline(L_6, Tuple_2_get_Item2_m9686856DA04C17D4E05F9C80C48233E7BB13BBFF_RuntimeMethod_var);
				V_4 = L_8;
				// if (targetMethod == null)
				MethodInfo_t* L_9 = V_3;
				bool L_10;
				L_10 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_9, (MethodInfo_t*)NULL, NULL);
				if (!L_10)
				{
					goto IL_005f_1;
				}
			}
			{
				// VLog.E($"Invalid Action ID: {action.ID}");
				ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline(L_11, NULL);
				String_t* L_13;
				L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_12, NULL);
				VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_13, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_010f_1;
			}

IL_005f_1:
			{
				// var attributes = targetMethod.GetCustomAttributes(typeof(HandleEntityResolutionFailure), false);
				MethodInfo_t* L_14 = V_3;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				NullCheck(L_14);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
				L_17 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_14, L_16, (bool)0);
				V_5 = L_17;
				// if (attributes.Length == 0)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_5;
				NullCheck(L_18);
				if ((((RuntimeArray*)L_18)->max_length))
				{
					goto IL_008e_1;
				}
			}
			{
				// VLog.E($"{targetMethod} - Did not have expected Conduit attribute");
				MethodInfo_t* L_19 = V_3;
				String_t* L_20;
				L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A, L_19, NULL);
				VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_20, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_010f_1;
			}

IL_008e_1:
			{
				// var actionAttribute = attributes.First() as HandleEntityResolutionFailure;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_5;
				RuntimeObject* L_22;
				L_22 = Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6((RuntimeObject*)L_21, Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
				// if (actionAttribute == null)
				if (((HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F*)IsInstClass((RuntimeObject*)L_22, HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_il2cpp_TypeInfo_var)))
				{
					goto IL_00a8_1;
				}
			}
			{
				// VLog.E("Found null attribute when one was expected");
				VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteral53435DB29BE675C258FB6F7ED8FED333461E7E97, NULL);
				// continue;
				goto IL_010f_1;
			}

IL_00a8_1:
			{
				// var invocationContext = new InvocationContext()
				// {
				//     Type = targetType,
				//     MethodInfo = targetMethod,
				//     CustomAttributeType = typeof(HandleEntityResolutionFailure)
				// };
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_23 = (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1*)il2cpp_codegen_object_new(InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				InvocationContext__ctor_m060A8C1B90169CA46206852E8F643699D16C96BD(L_23, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_24 = L_23;
				Type_t* L_25 = V_4;
				NullCheck(L_24);
				InvocationContext_set_Type_m8FDF69B3BBF055D277DEB1BF31A9259A6634D9B4_inline(L_24, L_25, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_26 = L_24;
				MethodInfo_t* L_27 = V_3;
				NullCheck(L_26);
				InvocationContext_set_MethodInfo_m779020E00E1CB14220D86EE95010E74E9D8AEB5B_inline(L_26, L_27, NULL);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_28 = L_26;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				NullCheck(L_28);
				InvocationContext_set_CustomAttributeType_m9D25D6AE3843F689A44401471FFFA3E4B9334B46_inline(L_28, L_30, NULL);
				V_6 = L_28;
				// if (!_methodLookup.ContainsKey(action.Name))
				Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_31 = __this->____methodLookup_6;
				ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* L_32 = V_2;
				NullCheck(L_32);
				String_t* L_33;
				L_33 = ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline(L_32, NULL);
				NullCheck(L_31);
				bool L_34;
				L_34 = Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F(L_31, L_33, Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_00f7_1;
				}
			}
			{
				// _methodLookup.Add(action.Name, new List<InvocationContext>());
				Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_35 = __this->____methodLookup_6;
				ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* L_36 = V_2;
				NullCheck(L_36);
				String_t* L_37;
				L_37 = ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline(L_36, NULL);
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_38 = (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*)il2cpp_codegen_object_new(List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
				NullCheck(L_38);
				List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF(L_38, List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
				NullCheck(L_35);
				Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404(L_35, L_37, L_38, Dictionary_2_Add_m5BA82DA4EA1F2C08820A2DF2F8A128E16043D404_RuntimeMethod_var);
			}

IL_00f7_1:
			{
				// _methodLookup[action.Name].Add(invocationContext);
				Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_39 = __this->____methodLookup_6;
				ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* L_40 = V_2;
				NullCheck(L_40);
				String_t* L_41;
				L_41 = ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline(L_40, NULL);
				NullCheck(L_39);
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_42;
				L_42 = Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2(L_39, L_41, Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var);
				InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_43 = V_6;
				NullCheck(L_42);
				List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_inline(L_42, L_43, List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var);
			}

IL_010f_1:
			{
				// foreach (var action in this.ErrorHandlers)
				bool L_44;
				L_44 = Enumerator_MoveNext_mBA694667FDE9A4D21721BD4084D5001F2D65D431((&V_1), Enumerator_MoveNext_mBA694667FDE9A4D21721BD4084D5001F2D65D431_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_012b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012b:
	{
		// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
		//              invocationContext.Count > 1))
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_45 = __this->____methodLookup_6;
		NullCheck(L_45);
		ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* L_46;
		L_46 = Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3(L_45, Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_47 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_3;
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_48 = L_47;
		G_B17_0 = L_48;
		G_B17_1 = L_46;
		if (L_48)
		{
			G_B18_0 = L_48;
			G_B18_1 = L_46;
			goto IL_0155;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* L_49 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_50 = (Func_2_t6D914FB0655333761474BA0B174390657A11C792*)il2cpp_codegen_object_new(Func_2_t6D914FB0655333761474BA0B174390657A11C792_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Func_2__ctor_mB6272D353A4F60B264AF1EAB4773E5408D622671(L_50, L_49, (intptr_t)((void*)U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_0_m58FB8BE14EE5AE1F2BC567AD8305D05FC599443B_RuntimeMethod_var), NULL);
		Func_2_t6D914FB0655333761474BA0B174390657A11C792* L_51 = L_50;
		((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_3 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_3), (void*)L_51);
		G_B18_0 = L_51;
		G_B18_1 = G_B17_1;
	}

IL_0155:
	{
		RuntimeObject* L_52;
		L_52 = Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF(G_B18_1, G_B18_0, Enumerable_Where_TisList_1_t94DD792BDF578F202193C4307B641B72F69191B2_mC73855E398B0F8DDE5C42C76F79251CEAE644BCF_RuntimeMethod_var);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator() */, IEnumerable_1_t38A8DE593563558CD7D559161D89E5CC33273012_il2cpp_TypeInfo_var, L_52);
		V_7 = L_53;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0199:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_54 = V_7;
					if (!L_54)
					{
						goto IL_01a4;
					}
				}
				{
					RuntimeObject* L_55 = V_7;
					NullCheck(L_55);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_55);
				}

IL_01a4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_018e_1;
			}

IL_0163_1:
			{
				// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_56 = V_7;
				NullCheck(L_56);
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_57;
				L_57 = InterfaceFuncInvoker0< List_1_t94DD792BDF578F202193C4307B641B72F69191B2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current() */, IEnumerator_1_t330C0FA386BC76A62117E6C730E8F123E09E9EEF_il2cpp_TypeInfo_var, L_56);
				// invocationContext.Sort((one, two) =>
				//     two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_58 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__30_1_4;
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_59 = L_58;
				G_B21_0 = L_59;
				G_B21_1 = L_57;
				if (L_59)
				{
					G_B22_0 = L_59;
					G_B22_1 = L_57;
					goto IL_0189_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
				U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* L_60 = ((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_61 = (Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4*)il2cpp_codegen_object_new(Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4_il2cpp_TypeInfo_var);
				NullCheck(L_61);
				Comparison_1__ctor_m5419357CB7E73386684DC5F24A8F765CD8140C32(L_61, L_60, (intptr_t)((void*)U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_1_m859CA6289AF3663B8947B2DE1623CD9FB248D76C_RuntimeMethod_var), NULL);
				Comparison_1_t68EC2EE2E9CD372225006EC591633957E4D028D4* L_62 = L_61;
				((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__30_1_4 = L_62;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9__30_1_4), (void*)L_62);
				G_B22_0 = L_62;
				G_B22_1 = G_B21_1;
			}

IL_0189_1:
			{
				NullCheck(G_B22_1);
				List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE(G_B22_1, G_B22_0, List_1_Sort_m57CA2825291797FEE933DBF8963DD1AF5085F1EE_RuntimeMethod_var);
			}

IL_018e_1:
			{
				// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_63 = V_7;
				NullCheck(L_63);
				bool L_64;
				L_64 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_63);
				if (L_64)
				{
					goto IL_0163_1;
				}
			}
			{
				goto IL_01a5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a5:
	{
		// return resolvedAll;
		bool L_65 = V_0;
		return L_65;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m580972D0FF5815587B6BBFC88552DB9EAA8B1465 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// return ResolveAllActions() && ResolveErrorHandlers();
		bool L_0;
		L_0 = Manifest_ResolveAllActions_m56DBD28949421B14C39DF62999A94723D9F0A58C(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = Manifest_ResolveErrorHandlers_mD02B0F2B901B134BC608ECCD3B122933D92D0E09(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.Manifest::GetBestMethodMatch(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Manifest_GetBestMethodMatch_m73CB349AAD1448F2C115C07035BBD5E5AB6F3BB1 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, Type_t* ___targetType0, String_t* ___method1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameterTypes2, const RuntimeMethod* method) 
{
	{
		// var exactMatch = targetType.GetMethod(method,
		//     BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static | BindingFlags.NonPublic, null, CallingConventions.Any,
		//     parameterTypes, null);
		Type_t* L_0 = ___targetType0;
		String_t* L_1 = ___method1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___parameterTypes2;
		NullCheck(L_0);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_mA605A28A04232563F51674827C52C17447DE686F(L_0, L_1, ((int32_t)60), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, 3, L_2, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		// return exactMatch;
		return L_3;
	}
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_m2E00FD463D1063AF63275FE29A77AEB88ECDC69A (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _methodLookup.ContainsKey(action);
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_0 = __this->____methodLookup_6;
		String_t* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F(L_0, L_1, Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Manifest_GetInvocationContexts_mF190BFA9E6EAD5527D527E24CC4BADC9C42F4D50 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, String_t* ___actionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _methodLookup.ContainsKey(actionId) ? _methodLookup[actionId] : null;
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_0 = __this->____methodLookup_6;
		String_t* L_1 = ___actionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F(L_0, L_1, Dictionary_2_ContainsKey_mB357DECBA4665589E4487237DB991B54177AF77F_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*)NULL;
	}

IL_0010:
	{
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_3 = __this->____methodLookup_6;
		String_t* L_4 = ___actionId0;
		NullCheck(L_3);
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_5;
		L_5 = Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2(L_3, L_4, Dictionary_2_get_Item_m49886F2794ED77CA70445483F644699F7C7003D2_RuntimeMethod_var);
		return L_5;
	}
}
// System.String Meta.Conduit.Manifest::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_ToString_m97B92E4EB7D4C68F885025AF1AE74E04C127F76B (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_SerializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_mBC6496D48DF51233C15A713AE8E7C0E7249785DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonConvert.SerializeObject(this);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonConvert_SerializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_mBC6496D48DF51233C15A713AE8E7C0E7249785DE(__this, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)0, JsonConvert_SerializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_mBC6496D48DF51233C15A713AE8E7C0E7249785DE_RuntimeMethod_var);
		return L_0;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetErrorHandlerContexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t94DD792BDF578F202193C4307B641B72F69191B2* Manifest_GetErrorHandlerContexts_m0DE2B75A71ABAC22A2E7417F6BD630AC0EB988D5 (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCF8CBD37EAAAB696E8E26CFEF73093A4CBABCCD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m05610CC5D9B4A6B3F19A2F7D8CEA22D10E290E75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m517F77C18E493A797C148AE62592F432A2AB3980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD1639CCCC6F207E7F7FBA07172B043F84F195E55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t94DD792BDF578F202193C4307B641B72F69191B2* V_0 = NULL;
	Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* V_3 = NULL;
	{
		// List<InvocationContext> contexts = new List<InvocationContext>();
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_0 = (List_1_t94DD792BDF578F202193C4307B641B72F69191B2*)il2cpp_codegen_object_new(List_1_t94DD792BDF578F202193C4307B641B72F69191B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF(L_0, List_1__ctor_mA9DB7D489C42EFD1209ACB32EFCDA34C6D258EEF_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var methodLookupValue in _methodLookup.Values)
		Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* L_1 = __this->____methodLookup_6;
		NullCheck(L_1);
		ValueCollection_tEF64F36BDD0DCC97AF8F5B66F3514722F2124F19* L_2;
		L_2 = Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3(L_1, Dictionary_2_get_Values_mC767CD1EEE1B0B89DCB76685D4AFA30B601A24C3_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t74B91768203AAAD4AFBD8271FC8B7BC8A428AAE7 L_3;
		L_3 = ValueCollection_GetEnumerator_mD1639CCCC6F207E7F7FBA07172B043F84F195E55(L_2, ValueCollection_GetEnumerator_mD1639CCCC6F207E7F7FBA07172B043F84F195E55_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCF8CBD37EAAAB696E8E26CFEF73093A4CBABCCD6((&V_1), Enumerator_Dispose_mCF8CBD37EAAAB696E8E26CFEF73093A4CBABCCD6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0067_1;
			}

IL_0019_1:
			{
				// foreach (var methodLookupValue in _methodLookup.Values)
				List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_4;
				L_4 = Enumerator_get_Current_m517F77C18E493A797C148AE62592F432A2AB3980_inline((&V_1), Enumerator_get_Current_m517F77C18E493A797C148AE62592F432A2AB3980_RuntimeMethod_var);
				// foreach (var invocationContext in methodLookupValue)
				NullCheck(L_4);
				Enumerator_tDEAA75DF168C77F756B188B8E2CDA8C270E6F054 L_5;
				L_5 = List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2(L_4, List_1_GetEnumerator_m5F664BEBAF3C7D696622F51A2E4367314DE79DB2_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0059_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1((&V_2), Enumerator_Dispose_m3A1CDC18448027CE76E2521343A35E351E25A5E1_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_004e_2;
					}

IL_0028_2:
					{
						// foreach (var invocationContext in methodLookupValue)
						InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_6;
						L_6 = Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_inline((&V_2), Enumerator_get_Current_m24C3C32DA62A0EE839B2B72B22F10DEB17EEFEF3_RuntimeMethod_var);
						V_3 = L_6;
						// if (invocationContext.CustomAttributeType == typeof(HandleEntityResolutionFailure))
						InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_7 = V_3;
						NullCheck(L_7);
						Type_t* L_8;
						L_8 = InvocationContext_get_CustomAttributeType_m2223CA7341C01FDE8645D4E79F9BB99A63A966C2_inline(L_7, NULL);
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (HandleEntityResolutionFailure_t15CFEDA1A5C15860164233A232377326E93BA12F_0_0_0_var) };
						il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
						Type_t* L_10;
						L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
						bool L_11;
						L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
						if (!L_11)
						{
							goto IL_004e_2;
						}
					}
					{
						// contexts.Add(invocationContext);
						List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_12 = V_0;
						InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_13 = V_3;
						NullCheck(L_12);
						List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_inline(L_12, L_13, List_1_Add_m03810C581EEAEEC8B47D19604521DDDC5D6DB6C3_RuntimeMethod_var);
					}

IL_004e_2:
					{
						// foreach (var invocationContext in methodLookupValue)
						bool L_14;
						L_14 = Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F((&V_2), Enumerator_MoveNext_m7B64433DCAD69CC1229A4C64C25A76D8E901326F_RuntimeMethod_var);
						if (L_14)
						{
							goto IL_0028_2;
						}
					}
					{
						goto IL_0067_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0067_1:
			{
				// foreach (var methodLookupValue in _methodLookup.Values)
				bool L_15;
				L_15 = Enumerator_MoveNext_m05610CC5D9B4A6B3F19A2F7D8CEA22D10E290E75((&V_1), Enumerator_MoveNext_m05610CC5D9B4A6B3F19A2F7D8CEA22D10E290E75_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0080;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0080:
	{
		// return contexts;
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_16 = V_0;
		return L_16;
	}
}
// System.Void Meta.Conduit.Manifest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest__cctor_mEEBD1CEB8801B1031F7A5528DAD9C78FAD70E752 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<string> WitResponseMatcherIntents = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8), (void*)L_0);
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
// System.Void Meta.Conduit.Manifest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6884898204CE8D0C14242CACF43DA57A198F0619 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* L_0 = (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF*)il2cpp_codegen_object_new(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1913A49CFFC2C2F65818EC640E1325EEC45929EB(L_0, NULL);
		((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1913A49CFFC2C2F65818EC640E1325EEC45929EB (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest/<>c::<ResolveAllActions>b__29_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveAllActionsU3Eb__29_0_m295F65CEBA60EEB8DEC1C2B34256C02ED496166B (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* __this, List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ___invocationContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invocationContext.Count > 1))
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_0 = ___invocationContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_inline(L_0, List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Meta.Conduit.Manifest/<>c::<ResolveAllActions>b__29_1(Meta.Conduit.InvocationContext,Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CResolveAllActionsU3Eb__29_1_mE0055DB230637B270678E2099B7A670DA4937126 (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___one0, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___two1, const RuntimeMethod* method) 
{
	{
		// two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_0 = ___two1;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_0, NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		NullCheck(L_2);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_3 = ___one0;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_3, NULL);
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length))));
	}
}
// System.Boolean Meta.Conduit.Manifest/<>c::<ResolveErrorHandlers>b__30_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_0_m58FB8BE14EE5AE1F2BC567AD8305D05FC599443B (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* __this, List_1_t94DD792BDF578F202193C4307B641B72F69191B2* ___invocationContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invocationContext.Count > 1))
		List_1_t94DD792BDF578F202193C4307B641B72F69191B2* L_0 = ___invocationContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_inline(L_0, List_1_get_Count_mEF534A5D519759782055732F69A70C99318421AC_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Meta.Conduit.Manifest/<>c::<ResolveErrorHandlers>b__30_1(Meta.Conduit.InvocationContext,Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CResolveErrorHandlersU3Eb__30_1_m859CA6289AF3663B8947B2DE1623CD9FB248D76C (U3CU3Ec_tE734BF6D7D40B773BBCEA0458455C99EC6FDEFCF* __this, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___one0, InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* ___two1, const RuntimeMethod* method) 
{
	{
		// two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_0 = ___two1;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_0, NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		NullCheck(L_2);
		InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* L_3 = ___one0;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline(L_3, NULL);
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length))));
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
// System.Void Meta.Conduit.ManifestAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction__ctor_mDAA2F521CAB7129FBECB4CB7F86889DF784D6812 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C*)il2cpp_codegen_object_new(List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6(L_0, List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6_RuntimeMethod_var);
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_4), (void*)L_1);
		// public ManifestAction() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestAction() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_ID_m00B7CEF5DB231F63041DCDCAF55494929E30F000 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Assembly_m0CC7FFDF09EB2B14763D183FBBB6216F52B93608 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAssemblyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAssemblyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Name_mFCB33D0CF69167494F4341BAAD2C5DA89C03D159 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Parameters_m075DC9E6F7F63D2898898641CCFE7F9981CF3997 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_DeclaringTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_DeclaringTypeName_m137DFAC4D19085DB41A9902AA48E2F21758F7556 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string DeclaringTypeName => ID.Substring(0, ID.LastIndexOf('.'));
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(__this, NULL);
		String_t* L_1;
		L_1 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_1, ((int32_t)46), NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, 0, L_2, NULL);
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m8A82ADD01F8A114FDCF85D793BCABFB35D04FF7A (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Aliases_mA4C3234B37DB0907B7B5C89FEDABFF0162F852BE (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mFC6AB7F07A93D81934DE76E6779E4FFE6D307CA2 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestAction_t122F3ADFF985A27A1D882333A955251018402685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* V_0 = NULL;
	{
		// return obj is ManifestAction other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestAction_t122F3ADFF985A27A1D882333A955251018402685*)IsInstClass((RuntimeObject*)L_0, ManifestAction_t122F3ADFF985A27A1D882333A955251018402685_il2cpp_TypeInfo_var));
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_2 = V_0;
		bool L_3;
		L_3 = ManifestAction_Equals_mF9EA05B7EA2EA454EF5ED0130E1FC7E71CE85FAD(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestAction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestAction_GetHashCode_mB706D8954C007DC5DABE7A2519E3A2D20B30BD69 (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_2;
		L_2 = ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Parameters.GetHashCode();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_6;
		L_6 = ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = ManifestAction_get_Aliases_m8A82ADD01F8A114FDCF85D793BCABFB35D04FF7A_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7)), ((int32_t)31))), L_9));
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mF9EA05B7EA2EA454EF5ED0130E1FC7E71CE85FAD (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.ID == other.ID && this.Assembly == other.Assembly && this.Name == other.Name && this.Parameters.SequenceEqual(other.Parameters) && this.Aliases.SequenceEqual(other.Aliases);
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_12;
		L_12 = ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_13 = ___other0;
		NullCheck(L_13);
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_14;
		L_14 = ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30(L_12, L_14, Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16;
		L_16 = ManifestAction_get_Aliases_m8A82ADD01F8A114FDCF85D793BCABFB35D04FF7A_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_17 = ___other0;
		NullCheck(L_17);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
		L_18 = ManifestAction_get_Aliases_m8A82ADD01F8A114FDCF85D793BCABFB35D04FF7A_inline(L_17, NULL);
		bool L_19;
		L_19 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1(L_16, L_18, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		return L_19;
	}

IL_005e:
	{
		return (bool)0;
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
// System.Void Meta.Conduit.ManifestEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity__ctor_m8A7A187ED2A4E67AADFC9D2F995D78794172B8B7 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA25297A4CF576A77414984BE7A304D7F8BC8991B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_0 = (List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D*)il2cpp_codegen_object_new(List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA25297A4CF576A77414984BE7A304D7F8BC8991B(L_0, List_1__ctor_mA25297A4CF576A77414984BE7A304D7F8BC8991B_RuntimeMethod_var);
		__this->___U3CValuesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_4), (void*)L_0);
		// public ManifestEntity() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestEntity() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_ID_mA1C041FB4C7E61C88DEFB7A931ED61B7FBA7FCD5 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Namespace_m50114576DEC07C15424570E307081A8354412145 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNamespaceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_m9EF078EE7DE22609691C2B87FE18063D64FB5E3E (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Type_m4605473D5A0E413B12E07DFF100B5F52BD619168 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Name_mB833C5A5EB7C6A5DD99DD70C113073373B890225 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_0 = __this->___U3CValuesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Values(System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Values_m82AA25A35A2891BD78C2651016EB0606E75B2271 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_0 = ___value0;
		__this->___U3CValuesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Assembly_mC300451E6E6B583158227E67B6F180589ED987A0 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAssemblyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAssemblyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Meta.WitAi.Data.Info.WitEntityInfo Meta.Conduit.ManifestEntity::GetAsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 ManifestEntity_GetAsInfo_m16FC1E1535034DC89161A6F017D77FDFDC3B9EB8 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m91051B30B6AB69098BA8356766D4E7BA9E38450D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* V_0 = NULL;
	int32_t V_1 = 0;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var keywords = new WitEntityKeywordInfo [Values.Count];
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_0;
		L_0 = ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_inline(L_0, List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_RuntimeMethod_var);
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_2 = (WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811*)(WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811*)SZArrayNew(WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (var i = 0; i < Values.Count; ++i)
		V_1 = 0;
		goto IL_0031;
	}

IL_0015:
	{
		// keywords[i] = Values[i].GetAsInfo();
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_5;
		L_5 = ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline(__this, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* L_7;
		L_7 = List_1_get_Item_m91051B30B6AB69098BA8356766D4E7BA9E38450D(L_5, L_6, List_1_get_Item_m91051B30B6AB69098BA8356766D4E7BA9E38450D_RuntimeMethod_var);
		NullCheck(L_7);
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8;
		L_8 = WitKeyword_GetAsInfo_m70E48753C5D4DF8EA252B72FD5A3BEF271685C0C(L_7, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B)L_8);
		// for (var i = 0; i < Values.Count; ++i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		// for (var i = 0; i < Values.Count; ++i)
		int32_t L_10 = V_1;
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_11;
		L_11 = ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_inline(L_11, List_1_get_Count_mA25DDBF9F347282DBEAC8F11AFE774311FD83F3A_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		// return new WitEntityInfo()
		// {
		//     name = Name,
		//     keywords = keywords
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62));
		String_t* L_13;
		L_13 = ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline(__this, NULL);
		(&V_2)->___name_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___name_0), (void*)L_13);
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_14 = V_0;
		(&V_2)->___keywords_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___keywords_4), (void*)L_14);
		WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 L_15 = V_2;
		return L_15;
	}
}
// System.String Meta.Conduit.ManifestEntity::GetQualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_GetQualifiedTypeName_m6F03E9846C156DC09943D0BC4C89CA459C15FE5E (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return string.IsNullOrEmpty(Namespace)
		//     ? $"{ID}"
		//     : $"{Namespace}.{ID}";
		String_t* L_0;
		L_0 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2;
		L_2 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(__this, NULL);
		String_t* L_3;
		L_3 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		String_t* L_5;
		L_5 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(__this, NULL);
		String_t* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0033:
	{
		return G_B4_0;
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_mA80C071247A343ADEBD7AACF2A203367DF1A6024 (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* V_0 = NULL;
	{
		// return obj is ManifestEntity other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06*)IsInstClass((RuntimeObject*)L_0, ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06_il2cpp_TypeInfo_var));
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_2 = V_0;
		bool L_3;
		L_3 = ManifestEntity_Equals_m0BF2FD98F4EFF9B93EBDF376E054F97CFA534E2A(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEntity_GetHashCode_mC6C79AE49050D0D7E3376E74039C29B52480255E (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Type.GetHashCode();
		String_t* L_2;
		L_2 = ManifestEntity_get_Type_m9EF078EE7DE22609691C2B87FE18063D64FB5E3E_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Values.GetHashCode();
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_6;
		L_6 = ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + Namespace.GetHashCode();
		String_t* L_8;
		L_8 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_10;
		L_10 = ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7)), ((int32_t)31))), L_9)), ((int32_t)31))), L_11));
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m0BF2FD98F4EFF9B93EBDF376E054F97CFA534E2A (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisWitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_m4CF7FA4CF7FE008DF1FD5333190AF04FDED7AC9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ID == other.ID && Type == other.Type && Name == other.Name && Namespace == other.Namespace
		//        && Assembly == other.Assembly && this.Values.SequenceEqual(other.Values);
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(__this, NULL);
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestEntity_get_Type_m9EF078EE7DE22609691C2B87FE18063D64FB5E3E_inline(__this, NULL);
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestEntity_get_Type_m9EF078EE7DE22609691C2B87FE18063D64FB5E3E_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline(__this, NULL);
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12;
		L_12 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(__this, NULL);
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_13 = ___other0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC_inline(__this, NULL);
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_17 = ___other0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC_inline(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_20;
		L_20 = ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline(__this, NULL);
		ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* L_21 = ___other0;
		NullCheck(L_21);
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_22;
		L_22 = ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline(L_21, NULL);
		bool L_23;
		L_23 = Enumerable_SequenceEqual_TisWitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_m4CF7FA4CF7FE008DF1FD5333190AF04FDED7AC9D(L_20, L_22, Enumerable_SequenceEqual_TisWitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_m4CF7FA4CF7FE008DF1FD5333190AF04FDED7AC9D_RuntimeMethod_var);
		return L_23;
	}

IL_0071:
	{
		return (bool)0;
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
// System.Void Meta.Conduit.ManifestErrorHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestErrorHandler__ctor_mDAA3777DE0C2A51C854AECDF7165A9C1DBB01E94 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = (List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C*)il2cpp_codegen_object_new(List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6(L_0, List_1__ctor_m7C6D3864175C456C4D396ACE138E005A17AED8C6_RuntimeMethod_var);
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		// public ManifestErrorHandler() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestErrorHandler() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestErrorHandler::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestErrorHandler::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestErrorHandler_set_ID_m28A9F0BFB25CF2DC60A68957C4BA3B07EF62B4B0 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestErrorHandler::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_Assembly_m2321C9AD397DEDFF39AC89405896A5F1EA2A4C5F (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestErrorHandler::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestErrorHandler_set_Assembly_m8E645F6631FA5FD128543FADACEF550C30231908 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAssemblyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAssemblyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestErrorHandler::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestErrorHandler::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestErrorHandler_set_Name_m5F4A62B914B78563797390EF39F854B016CA40BC (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestErrorHandler::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ManifestErrorHandler_get_Parameters_m01EDADD0B736F2B2EAE35807FE8DE39BB3FDA228 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestErrorHandler::set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestErrorHandler_set_Parameters_m9D7C8CD622DF064645ED786EE1CFC20D386A2563 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestErrorHandler::get_DeclaringTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_DeclaringTypeName_m9EC65BFBFC64915CF27EB40DA168F45627D2756F (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string DeclaringTypeName => ID.Substring(0, ID.LastIndexOf('.'));
		String_t* L_0;
		L_0 = ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline(__this, NULL);
		String_t* L_1;
		L_1 = ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_1, ((int32_t)46), NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, 0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Meta.Conduit.ManifestErrorHandler::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestErrorHandler_Equals_m27CC11A7B9770311513BF78B533A33888FEFCA93 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestAction_t122F3ADFF985A27A1D882333A955251018402685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* V_0 = NULL;
	{
		// return obj is ManifestAction other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestAction_t122F3ADFF985A27A1D882333A955251018402685*)IsInstClass((RuntimeObject*)L_0, ManifestAction_t122F3ADFF985A27A1D882333A955251018402685_il2cpp_TypeInfo_var));
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_2 = V_0;
		bool L_3;
		L_3 = ManifestErrorHandler_Equals_mC32401DA594687295CE3A1B001DA3A95718CB85A(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestErrorHandler::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestErrorHandler_GetHashCode_mABCFEB12A371094E42A098FA49BD75FF979EE863 (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_2;
		L_2 = ManifestErrorHandler_get_Assembly_m2321C9AD397DEDFF39AC89405896A5F1EA2A4C5F_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Parameters.GetHashCode();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_6;
		L_6 = ManifestErrorHandler_get_Parameters_m01EDADD0B736F2B2EAE35807FE8DE39BB3FDA228_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7));
	}
}
// System.Boolean Meta.Conduit.ManifestErrorHandler::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestErrorHandler_Equals_mC32401DA594687295CE3A1B001DA3A95718CB85A (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.ID == other.ID && this.Assembly == other.Assembly && this.Name == other.Name && this.Parameters.SequenceEqual(other.Parameters) ;
		String_t* L_0;
		L_0 = ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestErrorHandler_get_Assembly_m2321C9AD397DEDFF39AC89405896A5F1EA2A4C5F_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_12;
		L_12 = ManifestErrorHandler_get_Parameters_m01EDADD0B736F2B2EAE35807FE8DE39BB3FDA228_inline(__this, NULL);
		ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* L_13 = ___other0;
		NullCheck(L_13);
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_14;
		L_14 = ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30(L_12, L_14, Enumerable_SequenceEqual_TisManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_mD73C05A4EE2C65F68EE1F9F0651DCCEC09898A30_RuntimeMethod_var);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
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
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ManifestLoader_LoadManifest_m16F2A932B99213C287CEE144CA2752613AF79B67 (ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524* __this, String_t* ___manifestLocalPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var extIndex = manifestLocalPath.LastIndexOf('.');
		String_t* L_0 = ___manifestLocalPath0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_0, ((int32_t)46), NULL);
		V_0 = L_1;
		// var ignoreEnd = extIndex == -1 ? manifestLocalPath : manifestLocalPath.Substring(0, extIndex);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___manifestLocalPath0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, 0, L_4, NULL);
		G_B3_0 = L_5;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_6 = ___manifestLocalPath0;
		G_B3_0 = L_6;
	}

IL_0018:
	{
		// var jsonFile = Resources.Load<TextAsset>(ignoreEnd);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_7;
		L_7 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(G_B3_0, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		V_1 = L_7;
		// if (jsonFile == null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		// VLog.E($"Conduit Error - No Manifest found at Resources/{manifestLocalPath}");
		String_t* L_10 = ___manifestLocalPath0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83, L_10, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_11, NULL);
		// return null;
		return (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB*)NULL;
	}

IL_0039:
	{
		// var rawJson = jsonFile.text;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_12, NULL);
		V_2 = L_13;
		// return LoadManifestFromString(rawJson);
		String_t* L_14 = V_2;
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_15;
		L_15 = ManifestLoader_LoadManifestFromString_m2BE9B5E319D0898CCB078A09FB069F6D0CFA8C3E(__this, L_14, NULL);
		return L_15;
	}
}
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifestFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ManifestLoader_LoadManifestFromString_m2BE9B5E319D0898CCB078A09FB069F6D0CFA8C3E (ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524* __this, String_t* ___manifestText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_m8FF42AAAAD980FCE7BC682223963FF990C842832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B);
		s_Il2CppMethodInitialized = true;
	}
	Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* G_B2_0 = NULL;
	Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* G_B1_0 = NULL;
	{
		// var manifest = JsonConvert.DeserializeObject<Manifest>(manifestText, null, true);
		String_t* L_0 = ___manifestText0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_1;
		L_1 = JsonConvert_DeserializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_m8FF42AAAAD980FCE7BC682223963FF990C842832(L_0, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)1, JsonConvert_DeserializeObject_TisManifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_m8FF42AAAAD980FCE7BC682223963FF990C842832_RuntimeMethod_var);
		// if (manifest.ResolveActions())
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_2 = L_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Manifest_ResolveActions_m580972D0FF5815587B6BBFC88552DB9EAA8B1465(L_2, NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		// VLog.D($"Successfully Loaded Conduit manifest");
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF, NULL);
		return G_B1_0;
	}

IL_001b:
	{
		// VLog.E($"Fail to resolve actions from Conduit manifest");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B, NULL);
		// return manifest;
		return G_B2_0;
	}
}
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_m0D50EEF79E168DE4AB3DED6904880651EC9E2509 (ManifestLoader_tE77A69E142330D0CA8B9D91729F9C6DAB8077524* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Meta.Conduit.ManifestParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter__ctor_mC9B02F92F91B89E4C2DDF58D23047243C0445522 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public ManifestParameter() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestParameter() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_Name_m75619903AE2F050249EB6CE1A016016B0D6839C8 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// get => _name;
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Name_m0BD1A254FF6A2EBE76249F1E0FA7B26D99498351 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _name = ConduitUtilities.DelimitWithUnderscores(value);
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_DelimitWithUnderscores_m074EDB140A18AB1C9F213546B40D9E275F5971D5(L_0, NULL);
		__this->____name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_1);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->___U3CInternalNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_InternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_InternalName_m3D8B8B983387C722595D2EB7870D32A4CD6C25EB (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CInternalNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInternalNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedName_mDE83746A8A36C13F7E05BDD3ECDFB982564AE813 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CQualifiedNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQualifiedNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_m7A3E52D9E4DBEC8663BF66694A831518A9C5138E (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var lastPeriod = QualifiedTypeName.LastIndexOf('.');
		String_t* L_0;
		L_0 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_0, ((int32_t)46), NULL);
		V_0 = L_1;
		// if (lastPeriod < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// return QualifiedTypeName;
		String_t* L_3;
		L_3 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(__this, NULL);
		return L_3;
	}

IL_0019:
	{
		// var entityName = QualifiedTypeName.Substring(lastPeriod + 1);
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		V_1 = L_6;
		// var lastPlus = entityName.LastIndexOf('+');
		String_t* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_7, ((int32_t)43), NULL);
		V_2 = L_8;
		// if (lastPlus < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// return entityName;
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0037:
	{
		// return entityName.Substring(lastPlus + 1);
		String_t* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		return L_13;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->___U3CTypeAssemblyU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_TypeAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_TypeAssembly_mAB2E6682769CB3A12525EC5A0F3D12716D41E2B9 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeAssemblyU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeAssemblyU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedTypeNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedTypeName_m43BCDCA1466C38125432F4F56A4BB1968C05660F (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CQualifiedTypeNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQualifiedTypeNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_m6FE42728BFF410D4B0AE509068BD5E930BEF38CC (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Aliases_m8577F87FB3A29E42FF5C3A490C5944455AF5867F (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Examples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Examples_m39294D14B14992215B17E5089EF7298464D95351 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Examples { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CExamplesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Examples(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Examples_m5A74AAE3EE2D83F77EB93A5545C09C74BB62D476 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Examples { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CExamplesU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExamplesU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m7F17E57C9E7F9306A36B7D629EB3AB30CB27F0B1 (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* V_0 = NULL;
	{
		// return obj is ManifestParameter other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457*)IsInstClass((RuntimeObject*)L_0, ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457_il2cpp_TypeInfo_var));
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_2 = V_0;
		bool L_3;
		L_3 = ManifestParameter_Equals_m85EC73999DB25EFE2BB9583ED6A3850C876E008E(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestParameter_GetHashCode_m65B75AE1399B8BA2ED59ACD1D7568D067C5229EE (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + _name.GetHashCode();
		String_t* L_0 = __this->____name_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + InternalName.GetHashCode();
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + QualifiedName.GetHashCode();
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + TypeAssembly.GetHashCode();
		String_t* L_6;
		L_6 = ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + QualifiedTypeName.GetHashCode();
		String_t* L_8;
		L_8 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = ManifestParameter_get_Aliases_m6FE42728BFF410D4B0AE509068BD5E930BEF38CC_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7)), ((int32_t)31))), L_9)), ((int32_t)31))), L_11));
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m85EC73999DB25EFE2BB9583ED6A3850C876E008E (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(this.InternalName, other.InternalName) && Equals(this.QualifiedName, other.QualifiedName) &&
		//        Equals(this.EntityType, other.EntityType) && this.Aliases.SequenceEqual(other.Aliases) &&
		//        Equals(this.TypeAssembly, other.TypeAssembly) &&
		//        Equals(this.QualifiedTypeName, other.QualifiedTypeName);
		String_t* L_0;
		L_0 = ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline(__this, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline(L_1, NULL);
		bool L_3;
		L_3 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B_inline(__this, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B_inline(L_5, NULL);
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestParameter_get_EntityType_m7A3E52D9E4DBEC8663BF66694A831518A9C5138E(__this, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestParameter_get_EntityType_m7A3E52D9E4DBEC8663BF66694A831518A9C5138E(L_9, NULL);
		bool L_11;
		L_11 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = ManifestParameter_get_Aliases_m6FE42728BFF410D4B0AE509068BD5E930BEF38CC_inline(__this, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_13 = ___other0;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = ManifestParameter_get_Aliases_m6FE42728BFF410D4B0AE509068BD5E930BEF38CC_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1(L_12, L_14, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491_inline(__this, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_17 = ___other0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491_inline(L_17, NULL);
		bool L_19;
		L_19 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_20;
		L_20 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(__this, NULL);
		ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* L_21 = ___other0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline(L_21, NULL);
		bool L_23;
		L_23 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_20, L_22, NULL);
		return L_23;
	}

IL_0071:
	{
		return (bool)0;
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
// System.Void Meta.Conduit.WitKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_m643AD60453C9DA9815E47DDE7B7A076000232DAA (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitKeyword():this("", null)
		WitKeyword__ctor_mFCB55011EB7E9B59EC5CD488A55A793A4C50FE44(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.WitKeyword::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_mFCB55011EB7E9B59EC5CD488A55A793A4C50FE44 (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, String_t* ___keyword0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// public WitKeyword(string keyword, List<string> synonyms = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.keyword = keyword;
		String_t* L_0 = ___keyword0;
		__this->___keyword_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyword_0), (void*)L_0);
		// this.synonyms = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_1;
		L_1 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F(L_2, L_1, HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		__this->___synonyms_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synonyms_1), (void*)L_2);
		// if (synonyms == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___synonyms1;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// foreach (var synonym in synonyms)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___synonyms1;
		NullCheck(L_4);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_5;
		L_5 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_4, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004d_1;
			}

IL_002a_1:
			{
				// foreach (var synonym in synonyms)
				String_t* L_6;
				L_6 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_1 = L_6;
				// if (!this.synonyms.Contains(synonym))
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = __this->___synonyms_1;
				String_t* L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_7, L_8, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_004d_1;
				}
			}
			{
				// this.synonyms.Add(synonym);
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = __this->___synonyms_1;
				String_t* L_11 = V_1;
				NullCheck(L_10);
				bool L_12;
				L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_10, L_11, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
			}

IL_004d_1:
			{
				// foreach (var synonym in synonyms)
				bool L_13;
				L_13 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Meta.Conduit.WitKeyword::.ctor(Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_mEB53C3477B78238B3A42216EC30558E740720E4E (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___witEntityKeywordInfo0, const RuntimeMethod* method) 
{
	{
		// public WitKeyword(WitEntityKeywordInfo witEntityKeywordInfo): this(witEntityKeywordInfo.keyword, witEntityKeywordInfo.synonyms)
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_0 = ___witEntityKeywordInfo0;
		String_t* L_1 = L_0.___keyword_0;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_2 = ___witEntityKeywordInfo0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2.___synonyms_1;
		WitKeyword__ctor_mFCB55011EB7E9B59EC5CD488A55A793A4C50FE44(__this, L_1, L_3, NULL);
		// }
		return;
	}
}
// Meta.WitAi.Data.Info.WitEntityKeywordInfo Meta.Conduit.WitKeyword::GetAsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B WitKeyword_GetAsInfo_m70E48753C5D4DF8EA252B72FD5A3BEF271685C0C (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// new WitEntityKeywordInfo()
		// {
		//     keyword = this.keyword,
		//     synonyms = this.synonyms.ToList()
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B));
		String_t* L_0 = __this->___keyword_0;
		(&V_0)->___keyword_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___keyword_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = __this->___synonyms_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_1, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		(&V_0)->___synonyms_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___synonyms_1), (void*)L_2);
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Meta.Conduit.WitKeyword::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitKeyword_Equals_m050C738F28140301FA825529D484C7F346C4CAD3 (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* V_0 = NULL;
	{
		// if (obj is WitKeyword other)
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8*)IsInstClass((RuntimeObject*)L_0, WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8_il2cpp_TypeInfo_var));
		WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return Equals(other);
		WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* L_2 = V_0;
		bool L_3;
		L_3 = WitKeyword_Equals_m389C6257F415C6BCBDD3120FFC5046CF4C6EB36E(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.Conduit.WitKeyword::Equals(Meta.Conduit.WitKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitKeyword_Equals_m389C6257F415C6BCBDD3120FFC5046CF4C6EB36E (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.keyword.Equals(other.keyword) && this.synonyms.SequenceEqual(other.synonyms);
		String_t* L_0 = __this->___keyword_0;
		WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___keyword_0;
		NullCheck(L_0);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = __this->___synonyms_1;
		WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* L_5 = ___other0;
		NullCheck(L_5);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = L_5->___synonyms_1;
		bool L_7;
		L_7 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1(L_4, L_6, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.WitKeyword::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitKeyword_GetHashCode_mF69B5060775BCFD2211F83E751D862FDCB538AFA (WitKeyword_tCAD1DE6291E1A80566E60DD3253CEA459D0918D8* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + keyword.GetHashCode();
		String_t* L_0 = __this->___keyword_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + synonyms.GetHashCode();
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = __this->___synonyms_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3));
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
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::get_AllParameterNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ParameterProvider_get_AllParameterNames_m8C3DB0580EB37F76321508CAFED206F6A6614B3A (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> AllParameterNames => this.ActualParameters.Keys.ToList();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___ActualParameters_2;
		NullCheck(L_0);
		KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* L_1;
		L_1 = Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214(L_0, Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_1, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Meta.Conduit.ParameterProvider::AddCustomType(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_AddCustomType_m1DB03A6D635A1967E32A52F629FAFF7FC1884648 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _customTypes[name] = type;
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = __this->____customTypes_7;
		String_t* L_1 = ___name0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_0, L_1, L_2, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::AddParameter(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_AddParameter_mCC7BFCBECF85236CFDE5E9FA3B8AFE64D4E97365 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, String_t* ___parameterName0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActualParameters[parameterName] = value;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___ActualParameters_2;
		String_t* L_1 = ___parameterName0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_0, L_1, L_2, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::PopulateParametersFromNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateParametersFromNode_m1D96BE6B3C034982180E5D89DBB00AC539970F36 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDE56E6F9A76A0A5A6DFDE40FF8B1AF1014EF4A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m2F269BF7557A32E757C7C862AAB61F19F680B174_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD0F60043295B515B177407A0116DBD24A0C33E20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7794765A307BC9864E93E8DA3880C340152D0CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9CA3CEB58F9BD0080D9504E2B1017BBDE73D65C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8AC6DCC7EE1605CE92D392470CBAE42DAC5BD4A);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_5 = NULL;
	Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Type_t* V_7 = NULL;
	{
		// _parametersOfType.Clear();
		Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_0 = __this->____parametersOfType_4;
		NullCheck(L_0);
		Dictionary_2_Clear_m2F269BF7557A32E757C7C862AAB61F19F680B174(L_0, Dictionary_2_Clear_m2F269BF7557A32E757C7C862AAB61F19F680B174_RuntimeMethod_var);
		// var parameters = new Dictionary<string, ConduitParameterValue>();
		Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* L_1 = (Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31*)il2cpp_codegen_object_new(Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mD0F60043295B515B177407A0116DBD24A0C33E20(L_1, Dictionary_2__ctor_mD0F60043295B515B177407A0116DBD24A0C33E20_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (var entity in responseNode.AsObject["entities"].Childs)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___responseNode0;
		NullCheck(L_2);
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_3;
		L_3 = VirtualFuncInvoker0< WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* >::Invoke(28 /* Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseNode::get_AsObject() */, L_2);
		NullCheck(L_3);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_4;
		L_4 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_3, _stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_Childs() */, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode>::GetEnumerator() */, IEnumerable_1_t7794765A307BC9864E93E8DA3880C340152D0CCE_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0118;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0118:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0102_1;
			}

IL_0031_1:
			{
				// foreach (var entity in responseNode.AsObject["entities"].Childs)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_10;
				L_10 = InterfaceFuncInvoker0< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode>::get_Current() */, IEnumerator_1_tE9CA3CEB58F9BD0080D9504E2B1017BBDE73D65C_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				// var parameterName = entity[0]["role"].Value;
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_11 = V_2;
				NullCheck(L_11);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_12;
				L_12 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_11, 0);
				NullCheck(L_12);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_13;
				L_13 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_12, _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_13);
				V_3 = L_14;
				// var parameterValue = entity[0]["value"].Value;
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_15 = V_2;
				NullCheck(L_15);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_16;
				L_16 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_15, 0);
				NullCheck(L_16);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_17;
				L_17 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_16, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
				NullCheck(L_17);
				String_t* L_18;
				L_18 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_17);
				V_4 = L_18;
				// var parameterTypes = GetParameterTypes(entity[0]["name"].Value, parameterValue).ToList();
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_19 = V_2;
				NullCheck(L_19);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_20;
				L_20 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_19, 0);
				NullCheck(L_20);
				WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_21;
				L_21 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_20, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
				NullCheck(L_21);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_21);
				String_t* L_23 = V_4;
				RuntimeObject* L_24;
				L_24 = ParameterProvider_GetParameterTypes_m7C684D208196F0BBB11B517E3DFBD55A9ECC9E51(__this, L_22, L_23, NULL);
				List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_25;
				L_25 = Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E(L_24, Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
				V_5 = L_25;
				// foreach (var parameterType in parameterTypes)
				List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_26 = V_5;
				NullCheck(L_26);
				Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 L_27;
				L_27 = List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59(L_26, List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
				V_6 = L_27;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00df_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1((&V_6), Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00d4_2;
					}

IL_0097_2:
					{
						// foreach (var parameterType in parameterTypes)
						Type_t* L_28;
						L_28 = Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline((&V_6), Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
						V_7 = L_28;
						// if (!_parametersOfType.ContainsKey(parameterType))
						Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_29 = __this->____parametersOfType_4;
						Type_t* L_30 = V_7;
						NullCheck(L_29);
						bool L_31;
						L_31 = Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847(L_29, L_30, Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847_RuntimeMethod_var);
						if (L_31)
						{
							goto IL_00c1_2;
						}
					}
					{
						// _parametersOfType.Add(parameterType, new List<string>());
						Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_32 = __this->____parametersOfType_4;
						Type_t* L_33 = V_7;
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
						NullCheck(L_34);
						List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_34, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
						NullCheck(L_32);
						Dictionary_2_Add_mFDE56E6F9A76A0A5A6DFDE40FF8B1AF1014EF4A8(L_32, L_33, L_34, Dictionary_2_Add_mFDE56E6F9A76A0A5A6DFDE40FF8B1AF1014EF4A8_RuntimeMethod_var);
					}

IL_00c1_2:
					{
						// _parametersOfType[parameterType].Add(parameterName);
						Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_35 = __this->____parametersOfType_4;
						Type_t* L_36 = V_7;
						NullCheck(L_35);
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37;
						L_37 = Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24(L_35, L_36, Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24_RuntimeMethod_var);
						String_t* L_38 = V_3;
						NullCheck(L_37);
						List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_37, L_38, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
					}

IL_00d4_2:
					{
						// foreach (var parameterType in parameterTypes)
						bool L_39;
						L_39 = Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877((&V_6), Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
						if (L_39)
						{
							goto IL_0097_2;
						}
					}
					{
						goto IL_00ed_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ed_1:
			{
				// parameters.Add(parameterName, new ConduitParameterValue(parameterValue, parameterTypes.First()));
				Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* L_40 = V_0;
				String_t* L_41 = V_3;
				String_t* L_42 = V_4;
				List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_43 = V_5;
				Type_t* L_44;
				L_44 = Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074(L_43, Enumerable_First_TisType_t_m22B99E5DC993C761AE0CB9632BA5749F27E1E074_RuntimeMethod_var);
				ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A L_45;
				memset((&L_45), 0, sizeof(L_45));
				ConduitParameterValue__ctor_m0139C0346ABC769AF1AEE804FCE229D14C061730((&L_45), L_42, L_44, /*hidden argument*/NULL);
				NullCheck(L_40);
				Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3(L_40, L_41, L_45, Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3_RuntimeMethod_var);
			}

IL_0102_1:
			{
				// foreach (var entity in responseNode.AsObject["entities"].Childs)
				RuntimeObject* L_46 = V_1;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_0119;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0119:
	{
		// parameters.Add(WitResponseNodeReservedName, new ConduitParameterValue(responseNode, typeof(WitResponseNode)));
		Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* L_48 = V_0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_49 = ___responseNode0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A L_52;
		memset((&L_52), 0, sizeof(L_52));
		ConduitParameterValue__ctor_m0139C0346ABC769AF1AEE804FCE229D14C061730((&L_52), L_49, L_51, /*hidden argument*/NULL);
		NullCheck(L_48);
		Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3(L_48, _stringLiteralE8AC6DCC7EE1605CE92D392470CBAE42DAC5BD4A, L_52, Dictionary_2_Add_m42810B42339B1A15846738445E6E13F7722852F3_RuntimeMethod_var);
		// PopulateParameters(parameters);
		Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* L_53 = V_0;
		ParameterProvider_PopulateParameters_mCCAFA3A2DF200B4043C3C7E750075A7BF20EA80C(__this, L_53, NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::SetSpecializedParameter(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_SetSpecializedParameter_mCCA6CB349C8A95292B93DDD0C5A44680B03D4745 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, String_t* ___reservedParameterName0, Type_t* ___parameterType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDA78A8299D16DD1B42B93F0C63BE2D9CE92F8A00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _specializedParameters[parameterType] = reservedParameterName.ToLower();
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_0 = __this->____specializedParameters_5;
		Type_t* L_1 = ___parameterType1;
		String_t* L_2 = ___reservedParameterName0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_2, NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_mDA78A8299D16DD1B42B93F0C63BE2D9CE92F8A00(L_0, L_1, L_3, Dictionary_2_set_Item_mDA78A8299D16DD1B42B93F0C63BE2D9CE92F8A00_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::PopulateParameters(System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateParameters_mCCAFA3A2DF200B4043C3C7E750075A7BF20EA80C (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* ___actualParameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m59412EB76A7C9D53E553667D93EB39D603904510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA2183F479CA8E4A6449070267A26B07D47B008AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95A1F8B157CDCC42C154D34A9228C49ACDD0D5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2F11D9C4E51E6A39DC93A948D49CE752C7276773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m7C5237B6086953A4FBAD6A2A502BA319E3B8D10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2DB6F6B4F5ADD18CDA1A6895B4AC9D70FEECEFFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ActualParameters.Clear();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___ActualParameters_2;
		NullCheck(L_0);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_0, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		// foreach (var actualParameter in actualParameters)
		Dictionary_2_t853DBA1094F1EBF5D56C85B61B5EBE9516831C31* L_1 = ___actualParameters0;
		NullCheck(L_1);
		Enumerator_t08130C5BF9B590378EB6542E1D7092EADE675D7D L_2;
		L_2 = Dictionary_2_GetEnumerator_m59412EB76A7C9D53E553667D93EB39D603904510(L_1, Dictionary_2_GetEnumerator_m59412EB76A7C9D53E553667D93EB39D603904510_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA2183F479CA8E4A6449070267A26B07D47B008AE((&V_0), Enumerator_Dispose_mA2183F479CA8E4A6449070267A26B07D47B008AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0014_1:
			{
				// foreach (var actualParameter in actualParameters)
				KeyValuePair_2_t8C64F7342EF9A3F463886D05CF1CE94064CBBAE1 L_3;
				L_3 = Enumerator_get_Current_m2F11D9C4E51E6A39DC93A948D49CE752C7276773_inline((&V_0), Enumerator_get_Current_m2F11D9C4E51E6A39DC93A948D49CE752C7276773_RuntimeMethod_var);
				V_1 = L_3;
				// ActualParameters[actualParameter.Key] = actualParameter.Value.Value;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = __this->___ActualParameters_2;
				String_t* L_5;
				L_5 = KeyValuePair_2_get_Key_m7C5237B6086953A4FBAD6A2A502BA319E3B8D10F_inline((&V_1), KeyValuePair_2_get_Key_m7C5237B6086953A4FBAD6A2A502BA319E3B8D10F_RuntimeMethod_var);
				ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A L_6;
				L_6 = KeyValuePair_2_get_Value_m2DB6F6B4F5ADD18CDA1A6895B4AC9D70FEECEFFF_inline((&V_1), KeyValuePair_2_get_Value_m2DB6F6B4F5ADD18CDA1A6895B4AC9D70FEECEFFF_RuntimeMethod_var);
				RuntimeObject* L_7 = L_6.___Value_0;
				NullCheck(L_4);
				Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_4, L_5, L_7, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
			}

IL_003a_1:
			{
				// foreach (var actualParameter in actualParameters)
				bool L_8;
				L_8 = Enumerator_MoveNext_m95A1F8B157CDCC42C154D34A9228C49ACDD0D5E6((&V_0), Enumerator_MoveNext_m95A1F8B157CDCC42C154D34A9228C49ACDD0D5E6_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::PopulateRoles(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateRoles_mAE52D39797E74CEFE32CFC34B0B943ACD0916D17 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterToRoleMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _parameterToRoleMap.Clear();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____parameterToRoleMap_3;
		NullCheck(L_0);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_0, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		// foreach (var entry in parameterToRoleMap)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___parameterToRoleMap0;
		NullCheck(L_1);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_2;
		L_2 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_1, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_0), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0014_1:
			{
				// foreach (var entry in parameterToRoleMap)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_3;
				L_3 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_0), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_3;
				// _parameterToRoleMap[entry.Key.ToLower()] = entry.Value;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = __this->____parameterToRoleMap_3;
				String_t* L_5;
				L_5 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_4);
				Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_4, L_6, L_7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
			}

IL_003a_1:
			{
				// foreach (var entry in parameterToRoleMap)
				bool L_8;
				L_8 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_0), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::ContainsParameter(System.Reflection.ParameterInfo,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_ContainsParameter_m7EF687057E1D506F79C407D1F9E809F8C5C483E1 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___parameter0, StringBuilder_t* ___log1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14DB4DEA8365D5E4F9AB6DB94C4130AA74ECB588);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF072CEDCFB53DF9A7858641FFC5B592474D304);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SupportedSpecializedParameter(parameter))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___parameter0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(13 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_0);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (!ActualParameters.ContainsKey(parameter.Name))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = __this->___ActualParameters_2;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_3 = ___parameter0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_3);
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, L_4, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// log.AppendLine($"\tParameter '{parameter.Name}' not sent in invoke");
		StringBuilder_t* L_6 = ___log1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_7 = ___parameter0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C, L_8, _stringLiteral14DB4DEA8365D5E4F9AB6DB94C4130AA74ECB588, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, L_9, NULL);
		// return false;
		return (bool)0;
	}

IL_003c:
	{
		// if (!_parameterToRoleMap.ContainsKey(parameter.Name))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = __this->____parameterToRoleMap_3;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_12 = ___parameter0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_12);
		NullCheck(L_11);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_11, L_13, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_006d;
		}
	}
	{
		// log.AppendLine($"\tParameter '{parameter.Name}' not found in role map");
		StringBuilder_t* L_15 = ___log1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_16 = ___parameter0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C, L_17, _stringLiteralDAF072CEDCFB53DF9A7858641FFC5B592474D304, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_15, L_18, NULL);
		// return false;
		return (bool)0;
	}

IL_006d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetParameterValue(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterValue_m2F35B257C1CED1AFF3C4E93546C87660036DD1C1 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterMap1, bool ___relaxed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (SupportedSpecializedParameter(formalParameter))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___formalParameter0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(13 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return this.GetSpecializedParameter(formalParameter);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_2 = ___formalParameter0;
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(14 /* System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_2);
		return L_3;
	}

IL_0011:
	{
		// var actualParameterName = GetActualParameterName(formalParameter, parameterMap, relaxed);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_4 = ___formalParameter0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___parameterMap1;
		bool L_6 = ___relaxed2;
		String_t* L_7;
		L_7 = ParameterProvider_GetActualParameterName_m94C422230627624BE7B7B27E4F0D96E165DFC363(__this, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// if (string.IsNullOrEmpty(actualParameterName))
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (!L_9)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0025:
	{
		// if (ActualParameters.TryGetValue(actualParameterName, out var parameterValue))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = __this->___ActualParameters_2;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_10, L_11, (&V_1), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_00cf;
		}
	}
	{
		// if (formalParameter.ParameterType == typeof(string))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = ___formalParameter0;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_0056;
		}
	}
	{
		// return parameterValue.ToString();
		RuntimeObject* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		return L_19;
	}

IL_0056:
	{
		// else if (formalParameter.ParameterType.IsEnum)
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = ___formalParameter0;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_21);
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	try
	{// begin try (depth: 1)
		// return Enum.Parse(formalParameter.ParameterType, ConduitUtilities.SanitizeString(parameterValue.ToString()), true);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_23 = ___formalParameter0;
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_23);
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_tCA4D45D0DD0134434A4746856060AF1D212A8516_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = ConduitUtilities_SanitizeString_m44A4FF1FABAF37E2DF755AC9ED1634D76A19FC89(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12(L_24, L_27, (bool)1, NULL);
		V_2 = L_28;
		goto IL_00d1;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VLog.E($"Parameter Provider - Parameter '{parameterValue}' could not be cast to enum\nEnum Type: {formalParameter.ParameterType.FullName}\n{e}");
		RuntimeObject* L_29 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_30 = ___formalParameter0;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_30);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_31);
		Exception_t* L_33 = V_3;
		String_t* L_34;
		L_34 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A7170386A08A61D5E84BC34FFF9B2C3419758FB)), L_29, L_32, L_33, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_34, NULL);
		// throw;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_009c:
	{
	}
	try
	{// begin try (depth: 1)
		// return Convert.ChangeType(parameterValue, formalParameter.ParameterType);
		RuntimeObject* L_35 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_36 = ___formalParameter0;
		NullCheck(L_36);
		Type_t* L_37;
		L_37 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_36);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_35, L_37, NULL);
		V_2 = L_38;
		goto IL_00d1;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ac;
		}
		throw e;
	}

CATCH_00ac:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VLog.E($"Parameter Provider - Parameter '{parameterValue}' could not be cast\nType: {formalParameter.ParameterType.FullName}\n{e}");
		RuntimeObject* L_39 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_40 = ___formalParameter0;
		NullCheck(L_40);
		Type_t* L_41;
		L_41 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_40);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_41);
		Exception_t* L_43 = V_4;
		String_t* L_44;
		L_44 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86E87BFFE44DF63E1177A08463C331A3BF1DED67)), L_39, L_42, L_43, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_44, NULL);
		// return null;
		V_2 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d1;
	}// end catch (depth: 1)

IL_00cf:
	{
		// return null;
		return NULL;
	}

IL_00d1:
	{
		// }
		RuntimeObject* L_45 = V_2;
		return L_45;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::GetParameterNamesOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ParameterProvider_GetParameterNamesOfType_mA0B6DD8FDCE30D7F1023C8E3ED8C448A353C5963 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Type_t* ___targetType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F366137F27E2FF10A5B92FB834793E5B0139E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	{
		// if (_parametersOfType.ContainsKey(targetType))
		Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_0 = __this->____parametersOfType_4;
		Type_t* L_1 = ___targetType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847(L_0, L_1, Dictionary_2_ContainsKey_mD414788A48CC3189DA7A8706492FDDE13359E847_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _parametersOfType[targetType];
		Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_3 = __this->____parametersOfType_4;
		Type_t* L_4 = ___targetType0;
		NullCheck(L_3);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5;
		L_5 = Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24(L_3, L_4, Dictionary_2_get_Item_mAE71426CD45F5D584752C47A6F5AB5D420561C24_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// var parameters = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_6, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_6;
		// foreach (var parameter in ActualParameters)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = __this->___ActualParameters_2;
		NullCheck(L_7);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_8;
		L_8 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_7, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_1), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_002f_1:
			{
				// foreach (var parameter in ActualParameters)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_9;
				L_9 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_1), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_2 = L_9;
				// if (parameter.Value.GetType() == targetType)
				RuntimeObject* L_10;
				L_10 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_2), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				NullCheck(L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
				Type_t* L_12 = ___targetType0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
				if (!L_13)
				{
					goto IL_0058_1;
				}
			}
			{
				// parameters.Add(parameter.Key);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_2), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_14);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0058_1:
			{
				// foreach (var parameter in ActualParameters)
				bool L_16;
				L_16 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_1), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// return _parametersOfType[targetType] = parameters;
		Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_17 = __this->____parametersOfType_4;
		Type_t* L_18 = ___targetType0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = L_19;
		V_3 = L_20;
		NullCheck(L_17);
		Dictionary_2_set_Item_m9F366137F27E2FF10A5B92FB834793E5B0139E21(L_17, L_18, L_20, Dictionary_2_set_Item_m9F366137F27E2FF10A5B92FB834793E5B0139E21_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_3;
		return L_21;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_SupportedSpecializedParameter_mE2E9AEB6CDD4F0A162FAF21597CACE8133C774F1 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _specializedParameters.ContainsKey(formalParameter.ParameterType);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_0 = __this->____specializedParameters_5;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___formalParameter0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F(L_0, L_2, Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		return L_3;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetSpecializedParameter_mE82D1FCC36FA99FF455A81CB93FF4B89E6C349C1 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3602430875554621B9AAA9A707076184F906A350_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m402143BA38652F8CC5B3E6A19CA6726169962C3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D4C0E84CFA4BEFE9E1639DF04D9B412A797F434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m028C1B46460EAA3BB2B4349BE23DB673F511D661_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_mAD3DF05B21AE795B7836B3ED94ECD95683407447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421ADF95C1916B0441998BC8F11F62C26D09310F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E38BE81D2CAEC365D5A2348FB759622EB3AD325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D2B0EE79B75C11DB007298C5EA80A923AA7E4AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6B1DD48E50A830EA9A74DD5B2A89599D6F01C5A);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// if (_specializedParameters.ContainsKey(formalParameter.ParameterType))
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_0 = __this->____specializedParameters_5;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___formalParameter0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F(L_0, L_2, Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// var parameterName = _specializedParameters[formalParameter.ParameterType];
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_4 = __this->____specializedParameters_5;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = ___formalParameter0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008(L_4, L_6, Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var);
		V_1 = L_7;
		// if (ActualParameters.ContainsKey(parameterName))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = __this->___ActualParameters_2;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_8, L_9, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		// return ActualParameters[parameterName];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = __this->___ActualParameters_2;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, L_12, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		return L_13;
	}

IL_0040:
	{
		// var error = new StringBuilder();
		StringBuilder_t* L_14 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_14, NULL);
		V_0 = L_14;
		// error.AppendLine("Specialized parameter not found");
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_15, _stringLiteral8D2B0EE79B75C11DB007298C5EA80A923AA7E4AE, NULL);
		// error.AppendLine($"Parameter Type: {formalParameter.ParameterType}");
		StringBuilder_t* L_17 = V_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_18 = ___formalParameter0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral421ADF95C1916B0441998BC8F11F62C26D09310F, L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_17, L_20, NULL);
		// error.AppendLine($"Parameter Name: {formalParameter.Name}");
		StringBuilder_t* L_22 = V_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_23 = ___formalParameter0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_23);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE6B1DD48E50A830EA9A74DD5B2A89599D6F01C5A, L_24, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_22, L_25, NULL);
		// error.AppendLine($"Actual Parameters: {ActualParameters.Keys.Count}");
		StringBuilder_t* L_27 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28 = __this->___ActualParameters_2;
		NullCheck(L_28);
		KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* L_29;
		L_29 = Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214(L_28, Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = KeyCollection_get_Count_mAD3DF05B21AE795B7836B3ED94ECD95683407447(L_29, KeyCollection_get_Count_mAD3DF05B21AE795B7836B3ED94ECD95683407447_RuntimeMethod_var);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7E38BE81D2CAEC365D5A2348FB759622EB3AD325, L_32, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_27, L_33, NULL);
		// foreach (var key in ActualParameters.Keys)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35 = __this->___ActualParameters_2;
		NullCheck(L_35);
		KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* L_36;
		L_36 = Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214(L_35, Dictionary_2_get_Keys_m695E003DE675B51E3006780E449C11CAC0967214_RuntimeMethod_var);
		NullCheck(L_36);
		Enumerator_tC5302CA75BECA60298FCBFCCF05EB1A932CE56DD L_37;
		L_37 = KeyCollection_GetEnumerator_m028C1B46460EAA3BB2B4349BE23DB673F511D661(L_36, KeyCollection_GetEnumerator_m028C1B46460EAA3BB2B4349BE23DB673F511D661_RuntimeMethod_var);
		V_2 = L_37;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0112:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3602430875554621B9AAA9A707076184F906A350((&V_2), Enumerator_Dispose_m3602430875554621B9AAA9A707076184F906A350_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0107_1;
			}

IL_00b9_1:
			{
				// foreach (var key in ActualParameters.Keys)
				String_t* L_38;
				L_38 = Enumerator_get_Current_m4D4C0E84CFA4BEFE9E1639DF04D9B412A797F434_inline((&V_2), Enumerator_get_Current_m4D4C0E84CFA4BEFE9E1639DF04D9B412A797F434_RuntimeMethod_var);
				V_3 = L_38;
				// var val = ActualParameters[key] == null ? "NULL" : ActualParameters[key].GetType().ToString();
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_39 = __this->___ActualParameters_2;
				String_t* L_40 = V_3;
				NullCheck(L_39);
				RuntimeObject* L_41;
				L_41 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_39, L_40, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
				if (!L_41)
				{
					goto IL_00e7_1;
				}
			}
			{
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_42 = __this->___ActualParameters_2;
				String_t* L_43 = V_3;
				NullCheck(L_42);
				RuntimeObject* L_44;
				L_44 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_42, L_43, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
				NullCheck(L_44);
				Type_t* L_45;
				L_45 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_44, NULL);
				NullCheck(L_45);
				String_t* L_46;
				L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
				G_B8_0 = L_46;
				goto IL_00ec_1;
			}

IL_00e7_1:
			{
				G_B8_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
			}

IL_00ec_1:
			{
				V_4 = G_B8_0;
				// error.AppendLine($"\t{key}: {val}");
				StringBuilder_t* L_47 = V_0;
				String_t* L_48 = V_3;
				String_t* L_49 = V_4;
				String_t* L_50;
				L_50 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, L_48, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_49, NULL);
				NullCheck(L_47);
				StringBuilder_t* L_51;
				L_51 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_47, L_50, NULL);
			}

IL_0107_1:
			{
				// foreach (var key in ActualParameters.Keys)
				bool L_52;
				L_52 = Enumerator_MoveNext_m402143BA38652F8CC5B3E6A19CA6726169962C3B((&V_2), Enumerator_MoveNext_m402143BA38652F8CC5B3E6A19CA6726169962C3B_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_00b9_1;
				}
			}
			{
				goto IL_0120;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0120:
	{
		// VLog.W(error.ToString());
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_54, NULL);
		// return null;
		return NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Meta.Conduit.ParameterProvider::GetParameterTypes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterTypes_m7C684D208196F0BBB11B517E3DFBD55A9ECC9E51 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, String_t* ___typeString0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m040C78DD55C2C880875E0255B365717A90147289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_mE4077F5BBE84EE804C1640DEA16AB930F965E92A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* L_0 = (U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_mFA80DC08AC41F62317346BDA7E2184ACA6E7C438(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* L_2 = V_0;
		String_t* L_3 = ___value1;
		NullCheck(L_2);
		L_2->___value_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___value_1), (void*)L_3);
		// if (_customTypes.ContainsKey(typeString))
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_4 = __this->____customTypes_7;
		String_t* L_5 = ___typeString0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933(L_4, L_5, Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// return new List<Type>() { _customTypes[typeString] };
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_7 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_7, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_8 = L_7;
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_9 = __this->____customTypes_7;
		String_t* L_10 = ___typeString0;
		NullCheck(L_9);
		Type_t* L_11;
		L_11 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_9, L_10, Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_8, L_11, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		return L_8;
	}

IL_003a:
	{
		// if (!BuiltInTypes.ContainsKey(typeString) || BuiltInTypes[typeString].Count == 0)
		il2cpp_codegen_runtime_class_init_inline(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_12 = ((ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var))->___BuiltInTypes_6;
		String_t* L_13 = ___typeString0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m040C78DD55C2C880875E0255B365717A90147289(L_12, L_13, Dictionary_2_ContainsKey_m040C78DD55C2C880875E0255B365717A90147289_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_15 = ((ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var))->___BuiltInTypes_6;
		String_t* L_16 = ___typeString0;
		NullCheck(L_15);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_17;
		L_17 = Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9(L_15, L_16, Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline(L_17, List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_006f;
		}
	}

IL_0059:
	{
		// return new List<Type>() { typeof(string) };
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_19 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_19, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_20 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		NullCheck(L_20);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_20, L_22, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		return L_20;
	}

IL_006f:
	{
		// return BuiltInTypes[typeString].Where(type => PerfectTypeMatch(type, value)).ToList();
		il2cpp_codegen_runtime_class_init_inline(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_23 = ((ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var))->___BuiltInTypes_6;
		String_t* L_24 = ___typeString0;
		NullCheck(L_23);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_25;
		L_25 = Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9(L_23, L_24, Dictionary_2_get_Item_mEB4DCD81C5C904724222BD8A78D9B9A8307F04B9_RuntimeMethod_var);
		U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* L_26 = V_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_27 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_mE4077F5BBE84EE804C1640DEA16AB930F965E92A_RuntimeMethod_var), NULL);
		RuntimeObject* L_28;
		L_28 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(L_25, L_27, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_29;
		L_29 = Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E(L_28, Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		return L_29;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::PerfectTypeMatch(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_PerfectTypeMatch_m814AFCB8DB6390A8335460B6DFF51BC0D97F17BF (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, Type_t* ___targetType0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// var valueAsTarget = Convert.ChangeType(value, targetType);
			String_t* L_0 = ___value1;
			Type_t* L_1 = ___targetType0;
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_0, L_1, NULL);
			V_0 = L_2;
			// if (valueAsTarget == null)
			RuntimeObject* L_3 = V_0;
			if (L_3)
			{
				goto IL_000f_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_002f;
		}

IL_000f_1:
		{
			// if (!targetType.IsPrimitive)
			Type_t* L_4 = ___targetType0;
			NullCheck(L_4);
			bool L_5;
			L_5 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_4, NULL);
			if (L_5)
			{
				goto IL_001b_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_002f;
		}

IL_001b_1:
		{
			// return value.Equals(valueAsTarget.ToString());
			String_t* L_6 = ___value1;
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			NullCheck(L_6);
			bool L_9;
			L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_8, NULL);
			V_1 = L_9;
			goto IL_002f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{// begin catch(System.Exception)
		// catch (Exception)
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.String Meta.Conduit.ParameterProvider::GetActualParameterName(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterProvider_GetActualParameterName_m94C422230627624BE7B7B27E4F0D96E165DFC363 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterMap1, bool ___relaxed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD210F72F823B7D5F53048538C393F3BEE13397);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C572534613C66044C38AE3EBE85C27908D6FF28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FDF9180296CDD3BFAEA23DC87830C15E2F3F69A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// var formalParameterName = formalParameter.Name;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___formalParameter0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (parameterMap.ContainsKey(formalParameterName))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___parameterMap1;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_2, L_3, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// targetActualParameterName = parameterMap[formalParameterName];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___parameterMap1;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_5, L_6, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_001c;
	}

IL_001a:
	{
		// targetActualParameterName = formalParameterName;
		String_t* L_8 = V_0;
		V_1 = L_8;
	}

IL_001c:
	{
		// if (ActualParameters.ContainsKey(targetActualParameterName))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = __this->___ActualParameters_2;
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_9, L_10, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		// return targetActualParameterName;
		String_t* L_12 = V_1;
		return L_12;
	}

IL_002c:
	{
		// if (_parameterToRoleMap.ContainsKey(targetActualParameterName))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = __this->____parameterToRoleMap_3;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_13, L_14, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		// var roleName = _parameterToRoleMap[targetActualParameterName];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = __this->____parameterToRoleMap_3;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_16, L_17, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_3 = L_18;
		// if (!string.IsNullOrEmpty(roleName) && this.ActualParameters.ContainsKey(roleName))
		String_t* L_19 = V_3;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_005f;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = __this->___ActualParameters_2;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_21, L_22, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_005f;
		}
	}
	{
		// return roleName;
		String_t* L_24 = V_3;
		return L_24;
	}

IL_005f:
	{
		// if (!relaxed)
		bool L_25 = ___relaxed2;
		if (L_25)
		{
			goto IL_0079;
		}
	}
	{
		// VLog.E($"Parameter '{formalParameterName}' is missing");
		String_t* L_26 = V_0;
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral4C572534613C66044C38AE3EBE85C27908D6FF28, L_26, _stringLiteral2FD210F72F823B7D5F53048538C393F3BEE13397, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_27, NULL);
		// return null;
		return (String_t*)NULL;
	}

IL_0079:
	{
		// var possibleNames = GetParameterNamesOfType(formalParameter.ParameterType);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_28 = ___formalParameter0;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_28);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30;
		L_30 = ParameterProvider_GetParameterNamesOfType_mA0B6DD8FDCE30D7F1023C8E3ED8C448A353C5963(__this, L_29, NULL);
		V_2 = L_30;
		// if (possibleNames.Count != 1)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_31, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_32) == ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		// VLog.E(
		//     $"Got multiple parameters of type {formalParameter.ParameterType} but none with the correct name");
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_33 = ___formalParameter0;
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		String_t* L_35;
		L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9FDF9180296CDD3BFAEA23DC87830C15E2F3F69A, L_34, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_35, NULL);
		// return null;
		return (String_t*)NULL;
	}

IL_00a6:
	{
		// targetActualParameterName = possibleNames[0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = V_2;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_36, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_37;
		// return targetActualParameterName;
		String_t* L_38 = V_1;
		return L_38;
	}
}
// System.String Meta.Conduit.ParameterProvider::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterProvider_ToString_m7E9A76B7EC570FB935C41E8ED2C84687DFCCFFD7 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Join("',", AllParameterNames);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0;
		L_0 = ParameterProvider_get_AllParameterNames_m8C3DB0580EB37F76321508CAFED206F6A6614B3A(__this, NULL);
		String_t* L_1;
		L_1 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9, L_0, NULL);
		return L_1;
	}
}
// System.Void Meta.Conduit.ParameterProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__ctor_m1F1A3EA5D91069D81E29A8AA1548CE27F1191628 (ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201D4C32BA21CBF329B875E58C2515ABC9E29894_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8333423E1B60528740D0CF38D0918FAA0FDE12DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA31507DC417938205138CC99DEE0407DFBB8D86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Dictionary<string, object> ActualParameters = new Dictionary<string, object>(StringComparer.OrdinalIgnoreCase);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m8333423E1B60528740D0CF38D0918FAA0FDE12DB(L_1, L_0, Dictionary_2__ctor_m8333423E1B60528740D0CF38D0918FAA0FDE12DB_RuntimeMethod_var);
		__this->___ActualParameters_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActualParameters_2), (void*)L_1);
		// private readonly Dictionary<string, string> _parameterToRoleMap = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m201D4C32BA21CBF329B875E58C2515ABC9E29894(L_3, L_2, Dictionary_2__ctor_m201D4C32BA21CBF329B875E58C2515ABC9E29894_RuntimeMethod_var);
		__this->____parameterToRoleMap_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterToRoleMap_3), (void*)L_3);
		// private readonly Dictionary<Type, List<string>> _parametersOfType = new Dictionary<Type, List<string>>();
		Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1* L_4 = (Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1*)il2cpp_codegen_object_new(Dictionary_2_t64819FCEA7DB99B85B1B1226E1B7853D771037E1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mA31507DC417938205138CC99DEE0407DFBB8D86C(L_4, Dictionary_2__ctor_mA31507DC417938205138CC99DEE0407DFBB8D86C_RuntimeMethod_var);
		__this->____parametersOfType_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parametersOfType_4), (void*)L_4);
		// private readonly Dictionary<Type, string> _specializedParameters = new Dictionary<Type, string>();
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_5 = (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*)il2cpp_codegen_object_new(Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6(L_5, Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var);
		__this->____specializedParameters_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____specializedParameters_5), (void*)L_5);
		// private readonly Dictionary<string, Type> _customTypes = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_6 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_6, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		__this->____customTypes_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____customTypes_7), (void*)L_6);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__cctor_mF86F1961EBFE0EC4787F0E14D6BED32CD0DEE396 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD4185E69777B52FB227271B2F4549AB7C9120C66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02CC0B39116ABD35C7079A163B63FCBD3A7A28DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E2DF8D29931D0A7F6BAD259D3D8344D460ABA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54DED7E6C4142C7A4B393F38A26EA7563C817E66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723AD9D4A305C071CE5BA68F3BE119C1321AEE08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D7471446741543FC8F6CF76ED088D1071EFDEE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E063665B9B0BA4704D4E2337AEFCE11D860473);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA504012C0A73DA581CCE241EE6A92AF955E01C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6567631BB9A28800CA018833DBF7581A00BC16C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDF8AFC94D560BD88EEA635CD05D9017B97E990);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDFD7C73EDC4C382BFC197F2D672F32B3A524150);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<string, List<Type>> BuiltInTypes = new Dictionary<string, List<Type>>()
		// {
		//     { "wit$age_of_person", new List<Type>{typeof(int), typeof(short), typeof(long), typeof(float), typeof(double), typeof(decimal) }},
		//     { "wit$amount_of_money", new List<Type>{typeof(decimal), typeof(float), typeof(double), typeof(int)}},
		//     { "wit$datetime", new List<Type>{typeof(DateTime)}},
		//     { "wit$distance", new List<Type>{typeof(decimal), typeof(float), typeof(double), typeof(int)}},
		//     { "wit$duration", new List<Type>{typeof(TimeSpan), typeof(float), typeof(double), typeof(int), typeof(decimal)}},
		//     { "wit$number", new List<Type>{typeof(int), typeof(long), typeof(short), typeof(float), typeof(double), typeof(decimal) }},
		//     { "wit$ordinal", new List<Type>{typeof(int), typeof(long), typeof(short) }},
		//     { "wit$quantity", new List<Type>{typeof(int), typeof(long), typeof(short), typeof(float), typeof(double), typeof(decimal) }},
		//     { "wit$temperature", new List<Type>{typeof(decimal), typeof(float), typeof(double), typeof(int), typeof(short), typeof(long)}},
		//     { "wit$volume", new List<Type>{typeof(int), typeof(long), typeof(short), typeof(float), typeof(double), typeof(decimal) }}
		// };
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_0 = (Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9*)il2cpp_codegen_object_new(Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD4185E69777B52FB227271B2F4549AB7C9120C66(L_0, Dictionary_2__ctor_mD4185E69777B52FB227271B2F4549AB7C9120C66_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_1 = L_0;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_2 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_2, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_3, L_5, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_6, L_8, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_9, L_11, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_12 = L_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_12, L_14, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_15 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck(L_15);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_15, L_17, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_18 = L_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_18);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_18, L_20, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_1, _stringLiteral7D7471446741543FC8F6CF76ED088D1071EFDEE3, L_18, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_21 = L_1;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_22 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_22, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_23 = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		NullCheck(L_23);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_23, L_25, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_26 = L_23;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		NullCheck(L_26);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_26, L_28, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_29 = L_26;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		NullCheck(L_29);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_29, L_31, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_32 = L_29;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		NullCheck(L_32);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_32, L_34, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_21);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_21, _stringLiteral723AD9D4A305C071CE5BA68F3BE119C1321AEE08, L_32, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_35 = L_21;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_36 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_36, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_37 = L_36;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck(L_37);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_37, L_39, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_35);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_35, _stringLiteralFBDF8AFC94D560BD88EEA635CD05D9017B97E990, L_37, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_40 = L_35;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_41 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_41, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_42 = L_41;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		NullCheck(L_42);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_42, L_44, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_45 = L_42;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		NullCheck(L_45);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_45, L_47, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_48 = L_45;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		NullCheck(L_48);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_48, L_50, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_51 = L_48;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		NullCheck(L_51);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_51, L_53, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_40);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_40, _stringLiteralFDFD7C73EDC4C382BFC197F2D672F32B3A524150, L_51, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_54 = L_40;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_55 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_55, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_56 = L_55;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		NullCheck(L_56);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_56, L_58, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_59 = L_56;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		NullCheck(L_59);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_59, L_61, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_62 = L_59;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		NullCheck(L_62);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_62, L_64, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_65 = L_62;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		NullCheck(L_65);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_65, L_67, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_68 = L_65;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_68);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_68, L_70, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_54);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_54, _stringLiteralA504012C0A73DA581CCE241EE6A92AF955E01C66, L_68, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_71 = L_54;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_72 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_72, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_73 = L_72;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		NullCheck(L_73);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_73, L_75, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_76 = L_73;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		NullCheck(L_76);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_76, L_78, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_79 = L_76;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		NullCheck(L_79);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_79, L_81, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_82 = L_79;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		NullCheck(L_82);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_82, L_84, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_85 = L_82;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		NullCheck(L_85);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_85, L_87, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_88 = L_85;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_89 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_90;
		L_90 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_89, NULL);
		NullCheck(L_88);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_88, L_90, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_71);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_71, _stringLiteral93E063665B9B0BA4704D4E2337AEFCE11D860473, L_88, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_91 = L_71;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_92 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_92);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_92, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_93 = L_92;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		NullCheck(L_93);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_93, L_95, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_96 = L_93;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		NullCheck(L_96);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_96, L_98, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_99 = L_96;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		NullCheck(L_99);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_99, L_101, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_91);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_91, _stringLiteralD6567631BB9A28800CA018833DBF7581A00BC16C, L_99, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_102 = L_91;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_103 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_103, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_104 = L_103;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_105, NULL);
		NullCheck(L_104);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_104, L_106, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_107 = L_104;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		NullCheck(L_107);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_107, L_109, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_110 = L_107;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		NullCheck(L_110);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_110, L_112, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_113 = L_110;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		NullCheck(L_113);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_113, L_115, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_116 = L_113;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		NullCheck(L_116);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_116, L_118, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_119 = L_116;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		NullCheck(L_119);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_119, L_121, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_102);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_102, _stringLiteral12E2DF8D29931D0A7F6BAD259D3D8344D460ABA8, L_119, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_122 = L_102;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_123 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_123);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_123, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_124 = L_123;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		NullCheck(L_124);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_124, L_126, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_127 = L_124;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		NullCheck(L_127);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_127, L_129, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_130 = L_127;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		NullCheck(L_130);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_130, L_132, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_133 = L_130;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_134 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_135;
		L_135 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_134, NULL);
		NullCheck(L_133);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_133, L_135, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_136 = L_133;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		NullCheck(L_136);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_136, L_138, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_139 = L_136;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		NullCheck(L_139);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_139, L_141, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_122);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_122, _stringLiteral54DED7E6C4142C7A4B393F38A26EA7563C817E66, L_139, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		Dictionary_2_tE9EB19B78A2B19BFFBA5824789A8D2978EFE3DB9* L_142 = L_122;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_143 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_143);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_143, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_144 = L_143;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_145 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_146;
		L_146 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_145, NULL);
		NullCheck(L_144);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_144, L_146, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_147 = L_144;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		NullCheck(L_147);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_147, L_149, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_150 = L_147;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		NullCheck(L_150);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_150, L_152, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_153 = L_150;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		NullCheck(L_153);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_153, L_155, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_156 = L_153;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_157 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_158;
		L_158 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_157, NULL);
		NullCheck(L_156);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_156, L_158, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_159 = L_156;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_160 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_161;
		L_161 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_160, NULL);
		NullCheck(L_159);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_159, L_161, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		NullCheck(L_142);
		Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2(L_142, _stringLiteral02CC0B39116ABD35C7079A163B63FCBD3A7A28DC, L_159, Dictionary_2_Add_m42C5C2DBFDBA0C0FD807FDAF3E1066BD80B8F9B2_RuntimeMethod_var);
		((ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var))->___BuiltInTypes_6 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&((ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7_il2cpp_TypeInfo_var))->___BuiltInTypes_6), (void*)L_142);
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
// System.Void Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mFA80DC08AC41F62317346BDA7E2184ACA6E7C438 (U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::<GetParameterTypes>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_mE4077F5BBE84EE804C1640DEA16AB930F965E92A (U3CU3Ec__DisplayClass21_0_tBE4BF2EF43030CD98069C9692B026CBEBA1F41FF* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// return BuiltInTypes[typeString].Where(type => PerfectTypeMatch(type, value)).ToList();
		ParameterProvider_t49674E8B4696C26D6E5D7814C38FB5B5955CE4C7* L_0 = __this->___U3CU3E4__this_0;
		Type_t* L_1 = ___type0;
		String_t* L_2 = __this->___value_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = ParameterProvider_PerfectTypeMatch_m814AFCB8DB6390A8335460B6DFF51BC0D97F17BF(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m32F0B82886526DC0AC54F7E8899959DE07D33916_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CIntentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m8FE9D015FE7A41331C354AB2F2E4F9DDACE40C8D_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_mFC741D856AB95314FDFB79565CF8CF2571D164E9_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_m1F304E5837CA3B4DBDD465DB00FF8CDFFD8B89D8_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_m3B9786A33371EE0A7D29DF9DCCAD277DA166120E_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ConduitDispatcher_get_Manifest_mB5C8FA8DE1C1A7719F0445A7673461FE35209222_inline (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, const RuntimeMethod* method) 
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0 = __this->___U3CManifestU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitDispatcher_set_Manifest_m0878617A2A5313ABD9C33AF75DD26F6FF8E32B84_inline (ConduitDispatcher_tE281431C1DDCE5FDED8B915184DBC8722D808DB4* __this, Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* L_0 = ___value0;
		__this->___U3CManifestU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CManifestU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* Manifest_get_Actions_m8B2EF91B9121484FA6F79C35B40023206694C8CC_inline (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* L_0 = __this->___U3CActionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ManifestAction_get_Parameters_m19D7DE03C5AD0889AF5B5654326D3CF6DD9E07C0_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_m9817E66B5D128A287C124708822A434AAEF6876F_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->___U3CInternalNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_mFB9CE3AB206289302FE31046B3C0BCE89B9FA13B_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m165656DA79696D4641E767F4C7EAD62B6E655915_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodInfoU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* InvocationContext_get_ParameterMap_m933EEB7EADCB585A6C4BB97FAAD1C18D428092A0_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CParameterMapU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mDCF7F75009EE31F89F52AD209AA990B0266A6113_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m64F573CDAA0C379C24591B6C08F7172AEAE2AB96_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_mDE23073D58B32F8574BD3D5DF5C7B5966F1648D6_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_m09220F555BBEA805108A93A56DC229AFB78232D8_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ParameterMap_mC2241625BEB9C825F5DA62CDCB4748238B4F2BB6_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->___U3CParameterMapU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterMapU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* Manifest_get_Entities_mE3AA0DB6D8213431FA83BEFE40505EC4E4122602_inline (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* L_0 = __this->___U3CEntitiesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Namespace_mB89F799DFC108FA26BB506CBCDAD93DF441D8A5C_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_mABAEE94904E1BEC463907577B3789527AC377C70_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Assembly_mD0F7E03EB9845DF8880013D67B92F9EBD039E2FC_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* Manifest_get_CustomEntityTypes_m2989EE750AA255E385036B2EBC2B92B075866A55_inline (Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, Type> CustomEntityTypes { get; } = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = __this->___U3CCustomEntityTypesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_mEC04078D56D350E85ECDA551E4B02F7037FC5302_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m17CED742DA95A8BDFB3DFD0CE90C8A934818E492_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedTypeNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mD4518B665CFCED3871190F730D497702D6C67491_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->___U3CTypeAssemblyU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mDA8AF0684FA2A70FA9D802986E3D43BE336FFDF6_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m8FDF69B3BBF055D277DEB1BF31A9259A6634D9B4_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m779020E00E1CB14220D86EE95010E74E9D8AEB5B_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, MethodInfo_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = ___value0;
		__this->___U3CMethodInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_m1AB668B87682791F5BA553EA0751A0E956D3B453_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m15AC7D051D0E28F5BD52A4D2D0879BA65609441D_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_m9CF249D68A9DE82992CE6462330CD8773B62160A_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m4E5E85844F36DCE65F2DA648C7C4C74C6D65EFDE_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_m83EA5CF9642717EF0BCB81D8FA30DE5521ED7568_inline (ConduitActionAttribute_t3984A43CA00448FDDA2FC2BEEA0FE1406A4DC05A* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m9D70B4D7455C33EBFF95E86F34A7EE4BE3B5FBF9_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mC69BE4E05F844952064E9F72A2B653A7C5698B87_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_ID_mD356B5B4F5E886035542E86EBE33651AA0A4AD5C_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_CustomAttributeType_m9D25D6AE3843F689A44401471FFFA3E4B9334B46_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type CustomAttributeType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CCustomAttributeTypeU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomAttributeTypeU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_Name_m72E91B7B258752F37A3D1FA067B43AF938018284_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_CustomAttributeType_m2223CA7341C01FDE8645D4E79F9BB99A63A966C2_inline (InvocationContext_t92F73874689E6A06564D76BA5055ED99392F26D1* __this, const RuntimeMethod* method) 
{
	{
		// public Type CustomAttributeType { get; set; }
		Type_t* L_0 = __this->___U3CCustomAttributeTypeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mF1F6D4494A6D9B0CDCB822B90F5E02CD526F89B8_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m8A82ADD01F8A114FDCF85D793BCABFB35D04FF7A_inline (ManifestAction_t122F3ADFF985A27A1D882333A955251018402685* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* ManifestEntity_get_Values_mD94D723506CE260CB3E49DECD041D6DB542ECA9C_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tEC0A9129A8923C545451761E28DEB6CA1A9AE20D* L_0 = __this->___U3CValuesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_m9EF078EE7DE22609691C2B87FE18063D64FB5E3E_inline (ManifestEntity_tEF9F75A14219F5AA549E71209BC3D67E34181F06* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestErrorHandler_get_Assembly_m2321C9AD397DEDFF39AC89405896A5F1EA2A4C5F_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* ManifestErrorHandler_get_Parameters_m01EDADD0B736F2B2EAE35807FE8DE39BB3FDA228_inline (ManifestErrorHandler_tD5C3C3B9463B802F8B60319F59FAB14F70895282* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB022104D59D27B657BF5EA54B3348A42E20ADE4C* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_m6FE42728BFF410D4B0AE509068BD5E930BEF38CC_inline (ManifestParameter_tAFFBF839D36B4DAEC547F67C071A61E5D7103457* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
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
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE Enumerator_get_Current_m9461F8DD3B1549AA280CA3093B9924C75EF711FB_gshared_inline (Enumerator_tC0B15325B02A013F59DA13D665506212890A2318* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE L_0 = (KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mF2B6D70C96DE2C79036B566B115E94DDBAA92929_gshared_inline (KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A KeyValuePair_2_get_Value_mED83098EBD05D3C381878ED761B693F143D8AC94_gshared_inline (KeyValuePair_2_t79303E4B55F1D4E385BA6345388716DF155936AE* __this, const RuntimeMethod* method) 
{
	{
		ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A L_0 = (ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
