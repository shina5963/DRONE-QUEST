#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, &p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Action_1_t00621160046FE06A171CE95A003D9AE71EBB2B1D;
struct Action_2_tB3E4CF19F3493DE4FE84AFFB77005AE79F9A3758;
struct Action_2_t94C644233E37D574986F0297182FA2BD8972B44A;
struct Action_2_tD2AB9B0AB95F0653AC53DC5114E5EC2958A3E36A;
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D;
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
struct Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9;
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_tE62F67DD5E0705D89AA8A2987FB3C4C21A3C9AAF;
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
struct Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB;
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
struct Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9;
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
struct DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6;
struct DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A;
struct Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A;
struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61;
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735;
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct KeyCollection_tFEC7E7B031CB1C62DF4AF0353995DC343C17CAF2;
struct Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC;
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tCD7772AB40D4E7A61CCAFDDF9E33C190D4F9E6D4;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t63B31A07921C5E19BCA9E85447E2260F37E3E777;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE;
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897;
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
struct List_1_tD19F7E0FCBD7C3E8D363733582EF93B341DD3039;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t179992B095C528117EEF4782A1F45568BD2D51EA;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F;
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF;
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1;
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
struct ObjectPool_1_t7FA933D4164A730DB5D7E5E1D315B49D70184F03;
struct ObjectPool_1_t26A8D6F0AC3E7D5C10AB98A9AF68B2EBC2ABE7EF;
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
struct ValueCollection_tAF44363A8B49E150B1627596E78BB926E14584AE;
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
struct EntryU5BU5D_t043522146CB365908EF2C634445E4732E68EA787;
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct ValueTuple_2U5BU5D_tE2E90A16702AA41094A74222F01C7F383CC57377;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503;
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UxmlObjectAssetU5BU5D_t7A5AF0503A4E3EF68BE1AF4596149861B5791413;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
struct VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct IBaseUxmlObjectFactory_t2FD0978CFC6F068080A1D750BCE69176C764EBA2;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ProbeBrickBlendingPool_tD0DBB9B875C8C88A6410A239987DA3F9F4BE18F8;
struct ProbeBrickIndex_tF1B02DB88E5F4CF79533962B018B5724D74E32D2;
struct ProbeBrickPool_tC43640788A2B356F3F99A068D2CED6702E721693;
struct ProbeCellIndices_t0A30314A2B1D5F97E16BD321C179801D1B42C6AF;
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F;
struct ProbeVolumeDebug_t295620780739F33AEAD1D1BB44C5252CE70D3DD8;
struct ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90;
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6;
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9;
struct UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A;
struct UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621;
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
struct YogaConfig_tA7EBAFAD020EA5AB3104A2C25AB95CC7CE6FB3E2;
struct EnumField_t15C8FC0EB96499DFDCEC2B9DBB27B2BBCD5E262C;
struct IContainer_tBD9F21C42D4253E306C4EF7CFC72480E0C7C89B5;
struct Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
struct U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646;
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m0EE10D43C026E0844F4A22CBA4BD6A78EDBCE2E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m29DB3CF8329DBD6ECDFC6181C010E2E584D6989B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m91839667831D430F490653A16E05BD7E6F120999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1193A0DAC63DF7850B8AB8E677CD8A6CA926A843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m51E13785747AFF6C331BE72F33A6B29EF91DF0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m07BF2F29F51E35A21E3B4F74E0086D29FEBF4363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0A658F148E7A1DA6E0CDF5A9D8784E1CB3D15B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA36E2AB4C432626BAB119E2C2F60A666EA358BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4E6AB439E3E73334C2B6476CD44EA9E603669099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA3AC536C2C5BCE26D9C03722A8E15D6E603EC3E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
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

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t043522146CB365908EF2C634445E4732E68EA787* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFEC7E7B031CB1C62DF4AF0353995DC343C17CAF2* ____keys;
	ValueCollection_tAF44363A8B49E150B1627596E78BB926E14584AE* ____values;
	RuntimeObject* ____syncRoot;
};
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4  : public RuntimeObject
{
	UxmlObjectAssetU5BU5D_t7A5AF0503A4E3EF68BE1AF4596149861B5791413* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897  : public RuntimeObject
{
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064  : public RuntimeObject
{
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1  : public RuntimeObject
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	uint32_t ___writeCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool;
};
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A  : public RuntimeObject
{
	String_t* ___m_FullTypeName;
	int32_t ___m_Id;
	int32_t ___m_OrderInDocument;
	int32_t ___m_ParentId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Properties;
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
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray;
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621  : public RuntimeObject
{
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___U3CstackU3Ek__BackingField;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CbaseComponentTypeArrayU3Ek__BackingField;
	Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9* ___m_SortedVolumes;
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ___m_Volumes;
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___m_SortNeeded;
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___m_ComponentsDefaultState;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_TempColliders;
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_DefaultStack;
};
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	bool ___m_OverrideState;
};
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components;
	ValueTuple_2U5BU5D_tE2E90A16702AA41094A74222F01C7F383CC57377* ___defaultParameters;
	bool ___requiresReset;
};
struct xxHash3_t1B0090718977D51798C540A03964F9CB74D52462  : public RuntimeObject
{
};
struct Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF  : public RuntimeObject
{
	Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295* ___m_Panel;
	RuntimeObject* ___m_Parent;
	int32_t ___U3CflagsU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CtooltipU3Ek__BackingField;
	String_t* ___U3CqueryPathU3Ek__BackingField;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___isHiddenCallback;
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters;
};
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data;
};
struct U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data;
};
struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D 
{
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ____list;
	int32_t ____index;
	int32_t ____version;
	UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* ____current;
};
struct Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4 
{
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ____list;
	int32_t ____index;
	int32_t ____version;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ____current;
};
struct Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 
{
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ____list;
	int32_t ____index;
	int32_t ____version;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ____current;
};
struct Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CgetterU3Ek__BackingField;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CsetterU3Ek__BackingField;
	Action_2_tB3E4CF19F3493DE4FE84AFFB77005AE79F9A3758* ___onValueChanged;
};
struct Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___U3CgetterU3Ek__BackingField;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CsetterU3Ek__BackingField;
	Action_2_t94C644233E37D574986F0297182FA2BD8972B44A* ___onValueChanged;
};
struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___U3CgetterU3Ek__BackingField;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___U3CsetterU3Ek__BackingField;
	Action_2_tD2AB9B0AB95F0653AC53DC5114E5EC2958A3E36A* ___onValueChanged;
};
struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	int32_t ___length;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	int32_t ___length;
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue;
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues;
};
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	int32_t ___length;
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue;
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues;
};
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	int32_t ___length;
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue;
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues;
};
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues;
};
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues;
};
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	int32_t ___length;
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue;
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640  : public InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457
{
};
struct KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718 
{
	int32_t ___key;
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ___value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37 
{
	int32_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue;
	int32_t ___value;
};
struct VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	bool ___m_Value;
};
struct VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	int32_t ___m_Value;
};
struct VolumeParameter_1_t77F022F5333E41A9053315BD571C993F8CC046F2  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	int32_t ___m_Value;
};
struct VolumeParameter_1_t5E4D687B1DE10F23FA079D3967111740962E1076  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	RuntimeObject* ___m_Value;
};
struct VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	float ___m_Value;
};
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3 : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72 {};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
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
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
#pragma pack(push, tp, 1)
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
					int32_t ___type;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding[4];
					uint16_t ___sizeInBytes;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding[6];
					uint16_t ___deviceId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding[8];
					double ___time;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding_forAlignmentOnly[8];
					double ___time_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding[16];
					int32_t ___eventId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};
#pragma pack(pop, tp)
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004 
{
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock;
	int32_t ___m_NumItems;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
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
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
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
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 
{
	bool ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	bool ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B 
{
	int32_t ___memoryBudget;
	int32_t ___blendingMemoryBudget;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	int32_t ___shBands;
	bool ___supportsRuntimeDebug;
	bool ___supportStreaming;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B_marshaled_pinvoke
{
	int32_t ___memoryBudget;
	int32_t ___blendingMemoryBudget;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	int32_t ___shBands;
	int32_t ___supportsRuntimeDebug;
	int32_t ___supportStreaming;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B_marshaled_com
{
	int32_t ___memoryBudget;
	int32_t ___blendingMemoryBudget;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	int32_t ___shBands;
	int32_t ___supportsRuntimeDebug;
	int32_t ___supportStreaming;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Block;
	int32_t ___OffsetInFirstBlock;
	int32_t ___ElementCount;
	int32_t ___LastOffset;
	int32_t ___NumberOfBlocks;
};
struct UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8  : public UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A
{
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4 
{
	int32_t ___Index;
};
struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F 
{
	uint32_t ___x;
	uint32_t ___y;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	alignas(IL2CPP_SIZEOF_VOID_P) TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	alignas(IL2CPP_SIZEOF_VOID_P) BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	alignas(IL2CPP_SIZEOF_VOID_P) InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	bool ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_pinvoke
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_com
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
};
struct Array_t1E323B687FA2B776FFD4500566C5078C058371A7 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t1E323B687FA2B776FFD4500566C5078C058371A7__padding[1];
	};
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity;
	int32_t ___width;
	int32_t ___height;
	int32_t ___depth;
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity;
	int32_t ___width;
	int32_t ___height;
	int32_t ___depth;
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity;
	int32_t ___width;
	int32_t ___height;
	int32_t ___depth;
};
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	uint8_t* ___m_pointer;
	int64_t ___m_bytes;
	int64_t ___m_current;
	int64_t ___m_allocations;
};
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	uint8_t* ___Ptr;
	int32_t ___Size;
	int32_t ___Offset;
};
struct U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11__padding[8192];
	};
};
struct ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3 
{
	void* ___Ptr;
	int32_t ___Length;
};
struct ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB 
{
	void* ___Ptr;
	UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___ListData;
};
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_RemainingItemCount;
	int32_t ___m_LastBlockSize;
};
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_ForeachIndex;
	int32_t ___m_ElementCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock;
	int32_t ___m_FirstOffset;
	int32_t ___m_NumberOfBlocks;
	int32_t ___m_ThreadIndex;
};
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_pinvoke
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_com
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 
{
	int32_t ___offset;
	int32_t ___length;
};
struct LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_forAlignmentOnly;
		};
	};
};
struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
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
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_OffsetPadding[64];
			uint8_t ___Buffer;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_OffsetPadding[320];
			int32_t ___IsHash64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_OffsetPadding[324];
			int32_t ___BufferedSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding[328];
			int32_t ___NbStripesSoFar;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_OffsetPadding[336];
			int64_t ___TotalLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_OffsetPadding[344];
			uint64_t ___Seed;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_OffsetPadding[352];
			uint8_t ___SecretKey;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_OffsetPadding[540];
			uint8_t ____PadEnd;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_forAlignmentOnly;
		};
	};
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove;
};
struct Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375 
{
	Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	int32_t ___length;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues;
};
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct UnsafeMultiHashMap_2_tFF221ACEC1569F6C8B38CCF522E0E796B17E8FF3 
{
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
};
struct VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_Value;
};
struct VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Value;
};
struct VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Value;
};
struct VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Value;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
#pragma pack(push, tp, 1)
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_OffsetPadding[112];
					uint8_t ___byte0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_OffsetPadding[113];
					uint8_t ___byte0113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_OffsetPadding[114];
					uint8_t ___byte0114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_OffsetPadding[115];
					uint8_t ___byte0115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_OffsetPadding[116];
					uint8_t ___byte0116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_OffsetPadding[117];
					uint8_t ___byte0117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_OffsetPadding[118];
					uint8_t ___byte0118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_OffsetPadding[119];
					uint8_t ___byte0119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_OffsetPadding[120];
					uint8_t ___byte0120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_OffsetPadding[121];
					uint8_t ___byte0121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_OffsetPadding[122];
					uint8_t ___byte0122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_OffsetPadding[123];
					uint8_t ___byte0123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_OffsetPadding[124];
					uint8_t ___byte0124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_OffsetPadding[125];
					uint8_t ___byte0125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0496_OffsetPadding[496];
					uint8_t ___byte0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0496_OffsetPadding_forAlignmentOnly[496];
					uint8_t ___byte0496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0497_OffsetPadding[497];
					uint8_t ___byte0497;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0497_OffsetPadding_forAlignmentOnly[497];
					uint8_t ___byte0497_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0498_OffsetPadding[498];
					uint8_t ___byte0498;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0498_OffsetPadding_forAlignmentOnly[498];
					uint8_t ___byte0498_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0499_OffsetPadding[499];
					uint8_t ___byte0499;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0499_OffsetPadding_forAlignmentOnly[499];
					uint8_t ___byte0499_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0500_OffsetPadding[500];
					uint8_t ___byte0500;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0500_OffsetPadding_forAlignmentOnly[500];
					uint8_t ___byte0500_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0501_OffsetPadding[501];
					uint8_t ___byte0501;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0501_OffsetPadding_forAlignmentOnly[501];
					uint8_t ___byte0501_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0502_OffsetPadding[502];
					uint8_t ___byte0502;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0502_OffsetPadding_forAlignmentOnly[502];
					uint8_t ___byte0502_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0503_OffsetPadding[503];
					uint8_t ___byte0503;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0503_OffsetPadding_forAlignmentOnly[503];
					uint8_t ___byte0503_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0504_OffsetPadding[504];
					uint8_t ___byte0504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0504_OffsetPadding_forAlignmentOnly[504];
					uint8_t ___byte0504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0505_OffsetPadding[505];
					uint8_t ___byte0505;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0505_OffsetPadding_forAlignmentOnly[505];
					uint8_t ___byte0505_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0506_OffsetPadding[506];
					uint8_t ___byte0506;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0506_OffsetPadding_forAlignmentOnly[506];
					uint8_t ___byte0506_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0507_OffsetPadding[507];
					uint8_t ___byte0507;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0507_OffsetPadding_forAlignmentOnly[507];
					uint8_t ___byte0507_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0508_OffsetPadding[508];
					uint8_t ___byte0508;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0508_OffsetPadding_forAlignmentOnly[508];
					uint8_t ___byte0508_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0509_OffsetPadding[509];
					uint8_t ___byte0509;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0509_OffsetPadding_forAlignmentOnly[509];
					uint8_t ___byte0509_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973__padding[510];
	};
};
#pragma pack(pop, tp)
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls;
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions;
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors;
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites;
	int32_t ___totalProcessorCount;
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory;
	bool ___m_OnBeforeUpdateHooked;
	bool ___m_OnAfterUpdateHooked;
	bool ___m_InProcessControlStateChange;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_CurrentlyProcessingThisEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
};
#pragma pack(push, tp, 1)
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
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};
#pragma pack(pop, tp)
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls;
	int32_t ___m_ControlCount;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer;
	int32_t ___m_StateSizeInBytes;
	int32_t ___m_RecordCount;
	int32_t ___m_HistoryDepth;
	int32_t ___m_ExtraMemoryPerRecord;
	int32_t ___m_HeadIndex;
	uint32_t ___m_CurrentVersion;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask;
	bool ___m_AddNewControls;
};
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87 
{
	intptr_t ___m_FirstBlock;
	int32_t ___m_NumBlocks;
	int32_t ___m_MaxBlocks;
	int32_t ___m_AllocLock;
};
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_OffsetPadding[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS_forAlignmentOnly;
		};
	};
};
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B 
{
	void* ___Ptr;
	int32_t ___Length;
	int32_t ___unused;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data;
};
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6 
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C** ___Blocks;
	int32_t ___BlockCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Free;
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___Ranges;
	int32_t ___RangeCount;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 
{
	bool ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme;
};
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	Type_t* ___U3CtypeU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField;
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField;
	String_t* ___m_ExtendsLayout;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField;
	int32_t ___m_ControlCount;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
};
struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___time;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_OffsetPadding[8];
			uint32_t ___version;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_OffsetPadding[12];
			int32_t ___controlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_forAlignmentOnly;
		};
	};
};
struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9 
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 ___m_Reader;
};
struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F 
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F ___m_Writer;
};
struct U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646  : public RuntimeObject
{
	ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* ___U3CU3E4__this;
	ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B ___parameters;
};
struct InitInfo_t704DDF4A7F366AB2C84F08404C424B877802B058 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pendingMinCellPosition;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pendingMaxCellPosition;
};
struct RefVolTransform_t23FA849BA67F6FB0FDC6BA49A08C41D654FC8CE9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posWS;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot;
	float ___scale;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
};
struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	int32_t ___length;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues;
};
struct NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064 
{
	UnsafeMultiHashMap_2_tFF221ACEC1569F6C8B38CCF522E0E796B17E8FF3 ___m_MultiHashMapData;
};
#pragma pack(push, tp, 1)
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
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlIndex_OffsetPadding[20];
					uint16_t ___m_ControlIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlIndex_OffsetPadding_forAlignmentOnly[20];
					uint16_t ___m_ControlIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_BindingIndex_OffsetPadding[22];
					uint16_t ___m_BindingIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_BindingIndex_OffsetPadding_forAlignmentOnly[22];
					uint16_t ___m_BindingIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding[24];
					uint16_t ___m_InteractionIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___m_InteractionIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StateIndex_OffsetPadding[26];
					uint8_t ___m_StateIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StateIndex_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___m_StateIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Phase_OffsetPadding[27];
					uint8_t ___m_Phase;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Phase_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___m_Phase_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StartTime_OffsetPadding[28];
					double ___m_StartTime;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StartTime_OffsetPadding_forAlignmentOnly[28];
					double ___m_StartTime_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ValueData_OffsetPadding[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ValueData_OffsetPadding_forAlignmentOnly[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_forAlignmentOnly;
				};
			};
		};
		uint8_t ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444__padding[37];
	};
};
#pragma pack(pop, tp)
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	YogaConfig_tA7EBAFAD020EA5AB3104A2C25AB95CC7CE6FB3E2* ___yogaConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	bool ___U3CduringLayoutPhaseU3Ek__BackingField;
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 ___bytes;
		};
		uint8_t FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E__padding[512];
	};
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	Type_t* ___m_Type;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
	String_t* ___m_DisplayName;
	String_t* ___m_Description;
	int32_t ___m_Flags;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com ___virtualOffsetSettings;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	Type_t* ___m_ControlType;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout;
	int32_t ___m_IncludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths;
	int32_t ___m_ExcludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths;
	int32_t ___m_TargetBindingIndex;
	String_t* ___m_BindingGroupForNewBinding;
	String_t* ___m_CancelBinding;
	float ___m_MagnitudeThreshold;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes;
	double ___m_LastMatchTime;
	double ___m_StartTime;
	float ___m_Timeout;
	float ___m_WaitSecondsAfterMatch;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch;
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath;
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore;
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache;
	StringBuilder_t* ___m_PathBuilder;
	int32_t ___m_Flags;
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations;
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack;
	int32_t ___m_CachedValue;
	int32_t ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack;
	float ___m_CachedValue;
	float ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F  : public RuntimeObject
{
	bool ___m_IsInitialized;
	bool ___m_SupportStreaming;
	RefVolTransform_t23FA849BA67F6FB0FDC6BA49A08C41D654FC8CE9 ___m_Transform;
	int32_t ___m_MaxSubdivision;
	ProbeBrickPool_tC43640788A2B356F3F99A068D2CED6702E721693* ___m_Pool;
	ProbeBrickIndex_tF1B02DB88E5F4CF79533962B018B5724D74E32D2* ___m_Index;
	ProbeCellIndices_t0A30314A2B1D5F97E16BD321C179801D1B42C6AF* ___m_CellIndices;
	ProbeBrickBlendingPool_tD0DBB9B875C8C88A6410A239987DA3F9F4BE18F8* ___m_BlendingPool;
	List_1_t179992B095C528117EEF4782A1F45568BD2D51EA* ___m_TmpSrcChunks;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_PositionOffsets;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_CurrGlobalBounds;
	Dictionary_2_tE62F67DD5E0705D89AA8A2987FB3C4C21A3C9AAF* ___cells;
	ObjectPool_1_t26A8D6F0AC3E7D5C10AB98A9AF68B2EBC2ABE7EF* ___m_CellInfoPool;
	ObjectPool_1_t7FA933D4164A730DB5D7E5E1D315B49D70184F03* ___m_BlendingCellInfoPool;
	DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB ___m_TemporaryDataLocation;
	int32_t ___m_TemporaryDataLocationMemCost;
	int32_t ___m_CurrentProbeVolumeChunkSizeInBricks;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minLoadedCellPos;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxLoadedCellPos;
	Action_1_t00621160046FE06A171CE95A003D9AE71EBB2B1D* ___retrieveExtraDataAction;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___checksDuringBakeAction;
	bool ___m_BricksLoaded;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_PendingAssetsToBeLoaded;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_PendingAssetsToBeUnloaded;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_ActiveAssets;
	bool ___m_NeedLoadAsset;
	bool ___m_ProbeReferenceVolumeInit;
	bool ___m_EnabledBySRP;
	InitInfo_t704DDF4A7F366AB2C84F08404C424B877802B058 ___m_PendingInitInfo;
	bool ___m_NeedsIndexRebuild;
	bool ___m_HasChangedIndex;
	int32_t ___m_CBShaderID;
	int32_t ___m_NumberOfCellsLoadedPerFrame;
	int32_t ___m_NumberOfCellsBlendedPerFrame;
	float ___m_TurnoverRate;
	int32_t ___m_MemoryBudget;
	int32_t ___m_BlendingMemoryBudget;
	int32_t ___m_SHBands;
	float ___m_ProbeVolumesWeight;
	bool ___clearAssetsOnVolumeClear;
	List_1_tCD7772AB40D4E7A61CCAFDDF9E33C190D4F9E6D4* ___U3CperSceneDataListU3Ek__BackingField;
	ProbeVolumeDebug_t295620780739F33AEAD1D1BB44C5252CE70D3DD8* ___U3CprobeVolumeDebugU3Ek__BackingField;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___U3CsubdivisionDebugColorsU3Ek__BackingField;
	WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* ___m_DebugItems;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_DebugMesh;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DebugMaterial;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_DebugOffsetMesh;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DebugOffsetMaterial;
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___m_DebugFrustumPlanes;
	GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* ___m_DebugScenarioNames;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_DebugScenarioValues;
	String_t* ___m_DebugActiveSceneGUID;
	String_t* ___m_DebugActiveScenario;
	EnumField_t15C8FC0EB96499DFDCEC2B9DBB27B2BBCD5E262C* ___m_DebugScenarioField;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___bakingProcessSettings;
	Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D* ___realtimeSubdivisionInfo;
	bool ___m_MaxSubdivVisualizedIsMaxAvailable;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_LoadedCells;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_ToBeLoadedCells;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_TempCellToLoadList;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_TempCellToUnloadList;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_LoadedBlendingCells;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_ToBeLoadedBlendingCells;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_TempBlendingCellToLoadList;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_TempBlendingCellToUnloadList;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FrozenCameraPosition;
	bool ___m_HasRemainingCellsToBlend;
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_ImportedWithErrors;
	bool ___m_ImportedWithWarnings;
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___m_Usings;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___inlineSheet;
	List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE* ___m_VisualElementAssets;
	List_1_t63B31A07921C5E19BCA9E85447E2260F37E3E777* ___m_TemplateAssets;
	List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* ___m_UxmlObjectEntries;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_UxmlObjectIds;
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ___m_AssetEntries;
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___m_Slots;
	int32_t ___m_ContentContainerId;
	int32_t ___m_ContentHash;
};
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___active;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	List_1_tD19F7E0FCBD7C3E8D363733582EF93B341DD3039* ___parameterList;
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___m_ParameterReadOnlyCollection;
};
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___components;
	bool ___isDirty;
};
struct WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD ___entry;
	NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064 ___hash;
	int32_t ___chars;
	int32_t ___entries;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___m_IsGlobal;
	float ___priority;
	float ___blendDistance;
	float ___weight;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___sharedProfile;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders;
	int32_t ___m_PreviousLayer;
	float ___m_PreviousPriority;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___m_InternalProfile;
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer;
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer;
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer;
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer;
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer;
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4_StaticFields
{
	UxmlObjectAssetU5BU5D_t7A5AF0503A4E3EF68BE1AF4596149861B5791413* ___s_emptyArray;
};
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897_StaticFields
{
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___s_emptyArray;
};
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_StaticFields
{
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___s_emptyArray;
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_StaticFields
{
	Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC* ___s_Instance;
	Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9* ___s_SupportedVolumeComponentsForRenderPipeline;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F_StaticFields
{
	uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___zero;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT;
	int32_t ___NB_STRIPES_PER_BLOCK;
	int32_t ___INTERNAL_BUFFER_SIZE;
	int32_t ___INTERNAL_BUFFER_STRIPES;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant;
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance;
	int32_t ___s_CacheInstanceRef;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F_StaticFields
{
	String_t* ___defaultLightingScenario;
	ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* ____instance;
	String_t* ___k_DebugPanelName;
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB_StaticFields
{
	String_t* ___LinkedVEAInTemplatePropertyName;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___s_TemporarySlotInsertionPoints;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
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
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordStorage_Contains_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0B6CCF83002C265DE921D2A8D8964A43DEF7CD87_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordStorage_Contains_TisIl2CppFullySharedGenericAny_m808558BDB2B31979F6B7D4FD20DB8E421F4A5895_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_GetFixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC0CCE70689DFECF5B683D1F7D116B8AA53EE0FF9_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___1_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_GetFixedString_TisIl2CppFullySharedGenericAny_m6492F57602374CDD2597433C7EB03673976ADBB0_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_gshared (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* __this, int32_t ___0_key, int32_t* ___1_item, NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_gshared (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* __this, int32_t* ___0_item, NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37* ___1_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndexFromHashAndFixedString_TisIl2CppFullySharedGenericAny_m3BE115432F960C9641918D01844BB015F3754D19_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_gshared (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* __this, int32_t ___0_key, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m95D53535140E40530E04E0B019E5A755466BF6FA_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_TisIl2CppFullySharedGenericAny_m9383062ED2B7ADAACB45AF7560F9312EF566A80B_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_SetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mD372346327B19A4DC03954A1730C4528F682C3C7_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_SetFixedString_TisIl2CppFullySharedGenericAny_m1937680856D107BB03E533DAAEEEB28F80BFF6A4_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_ToFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m76421E1D996915B2E26698987EED553A5DE6E751_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_ToFixedString_TisIl2CppFullySharedGenericAny_m43E8725CCF2E6533DCF3E54E939F7FD16A50F869_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___0_block, int32_t ___1_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline (UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 VisualTreeAsset_GetUxmlObjectEntry_mDDAA64C28BCED936019BB51CBC32AE038EC29D1F (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, int32_t ___0_id, const RuntimeMethod* method) ;
inline Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC (List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D (*) (List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D* __this, const RuntimeMethod* method)
{
	return ((  UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* (*) (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461 (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* ___0_uxmlObjectAsset, const RuntimeMethod* method) ;
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
inline Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375 Dictionary_2_GetEnumerator_m0EE10D43C026E0844F4A22CBA4BD6A78EDBCE2E6 (Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375 (*) (Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
inline void Enumerator_Dispose_m91839667831D430F490653A16E05BD7E6F120999 (Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
inline KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718 Enumerator_get_Current_m0A658F148E7A1DA6E0CDF5A9D8784E1CB3D15B08_inline (Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718 (*) (Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Key_mA36E2AB4C432626BAB119E2C2F60A666EA358BF1_inline (KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
inline List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* KeyValuePair_2_get_Value_m4E6AB439E3E73334C2B6476CD44EA9E603669099_inline (KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718* __this, const RuntimeMethod* method)
{
	return ((  List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* (*) (KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
inline Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4 List_1_GetEnumerator_mA3AC536C2C5BCE26D9C03722A8E15D6E603EC3E6 (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4 (*) (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m29DB3CF8329DBD6ECDFC6181C010E2E584D6989B (Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* Enumerator_get_Current_m07BF2F29F51E35A21E3B4F74E0086D29FEBF4363_inline (Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4* __this, const RuntimeMethod* method)
{
	return ((  Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* (*) (Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* Volume_get_profileRef_mE3A46DB4994923FE1B7E12987DD09462AEE7CCCE (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline bool VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, RuntimeObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, RuntimeObject**, const RuntimeMethod*))VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44_gshared)(__this, ___0_component, method);
}
inline bool Enumerator_MoveNext_m1193A0DAC63DF7850B8AB8E677CD8A6CA926A843 (Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline bool Enumerator_MoveNext_m51E13785747AFF6C331BE72F33A6B29EF91DF0EB (Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeProfile_Add_mDF517026750FFACF3E21FCC135510FEBEB12BE1B (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, bool ___1_overrides, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_m58F53E1D8EC2C8D8D97ADF7AEEB6C432FFE9C8BC (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_m9E5CA5F7CA22167AD235A88515C4315F68A579E7 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, Type_t*, RuntimeObject**, const RuntimeMethod*))VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared)(__this, ___0_type, ___1_component, method);
}
inline Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760 (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607 (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911 (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1 (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___0_value, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* __this, const RuntimeMethod* method) ;
inline int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*, const RuntimeMethod*))WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9_gshared)(__this, ___0_h, ___1_temp, method);
}
inline bool WordStorage_Contains_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0B6CCF83002C265DE921D2A8D8964A43DEF7CD87 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*, const RuntimeMethod*))WordStorage_Contains_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0B6CCF83002C265DE921D2A8D8964A43DEF7CD87_gshared)(__this, ___0_value, method);
}
inline bool WordStorage_Contains_TisIl2CppFullySharedGenericAny_m808558BDB2B31979F6B7D4FD20DB8E421F4A5895 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WordStorage_Contains_TisIl2CppFullySharedGenericAny_m808558BDB2B31979F6B7D4FD20DB8E421F4A5895_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedString128Bytes_set_Length_mBBB43CE32D9C6285009629AE64BC6C34759C2ED2 (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA_inline (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString128Bytes_get_Length_mB01AB46B1F5415C0379CCAF98ED2AAE6F08C242E (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void WordStorage_GetFixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC0CCE70689DFECF5B683D1F7D116B8AA53EE0FF9 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___1_temp, const RuntimeMethod* method)
{
	((  void (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*, const RuntimeMethod*))WordStorage_GetFixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC0CCE70689DFECF5B683D1F7D116B8AA53EE0FF9_gshared)(__this, ___0_index, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedString512Bytes_set_Length_m5BECBE3190D559780E9F84276928B0EC612A1BDE (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05_inline (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07 (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* __this, const RuntimeMethod* method) ;
inline void WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method)
{
	((  void (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*, const RuntimeMethod*))WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F_gshared)(__this, ___0_index, ___1_temp, method);
}
inline void WordStorage_GetFixedString_TisIl2CppFullySharedGenericAny_m6492F57602374CDD2597433C7EB03673976ADBB0 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method)
{
	((  void (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WordStorage_GetFixedString_TisIl2CppFullySharedGenericAny_m6492F57602374CDD2597433C7EB03673976ADBB0_gshared)(__this, ___0_index, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797 (FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* __this, const RuntimeMethod* method) ;
inline bool NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844 (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* __this, int32_t ___0_key, int32_t* ___1_item, NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*, int32_t, int32_t*, NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37*, const RuntimeMethod*))NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_gshared)(__this, ___0_key, ___1_item, ___2_it, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FixedString32Bytes_get_Item_m5C098CA36670C500F32A6DCC660B9BD431B4247E (FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* __this, int32_t* ___0_item, NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37* ___1_it, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*, int32_t*, NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37*, const RuntimeMethod*))NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_gshared)(__this, ___0_item, ___1_it, method);
}
inline int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_temp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*, const RuntimeMethod*))WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880_gshared)(__this, ___0_h, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FixedString512Bytes_get_Item_m270AEC3A1713127911A955300852E951EFAB90F3 (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline int32_t WordStorage_GetIndexFromHashAndFixedString_TisIl2CppFullySharedGenericAny_m3BE115432F960C9641918D01844BB015F3754D19 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WordStorage_GetIndexFromHashAndFixedString_TisIl2CppFullySharedGenericAny_m3BE115432F960C9641918D01844BB015F3754D19_gshared)(__this, ___0_h, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString32Bytes_GetHashCode_m699B6C9D56B99126CB2F988A01DC87DF8A9CCFFD (FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* __this, const RuntimeMethod* method) ;
inline void NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* __this, int32_t ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*, int32_t, int32_t, const RuntimeMethod*))NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_gshared)(__this, ___0_key, ___1_item, method);
}
inline int32_t WordStorage_GetOrCreateIndex_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m95D53535140E40530E04E0B019E5A755466BF6FA (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*, const RuntimeMethod*))WordStorage_GetOrCreateIndex_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m95D53535140E40530E04E0B019E5A755466BF6FA_gshared)(__this, ___0_value, method);
}
inline int32_t WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3 (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*, const RuntimeMethod*))WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3_gshared)(__this, ___0_value, method);
}
inline int32_t WordStorage_GetOrCreateIndex_TisIl2CppFullySharedGenericAny_m9383062ED2B7ADAACB45AF7560F9312EF566A80B (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WordStorage_GetOrCreateIndex_TisIl2CppFullySharedGenericAny_m9383062ED2B7ADAACB45AF7560F9312EF566A80B_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* WordStorage_get_Instance_mA081F2DCC024A036AC2BCFEB81F066C1ECB3B68F (const RuntimeMethod* method) ;
inline void Words_SetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mD372346327B19A4DC03954A1730C4528F682C3C7 (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*, const RuntimeMethod*))Words_SetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mD372346327B19A4DC03954A1730C4528F682C3C7_gshared)(__this, ___0_value, method);
}
inline void Words_SetFixedString_TisIl2CppFullySharedGenericAny_m1937680856D107BB03E533DAAEEEB28F80BFF6A4 (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Words_SetFixedString_TisIl2CppFullySharedGenericAny_m1937680856D107BB03E533DAAEEEB28F80BFF6A4_gshared)(__this, ___0_value, method);
}
inline void Words_ToFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m76421E1D996915B2E26698987EED553A5DE6E751 (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*, const RuntimeMethod*))Words_ToFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m76421E1D996915B2E26698987EED553A5DE6E751_gshared)(__this, ___0_value, method);
}
inline void Words_ToFixedString_TisIl2CppFullySharedGenericAny_m43E8725CCF2E6533DCF3E54E939F7FD16A50F869 (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Words_ToFixedString_TisIl2CppFullySharedGenericAny_m43E8725CCF2E6533DCF3E54E939F7FD16A50F869_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_Hash128_mE0C3239D53F8C4F524698AAFF8CD38C982F47E8D (void* ___0_input, int64_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F xxHash3_Hash64_mD1BBA0284A3241AFD77FF83F1F8250B7DE0BE501 (void* ___0_input, int64_t ___1_length, const RuntimeMethod* method) ;
inline Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___0_items, const RuntimeMethod* method)
{
	return ((  Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, int32_t, const RuntimeMethod*))AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared)(__this, ___0_items, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m85FEAD596A8E327F7B6820310B7FBD9822BA735C_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___0_block, const RuntimeMethod* method) ;
inline int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___0_block, int32_t ___1_items, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, int32_t, const RuntimeMethod*))AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared)(__this, ___0_block, ___1_items, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA (int32_t ___0_phase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared)(__this, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
inline float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, float, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_interaction, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_processor, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___0_layoutType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
inline void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391 (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared)((ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) ;
inline ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 (*) (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*, RuntimeObject*, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline)(__this, ___0_processor, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
inline int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795 (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051 (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
inline uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51 (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* (*) (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* (*) (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0 (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* (*) (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81 (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (uint64_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9 (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* (*) (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* (*) (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* (*) (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* (*) (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187 (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* __this, bool ___0_destroyPanel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53 (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* __this, ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B ___0_parameters, const RuntimeMethod* method) ;
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___0_index, method);
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
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared)(__this, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
inline void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline)(___0_ptr, ___1_output, method);
}
inline void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared)(__this, ___0_value, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___0_structSize, const RuntimeMethod* method) ;
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)(__this, ___0_value, ___1_allocator, method);
}
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)(__this, ___0_length, method);
}
inline bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___0_value, method);
}
inline int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
inline void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, int32_t ___0_sizeOf, int32_t ___1_alignOf, void* ___2_ptr, int32_t ___3_length, const RuntimeMethod* method) ;
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared)(__this, ___0_list, method);
}
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, void*, int32_t, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___0_ptr, ___1_max, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___0_input, method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m07FD7550AAB5D94312E99571B112D652E8230360_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539 (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared)(___0_ptr, ___1_output, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VisualTreeAsset_GetUxmlObjects_TisRuntimeObject_mFEB9E86AA00E04E9876FE4F06B6BB485B539CF92_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, RuntimeObject* ___0_asset, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* V_0 = NULL;
	bool V_1 = false;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_2 = NULL;
	bool V_3 = false;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_6 = NULL;
	Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D V_7;
	memset((&V_7), 0, sizeof(V_7));
	UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_0 = __this->___m_UxmlObjectEntries;
		V_1 = (bool)((((RuntimeObject*)(List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_00e3;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_asset;
		V_0 = ((UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)IsInstClass((RuntimeObject*)L_2, UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var));
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_3 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_5 = V_0;
		int32_t L_6;
		L_6 = UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline(L_5, NULL);
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_7;
		L_7 = VisualTreeAsset_GetUxmlObjectEntry_mDDAA64C28BCED936019BB51CBC32AE038EC29D1F(__this, L_6, NULL);
		V_4 = L_7;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_9 = L_8.___uxmlObjectAssets;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_00de;
		}
	}
	{
		V_6 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_11 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_12 = L_11.___uxmlObjectAssets;
		Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D L_13;
		L_13 = List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC(L_12, List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		V_7 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{
				Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE((&V_7), Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00bf_1;
			}

IL_005e_1:
			{
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_14;
				L_14 = Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline((&V_7), Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
				V_8 = L_14;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_15 = V_8;
				RuntimeObject* L_16;
				L_16 = VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461(__this, L_15, NULL);
				V_9 = L_16;
				RuntimeObject* L_17 = V_9;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 0)));
				RuntimeObject* L_18 = V_10;
				V_12 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_19 = V_12;
				if (!L_19)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00bf_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_20 = V_10;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_21 = V_8;
				CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_22 = ___1_cc;
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_20, (RuntimeObject*)L_21, L_22);
				V_11 = L_23;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_24 = V_6;
				V_13 = (bool)((((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_24) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_25 = V_13;
				if (!L_25)
				{
					goto IL_00b4_1;
				}
			}
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_26 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
				List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_27 = L_26;
				RuntimeObject* L_28 = V_11;
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_27, L_28, il2cpp_rgctx_method(method->rgctx_data, 5));
				V_6 = L_27;
				goto IL_00be_1;
			}

IL_00b4_1:
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_29 = V_6;
				RuntimeObject* L_30 = V_11;
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_29, L_30, il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_00be_1:
			{
			}

IL_00bf_1:
			{
				bool L_31;
				L_31 = Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E((&V_7), Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_00d9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_32 = V_6;
		V_2 = L_32;
		goto IL_00e3;
	}

IL_00de:
	{
	}

IL_00df:
	{
		V_2 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_00e3;
	}

IL_00e3:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_33 = V_2;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* VisualTreeAsset_GetUxmlObjects_TisIl2CppFullySharedGenericAny_m9C730BDD6D80B98E4BDA494C66E2CDB0DB9E1210_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, RuntimeObject* ___0_asset, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
	const Il2CppFullySharedGenericAny L_28 = L_23;
	const Il2CppFullySharedGenericAny L_30 = L_23;
	ProfilerMethodSentry _profilerMethodSentry(method);
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* V_0 = NULL;
	bool V_1 = false;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_2 = NULL;
	bool V_3 = false;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_6 = NULL;
	Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D V_7;
	memset((&V_7), 0, sizeof(V_7));
	UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
	memset(V_11, 0, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
	bool V_12 = false;
	bool V_13 = false;
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_0 = __this->___m_UxmlObjectEntries;
		V_1 = (bool)((((RuntimeObject*)(List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		goto IL_00e3;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_asset;
		V_0 = ((UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)IsInstClass((RuntimeObject*)L_2, UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var));
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_3 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_5 = V_0;
		int32_t L_6;
		L_6 = UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline(L_5, NULL);
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_7;
		L_7 = VisualTreeAsset_GetUxmlObjectEntry_mDDAA64C28BCED936019BB51CBC32AE038EC29D1F(__this, L_6, NULL);
		V_4 = L_7;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_9 = L_8.___uxmlObjectAssets;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_00de;
		}
	}
	{
		V_6 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_11 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_12 = L_11.___uxmlObjectAssets;
		Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D L_13;
		L_13 = List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC(L_12, List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		V_7 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{
				Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE((&V_7), Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00bf_1;
			}

IL_005e_1:
			{
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_14;
				L_14 = Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline((&V_7), Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
				V_8 = L_14;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_15 = V_8;
				RuntimeObject* L_16;
				L_16 = VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461(__this, L_15, NULL);
				V_9 = L_16;
				RuntimeObject* L_17 = V_9;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 0)));
				RuntimeObject* L_18 = V_10;
				V_12 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_19 = V_12;
				if (!L_19)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00bf_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_20 = V_10;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_21 = V_8;
				CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_22 = ___1_cc;
				InterfaceActionInvoker3Invoker< RuntimeObject*, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_20, (RuntimeObject*)L_21, L_22, (Il2CppFullySharedGenericAny*)L_23);
				il2cpp_codegen_memcpy(V_11, L_23, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_24 = V_6;
				V_13 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_24) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_25 = V_13;
				if (!L_25)
				{
					goto IL_00b4_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_26 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_27 = L_26;
				il2cpp_codegen_memcpy(L_28, V_11, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_28: *(void**)L_28));
				V_6 = L_27;
				goto IL_00be_1;
			}

IL_00b4_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_29 = V_6;
				il2cpp_codegen_memcpy(L_30, V_11, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_30: *(void**)L_30));
			}

IL_00be_1:
			{
			}

IL_00bf_1:
			{
				bool L_31;
				L_31 = Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E((&V_7), Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_00d9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_32 = V_6;
		V_2 = L_32;
		goto IL_00e3;
	}

IL_00de:
	{
	}

IL_00df:
	{
		V_2 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		goto IL_00e3;
	}

IL_00e3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_33 = V_2;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisRuntimeObject_m8476DF92DC347257A6AFCA48272BE51985407784_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		RuntimeObject* L_4;
		L_4 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_4;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		InterfaceActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(0, IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1), L_5);
		RuntimeObject* L_6 = V_1;
		V_0 = L_6;
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_7 = __this->___m_UpdaterArray;
		int32_t L_8 = ___0_phase;
		RuntimeObject* L_9 = V_0;
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_7, L_8, (RuntimeObject*)L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = __this->___m_UpdaterArray;
		int32_t L_9 = ___0_phase;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeManager_IsComponentActiveInMask_TisRuntimeObject_m6CB2C5364332F92D90942B42AEC20152C40A175E_gshared (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_layerMask, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m0EE10D43C026E0844F4A22CBA4BD6A78EDBCE2E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m29DB3CF8329DBD6ECDFC6181C010E2E584D6989B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m91839667831D430F490653A16E05BD7E6F120999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1193A0DAC63DF7850B8AB8E677CD8A6CA926A843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51E13785747AFF6C331BE72F33A6B29EF91DF0EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m07BF2F29F51E35A21E3B4F74E0086D29FEBF4363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A658F148E7A1DA6E0CDF5A9D8784E1CB3D15B08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA36E2AB4C432626BAB119E2C2F60A666EA358BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m4E6AB439E3E73334C2B6476CD44EA9E603669099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA3AC536C2C5BCE26D9C03722A8E15D6E603EC3E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0;
		L_0 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974((&___0_layerMask), NULL);
		V_0 = L_0;
		Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9* L_1 = __this->___m_SortedVolumes;
		Enumerator_tF2ABD9A26EA19AAEF2C14625002F720A060C1375 L_2;
		L_2 = Dictionary_2_GetEnumerator_m0EE10D43C026E0844F4A22CBA4BD6A78EDBCE2E6(L_1, Dictionary_2_GetEnumerator_m0EE10D43C026E0844F4A22CBA4BD6A78EDBCE2E6_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{
				Enumerator_Dispose_m91839667831D430F490653A16E05BD7E6F120999((&V_1), Enumerator_Dispose_m91839667831D430F490653A16E05BD7E6F120999_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00bc_1;
			}

IL_001b_1:
			{
				KeyValuePair_2_tF0218CCE3F4E7064211AAFABA6D445DA9F63B718 L_3;
				L_3 = Enumerator_get_Current_m0A658F148E7A1DA6E0CDF5A9D8784E1CB3D15B08_inline((&V_1), Enumerator_get_Current_m0A658F148E7A1DA6E0CDF5A9D8784E1CB3D15B08_RuntimeMethod_var);
				V_2 = L_3;
				int32_t L_4;
				L_4 = KeyValuePair_2_get_Key_mA36E2AB4C432626BAB119E2C2F60A666EA358BF1_inline((&V_2), KeyValuePair_2_get_Key_mA36E2AB4C432626BAB119E2C2F60A666EA358BF1_RuntimeMethod_var);
				int32_t L_5 = V_0;
				V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_00bc_1;
			}

IL_003a_1:
			{
				List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_7;
				L_7 = KeyValuePair_2_get_Value_m4E6AB439E3E73334C2B6476CD44EA9E603669099_inline((&V_2), KeyValuePair_2_get_Value_m4E6AB439E3E73334C2B6476CD44EA9E603669099_RuntimeMethod_var);
				Enumerator_tDC2C3649FFA427622BA5D63713B2B0D93A4B74A4 L_8;
				L_8 = List_1_GetEnumerator_mA3AC536C2C5BCE26D9C03722A8E15D6E603EC3E6(L_7, List_1_GetEnumerator_mA3AC536C2C5BCE26D9C03722A8E15D6E603EC3E6_RuntimeMethod_var);
				V_4 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ac_1:
					{
						Enumerator_Dispose_m29DB3CF8329DBD6ECDFC6181C010E2E584D6989B((&V_4), Enumerator_Dispose_m29DB3CF8329DBD6ECDFC6181C010E2E584D6989B_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_00a1_2;
					}

IL_004b_2:
					{
						Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_9;
						L_9 = Enumerator_get_Current_m07BF2F29F51E35A21E3B4F74E0086D29FEBF4363_inline((&V_4), Enumerator_get_Current_m07BF2F29F51E35A21E3B4F74E0086D29FEBF4363_RuntimeMethod_var);
						V_5 = L_9;
						Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_10 = V_5;
						bool L_11;
						L_11 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_10, NULL);
						if (!L_11)
						{
							goto IL_006d_2;
						}
					}
					{
						Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_12 = V_5;
						VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_13;
						L_13 = Volume_get_profileRef_mE3A46DB4994923FE1B7E12987DD09462AEE7CCCE(L_12, NULL);
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_14;
						L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						G_B9_0 = ((int32_t)(L_14));
						goto IL_006e_2;
					}

IL_006d_2:
					{
						G_B9_0 = 1;
					}

IL_006e_2:
					{
						V_7 = (bool)G_B9_0;
						bool L_15 = V_7;
						if (!L_15)
						{
							goto IL_0076_2;
						}
					}
					{
						goto IL_00a1_2;
					}

IL_0076_2:
					{
						Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_16 = V_5;
						VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_17;
						L_17 = Volume_get_profileRef_mE3A46DB4994923FE1B7E12987DD09462AEE7CCCE(L_16, NULL);
						bool L_18;
						L_18 = VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44(L_17, (&V_6), il2cpp_rgctx_method(method->rgctx_data, 0));
						if (!L_18)
						{
							goto IL_0094_2;
						}
					}
					{
						RuntimeObject* L_19 = V_6;
						bool L_20 = ((VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*)L_19)->___active;
						G_B14_0 = ((int32_t)(L_20));
						goto IL_0095_2;
					}

IL_0094_2:
					{
						G_B14_0 = 0;
					}

IL_0095_2:
					{
						V_8 = (bool)G_B14_0;
						bool L_21 = V_8;
						if (!L_21)
						{
							goto IL_00a0_2;
						}
					}
					{
						V_9 = (bool)1;
						goto IL_00de;
					}

IL_00a0_2:
					{
					}

IL_00a1_2:
					{
						bool L_22;
						L_22 = Enumerator_MoveNext_m1193A0DAC63DF7850B8AB8E677CD8A6CA926A843((&V_4), Enumerator_MoveNext_m1193A0DAC63DF7850B8AB8E677CD8A6CA926A843_RuntimeMethod_var);
						if (L_22)
						{
							goto IL_004b_2;
						}
					}
					{
						goto IL_00bb_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00bb_1:
			{
			}

IL_00bc_1:
			{
				bool L_23;
				L_23 = Enumerator_MoveNext_m51E13785747AFF6C331BE72F33A6B29EF91DF0EB((&V_1), Enumerator_MoveNext_m51E13785747AFF6C331BE72F33A6B29EF91DF0EB_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_00d9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		V_9 = (bool)0;
		goto IL_00de;
	}

IL_00de:
	{
		bool L_24 = V_9;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1EF476645F5850C9D1AA95CA55F741FBBDB735B6_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14, ((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VolumeParameter_GetValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B7E31181FEC2F5B762A80FEDF27DAF31E73C30F_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, ((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4319DCF1CDC5AEE67EE47027F2D95657332CBE54_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2227A115A843BCB75A07DAA9250CD4A8BB6ECF94_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t77F022F5333E41A9053315BD571C993F8CC046F2*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB VolumeParameter_GetValue_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mFD31FB50A06F90EB4FA089D0E635541E716E1B0D_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, ((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_GetValue_TisRuntimeObject_m23656584F84F53EADAD298050CF103022E5994AF_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(14, ((VolumeParameter_1_t5E4D687B1DE10F23FA079D3967111740962E1076*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m726AF9294ED67B0B16638E5F5D846CE9C7F911DD_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(14, ((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VolumeParameter_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD6257CDB298BD9F43258404B48F12F640076E5CF_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, ((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VolumeParameter_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0BFECF14A9561DC70FDFF99AD44E6C81E163840_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, ((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 VolumeParameter_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA76DCA04631B12C65AAD65BAED699B30BB3C471B_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, ((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_GetValue_TisIl2CppFullySharedGenericAny_m1802EB8111365F0224F3D40314C1DDC085109D46_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
	memset(V_0, 0, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))), (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
		goto IL_000f;
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeProfile_Add_TisRuntimeObject_mD0EDC1447948786E0714DFE904604B0761230922_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, bool ___0_overrides, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___0_overrides;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3;
		L_3 = VolumeProfile_Add_mDF517026750FFACF3E21FCC135510FEBEB12BE1B(__this, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_TisRuntimeObject_mF9E37024B032DF74896C8AC57078582521F0D901_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = VolumeProfile_Has_m58F53E1D8EC2C8D8D97ADF7AEEB6C432FFE9C8BC(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_TisRuntimeObject_m44476A33C4850BD8492B325354403A82579B71AC_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		VolumeProfile_Remove_m9E5CA5F7CA22167AD235A88515C4315F68A579E7(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject** L_2 = ___0_component;
		bool L_3;
		L_3 = VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933(__this, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject** L_0 = ___1_component;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject*));
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_1 = __this->___components;
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_2;
		L_2 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_1, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_0), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0042_1;
			}

IL_0017_1:
			{
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3;
				L_3 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_0), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				V_1 = L_3;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4 = V_1;
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
				Type_t* L_6 = ___0_type;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0041_1;
				}
			}
			{
				RuntimeObject** L_9 = ___1_component;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_10 = V_1;
				*(RuntimeObject**)L_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
				V_3 = (bool)1;
				goto IL_0060;
			}

IL_0041_1:
			{
			}

IL_0042_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_0), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_005c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		V_3 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetAllSubclassOf_TisRuntimeObject_m9502626D753D72F3D469FAA2A74179B0D5DD5451_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_0 = __this->___components;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1(L_0, Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ___1_result;
		int32_t L_2;
		L_2 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_3 = __this->___components;
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_4;
		L_4 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_3, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_1), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0023_1:
			{
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_5;
				L_5 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_1), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				V_2 = L_5;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_6 = V_2;
				Type_t* L_7;
				L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_6, NULL);
				Type_t* L_8 = ___0_type;
				bool L_9;
				L_9 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20, L_7, L_8);
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_0049_1;
				}
			}
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = ___1_result;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_12 = V_2;
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_11, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 3));
			}

IL_0049_1:
			{
			}

IL_004a_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_1), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		int32_t L_14 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_15 = ___1_result;
		int32_t L_16;
		L_16 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0074:
	{
		bool L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetSubclassOf_TisRuntimeObject_mF7DC89AE4F4DE78BE048D236D69F6638DE2D3DFC_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject** L_0 = ___1_component;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject*));
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_1 = __this->___components;
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_2;
		L_2 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_1, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_0), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0042_1;
			}

IL_0017_1:
			{
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3;
				L_3 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_0), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				V_1 = L_3;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4 = V_1;
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
				Type_t* L_6 = ___0_type;
				bool L_7;
				L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20, L_5, L_6);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0041_1;
				}
			}
			{
				RuntimeObject** L_9 = ___1_component;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_10 = V_1;
				*(RuntimeObject**)L_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
				V_3 = (bool)1;
				goto IL_0060;
			}

IL_0041_1:
			{
			}

IL_0042_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_0), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_005c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		V_3 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_2;
		L_2 = VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844(__this, L_1, NULL);
		V_0 = L_2;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordStorage_Contains_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0B6CCF83002C265DE921D2A8D8964A43DEF7CD87_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_0 = ___0_value;
		int32_t L_1;
		L_1 = FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_3 = ___0_value;
		int32_t L_4;
		L_4 = WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9(__this, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool WordStorage_Contains_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0B6CCF83002C265DE921D2A8D8964A43DEF7CD87_AdjustorThunk (RuntimeObject* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	bool _returnValue;
	_returnValue = WordStorage_Contains_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0B6CCF83002C265DE921D2A8D8964A43DEF7CD87(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordStorage_Contains_TisIl2CppFullySharedGenericAny_m808558BDB2B31979F6B7D4FD20DB8E421F4A5895_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		int32_t L_5;
		L_5 = ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(__this, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001f:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool WordStorage_Contains_TisIl2CppFullySharedGenericAny_m808558BDB2B31979F6B7D4FD20DB8E421F4A5895_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	bool _returnValue;
	_returnValue = WordStorage_Contains_TisIl2CppFullySharedGenericAny_m808558BDB2B31979F6B7D4FD20DB8E421F4A5895(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_GetFixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC0CCE70689DFECF5B683D1F7D116B8AA53EE0FF9_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___1_temp, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___entries;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0), NULL);
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_2 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_3 = ___0_index;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_2)->___m_Buffer, L_3);
		V_0 = L_4;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_5 = V_0;
		int32_t L_6 = L_5.___length;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_7 = ___1_temp;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_8 = V_0;
		int32_t L_9 = L_8.___length;
		FixedString128Bytes_set_Length_mBBB43CE32D9C6285009629AE64BC6C34759C2ED2(L_7, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_10 = ___1_temp;
		uint8_t* L_11;
		L_11 = FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA_inline(L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_12 = __this->___buffer;
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_12, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_14 = V_0;
		int32_t L_15 = L_14.___offset;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_16 = ___1_temp;
		int32_t L_17;
		L_17 = FixedString128Bytes_get_Length_mB01AB46B1F5415C0379CCAF98ED2AAE6F08C242E(L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_11, ((void*)il2cpp_codegen_add((intptr_t)L_13, L_15)), ((int64_t)L_17), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WordStorage_GetFixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC0CCE70689DFECF5B683D1F7D116B8AA53EE0FF9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___1_temp, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	WordStorage_GetFixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC0CCE70689DFECF5B683D1F7D116B8AA53EE0FF9(_thisAdjusted, ___0_index, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___entries;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0), NULL);
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_2 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_3 = ___0_index;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_2)->___m_Buffer, L_3);
		V_0 = L_4;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_5 = V_0;
		int32_t L_6 = L_5.___length;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_7 = ___1_temp;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_8 = V_0;
		int32_t L_9 = L_8.___length;
		FixedString512Bytes_set_Length_m5BECBE3190D559780E9F84276928B0EC612A1BDE(L_7, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_10 = ___1_temp;
		uint8_t* L_11;
		L_11 = FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05_inline(L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_12 = __this->___buffer;
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_12, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_14 = V_0;
		int32_t L_15 = L_14.___offset;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_16 = ___1_temp;
		int32_t L_17;
		L_17 = FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07(L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_11, ((void*)il2cpp_codegen_add((intptr_t)L_13, L_15)), ((int64_t)L_17), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F(_thisAdjusted, ___0_index, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_GetFixedString_TisIl2CppFullySharedGenericAny_m6492F57602374CDD2597433C7EB03673976ADBB0_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	ProfilerMethodSentry _profilerMethodSentry(method);
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___entries;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0), NULL);
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_2 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_3 = ___0_index;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_2)->___m_Buffer, L_3);
		V_0 = L_4;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_5 = V_0;
		int32_t L_6 = L_5.___length;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Il2CppFullySharedGenericAny* L_7 = ___1_temp;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_8 = V_0;
		int32_t L_9 = L_8.___length;
		ConstrainedActionInvoker1< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)L_7, L_9);
		Il2CppFullySharedGenericAny* L_11 = ___1_temp;
		uint8_t* L_13;
		L_13 = ConstrainedFuncInvoker0< uint8_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)L_11);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_14 = __this->___buffer;
		void* L_15;
		L_15 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_14, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_16 = V_0;
		int32_t L_17 = L_16.___offset;
		Il2CppFullySharedGenericAny* L_18 = ___1_temp;
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_19, (void*)L_18);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_13, ((void*)il2cpp_codegen_add((intptr_t)L_15, L_17)), ((int64_t)L_20), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WordStorage_GetFixedString_TisIl2CppFullySharedGenericAny_m6492F57602374CDD2597433C7EB03673976ADBB0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	WordStorage_GetFixedString_TisIl2CppFullySharedGenericAny_m6492F57602374CDD2597433C7EB03673976ADBB0(_thisAdjusted, ___0_index, ___1_temp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_temp, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_0 = ___1_temp;
		int32_t L_1;
		L_1 = FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_2 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		int32_t L_3 = ___0_h;
		bool L_4;
		L_4 = NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844(L_2, L_3, (&V_0), (&V_1), NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00f4;
		}
	}
	{
	}

IL_0035:
	{
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_6 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_7 = V_0;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_6)->___m_Buffer, L_7);
		V_3 = L_8;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_9 = V_3;
		int32_t L_10 = L_9.___length;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_11 = V_3;
		int32_t L_12 = L_11.___length;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_13 = ___1_temp;
		int32_t L_14;
		L_14 = FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00da;
		}
	}
	{
		V_5 = 0;
		goto IL_00ae;
	}

IL_0079:
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_16 = ___1_temp;
		int32_t L_17 = V_5;
		uint8_t L_18;
		L_18 = FixedString32Bytes_get_Item_m5C098CA36670C500F32A6DCC660B9BD431B4247E(L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_19 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___buffer);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_20 = V_3;
		int32_t L_21 = L_20.___offset;
		int32_t L_22 = V_5;
		uint8_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (L_19)->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_21, L_22)));
		V_6 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00be;
	}

IL_00a8:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ae:
	{
		int32_t L_26 = V_5;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_27 = V_3;
		int32_t L_28 = L_27.___length;
		V_7 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_7;
		if (L_29)
		{
			goto IL_0079;
		}
	}

IL_00be:
	{
		int32_t L_30 = V_5;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_31 = ___1_temp;
		int32_t L_32;
		L_32 = FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797(L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_8 = (bool)((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_34 = V_0;
		V_9 = L_34;
		goto IL_00f9;
	}

IL_00d9:
	{
	}

IL_00da:
	{
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_35 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		bool L_36;
		L_36 = NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A(L_35, (&V_0), (&V_1), NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var);
		V_10 = L_36;
		bool L_37 = V_10;
		if (L_37)
		{
			goto IL_0035;
		}
	}
	{
	}

IL_00f4:
	{
		V_9 = (-1);
		goto IL_00f9;
	}

IL_00f9:
	{
		int32_t L_38 = V_9;
		return L_38;
	}
}
IL2CPP_EXTERN_C  int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880_AdjustorThunk (RuntimeObject* __this, int32_t ___0_h, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_temp, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880(_thisAdjusted, ___0_h, ___1_temp, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_0 = ___1_temp;
		int32_t L_1;
		L_1 = FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_2 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		int32_t L_3 = ___0_h;
		bool L_4;
		L_4 = NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844(L_2, L_3, (&V_0), (&V_1), NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00f4;
		}
	}
	{
	}

IL_0035:
	{
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_6 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_7 = V_0;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_6)->___m_Buffer, L_7);
		V_3 = L_8;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_9 = V_3;
		int32_t L_10 = L_9.___length;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_11 = V_3;
		int32_t L_12 = L_11.___length;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_13 = ___1_temp;
		int32_t L_14;
		L_14 = FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00da;
		}
	}
	{
		V_5 = 0;
		goto IL_00ae;
	}

IL_0079:
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_16 = ___1_temp;
		int32_t L_17 = V_5;
		uint8_t L_18;
		L_18 = FixedString512Bytes_get_Item_m270AEC3A1713127911A955300852E951EFAB90F3(L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_19 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___buffer);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_20 = V_3;
		int32_t L_21 = L_20.___offset;
		int32_t L_22 = V_5;
		uint8_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (L_19)->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_21, L_22)));
		V_6 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00be;
	}

IL_00a8:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ae:
	{
		int32_t L_26 = V_5;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_27 = V_3;
		int32_t L_28 = L_27.___length;
		V_7 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_7;
		if (L_29)
		{
			goto IL_0079;
		}
	}

IL_00be:
	{
		int32_t L_30 = V_5;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_31 = ___1_temp;
		int32_t L_32;
		L_32 = FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07(L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_8 = (bool)((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_34 = V_0;
		V_9 = L_34;
		goto IL_00f9;
	}

IL_00d9:
	{
	}

IL_00da:
	{
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_35 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		bool L_36;
		L_36 = NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A(L_35, (&V_0), (&V_1), NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var);
		V_10 = L_36;
		bool L_37 = V_10;
		if (L_37)
		{
			goto IL_0035;
		}
	}
	{
	}

IL_00f4:
	{
		V_9 = (-1);
		goto IL_00f9;
	}

IL_00f9:
	{
		int32_t L_38 = V_9;
		return L_38;
	}
}
IL2CPP_EXTERN_C  int32_t WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_h, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_temp, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9(_thisAdjusted, ___0_h, ___1_temp, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndexFromHashAndFixedString_TisIl2CppFullySharedGenericAny_m3BE115432F960C9641918D01844BB015F3754D19_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, int32_t ___0_h, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	NativeMultiHashMapIterator_1_t376128D0AFFD8FB620763C04E78B986D3F644A37 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_temp;
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_3 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		int32_t L_4 = ___0_h;
		bool L_5;
		L_5 = NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844(L_3, L_4, (&V_0), (&V_1), NativeMultiHashMap_2_TryGetFirstValue_m69AEB47C8D6078E12C163B1F7EF85B72B3134844_RuntimeMethod_var);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00f4;
		}
	}
	{
	}

IL_0035:
	{
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_7 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_8 = V_0;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_7)->___m_Buffer, L_8);
		V_3 = L_9;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_10 = V_3;
		int32_t L_11 = L_10.___length;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_11) > ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_12 = V_3;
		int32_t L_13 = L_12.___length;
		Il2CppFullySharedGenericAny* L_14 = ___1_temp;
		int32_t L_16;
		L_16 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_15, (void*)L_14);
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00da;
		}
	}
	{
		V_5 = 0;
		goto IL_00ae;
	}

IL_0079:
	{
		Il2CppFullySharedGenericAny* L_18 = ___1_temp;
		int32_t L_19 = V_5;
		uint8_t L_21;
		L_21 = ConstrainedFuncInvoker1< uint8_t, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_20, (void*)L_18, L_19);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_22 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___buffer);
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_23 = V_3;
		int32_t L_24 = L_23.___offset;
		int32_t L_25 = V_5;
		uint8_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (L_22)->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_24, L_25)));
		V_6 = (bool)((((int32_t)((((int32_t)L_21) == ((int32_t)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00be;
	}

IL_00a8:
	{
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ae:
	{
		int32_t L_29 = V_5;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_30 = V_3;
		int32_t L_31 = L_30.___length;
		V_7 = (bool)((((int32_t)L_29) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_0079;
		}
	}

IL_00be:
	{
		int32_t L_33 = V_5;
		Il2CppFullySharedGenericAny* L_34 = ___1_temp;
		int32_t L_36;
		L_36 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_35, (void*)L_34);
		V_8 = (bool)((((int32_t)L_33) == ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_38 = V_0;
		V_9 = L_38;
		goto IL_00f9;
	}

IL_00d9:
	{
	}

IL_00da:
	{
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_39 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		bool L_40;
		L_40 = NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A(L_39, (&V_0), (&V_1), NativeMultiHashMap_2_TryGetNextValue_m5EF6D7DF343FB7569B59079EE4F255A8F2B1C97A_RuntimeMethod_var);
		V_10 = L_40;
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0035;
		}
	}
	{
	}

IL_00f4:
	{
		V_9 = (-1);
		goto IL_00f9;
	}

IL_00f9:
	{
		int32_t L_42 = V_9;
		return L_42;
	}
}
IL2CPP_EXTERN_C  int32_t WordStorage_GetIndexFromHashAndFixedString_TisIl2CppFullySharedGenericAny_m3BE115432F960C9641918D01844BB015F3754D19_AdjustorThunk (RuntimeObject* __this, int32_t ___0_h, Il2CppFullySharedGenericAny* ___1_temp, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WordStorage_GetIndexFromHashAndFixedString_TisIl2CppFullySharedGenericAny_m3BE115432F960C9641918D01844BB015F3754D19(_thisAdjusted, ___0_h, ___1_temp, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m95D53535140E40530E04E0B019E5A755466BF6FA_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_0 = ___0_value;
		int32_t L_1;
		L_1 = FixedString32Bytes_GetHashCode_m699B6C9D56B99126CB2F988A01DC87DF8A9CCFFD(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_3 = ___0_value;
		int32_t L_4;
		L_4 = WordStorage_GetIndexFromHashAndFixedString_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_mAEE7882AD7C84419E3A67DD59564E9817BB94880(__this, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_1;
		V_5 = L_7;
		goto IL_0112;
	}

IL_002c:
	{
		int32_t L_8 = __this->___entries;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_8) < ((int32_t)((int32_t)16384)))? 1 : 0), NULL);
		int32_t L_9 = __this->___chars;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_10 = ___0_value;
		int32_t L_11;
		L_11 = FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797(L_10, il2cpp_rgctx_method(method->rgctx_data, 4));
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_11))) > ((int32_t)((int32_t)2097152)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_12 = __this->___chars;
		V_2 = L_12;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_13 = ___0_value;
		int32_t L_14;
		L_14 = FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797(L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (uint16_t)((int32_t)(uint16_t)L_14);
		V_6 = 0;
		goto IL_00b0;
	}

IL_007c:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_15 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___buffer);
		int32_t L_16 = __this->___chars;
		V_7 = L_16;
		int32_t L_17 = V_7;
		__this->___chars = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_7;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_19 = ___0_value;
		int32_t L_20 = V_6;
		uint8_t L_21;
		L_21 = FixedString32Bytes_get_Item_m5C098CA36670C500F32A6DCC660B9BD431B4247E(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 5));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, (L_15)->___m_Buffer, L_18, (L_21));
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00b0:
	{
		int32_t L_23 = V_6;
		uint16_t L_24 = V_3;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_007c;
		}
	}
	{
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_26 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_27 = __this->___entries;
		il2cpp_codegen_initobj((&V_9), sizeof(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28));
		int32_t L_28 = V_2;
		(&V_9)->___offset = L_28;
		uint16_t L_29 = V_3;
		(&V_9)->___length = (int32_t)L_29;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_30 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_26)->___m_Buffer, L_27, (L_30));
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_31 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		int32_t L_32 = V_0;
		int32_t L_33 = __this->___entries;
		NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F(L_31, L_32, L_33, NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var);
		int32_t L_34 = __this->___entries;
		V_7 = L_34;
		int32_t L_35 = V_7;
		__this->___entries = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_7;
		V_5 = L_36;
		goto IL_0112;
	}

IL_0112:
	{
		int32_t L_37 = V_5;
		return L_37;
	}
}
IL2CPP_EXTERN_C  int32_t WordStorage_GetOrCreateIndex_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m95D53535140E40530E04E0B019E5A755466BF6FA_AdjustorThunk (RuntimeObject* __this, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___0_value, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WordStorage_GetOrCreateIndex_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m95D53535140E40530E04E0B019E5A755466BF6FA(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_0 = ___0_value;
		int32_t L_1;
		L_1 = FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_3 = ___0_value;
		int32_t L_4;
		L_4 = WordStorage_GetIndexFromHashAndFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m01B7FC78B2E841922F39A32A3FF573BF6E253EB9(__this, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_1;
		V_5 = L_7;
		goto IL_0112;
	}

IL_002c:
	{
		int32_t L_8 = __this->___entries;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_8) < ((int32_t)((int32_t)16384)))? 1 : 0), NULL);
		int32_t L_9 = __this->___chars;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_10 = ___0_value;
		int32_t L_11;
		L_11 = FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07(L_10, il2cpp_rgctx_method(method->rgctx_data, 4));
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_11))) > ((int32_t)((int32_t)2097152)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_12 = __this->___chars;
		V_2 = L_12;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_13 = ___0_value;
		int32_t L_14;
		L_14 = FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07(L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (uint16_t)((int32_t)(uint16_t)L_14);
		V_6 = 0;
		goto IL_00b0;
	}

IL_007c:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_15 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___buffer);
		int32_t L_16 = __this->___chars;
		V_7 = L_16;
		int32_t L_17 = V_7;
		__this->___chars = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_7;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_19 = ___0_value;
		int32_t L_20 = V_6;
		uint8_t L_21;
		L_21 = FixedString512Bytes_get_Item_m270AEC3A1713127911A955300852E951EFAB90F3(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 5));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, (L_15)->___m_Buffer, L_18, (L_21));
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00b0:
	{
		int32_t L_23 = V_6;
		uint16_t L_24 = V_3;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_007c;
		}
	}
	{
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_26 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_27 = __this->___entries;
		il2cpp_codegen_initobj((&V_9), sizeof(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28));
		int32_t L_28 = V_2;
		(&V_9)->___offset = L_28;
		uint16_t L_29 = V_3;
		(&V_9)->___length = (int32_t)L_29;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_30 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_26)->___m_Buffer, L_27, (L_30));
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_31 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		int32_t L_32 = V_0;
		int32_t L_33 = __this->___entries;
		NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F(L_31, L_32, L_33, NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var);
		int32_t L_34 = __this->___entries;
		V_7 = L_34;
		int32_t L_35 = V_7;
		__this->___entries = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_7;
		V_5 = L_36;
		goto IL_0112;
	}

IL_0112:
	{
		int32_t L_37 = V_5;
		return L_37;
	}
}
IL2CPP_EXTERN_C  int32_t WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3_AdjustorThunk (RuntimeObject* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_TisIl2CppFullySharedGenericAny_m9383062ED2B7ADAACB45AF7560F9312EF566A80B_gshared (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		int32_t L_5;
		L_5 = ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(__this, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_8 = V_1;
		V_5 = L_8;
		goto IL_0112;
	}

IL_002c:
	{
		int32_t L_9 = __this->___entries;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_9) < ((int32_t)((int32_t)16384)))? 1 : 0), NULL);
		int32_t L_10 = __this->___chars;
		Il2CppFullySharedGenericAny* L_11 = ___0_value;
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_12, (void*)L_11);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_13))) > ((int32_t)((int32_t)2097152)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_14 = __this->___chars;
		V_2 = L_14;
		Il2CppFullySharedGenericAny* L_15 = ___0_value;
		int32_t L_17;
		L_17 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_16, (void*)L_15);
		V_3 = (uint16_t)((int32_t)(uint16_t)L_17);
		V_6 = 0;
		goto IL_00b0;
	}

IL_007c:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_18 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___buffer);
		int32_t L_19 = __this->___chars;
		V_7 = L_19;
		int32_t L_20 = V_7;
		__this->___chars = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_7;
		Il2CppFullySharedGenericAny* L_22 = ___0_value;
		int32_t L_23 = V_6;
		uint8_t L_25;
		L_25 = ConstrainedFuncInvoker1< uint8_t, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 5), L_24, (void*)L_22, L_23);
		IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, (L_18)->___m_Buffer, L_21, (L_25));
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00b0:
	{
		int32_t L_27 = V_6;
		uint16_t L_28 = V_3;
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (L_29)
		{
			goto IL_007c;
		}
	}
	{
		NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD* L_30 = (NativeArray_1_tCB43458786DDEDF503074B58FE6846B802A821BD*)(&__this->___entry);
		int32_t L_31 = __this->___entries;
		il2cpp_codegen_initobj((&V_9), sizeof(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28));
		int32_t L_32 = V_2;
		(&V_9)->___offset = L_32;
		uint16_t L_33 = V_3;
		(&V_9)->___length = (int32_t)L_33;
		Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28 L_34 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(Entry_t1009A7BA6D4B9FE7C4EFBB241257631226E77F28, (L_30)->___m_Buffer, L_31, (L_34));
		NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064* L_35 = (NativeMultiHashMap_2_t7A39A956AC71CBF9F20057AF941C86AF6C4D8064*)(&__this->___hash);
		int32_t L_36 = V_0;
		int32_t L_37 = __this->___entries;
		NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F(L_35, L_36, L_37, NativeMultiHashMap_2_Add_mDE44CB7D64146ADBAE734C6F7DC29C091763793F_RuntimeMethod_var);
		int32_t L_38 = __this->___entries;
		V_7 = L_38;
		int32_t L_39 = V_7;
		__this->___entries = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_7;
		V_5 = L_40;
		goto IL_0112;
	}

IL_0112:
	{
		int32_t L_41 = V_5;
		return L_41;
	}
}
IL2CPP_EXTERN_C  int32_t WordStorage_GetOrCreateIndex_TisIl2CppFullySharedGenericAny_m9383062ED2B7ADAACB45AF7560F9312EF566A80B_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WordStorage_GetOrCreateIndex_TisIl2CppFullySharedGenericAny_m9383062ED2B7ADAACB45AF7560F9312EF566A80B(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_SetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mD372346327B19A4DC03954A1730C4528F682C3C7_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* L_0;
		L_0 = WordStorage_get_Instance_mA081F2DCC024A036AC2BCFEB81F066C1ECB3B68F(NULL);
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_1 = ___0_value;
		int32_t L_2;
		L_2 = WordStorage_GetOrCreateIndex_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m66AC935B8C1CDE01A70BEC25DAAB9F5FC16044A3(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		__this->___Index = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Words_SetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mD372346327B19A4DC03954A1730C4528F682C3C7_AdjustorThunk (RuntimeObject* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*>(__this + _offset);
	Words_SetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mD372346327B19A4DC03954A1730C4528F682C3C7(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_SetFixedString_TisIl2CppFullySharedGenericAny_m1937680856D107BB03E533DAAEEEB28F80BFF6A4_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* L_0;
		L_0 = WordStorage_get_Instance_mA081F2DCC024A036AC2BCFEB81F066C1ECB3B68F(NULL);
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2;
		L_2 = ((  int32_t (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		__this->___Index = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Words_SetFixedString_TisIl2CppFullySharedGenericAny_m1937680856D107BB03E533DAAEEEB28F80BFF6A4_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*>(__this + _offset);
	Words_SetFixedString_TisIl2CppFullySharedGenericAny_m1937680856D107BB03E533DAAEEEB28F80BFF6A4(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_ToFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m76421E1D996915B2E26698987EED553A5DE6E751_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* L_0;
		L_0 = WordStorage_get_Instance_mA081F2DCC024A036AC2BCFEB81F066C1ECB3B68F(NULL);
		int32_t L_1 = __this->___Index;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_2 = ___0_value;
		WordStorage_GetFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m0C820D68F995F72CC2BE495038B539A900DF382F(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void Words_ToFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m76421E1D996915B2E26698987EED553A5DE6E751_AdjustorThunk (RuntimeObject* __this, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_value, const RuntimeMethod* method)
{
	Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*>(__this + _offset);
	Words_ToFixedString_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m76421E1D996915B2E26698987EED553A5DE6E751(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Words_ToFixedString_TisIl2CppFullySharedGenericAny_m43E8725CCF2E6533DCF3E54E939F7FD16A50F869_gshared (Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1* L_0;
		L_0 = WordStorage_get_Instance_mA081F2DCC024A036AC2BCFEB81F066C1ECB3B68F(NULL);
		int32_t L_1 = __this->___Index;
		Il2CppFullySharedGenericAny* L_2 = ___0_value;
		((  void (*) (WordStorage_tEE399964316C39ACB7D6E554A292A91EB71419B1*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void Words_ToFixedString_TisIl2CppFullySharedGenericAny_m43E8725CCF2E6533DCF3E54E939F7FD16A50F869_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Words_t004A32E29CD2CBB8A48EEA34707415B6DF9AE4D4*>(__this + _offset);
	Words_ToFixedString_TisIl2CppFullySharedGenericAny_m43E8725CCF2E6533DCF3E54E939F7FD16A50F869(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_Hash128_TisIl2CppFullySharedGenericStruct_mE743F633A7F9226982E2F9BFC9CF6CE5BC2CE5C7_gshared (Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_3;
		L_3 = xxHash3_Hash128_mE0C3239D53F8C4F524698AAFF8CD38C982F47E8D(L_1, ((int64_t)L_2), NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F xxHash3_Hash64_TisIl2CppFullySharedGenericStruct_m51B6947FCCED4C783BA41B5021913619A76769EA_gshared (Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_3;
		L_3 = xxHash3_Hash64_mD1BBA0284A3241AFD77FF83F1F8250B7DE0BE501(L_1, ((int64_t)L_2), NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___0_items, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___0_items;
		int32_t L_1;
		L_1 = ((  int32_t (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, (&V_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_2 = V_1;
		V_2 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_3 = V_2;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_AdjustorThunk (RuntimeObject* __this, int32_t ___0_items, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 _returnValue;
	_returnValue = AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21(_thisAdjusted, ___0_items, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___0_block, int32_t ___1_items, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___0_block;
		il2cpp_codegen_initobj((&V_1), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		il2cpp_codegen_initobj((&V_2), sizeof(Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC));
		int32_t L_1 = ___1_items;
		(&V_2)->___Items = L_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = (*(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this);
		(&V_2)->___Allocator = L_2;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC L_3 = V_2;
		(&V_1)->___Range = L_3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_1)->___BytesPerItem = L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_6;
		L_6 = math_tzcnt_m85FEAD596A8E327F7B6820310B7FBD9822BA735C_inline(L_5, NULL);
		int32_t L_7;
		L_7 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(3, L_6, NULL);
		Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F((&V_1), ((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_8 = V_1;
		*(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*)L_0 = L_8;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___0_block;
		int32_t L_10;
		L_10 = AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9(__this, L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		V_3 = L_11;
		goto IL_006a;
	}

IL_006a:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___0_block, int32_t ___1_items, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24(_thisAdjusted, ___0_block, ___1_items, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m838397FA34A03D1C68D150CC95FD210252FEC377_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, int64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		int64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58D75192AF2281079E2FDE4034707E9883147B2C_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, uint64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		uint64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
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
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113(L_4, L_5, L_6, (InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		int32_t L_11;
		L_11 = InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
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
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5(L_4, L_5, L_6, (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
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
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		float L_6 = V_0;
		float L_7;
		L_7 = InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0(L_4, L_5, L_6, (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
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
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5(L_4, L_5, L_6, (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
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
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28(L_4, L_5, L_6, (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_2, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(G_B4_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
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
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		InvokerActionInvoker4< int32_t, Il2CppFullySharedGenericStruct, InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4, L_5, L_6, (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)NULL, (Il2CppFullySharedGenericStruct*)L_7);
		il2cpp_codegen_memcpy(G_B4_0, L_7, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_4, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_4, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
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
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts), L_1, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5(__this, L_0, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6(__this, L_0, NULL);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_1, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	void* V_2 = NULL;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_4, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	{
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_0 = __this->___m_Ptr;
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
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F(__this, NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D)), L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_22);
		il2cpp_codegen_memcpy(V_1, L_22, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		void* L_23;
		L_23 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((Il2CppFullySharedGenericStruct*)V_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_23;
		void* L_24 = V_2;
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_25 = __this->___m_Ptr;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_processor;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		RuntimeObject* L_4 = ___0_processor;
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_4);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_6 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_6;
		goto IL_003e;
	}

IL_003e:
	{
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method)
{
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*>(__this + _offset);
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline(_thisAdjusted, ___0_processor, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	memset(V_0, 0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	{
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = __this->___m_Owner;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_0 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_5 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_8 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		int32_t L_11 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_13 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisIl2CppFullySharedGenericAny_m2C056932E189D5E31D1107D28ABA7A6A5B5EC099_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* ___2_p, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	memset(V_0, 0, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_0 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_5 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_8 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_12, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_12);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_13 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		il2cpp_codegen_memcpy(L_16, V_0, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		il2cpp_codegen_memcpy((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_0 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_5 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_8 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		int32_t L_11 = L_10;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_12);
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_13 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_0;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		int32_t L_2 = ___2_end;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = ___0_data;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = ___0_data;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_data;
		int32_t L_11 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_18 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = ___0_data;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24;
		L_24 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_18, L_19, L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_26 = ___0_data;
		int32_t L_27 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = V_1;
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_end;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisIl2CppFullySharedGenericAny_m4D143D52B52C5F1F971193FD2EBC1F991E1DAF27_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	const Il2CppFullySharedGenericAny L_15 = L_8;
	const Il2CppFullySharedGenericAny L_19 = L_8;
	const Il2CppFullySharedGenericAny L_28 = L_8;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	memset(V_1, 0, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		int32_t L_2 = ___2_end;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_data;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_data;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_data;
		int32_t L_11 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_data;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		il2cpp_codegen_memcpy((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), L_15, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), (void*)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_18 = ___3_compare;
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_data;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		int32_t L_24;
		L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_23: *(void**)L_23));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = ___0_data;
		int32_t L_27 = V_2;
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		il2cpp_codegen_memcpy((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1)))), L_28, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1)))), (void*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_end;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_start;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		int32_t L_2 = ___2_end;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = ___0_data;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_5 = ___0_data;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___0_data;
		int32_t L_11 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_18 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___0_data;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24;
		L_24 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_18, L_19, L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_26 = ___0_data;
		int32_t L_27 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_28 = V_1;
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_end;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12;
		L_12 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_17 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		int32_t L_20 = L_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_22 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		int32_t L_25 = L_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27;
		L_27 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_32 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		int32_t L_35 = L_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_37 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		int32_t L_40 = L_39;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42;
		L_42 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_46 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		int32_t L_49 = L_48;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51 = V_4;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_Median3Pivot_TisIl2CppFullySharedGenericAny_mA6E8814C46DAB9D561A5440B447E24E67159A5A1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___4_compare, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_21 = L_6;
	const Il2CppFullySharedGenericAny L_36 = L_6;
	const Il2CppFullySharedGenericAny L_50 = L_6;
	const Il2CppFullySharedGenericAny L_51 = L_6;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_26 = L_11;
	const Il2CppFullySharedGenericAny L_41 = L_11;
	ProfilerMethodSentry _profilerMethodSentry(method);
	U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	memset(V_4, 0, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_22 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		int32_t L_25 = L_24;
		il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		int32_t L_27;
		L_27 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_26: *(void**)L_26));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_32 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		int32_t L_35 = L_34;
		il2cpp_codegen_memcpy(L_36, (L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_37 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		int32_t L_40 = L_39;
		il2cpp_codegen_memcpy(L_41, (L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		int32_t L_42;
		L_42 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_41: *(void**)L_41));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_46 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		int32_t L_49 = L_48;
		il2cpp_codegen_memcpy(L_50, (L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(V_4, L_50, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		goto IL_00aa;
	}

IL_00aa:
	{
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_51, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12;
		L_12 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_17 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		int32_t L_20 = L_19;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_22 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		int32_t L_25 = L_24;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27;
		L_27 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_32 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		int32_t L_35 = L_34;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_37 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		int32_t L_40 = L_39;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42;
		L_42 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_46 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		int32_t L_49 = L_48;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_51 = V_4;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		int32_t L_17;
		L_17 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		int32_t L_23 = L_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = V_2;
		int32_t L_26;
		L_26 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		int32_t L_34 = L_33;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		int32_t L_41 = L_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_42);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46 = V_3;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisIl2CppFullySharedGenericAny_m712B611DAC06FA9738A8F85CAA404B955BB47029_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_35 = L_9;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_25 = L_16;
	const Il2CppFullySharedGenericAny L_42 = L_16;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_2, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_3, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_8 = ___3_compare;
		InvokerActionInvoker6< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, L_6, L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_11 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_16: *(void**)L_16));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		int32_t L_23 = L_22;
		il2cpp_codegen_memcpy(L_24, (L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		int32_t L_26;
		L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_25: *(void**)L_25));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		int32_t L_34 = L_33;
		il2cpp_codegen_memcpy(L_35, (L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(V_3, L_35, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		int32_t L_41 = L_40;
		il2cpp_codegen_memcpy(L_42, (L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_38)), L_42, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_38)), (void*)L_42);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		il2cpp_codegen_memcpy(L_46, V_3, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)), L_46, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)), (void*)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		int32_t L_23 = L_22;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = V_2;
		int32_t L_26;
		L_26 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		int32_t L_34 = L_33;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		int32_t L_41 = L_40;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_42);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_46 = V_3;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mEC21DF5A7D470F44BB30B97EB39D03491BD65D1F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___1_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_2 = ___1_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_9 = ___3_compare;
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = ___0_data;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_27 = ___3_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_34 = ___3_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m64F66E9A59079142461E29BCD21FE90D0C81BB59_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_9 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_data;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_27 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_34 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_9 = ___3_compare;
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_11 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_13 = ___0_data;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_27 = ___3_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_34 = ___3_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_TisIl2CppFullySharedGenericStruct_mD730785C3E9637938098A9F0A235B89FEE3AE7CA_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___1_count;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int64_t L_3 = V_0;
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1((void*)L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_TisIl2CppFullySharedGenericStruct_m663B37B7863FEFA92383BB1F3457755E0FCF9C76_gshared (Il2CppFullySharedGenericStruct* ___0_dest, Il2CppFullySharedGenericStruct* ___1_src, int64_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___2_count;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		Il2CppFullySharedGenericStruct* L_2 = ___0_dest;
		Il2CppFullySharedGenericStruct* L_3 = ___1_src;
		int64_t L_4 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, (void*)L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Set_TisIl2CppFullySharedGenericStruct_mE1A1DAD75AFF2C9365C8CDA0E40CBC5831526483_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, Il2CppFullySharedGenericStruct ___2_t, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int64_t L_0 = ___1_count;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		V_1 = 0;
		goto IL_0023;
	}

IL_000e:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int32_t L_3 = V_1;
		uint32_t L_4 = SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC;
		il2cpp_codegen_memcpy(L_5, ___2_t, SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), (int32_t)L_4)))), L_5, SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), (int32_t)L_4)))), (void*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		int64_t L_8 = ___1_count;
		V_2 = (bool)((((int64_t)((int64_t)L_7)) < ((int64_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Unmanaged_Allocate_TisIl2CppFullySharedGenericStruct_m057D0CA6874E6719E10B462BACECFDC4352FE9AE_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___0_allocator;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), ((int64_t)1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		uint8_t* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		uint8_t* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		uint8_t* L_4;
		L_4 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_m243D8201F69E8B9517904DD82D2AF7681CC70844_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_4;
		L_4 = Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mB841F028990B75239A6FDF58EBC78E296907E772_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_4;
		L_4 = Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m4D14134CC0BDD6353804BD8F2032D3B2D2F0C494_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_4;
		L_4 = Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEE0CCF17012BE1CA95605693A9DC3BC6AACCFB64_gshared (uint64_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		uint64_t* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		uint64_t* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		uint64_t* L_4;
		L_4 = Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_m44E1299744F197B4690015E38D6E5EB21AFDC0AC_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_4;
		L_4 = Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m171CCBC5CCBB5C736EDB2FB360548D63C31C9A61_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_4;
		L_4 = Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m56429A658B96166EFAF5B25D6378FE8C979E46D0_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_4;
		L_4 = Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m0E6BEFF6F1045D176A76A94150425282A3F0232A_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_4;
		L_4 = Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m7B99D1F06742355AC760F246D818C9979FADF666_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_4;
		L_4 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* L_1 = (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)(&__this->___m_Reader);
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass171_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5019674115061C61566FCE4F42C27F8D1D10CBFC_gshared (U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646* __this, Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A* ___0_field, bool ___1_value, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = __this->___U3CU3E4__this;
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = __this->___U3CU3E4__this;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = __this->___parameters;
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass171_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m100076E774B865F9F042988822BA799CCDF110D1_gshared (U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646* __this, Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A* ___0_field, int32_t ___1_value, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = __this->___U3CU3E4__this;
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = __this->___U3CU3E4__this;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = __this->___parameters;
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass171_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisIl2CppFullySharedGenericAny_m7AA2E7868621F0A95B0407951E08EC7786EB4D83_gshared (U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646* __this, Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3* ___0_field, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = __this->___U3CU3E4__this;
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = __this->___U3CU3E4__this;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = __this->___parameters;
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = __this->___resourceArray;
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = __this->___resourceArray;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = __this->___resourceArray;
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_10 = __this->___resourceArray;
		int32_t L_11 = V_0;
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_12;
		L_12 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_10, L_11, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		RuntimeObject** L_14 = ___0_outRes;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_15 = __this->___resourceArray;
		int32_t L_16 = V_0;
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_17;
		L_17 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_15, L_16, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_18 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		RuntimeObject** L_19 = ___0_outRes;
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
		G_B3_0 = L_19;
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		int32_t L_23 = V_2;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
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
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		int32_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int32_t L_6 = V_1;
		V_2 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	const Il2CppFullySharedGenericStruct L_7 = L_3;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_1, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_2, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(V_2, L_6, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		goto IL_002d;
	}

IL_002d:
	{
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		int32_t* L_3 = ___0_value;
		UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		Il2CppFullySharedGenericStruct* L_3 = ___0_value;
		((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	void* V_3 = NULL;
	{
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_value;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_1;
		void* L_10;
		L_10 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_9, NULL);
		V_3 = L_10;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_value;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_11);
		void* L_13;
		L_13 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 4));
		void* L_14 = V_3;
		int32_t L_15 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, ((int64_t)L_15), NULL);
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___0_value, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	void* V_0 = NULL;
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t* L_0 = ___0_length;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___0_length;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		int32_t* L_4 = ___0_length;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		G_B3_0 = ((uintptr_t)(intptr_t)(L_7));
		goto IL_001f;
	}

IL_001d:
	{
		G_B3_0 = ((uintptr_t)0);
	}

IL_001f:
	{
		V_0 = (void*)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		void* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___0_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	{
		void* L_0 = __this->___Ptr;
		int32_t L_1 = __this->___Length;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	{
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_0 = __this->___ListData;
		int32_t* L_1 = (int32_t*)(&L_0->___Length);
		int32_t L_2;
		L_2 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		void* L_3 = __this->___Ptr;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, ___0_value, SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_2 = ___0_list;
		void* L_3 = L_2.___Ptr;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_4 = ___0_list;
		int32_t L_5 = L_4.___Length;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_3, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_AdjustorThunk (RuntimeObject* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476(_thisAdjusted, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_2 = ___0_ptr;
		int32_t L_3 = ___1_length;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_AdjustorThunk (RuntimeObject* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727(_thisAdjusted, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___m_CurrentPtr;
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = __this->___m_CurrentBlockEnd;
		V_2 = (bool)((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) <= ((uintptr_t)L_4)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = __this->___m_CurrentBlock;
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_7 = L_6->___Next;
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_8 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_7->___Data);
		uint8_t* L_9 = (uint8_t*)(&L_8->___FixedElementField);
		V_1 = (uint8_t*)((uintptr_t)L_9);
	}

IL_0036:
	{
		uint8_t* L_10 = V_1;
		Il2CppFullySharedGenericStruct* L_11;
		L_11 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		Il2CppFullySharedGenericStruct* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		double* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(double);
		double* L_17 = V_4;
		double L_18 = (*(double*)L_17);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		double* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(double);
		double* L_17 = V_4;
		double L_18 = (*(double*)L_17);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int32_t);
		int32_t* L_17 = V_4;
		int32_t L_18 = (*(int32_t*)L_17);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int32_t);
		int32_t* L_17 = V_4;
		int32_t L_18 = (*(int32_t*)L_17);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int64_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int64_t);
		int64_t* L_17 = V_4;
		int64_t L_18 = (*(int64_t*)L_17);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		int64_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int64_t);
		int64_t* L_17 = V_4;
		int64_t L_18 = (*(int64_t*)L_17);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		float* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(float);
		float* L_17 = V_4;
		float L_18 = (*(float*)L_17);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		float* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(float);
		float* L_17 = V_4;
		float L_18 = (*(float*)L_17);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0064:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		uint8_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(uint8_t);
		uint8_t L_10 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_17;
		L_17 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_18 = V_7;
		uint8_t L_19 = V_9;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_32;
		L_32 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_33 = V_9;
		uint8_t L_34 = V_7;
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_36;
		L_36 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_37 = V_9;
		uint8_t L_38 = V_7;
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_9;
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_62;
		L_62 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_63 = V_7;
		uint8_t L_64 = V_9;
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_149;
		L_149 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(uint8_t);
		uint8_t L_153 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint8_t));
		uint8_t L_154 = V_43;
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		int16_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(int16_t);
		int16_t L_10 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_17;
		L_17 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_18 = V_7;
		int16_t L_19 = V_9;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_32;
		L_32 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_33 = V_9;
		int16_t L_34 = V_7;
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_36;
		L_36 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_37 = V_9;
		int16_t L_38 = V_7;
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_50 = V_7;
		int16_t L_51 = V_9;
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_62;
		L_62 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_63 = V_7;
		int16_t L_64 = V_9;
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_149;
		L_149 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(int16_t);
		int16_t L_153 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int16_t));
		int16_t L_154 = V_43;
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	bool V_8 = false;
	int8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		int8_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(int8_t);
		int8_t L_10 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_17;
		L_17 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_18 = V_7;
		int8_t L_19 = V_9;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_32;
		L_32 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_33 = V_9;
		int8_t L_34 = V_7;
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_36;
		L_36 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_37 = V_9;
		int8_t L_38 = V_7;
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_50 = V_7;
		int8_t L_51 = V_9;
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_62;
		L_62 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_63 = V_7;
		int8_t L_64 = V_9;
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_149;
		L_149 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(int8_t);
		int8_t L_153 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int8_t));
		int8_t L_154 = V_43;
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	bool V_8 = false;
	uint16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		uint16_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(uint16_t);
		uint16_t L_10 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_17;
		L_17 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_18 = V_7;
		uint16_t L_19 = V_9;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_32;
		L_32 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_33 = V_9;
		uint16_t L_34 = V_7;
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_36;
		L_36 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_37 = V_9;
		uint16_t L_38 = V_7;
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_9;
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_62;
		L_62 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_63 = V_7;
		uint16_t L_64 = V_9;
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_149;
		L_149 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(uint16_t);
		uint16_t L_153 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint16_t));
		uint16_t L_154 = V_43;
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_63 = L_3;
	const Il2CppFullySharedGenericStruct L_153 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_34 = L_19;
	const Il2CppFullySharedGenericStruct L_38 = L_19;
	const Il2CppFullySharedGenericStruct L_51 = L_19;
	const Il2CppFullySharedGenericStruct L_64 = L_19;
	const Il2CppFullySharedGenericStruct L_154 = L_19;
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		Il2CppFullySharedGenericStruct* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_10, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_10, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_17;
		L_17 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_18, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_19, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		bool L_20;
		L_20 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_32;
		L_32 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_33, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_34, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_36;
		L_36 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_37, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_62;
		L_62 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_63, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_64, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_149;
		L_149 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericStruct* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_153, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_154, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		bool L_155;
		L_155 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint8_t));
		uint8_t L_5 = V_2;
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int16_t));
		int16_t L_5 = V_2;
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int8_t));
		int8_t L_5 = V_2;
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint16_t));
		uint16_t L_5 = V_2;
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (uint8_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		uint8_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = ___2_allOnesT;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		uint8_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(uint8_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (int16_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		int16_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = ___2_allOnesT;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		int16_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(int16_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (int8_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		int8_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = ___2_allOnesT;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		int8_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(int8_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (uint16_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		uint16_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = ___2_allOnesT;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		uint16_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(uint16_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	ProfilerMethodSentry _profilerMethodSentry(method);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_9, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), L_9, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), (void*)L_9);
		goto IL_005c;
	}

IL_0049:
	{
		Il2CppFullySharedGenericStruct* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	ProfilerMethodSentry _profilerMethodSentry(method);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilerMethodSentry _profilerMethodSentry(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_runtime_class_init_inline(StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Allocate_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_mCDBD1381CA662F016D4B6003D9BA89FE592EB6D8_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* V_0 = NULL;
	{
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_2;
		L_2 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3((MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	bool V_0 = false;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0017;
	}

IL_000c:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int64_t L_3 = ___1_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___2_allocator;
		Il2CppFullySharedGenericStruct* L_5;
		L_5 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, ((int64_t)0), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (uint8_t*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint8_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* V_0 = NULL;
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* V_0 = NULL;
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* V_0 = NULL;
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	uint64_t* V_0 = NULL;
	{
		uint64_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (uint64_t*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint64_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* V_0 = NULL;
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* V_0 = NULL;
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* V_0 = NULL;
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* V_0 = NULL;
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		Il2CppFullySharedGenericStruct* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ProfilerMethodSentry _profilerMethodSentry(method);
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* V_0 = NULL;
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline (UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Id;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA_inline (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989* L_0 = (FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989*)(&__this->___bytes);
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast(L_0);
		V_0 = (uint8_t*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint8_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05_inline (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* __this, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973* L_0 = (FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973*)(&__this->___bytes);
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast(L_0);
		V_0 = (uint8_t*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint8_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m85FEAD596A8E327F7B6820310B7FBD9822BA735C_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = math_tzcnt_m07FD7550AAB5D94312E99571B112D652E8230360_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_y;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_x;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) 
{
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_processor;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		RuntimeObject* L_4 = ___0_processor;
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_4);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_6 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_6;
		goto IL_003e;
	}

IL_003e:
	{
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		int32_t* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m07FD7550AAB5D94312E99571B112D652E8230360_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		uint32_t L_0 = ___0_x;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_2 = ((int32_t)32);
		goto IL_0060;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_x;
		uint32_t L_3 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_2&((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_3))))));
		(&V_0)->___doubleValue = (0.0);
		uint32_t L_4 = ___0_x;
		(&V_0)->___longValue = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), ((int64_t)(uint64_t)L_4)));
		double* L_5 = (double*)(&(&V_0)->___doubleValue);
		double* L_6 = L_5;
		double L_7 = *((double*)L_6);
		*((double*)L_6) = (double)((double)il2cpp_codegen_subtract(L_7, (4503599627370496.0)));
		LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA L_8 = V_0;
		int64_t L_9 = L_8.___longValue;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((int64_t)(L_9>>((int32_t)52)))), ((int32_t)1023)));
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
