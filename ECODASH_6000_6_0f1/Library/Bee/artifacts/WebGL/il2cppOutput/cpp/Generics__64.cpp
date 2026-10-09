#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
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

struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Comparison_1_tF2EA38711BF4E71781108F0D7BD2B99D225BCE80;
struct Data_tBBAC62CD211FDD01BE331E13953455EC5AD3E38F;
struct Data_t91EFD39F1A5E53405108E488D434DB7452B22E8A;
struct Data_tD43A0A802BBF284FB327878A445148A56180D7DA;
struct Data_tD47C5E63F8D3918FF6FA9D00969FF044D6E745FD;
struct Data_t9C4189912B5BDF1A4B9AF0427C56C087D271149E;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56;
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39;
struct InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3;
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B;
struct InputProcessor_1_tCC7634AB386F9C6888B89C0FD440251E67C5D8F7;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
struct InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8;
struct RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC;
struct RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
typedef Il2CppFullySharedGenericStruct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01;
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111;
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7;
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027;
struct InputProcessor_1U5BU5D_t2D9B681F9F0B39759619A0D4617FB6B20FB10AC0;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14;
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350;
struct int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8;
struct int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F;
struct int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184;
struct CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C;
struct BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7;
struct TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE;
struct Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44;
struct TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264;
struct TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A;
struct BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166;
struct ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B;
struct ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44;
struct JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E;
struct TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6;
struct TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB;
struct CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8;
struct CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0;
struct LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2;
struct PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115;
struct PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FieldInfo_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct PropertyInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07502A9394E2D4006BEA38B6D757C8DD641C761C;
IL2CPP_EXTERN_C String_t* _stringLiteral228690F85C6AD8ED815D48DC2A017A1AAD28D67E;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral67A259F304E2092F70DB1D23B44E7E844A4A8365;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB991168362F6F6217558DEDAD35C480D6B523C;
IL2CPP_EXTERN_C String_t* _stringLiteral8AEF35B4D1778407DD318B95E28D5C52594A31FA;
IL2CPP_EXTERN_C String_t* _stringLiteral90C285823967F4BB319AA93A10BBA680529F1E2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC4CAD2EE688756442F133610DECC9EF98A0A1D;
IL2CPP_EXTERN_C String_t* _stringLiteralD368221222123B4D9D426DC9D6DBC9E02A655C26;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14;
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350;
struct int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8;
struct int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F;
struct int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184;
struct CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C;
struct BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7;
struct TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE;
struct Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44;
struct TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264;
struct TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A;
struct BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166;
struct ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B;
struct ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44;
struct JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E;
struct TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6;
struct TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB;
struct CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8;
struct CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0;
struct LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2;
struct PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115;
struct PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016  : public RuntimeObject
{
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E  : public RuntimeObject
{
};
struct EmptyArray_1_t5D64CDB38E9BC651C8728695C6D0949FFDA864CC  : public RuntimeObject
{
};
struct EmptyArray_1_t6EF0DB735E40251F6DDFDAA3DBCE13757E3630B7  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EmptyArray_1_tB9CE11D20D32521AB83609C42537BFB49B249794  : public RuntimeObject
{
};
struct EmptyArray_1_t36D598E1DC818CD3452B591DF1FB0D15E184AB4A  : public RuntimeObject
{
};
struct EmptyArray_1_tA9F21BBA05B1C0F2F44D3B7241C8EF7738405ACB  : public RuntimeObject
{
};
struct EmptyArray_1_t507F360D1773D47A3D4EC6D967444D3F484ECF64  : public RuntimeObject
{
};
struct EmptyArray_1_t110707ABA4473D816A2028A4C0AE00293A541767  : public RuntimeObject
{
};
struct EmptyArray_1_t55E63C31F7292F0E27BA82968C2CE1DE151F8437  : public RuntimeObject
{
};
struct EmptyArray_1_tBDBEC0E97A57956862232508CF7EE7DB97C4F33D  : public RuntimeObject
{
};
struct EmptyArray_1_t8E932C0E3F71BFEF8F7B403C88AD488CF5FB6893  : public RuntimeObject
{
};
struct EmptyArray_1_t1FED3FDB097A3190FE996FD44CCDE8BA3540FA34  : public RuntimeObject
{
};
struct EmptyArray_1_tD4EDE6DCD201BEDB32E7D8039F9D1238A2A87E3F  : public RuntimeObject
{
};
struct EmptyArray_1_t35B0092BC5943603A9DAA4F29619414C79CF60FF  : public RuntimeObject
{
};
struct EmptyArray_1_tD691CE4C97FEE06B67ACBF4E35E7896E1150742D  : public RuntimeObject
{
};
struct EmptyArray_1_t7619D9CE58F36449BA5F98F45B91F54257C625D0  : public RuntimeObject
{
};
struct EmptyArray_1_t862BABF3853CA37787E211271876A549D8F3ADA0  : public RuntimeObject
{
};
struct EmptyArray_1_t0817E0A0ECC3A931A3E5D2899F16D9F0726D27A7  : public RuntimeObject
{
};
struct EmptyArray_1_tA2F78F09AE613D9B933FE2EEA4128586E7C96200  : public RuntimeObject
{
};
struct EmptyArray_1_t38FAFDB42E4C6A7D118A86D8307859B951C0787C  : public RuntimeObject
{
};
struct EmptyArray_1_tD663AE0E0EA46779F38B948F772123D03045E226  : public RuntimeObject
{
};
struct EmptyArray_1_t2D92677C7F2B75B810564C211A1B0E657BDF3206  : public RuntimeObject
{
};
struct EmptyArray_1_t1769D9A56B57EBDDC38A2C1A0E47EF8020D4C776  : public RuntimeObject
{
};
struct EmptyArray_1_t30BC65001725F2360565B37E75CD2F1688D40E4B  : public RuntimeObject
{
};
struct EmptyArray_1_t4AEE35D2E3726A46B6EC3BBE8402602C4BF8A706  : public RuntimeObject
{
};
struct EmptyArray_1_tCB6BED9B9589F32A63D3F504B993E00FE14EDE21  : public RuntimeObject
{
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct FixedBuffer4_1_t082521C2A5CA8300E0BD8A78A9FF8D8788140A4D 
{
	float _____0;
	float _____1;
	float _____2;
	float _____3;
};
struct InlinedArray_1_tD4AEEFFEC2CBF49D196A92D16CE8DA15F1532FCD 
{
	int32_t ___length;
	InputProcessor_1_tCC7634AB386F9C6888B89C0FD440251E67C5D8F7* ___firstValue;
	InputProcessor_1U5BU5D_t2D9B681F9F0B39759619A0D4617FB6B20FB10AC0* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 
{
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D 
{
	InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
typedef Il2CppFullySharedGenericStruct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01;
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	RuntimeObject* ___m_Info;
	bool ___m_IsStructContainerType;
	GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* ___m_GetStructValueAction;
	SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* ___m_SetStructValueAction;
	GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* ___m_GetClassValueAction;
	SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* ___m_SetClassValueAction;
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct StyleDataRef_1_tC8A02A984290ED8DA4ACA614C48B3136F056895D 
{
	RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* ___m_Ref;
};
struct UnmanagedRefCountedList_1_t87F605E6E2A53C987FAD9F7FE66842141F83ED97 
{
	union
	{
		struct
		{
			Data_tBBAC62CD211FDD01BE331E13953455EC5AD3E38F* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct UnmanagedRefCountedList_1_tBAFC6325EE6254F71867CBB35AC9CEFBA926FDEA 
{
	union
	{
		struct
		{
			Data_t91EFD39F1A5E53405108E488D434DB7452B22E8A* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct UnmanagedRefCountedList_1_t99A5F9010AF1EFC3F764B1EA44D4AEF7EC93E8EE 
{
	union
	{
		struct
		{
			Data_tD43A0A802BBF284FB327878A445148A56180D7DA* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct UnmanagedRefCountedList_1_tEAD96F00DAE426BB352AEF0444CE64D11061F281 
{
	union
	{
		struct
		{
			Data_tD47C5E63F8D3918FF6FA9D00969FF044D6E745FD* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct UnmanagedRefCountedList_1_t0988C4F7F135DFD05367A2D439B27EE9F49444A5 
{
	union
	{
		struct
		{
			Data_t9C4189912B5BDF1A4B9AF0427C56C087D271149E* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B 
{
	bool ___isValid;
	uint16_t ___id;
};
struct ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_pinvoke
{
	int32_t ___isValid;
	uint16_t ___id;
};
struct ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_com
{
	int32_t ___isValid;
	uint16_t ___id;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF 
{
	FieldInfo_t* ___m_FieldInfo;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_pinvoke
{
	FieldInfo_t* ___m_FieldInfo;
	char* ___U3CNameU3Ek__BackingField;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_com
{
	FieldInfo_t* ___m_FieldInfo;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
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
struct MethodBase_t  : public MemberInfo_t
{
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 
{
	PropertyInfo_t* ___m_PropertyInfo;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_pinvoke
{
	PropertyInfo_t* ___m_PropertyInfo;
	char* ___U3CNameU3Ek__BackingField;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_com
{
	PropertyInfo_t* ___m_PropertyInfo;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RequiredMemberAttribute_t34DF07D029354F5A18A8A3E5CE690095E245BE23  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 
{
	double ___x;
	double ___y;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93 
{
	uint8_t* ___srcPtr;
	uint8_t* ___dstPtr;
	int32_t ___byteSize;
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
struct NativeColorId_tC2A21D165C258872CC3EEB668F4CF4D08C37237A 
{
	int32_t ___isValid;
	uint16_t ___id;
	uint16_t ____pad;
};
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct U3CancestorHashesU3Ee__FixedBuffer_tF8EBB16B292C4847BB0FA963C4ED97699D894985 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CancestorHashesU3Ee__FixedBuffer_tF8EBB16B292C4847BB0FA963C4ED97699D894985__padding[16];
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
struct ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 
{
	intptr_t ____value;
};
struct ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 
{
	intptr_t ____value;
};
struct ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B 
{
	intptr_t ____value;
};
struct ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC 
{
	intptr_t ____value;
};
struct ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E 
{
	intptr_t ____value;
};
struct ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 
{
	intptr_t ____value;
};
struct ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E 
{
	intptr_t ____value;
};
struct ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 
{
	intptr_t ____value;
};
struct ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E 
{
	intptr_t ____value;
};
struct ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E 
{
	intptr_t ____value;
};
struct ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 
{
	intptr_t ____value;
};
struct ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 
{
	intptr_t ____value;
};
struct ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E 
{
	intptr_t ____value;
};
struct ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 
{
	intptr_t ____value;
};
struct ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 
{
	intptr_t ____value;
};
struct ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 
{
	intptr_t ____value;
};
struct ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 
{
	intptr_t ____value;
};
struct ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 
{
	intptr_t ____value;
};
struct ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF 
{
	intptr_t ____value;
};
struct ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 
{
	intptr_t ____value;
};
struct ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F 
{
	intptr_t ____value;
};
struct ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB 
{
	intptr_t ____value;
};
struct ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D 
{
	intptr_t ____value;
};
struct ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 
{
	intptr_t ____value;
};
struct ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimationPlayState_t0379C839FFED72546E418CB2F8721A8FF574F944 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92  : public RequiredMemberAttribute_t34DF07D029354F5A18A8A3E5CE690095E245BE23
{
	bool ___U3CReadOnlyU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	union
	{
		struct
		{
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Texture;
			int32_t ___m_DefaultCursorId;
			int32_t _____dummy;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
		};
		uint8_t Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82__padding[24];
	};
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
struct DrawPhase_t486494E09E3D14AEF7D5544440BD869D73BB7DA7 
{
	uint8_t ___value__;
};
struct EditorTextRenderingMode_tDAF3F89A6026D9F460A8C3DA671388E2E7DC2636 
{
	int32_t ___value__;
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
struct FontStyle_tDD46734FA9BCB99FB315CD7CAD1137EE536136D1 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	int32_t ___value__;
};
struct LayoutAlign_t0346F8DE31382DC434069A4196A07E59BABA1D8A 
{
	int32_t ___value__;
};
struct LayoutDirection_t497B5D8A2EDA4BB4E634A27164FFE3DE67250D32 
{
	int32_t ___value__;
};
struct LayoutDisplay_tA24DA9245066E6634F7D82DA1E6D12B3ACD08C50 
{
	int32_t ___value__;
};
struct LayoutFlexDirection_t3246E4A8D1C552BBFEB1AD5D677C4B1D95710756 
{
	int32_t ___value__;
};
struct LayoutJustify_tD94495C723C57C38901108035F0468A378DDAB07 
{
	int32_t ___value__;
};
struct LayoutOverflow_t5D718990A0CA5CE235100545149F829DDAA54DDC 
{
	int32_t ___value__;
};
struct LayoutPositionType_tCC1B9C72281C6DE838F4E70A08EE777A87C2A0EE 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct LayoutWrap_t1886074E218FE26A3050950BA062ADFC9DF75CCA 
{
	int32_t ___value__;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct OverflowClipBox_t216E14FDAB321AF2B7F0DB6E22760D7724BDAA83 
{
	int32_t ___value__;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct SelectorAccelerationTableType_t29E86C4FCF992B838F757327FF6002927A251B9A 
{
	int32_t ___value__;
};
struct SliceType_t3B956F5238654377429A4450F777895156359AD3 
{
	int32_t ___value__;
};
struct StyleDataType_t61C9F04640F00A8820A5B0B077936AC430126C69 
{
	int32_t ___value__;
};
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextGeneratorType_tECF6375E835B62343CEDA8229619FCE1B887C52B 
{
	int32_t ___value__;
};
struct TextOverflow_tF5F972A9B8C1DF48FD3E878216CE6B4F94B94ADA 
{
	int32_t ___value__;
};
struct TextOverflowPosition_tB30616AE6E61CCEF425E41C8CD5110EC2547DF02 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
};
#pragma pack(push, tp, 1)
struct TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 
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
					int32_t ___touchId;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___touchId_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[4];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[4];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___delta_OffsetPadding[12];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___delta_OffsetPadding_forAlignmentOnly[12];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pressure_OffsetPadding[20];
					float ___pressure;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pressure_OffsetPadding_forAlignmentOnly[20];
					float ___pressure_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___radius_OffsetPadding[24];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___radius_OffsetPadding_forAlignmentOnly[24];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___phaseId_OffsetPadding[32];
					uint8_t ___phaseId;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___phaseId_OffsetPadding_forAlignmentOnly[32];
					uint8_t ___phaseId_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___tapCount_OffsetPadding[33];
					uint8_t ___tapCount;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___tapCount_OffsetPadding_forAlignmentOnly[33];
					uint8_t ___tapCount_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___displayIndex_OffsetPadding[34];
					uint8_t ___displayIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___displayIndex_OffsetPadding_forAlignmentOnly[34];
					uint8_t ___displayIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___flags_OffsetPadding[35];
					uint8_t ___flags;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___flags_OffsetPadding_forAlignmentOnly[35];
					uint8_t ___flags_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___updateStepCount_OffsetPadding[36];
					uint32_t ___updateStepCount;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___updateStepCount_OffsetPadding_forAlignmentOnly[36];
					uint32_t ___updateStepCount_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startTime_OffsetPadding[40];
					double ___startTime;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startTime_OffsetPadding_forAlignmentOnly[40];
					double ___startTime_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startPosition_OffsetPadding[48];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startPosition_OffsetPadding_forAlignmentOnly[48];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_forAlignmentOnly;
				};
			};
		};
		uint8_t TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97__padding[56];
	};
};
#pragma pack(pop, tp)
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 
{
	union
	{
		struct
		{
			UnmanagedRefCountedList_1_t99A5F9010AF1EFC3F764B1EA44D4AEF7EC93E8EE ___transitionDelay;
			UnmanagedRefCountedList_1_t99A5F9010AF1EFC3F764B1EA44D4AEF7EC93E8EE ___transitionDuration;
			UnmanagedRefCountedList_1_tBAFC6325EE6254F71867CBB35AC9CEFBA926FDEA ___transitionProperty;
			UnmanagedRefCountedList_1_t87F605E6E2A53C987FAD9F7FE66842141F83ED97 ___transitionTimingFunction;
		};
		uint8_t TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321__padding[32];
	};
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UnmanagedMaterialDefinition_tE503C7048A337983101358F812123BA5AD468F2D 
{
	union
	{
		struct
		{
			UnmanagedRefCountedList_1_t0988C4F7F135DFD05367A2D439B27EE9F49444A5 ___propertyValues;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___material;
		};
		uint8_t UnmanagedMaterialDefinition_tE503C7048A337983101358F812123BA5AD468F2D__padding[16];
	};
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VertexFlags_t4332E863C191870E63009EBE5F6E77D6D176C4FF 
{
	uint16_t ___value__;
};
struct Visibility_t1AEE2D871B126DD95D6F1D3B36EC92FE0D489F47 
{
	int32_t ___value__;
};
struct WhiteSpace_t05265AA4B0C087FAE778422383EA36AF84EDCDD2 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	int32_t ___value__;
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
struct BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B ___leftColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B ___topColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B ___rightColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B ___bottomColorId;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_pinvoke ___leftColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_pinvoke ___topColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_pinvoke ___rightColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_pinvoke ___bottomColorId;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_com ___leftColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_com ___topColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_com ___rightColorId;
	ColorId_t6B928BC1978476896DCF48B8577984FD37D89F9B_marshaled_com ___bottomColorId;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct DrawFillOptions_tEDFBA1E7E9317CE7533535BC608111EE1E408298 
{
	int32_t ___value__;
};
struct TransformChangeReason_tB8D979EC98187EBE40684E468216D798FBFF12F4 
{
	int32_t ___value__;
};
struct PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	float ___radius;
	float ___elementDepth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 
{
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E 
{
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B 
{
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD 
{
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 
{
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC 
{
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 
{
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 
{
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 
{
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B 
{
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 
{
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D 
{
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 ____pointer;
	int32_t ____length;
};
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9 
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 ___value;
};
struct Span_1_t460D4E78469192619B0075C15897A6987393AAF9 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B ____pointer;
	int32_t ____length;
};
struct Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC ____pointer;
	int32_t ____length;
};
struct Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 
{
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6 
{
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E ____pointer;
	int32_t ____length;
};
struct Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E 
{
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 ____pointer;
	int32_t ____length;
};
struct Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28 
{
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E ____pointer;
	int32_t ____length;
};
struct Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434 
{
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 ____pointer;
	int32_t ____length;
};
struct Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18 
{
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E ____pointer;
	int32_t ____length;
};
struct Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F 
{
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E ____pointer;
	int32_t ____length;
};
struct Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31 
{
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A 
{
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 ____pointer;
	int32_t ____length;
};
struct Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05 
{
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E ____pointer;
	int32_t ____length;
};
struct Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9 
{
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757 
{
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 ____pointer;
	int32_t ____length;
};
struct Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F ____pointer;
	int32_t ____length;
};
struct Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB ____pointer;
	int32_t ____length;
};
struct Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D ____pointer;
	int32_t ____length;
};
struct Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 ____pointer;
	int32_t ____length;
};
struct Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 ____pointer;
	int32_t ____length;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
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
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 
{
	union
	{
		struct
		{
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
			UnmanagedRefCountedList_1_tEAD96F00DAE426BB352AEF0444CE64D11061F281 ___backdropFilter;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___cursor;
			UnmanagedRefCountedList_1_tEAD96F00DAE426BB352AEF0444CE64D11061F281 ___filter;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___unityAnimationClip;
			int32_t ___animationPlayState;
			int32_t ___textOverflow;
			int32_t ___unityOverflowClipBox;
			int32_t ___unitySliceBottom;
			int32_t ___unitySliceLeft;
			int32_t ___unitySliceRight;
			float ___unitySliceScale;
			int32_t ___unitySliceTop;
			int32_t ___unitySliceType;
			int32_t ___unityTextOverflowPosition;
		};
		uint8_t RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26__padding[104];
	};
};
struct SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72 
{
	int32_t ___selectorsStart;
	int32_t ___tableType;
	int32_t ___tableKey;
	int32_t ___ruleIndex;
	int32_t ___selectorIndexInRule;
	int32_t ___orderInStyleSheet;
	int32_t ___importedStyleSheetIndex;
	int32_t ___specificity;
	U3CancestorHashesU3Ee__FixedBuffer_tF8EBB16B292C4847BB0FA963C4ED97699D894985 ___ancestorHashes;
	uint16_t ___selectorCount;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___layoutUV;
	uint16_t ___clipRectId;
	uint16_t ___elementId;
	uint16_t ___dynamicColorOrTextCoreId;
	uint16_t ____reserved2;
	uint16_t ___flags;
	uint16_t ___textureId;
	uint16_t ___svgGradientIndex;
	uint16_t ____reserved;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorId_tC2A21D165C258872CC3EEB668F4CF4D08C37237A ___colorId;
	int32_t ___meshFlags;
	int32_t ___scaleMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvTopLeft;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvTopRight;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvBottomRight;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvBottomLeft;
	int32_t ___uvCornersValid;
};
struct ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A 
{
	PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 ___m_Joint;
	intptr_t ___m_UserData;
};
struct TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_ChangeReason;
};
struct TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct FixedBuffer2_1_t12861AD15AF3145969B4D81CB4DEE2C7C8C24B7C 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 _____0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 _____1;
};
struct FixedBuffer4_1_t09C4FF6DF48E55CF26437F5F52FF7EE09DABEA30 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 _____0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 _____1;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 _____2;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 _____3;
};
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56  : public MulticastDelegate_t
{
};
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39  : public MulticastDelegate_t
{
};
struct RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8  : public MulticastDelegate_t
{
};
struct RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC  : public MulticastDelegate_t
{
};
struct RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55  : public MulticastDelegate_t
{
};
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD 
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 ___value;
};
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7  : public MulticastDelegate_t
{
};
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
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
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MinSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MaxSize;
	int32_t ___m_Mode;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	uint8_t ___phase;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	uint8_t ___phase;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	uint8_t ___phase;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
	intptr_t ___vectorImagePtr;
	intptr_t ___texturePtr;
	int32_t ___userData;
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC 
{
	ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 ___m_BeginEvent;
};
struct ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A 
{
	ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 ___m_EndEvent;
};
struct JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF 
{
	JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 
{
	TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 ___m_BeginEvent;
};
struct TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A 
{
	TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 ___m_EndEvent;
};
struct CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___radius;
	float ___length;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___radius;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___length;
	float ___elementDepth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p7;
	int32_t ___count;
	float ___radius;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tD4AEEFFEC2CBF49D196A92D16CE8DA15F1532FCD ___m_ProcessorStack;
	TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 ___m_CachedValue;
	TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798  : public InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480
{
};
struct InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8  : public InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480
{
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 
{
	union
	{
		struct
		{
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
			UnmanagedMaterialDefinition_tE503C7048A337983101358F812123BA5AD468F2D ___unityMaterial;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___unityFont;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___unityFontDefinition;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
			int32_t ___unityEditorTextRenderingMode;
			int32_t ___unityFontStyleAndWeight;
			int32_t ___unityTextAlign;
			TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___unityTextAutoSize;
			int32_t ___unityTextGenerator;
			float ___unityTextOutlineWidth;
			int32_t ___visibility;
			int32_t ___whiteSpace;
		};
		uint8_t InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67__padding[176];
	};
};
struct LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 
{
	union
	{
		struct
		{
			int32_t ___Direction;
			int32_t ___FlexDirection;
			int32_t ___JustifyContent;
			int32_t ___AlignContent;
			int32_t ___AlignItems;
			int32_t ___AlignSelf;
			int32_t ___PositionType;
			float ___AspectRatio;
			int32_t ___FlexWrap;
			int32_t ___Overflow;
			int32_t ___Display;
			float ___FlexGrow;
			float ___FlexShrink;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___FlexBasis;
			FixedBuffer4_1_t082521C2A5CA8300E0BD8A78A9FF8D8788140A4D ___Border;
			FixedBuffer4_1_t09C4FF6DF48E55CF26437F5F52FF7EE09DABEA30 ___Position;
			FixedBuffer4_1_t09C4FF6DF48E55CF26437F5F52FF7EE09DABEA30 ___Margin;
			FixedBuffer4_1_t09C4FF6DF48E55CF26437F5F52FF7EE09DABEA30 ___Padding;
			FixedBuffer2_1_t12861AD15AF3145969B4D81CB4DEE2C7C8C24B7C ___MaxDimensions;
			FixedBuffer2_1_t12861AD15AF3145969B4D81CB4DEE2C7C8C24B7C ___MinDimensions;
			FixedBuffer2_1_t12861AD15AF3145969B4D81CB4DEE2C7C8C24B7C ___Dimensions;
		};
		uint8_t LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440__padding[224];
	};
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 
{
	union
	{
		struct
		{
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___scale;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___rotate;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___translate;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
		};
		uint8_t TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808__padding[88];
	};
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_pinvoke
{
	union
	{
		struct
		{
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___scale;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___rotate;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___translate;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
		};
		uint8_t TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808__padding[88];
	};
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_com
{
	union
	{
		struct
		{
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___scale;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___rotate;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___translate;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
		};
		uint8_t TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808__padding[88];
	};
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B 
{
	union
	{
		struct
		{
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___backgroundImage;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
			float ___opacity;
		};
		uint8_t VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B__padding[176];
	};
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_pinvoke
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_com
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com ___m_BodyUpdateEvent;
};
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44 
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 ___value;
};
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1 
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 ___value;
};
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D 
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 ___value;
};
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A 
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B ___value;
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___Value;
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___Value;
};
struct EmptyArray_1_t5D64CDB38E9BC651C8728695C6D0949FFDA864CC_StaticFields
{
	VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___Value;
};
struct EmptyArray_1_t6EF0DB735E40251F6DDFDAA3DBCE13757E3630B7_StaticFields
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EmptyArray_1_tB9CE11D20D32521AB83609C42537BFB49B249794_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___Value;
};
struct EmptyArray_1_t36D598E1DC818CD3452B591DF1FB0D15E184AB4A_StaticFields
{
	double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* ___Value;
};
struct EmptyArray_1_tA9F21BBA05B1C0F2F44D3B7241C8EF7738405ACB_StaticFields
{
	float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* ___Value;
};
struct EmptyArray_1_t507F360D1773D47A3D4EC6D967444D3F484ECF64_StaticFields
{
	int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* ___Value;
};
struct EmptyArray_1_t110707ABA4473D816A2028A4C0AE00293A541767_StaticFields
{
	int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* ___Value;
};
struct EmptyArray_1_t55E63C31F7292F0E27BA82968C2CE1DE151F8437_StaticFields
{
	int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* ___Value;
};
struct EmptyArray_1_tBDBEC0E97A57956862232508CF7EE7DB97C4F33D_StaticFields
{
	CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* ___Value;
};
struct EmptyArray_1_t8E932C0E3F71BFEF8F7B403C88AD488CF5FB6893_StaticFields
{
	BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* ___Value;
};
struct EmptyArray_1_t1FED3FDB097A3190FE996FD44CCDE8BA3540FA34_StaticFields
{
	TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* ___Value;
};
struct EmptyArray_1_tD4EDE6DCD201BEDB32E7D8039F9D1238A2A87E3F_StaticFields
{
	Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* ___Value;
};
struct EmptyArray_1_t35B0092BC5943603A9DAA4F29619414C79CF60FF_StaticFields
{
	TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* ___Value;
};
struct EmptyArray_1_tD691CE4C97FEE06B67ACBF4E35E7896E1150742D_StaticFields
{
	TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* ___Value;
};
struct EmptyArray_1_t7619D9CE58F36449BA5F98F45B91F54257C625D0_StaticFields
{
	BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* ___Value;
};
struct EmptyArray_1_t862BABF3853CA37787E211271876A549D8F3ADA0_StaticFields
{
	ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* ___Value;
};
struct EmptyArray_1_t0817E0A0ECC3A931A3E5D2899F16D9F0726D27A7_StaticFields
{
	ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* ___Value;
};
struct EmptyArray_1_tA2F78F09AE613D9B933FE2EEA4128586E7C96200_StaticFields
{
	JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* ___Value;
};
struct EmptyArray_1_t38FAFDB42E4C6A7D118A86D8307859B951C0787C_StaticFields
{
	TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* ___Value;
};
struct EmptyArray_1_tD663AE0E0EA46779F38B948F772123D03045E226_StaticFields
{
	TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* ___Value;
};
struct EmptyArray_1_t2D92677C7F2B75B810564C211A1B0E657BDF3206_StaticFields
{
	CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* ___Value;
};
struct EmptyArray_1_t1769D9A56B57EBDDC38A2C1A0E47EF8020D4C776_StaticFields
{
	CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* ___Value;
};
struct EmptyArray_1_t30BC65001725F2360565B37E75CD2F1688D40E4B_StaticFields
{
	LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* ___Value;
};
struct EmptyArray_1_t4AEE35D2E3726A46B6EC3BBE8402602C4BF8A706_StaticFields
{
	PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* ___Value;
};
struct EmptyArray_1_tCB6BED9B9589F32A63D3F504B993E00FE14EDE21_StaticFields
{
	PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA_StaticFields
{
	int32_t ___k_Type;
	int32_t ___k_SizeOf;
	int32_t ___k_IntDataCount;
	InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 ___k_Default;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4_StaticFields
{
	int32_t ___k_Type;
	int32_t ___k_SizeOf;
	int32_t ___k_IntDataCount;
	LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 ___k_Default;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3_StaticFields
{
	int32_t ___k_Type;
	int32_t ___k_SizeOf;
	int32_t ___k_IntDataCount;
	RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 ___k_Default;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3_StaticFields
{
	int32_t ___k_Type;
	int32_t ___k_SizeOf;
	int32_t ___k_IntDataCount;
	TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 ___k_Default;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E_StaticFields
{
	int32_t ___k_Type;
	int32_t ___k_SizeOf;
	int32_t ___k_IntDataCount;
	TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 ___k_Default;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC_StaticFields
{
	int32_t ___k_Type;
	int32_t ___k_SizeOf;
	int32_t ___k_IntDataCount;
	VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B ___k_Default;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_StaticFields
{
	Comparison_1_tF2EA38711BF4E71781108F0D7BD2B99D225BCE80* ___Comparison;
	RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* ___RefComparison;
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
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_StaticFields
{
	double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___zero;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_StaticFields
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___zero;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D_StaticFields
{
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___zero;
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
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_StaticFields
{
	LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 ___Default;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 m_Items[1];

	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 value)
	{
		m_Items[index] = value;
	}
};
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
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
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14  : public RuntimeArray
{
	ALIGN_FIELD (8) double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 m_Items[1];

	inline double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 value)
	{
		m_Items[index] = value;
	}
};
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350  : public RuntimeArray
{
	ALIGN_FIELD (8) float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 m_Items[1];

	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 value)
	{
		m_Items[index] = value;
	}
};
struct int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8  : public RuntimeArray
{
	ALIGN_FIELD (8) int2_tB123E869131C6102341F8F9AA01726E0E7C2768D m_Items[1];

	inline int2_tB123E869131C6102341F8F9AA01726E0E7C2768D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int2_tB123E869131C6102341F8F9AA01726E0E7C2768D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D value)
	{
		m_Items[index] = value;
	}
};
struct int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F  : public RuntimeArray
{
	ALIGN_FIELD (8) int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 m_Items[1];

	inline int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 value)
	{
		m_Items[index] = value;
	}
};
struct int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184  : public RuntimeArray
{
	ALIGN_FIELD (8) int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 m_Items[1];

	inline int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 value)
	{
		m_Items[index] = value;
	}
};
struct CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C  : public RuntimeArray
{
	ALIGN_FIELD (8) CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93 m_Items[1];

	inline CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93 value)
	{
		m_Items[index] = value;
	}
};
struct BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7  : public RuntimeArray
{
	ALIGN_FIELD (8) BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D m_Items[1];

	inline BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D value)
	{
		m_Items[index] = value;
	}
};
struct TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE  : public RuntimeArray
{
	ALIGN_FIELD (8) TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 m_Items[1];

	inline TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 value)
	{
		m_Items[index] = value;
	}
};
struct Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44  : public RuntimeArray
{
	ALIGN_FIELD (8) Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF m_Items[1];

	inline Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF value)
	{
		m_Items[index] = value;
	}
};
struct TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264  : public RuntimeArray
{
	ALIGN_FIELD (8) TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 m_Items[1];

	inline TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 value)
	{
		m_Items[index] = value;
	}
};
struct TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A  : public RuntimeArray
{
	ALIGN_FIELD (8) TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 m_Items[1];

	inline TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 value)
	{
		m_Items[index] = value;
	}
};
struct BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166  : public RuntimeArray
{
	ALIGN_FIELD (8) BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 m_Items[1];

	inline BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 value)
	{
		m_Items[index] = value;
	}
};
struct ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC m_Items[1];

	inline ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC value)
	{
		m_Items[index] = value;
	}
};
struct ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A m_Items[1];

	inline ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A value)
	{
		m_Items[index] = value;
	}
};
struct JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E  : public RuntimeArray
{
	ALIGN_FIELD (8) JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF m_Items[1];

	inline JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF value)
	{
		m_Items[index] = value;
	}
};
struct TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6  : public RuntimeArray
{
	ALIGN_FIELD (8) TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 m_Items[1];

	inline TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 value)
	{
		m_Items[index] = value;
	}
};
struct TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB  : public RuntimeArray
{
	ALIGN_FIELD (8) TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A m_Items[1];

	inline TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A value)
	{
		m_Items[index] = value;
	}
};
struct CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8  : public RuntimeArray
{
	ALIGN_FIELD (8) CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E m_Items[1];

	inline CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E value)
	{
		m_Items[index] = value;
	}
};
struct CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0  : public RuntimeArray
{
	ALIGN_FIELD (8) CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 m_Items[1];

	inline CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 value)
	{
		m_Items[index] = value;
	}
};
struct LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2  : public RuntimeArray
{
	ALIGN_FIELD (8) LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 m_Items[1];

	inline LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 value)
	{
		m_Items[index] = value;
	}
};
struct PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115  : public RuntimeArray
{
	ALIGN_FIELD (8) PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 m_Items[1];

	inline PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 value)
	{
		m_Items[index] = value;
	}
};
struct PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18  : public RuntimeArray
{
	ALIGN_FIELD (8) PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 m_Items[1];

	inline PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_left, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E_gshared (Il2CppSharedGenericObject** ___0_destination, Il2CppSharedGenericObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mE5B2C52769EDE045F2577ADB3ADD9A1CF5999927 (double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* ___0_destination, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* Array_Empty_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mD7351894C422FD84130C44C695C7D6DA4604C170_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m09F99891F770930782E4C039300A5D475EEE9A99 (float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___0_destination, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* Array_Empty_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mFF5FD82D645331DAD440EA02061FA06762861A4D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC7B857CDC6A072A32945530F9D36320CBE071E83 (int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___0_destination, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* Array_Empty_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC8B23EACBA3AF3BD73FB4E99E16BBF4124FC07F7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4FF09229E021E79AB3601AFA9865CFB2FF0FA705 (int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___0_destination, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* Array_Empty_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4DC5C50A1BD1D2394223035DD2D6F24AB4F758AC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m3FA480905D3832BFC57B216E6655237923C5C72B (int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* ___0_destination, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* Array_Empty_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mB74DD69930C5B7D7471484F342DEF795E765B85A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_m2ED898FC1D3AC4604D483DC7ED8D5CF5AE08E6AC (CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* ___0_destination, CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* Array_Empty_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_mE757E1AA65E80785446556426840F6533156FE25_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0 (BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_destination, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* Array_Empty_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mFEFA48960FFA5F901A995538B728C31718842335_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE (TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_destination, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* Array_Empty_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA99C337890AF264084717B5AFADC848638F58665_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE (Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_destination, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* Array_Empty_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m773ADBF9E2B07E505ACAC896769DCC8C952EAAC2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mE9356EFC995C91F1F68E7014F63C01ACE44A92FD (TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___0_destination, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* Array_Empty_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2B94F34A92C08A3CE8206FE64FFC16E41FEFD896_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m3BDDDFA56B678A3F6CD9367229A2AB2DD655DBC6 (TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___0_destination, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* Array_Empty_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m75584547F5E98D337086D729A5763DF7208584F1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m18BC246A3E2FFC089BAEC08B8D3687BB57C1AFA0 (BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ___0_destination, BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* Array_Empty_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_mBAA221AAA40C49D352B30E0C85FCCDAC43BDE87A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m3BA9BCA32F825FF35D49D9750CB97FD36423FEAE (ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ___0_destination, ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* Array_Empty_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m58A6111002D80C622DDC926C5C82A9B6E073CF2E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m153FD379A473F081F8F4034F9A3BD8D7C77C4250 (ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ___0_destination, ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* Array_Empty_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m92FCB0D0A9B633E1630815326903D9A2ACF5FCB5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m6767CF285BBDBBAC312EEBC7DF05904C03206D04 (JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ___0_destination, JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* Array_Empty_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m08CC1C892BC9DDB814A3E1280ABE5D319B561552_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_mC7369972D7C29F4E9A0BF1C43373772035484C5A (TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ___0_destination, TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* Array_Empty_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m71B89F046A32E33B23E36FDFFAF080A134900C52_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m84450478D3370688499D5259748C93A6F42F4380 (TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ___0_destination, TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* Array_Empty_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m63D30574F41CEDB52830394088C6A9B85051E000_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9978769A30A23555B7484A5BF39FD62F50734CD0 (CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* ___0_destination, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* Array_Empty_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m7BB2577DAF99987D952BF456168D30CB2984111F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mBE843C8D3F1594DAA3685F0F40EA7AC2617FA01F (CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* ___0_destination, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* Array_Empty_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m65292F3D2977B5BFC00B694183387447DC47AC22_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8B55F465541EFB55C267F9ED9D279673603D6B86 (LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* ___0_destination, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* Array_Empty_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AF5F83A171B2A0940684FA1B098063FEF5F3F62_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m2324A006C0CF902BAA1CAAB0BD55B0B9767D72E5 (PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* ___0_destination, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* Array_Empty_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m1756BA292F193E432E2209DEC922CC54B91C28B5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m0A4EB1FDAC59253300D8EA7C3EBC00D9165BBB60 (PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* ___0_destination, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* Array_Empty_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mB048C0209901507C7E3FF27596E2221297332DC3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Record_get_recordIndex_m0BB1165AB0817E19186261B80CEBC3B9B8BC75EC_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___0_owner, int32_t ___1_index, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___2_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 InputStateHistory_ReadValue_TisTouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97_mBF51236691ADD46F7A6501AA3951A0C453C4795C (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeMemoryPtrUnchecked_m52990CD3C2FF0DB8735E39A95B877923A6D6F5A0 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeExtraMemoryPtrUnchecked_m43B2E6AC3AF2307D2DDF2C92E90A629666277F66 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_get_valid_mBA8E68867067FE8B51F4DA6B9BD6A4926418AE8C (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_mCFF126DD568EA648A8BA307BC1FB676597986C7A (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3* Record_get_control_m5FA21546D78E360D3A5FF4190AC3A07C9A6C74F2 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 Record_ReadValue_mA4F2FFE56E7F28BF41E48C79A47CF6CD1F874E4A (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Record_get_time_m5976C10C2C3A2A2089D57F1DF9AE5557C10DF47E (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Record_ToString_m8F86BC9A48C4262405B37FA195868965AD3E566D (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_m982576B6A0444BC40CD4742937A6E31DB2C4C668_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Record_GetHashCode_m5A566222F9BAF8C0DE94FE08A30EE5466A44E19E_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Record_ToString_mC6664AF6A40866414A8D5EE160B6C93BD3170BA9_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* RefCounted_Create_m9A80FBE31EF1C91D39E51F95EF275D6BC5FAEFF6 (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* RefCounted_Create_mC56A498828CC9C59F184070685A993EC2ACC8772 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* RefCounted_Create_mE6EC70587FE53B656EAFE04F9D850DA5B3B6C8AD (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* RefCounted_Create_m563C542302977FD0F7B397856A7C036D8E333C29 (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* RefCounted_Create_m9ED53DBFEEB54830601677E6FAA4A5506359B8A0 (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* RefCounted_Create_m0BA0AAE0A0BBD8F28E57A9E2BE2C641ADE50B57B (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mAE20D3F99534D14AD6797601E32CC1736C979D1B (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE ___0_left, ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE, ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m189490571FC19845148BCEDC568782AE1686FD91 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 ___0_left, ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6, ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_inline (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_inline (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A*, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m5B445CA901BBC88DCCBECDD1FEA070AC11B44D38 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A ___0_left, ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A, ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_inline (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006*, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m0AD6B888611C0269980F6748904425853D6AA912 (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___0_left, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mE87FEC85744938B2FEE3E95ED49EA79A9A82EFB4_inline (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E (Il2CppSharedGenericObject** ___0_destination, Il2CppSharedGenericObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject**, Il2CppSharedGenericObject**, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mF5DF18953F36EB9AACBDD52097208A1C300913F4_inline (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, Il2CppSharedGenericObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905*, Il2CppSharedGenericObject**, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline (const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline bool ReadOnlySpan_1_op_Equality_mCC3D9C5DEDAC30D9D078F184D82ADE31EB01CACA (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 ___0_left, ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905, ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m0DD2ADC05EFC779C90C83F2D66E98A58B5DC26B5_inline (Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24 (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mB87C3180669CF3AE950AB596F7DD0EA8F8060492_inline (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* (*) (const RuntimeMethod*))Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_gshared_inline)(method);
}
inline bool ReadOnlySpan_1_op_Equality_m4872DDA55176D5F6754C9F426FE12934FB7C2419 (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E ___0_left, ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E, ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m3F55D64B714E060047FF4F98203E3203A4B7646E_inline (Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mE5B2C52769EDE045F2577ADB3ADD9A1CF5999927 (double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* ___0_destination, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m3A63F17254FC3DF2E00CCC692812D8C72DF3784D_inline (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B*, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* Array_Empty_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mD7351894C422FD84130C44C695C7D6DA4604C170_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF7633EA1F19630649B8966908392710B069279F8 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B ___0_left, ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B, ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m7AD50C87FFE875E7D2FF11A4CF9CACAAE94939D5_inline (Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m09F99891F770930782E4C039300A5D475EEE9A99 (float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___0_destination, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m4323390AF4AE396A90C5B1727C6AA4CA5043E794_inline (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD*, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* Array_Empty_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mFF5FD82D645331DAD440EA02061FA06762861A4D_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF7E39C05BBFED35C460DAA963E9E5FA4D281DC02 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD ___0_left, ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD, ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m5402FB8841522654101217DE977F5EACB40EE395_inline (Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC7B857CDC6A072A32945530F9D36320CBE071E83 (int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___0_destination, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mBD5467EA1FFA19ADC77EDADD51889507AE4EA054_inline (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3*, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* Array_Empty_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC8B23EACBA3AF3BD73FB4E99E16BBF4124FC07F7_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mD6BE4F332174C1599E7C2482DD831A0075DF6315 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 ___0_left, ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3, ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m43013486A907360A2A22B0CEE830D49B5B26C95F_inline (Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4FF09229E021E79AB3601AFA9865CFB2FF0FA705 (int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___0_destination, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mC22A24718575E6E7646443807D6F2189CEAF76C1_inline (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC*, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* Array_Empty_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4DC5C50A1BD1D2394223035DD2D6F24AB4F758AC_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF1273621D0EEE17A95A86B5F40579C96FA9AC1DD (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC ___0_left, ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC, ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m1AF6A9179A2A7FFDC1A8627B60150E30B25053C4_inline (Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m3FA480905D3832BFC57B216E6655237923C5C72B (int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* ___0_destination, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m5172C7FEA350105C42035E417D11C9CEC7720AF4_inline (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7*, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* Array_Empty_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mB74DD69930C5B7D7471484F342DEF795E765B85A_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m4A8F9991F25E8CB8907F98FE337B2B06E5550D3F (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 ___0_left, ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7, ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mE664ADB27D5673D9074907A6AC1CFEBA0DC5EA0D_inline (Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_m2ED898FC1D3AC4604D483DC7ED8D5CF5AE08E6AC (CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* ___0_destination, CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m91BD2B300F5D1A98B69990385CD81A21EC8F5B5B_inline (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18*, CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* Array_Empty_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_mE757E1AA65E80785446556426840F6533156FE25_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m01AFC050BE60BBC51DD803A947751EE3D013D9EC (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 ___0_left, ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18, ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mF1E83F76487E8193B8015DE8FCE05A479114E769_inline (Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0 (BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_destination, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m68A476F8A504CB4DC92AF2972F50EBB5676C43B0_inline (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88*, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* Array_Empty_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mFEFA48960FFA5F901A995538B728C31718842335_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m96A2E0481353DA6A9D8B0B025FD8BDAFE559817E (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 ___0_left, ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88, ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mF8B1105F32BF5512B56E8CBDBE60FD686EE7C151_inline (Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE (TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_destination, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB414AC626E6707DB9114C3B08B2363092496F4DB_inline (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B*, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* Array_Empty_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA99C337890AF264084717B5AFADC848638F58665_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mED0C8BBC069F18B83B27BB415715FC09842A281F (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B ___0_left, ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B, ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m553FE2497BA07FCBB0EAA5C96339ED4281950592_inline (Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE (Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_destination, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m70360B57D6E2C07FBB696FF7C6B140718228E7C9_inline (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0*, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* Array_Empty_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m773ADBF9E2B07E505ACAC896769DCC8C952EAAC2_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mDE560B84F0A26DC7C1D6D5B45AA0BD35403686F7 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 ___0_left, ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0, ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m837D39395B41292FD42A4C8440B0CF2FCEACF63C_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mE9356EFC995C91F1F68E7014F63C01ACE44A92FD (TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___0_destination, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mF6559C79A40F333398BADB37F314B3377ED80DBD_inline (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD*, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* Array_Empty_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2B94F34A92C08A3CE8206FE64FFC16E41FEFD896_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m1B2862A8EF67D4678988FAB331A34DE03C0B2AB1 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD ___0_left, ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD, ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m23D3155143CC1526C7A904C5D00B8E91BC807785_inline (Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m3BDDDFA56B678A3F6CD9367229A2AB2DD655DBC6 (TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___0_destination, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m00E19411A1DA4219905A9D0F310A0F5EFE91452E_inline (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D*, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* Array_Empty_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m75584547F5E98D337086D729A5763DF7208584F1_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mA409BD2C1E701E5F6E9F07272324A5CBB4CBD885 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D ___0_left, ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D, ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mB8D6DC684227BC3DC2A01E24AC8328E292792606_inline (Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m18BC246A3E2FFC089BAEC08B8D3687BB57C1AFA0 (BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ___0_destination, BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mD3089C4AF8BE4035B994BDFBEC9A9CAFA8CB265B_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1*, BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* Array_Empty_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_mBAA221AAA40C49D352B30E0C85FCCDAC43BDE87A_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m6856D87C72E706B448D244EE0B1EF4259A182699 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 ___0_left, ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1, ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m1441A9353CECB931EBDA97BCF2C7508CDB9BD4A8_inline (Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m3BA9BCA32F825FF35D49D9750CB97FD36423FEAE (ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ___0_destination, ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m4C6CC6D30209938BC19156C6F85502199EC49ED4_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42*, ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* Array_Empty_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m58A6111002D80C622DDC926C5C82A9B6E073CF2E_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m0FEB17F2AEA2B5972F95F6A7A8A8EA18AFACC1B7 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 ___0_left, ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42, ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m0AD1DB021C04574974A6E80E0085E34CC13B8DA3_inline (Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m153FD379A473F081F8F4034F9A3BD8D7C77C4250 (ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ___0_destination, ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m9039EBF76947D375B56C4F07CBA81BDECB9BC3AE_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360*, ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* Array_Empty_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m92FCB0D0A9B633E1630815326903D9A2ACF5FCB5_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mA7324C0FF66415919E90638B27E56748E6B71AC2 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 ___0_left, ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360, ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m70E23654E8CB62EA909EBE35A2725216426CDC8C_inline (Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m6767CF285BBDBBAC312EEBC7DF05904C03206D04 (JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ___0_destination, JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m4D6AB0B6AD175C1EA54B7A8B073D0A107C35F7C5_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B*, JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* Array_Empty_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m08CC1C892BC9DDB814A3E1280ABE5D319B561552_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m503523B13A92F5642F25ED4EB0A350353F3BB7A7 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B ___0_left, ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B, ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m48A4699144480E2412ACDB27540CE6E223FDE180_inline (Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_mC7369972D7C29F4E9A0BF1C43373772035484C5A (TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ___0_destination, TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m2FAC2A6042FF54E58FCE6FA46894B654C463A9A2_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6*, TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* Array_Empty_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m71B89F046A32E33B23E36FDFFAF080A134900C52_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m1B9D0C3880192DADA46556C5E5AD520F7A83270E (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 ___0_left, ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6, ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mC82BE656FB6C3944CDACEFFE61C57838A42AC65A_inline (Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m84450478D3370688499D5259748C93A6F42F4380 (TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ___0_destination, TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m004E1664553EC2187EE15EA6208D7E911085778B_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377*, TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* Array_Empty_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m63D30574F41CEDB52830394088C6A9B85051E000_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m3149F4D5B719881491AA225AC949DCE4486B8BB5 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 ___0_left, ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377, ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m2DCE95B7B5FB2FFADFDAB65FF2CDFEF5319C637A_inline (Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9978769A30A23555B7484A5BF39FD62F50734CD0 (CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* ___0_destination, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m7137C117AE03D531CDB3B2064C00B8267E6FACF0_inline (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A*, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* Array_Empty_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m7BB2577DAF99987D952BF456168D30CB2984111F_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m0068C3A40B289B4CFCF016E630DA57280BCD5433 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A ___0_left, ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A, ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mEC524ECFE2671AB0409E6BFE4D02A0913CD301B4_inline (Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mBE843C8D3F1594DAA3685F0F40EA7AC2617FA01F (CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* ___0_destination, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m94483C496A2F1BC4FB1666B2D49A273A58047BE3_inline (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE*, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* Array_Empty_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m65292F3D2977B5BFC00B694183387447DC47AC22_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF2921BDF8193F5F91B3FD6EE1200F144E44DAA95 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE ___0_left, ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE, ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mFE869BB22348BD895B3026AEC99D7C3BD47A9B4E_inline (Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8B55F465541EFB55C267F9ED9D279673603D6B86 (LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* ___0_destination, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m94D331FACB81B16B5A8B53A0CBBC1B89F4C9FC08_inline (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B*, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* Array_Empty_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AF5F83A171B2A0940684FA1B098063FEF5F3F62_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mC55A8136D367638DA49062FC3A5CFC65D8ECB4AE (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B ___0_left, ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B, ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m4D14532C649F00E0AB18ED9138D0319E489FC85D_inline (Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m2324A006C0CF902BAA1CAAB0BD55B0B9767D72E5 (PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* ___0_destination, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m73AD5327FFB0ECD982D40208F256B5A3C9E63E12_inline (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3*, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* Array_Empty_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m1756BA292F193E432E2209DEC922CC54B91C28B5_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m7F18B1D59850E0EAE5E9DD3D75AF587238A6B7DC (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 ___0_left, ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3, ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mB83468B4122A53ED969B7D57062C2C68CF5FD11A_inline (Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m0A4EB1FDAC59253300D8EA7C3EBC00D9165BBB60 (PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* ___0_destination, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m775EB674DE455FEB51464BE0F58F26E63630BC9B_inline (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33*, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* Array_Empty_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mB048C0209901507C7E3FF27596E2221297332DC3_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m475DC2CD0A087F285950572B3A1B31E9A34D7777 (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 ___0_left, ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33, ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4*, const RuntimeMethod*))Record_get_recordIndex_m0BB1165AB0817E19186261B80CEBC3B9B8BC75EC_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95 (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 InputStateHistory_get_controls_m2B1056A5B21F2A8CFAAEE9136E24D27C4BFF31CC (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) ;
inline int32_t ReadOnlyArray_1_get_Count_m5061AE58EC2D8AE48182ADF368A108D8E9E116B6_inline (ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3*, const RuntimeMethod*))ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline)(__this, method);
}
inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A (ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* (*) (ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputStateHistory_UserIndexToRecordIndex_m81D4D6EE19ED80607BAAA31F3159168AC3B5B678 (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline void Record__ctor_m1CACECB022FDAACE6482C208E6552F7614445895 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___0_owner, int32_t ___1_index, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___2_header, const RuntimeMethod* method)
{
	((  void (*) (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4*, InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798*, int32_t, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, const RuntimeMethod*))Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086_fshared)(__this, ___0_owner, ___1_index, ___2_header, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 InputStateHistory_ReadValue_TisTouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97_mBF51236691ADD46F7A6501AA3951A0C453C4795C (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeMemoryPtrUnchecked_m52990CD3C2FF0DB8735E39A95B877923A6D6F5A0 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* RecordHeader_get_statePtrWithoutControlIndex_m06FC191CB4801F442A0B972DA23B48ECE629922C (RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* RecordHeader_get_statePtrWithControlIndex_m68BBA8402AF00318B40229E5121F9C5132A3B655 (RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeExtraMemoryPtrUnchecked_m43B2E6AC3AF2307D2DDF2C92E90A629666277F66 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_extraMemoryPerRecord_m4E4C9D89BC37B9CD7E6AFFD58D95A9030F92E653_inline (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_bytesPerRecord_mAF516CE1E45E3EBA46EDFFF2923908D6B672D114 (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_get_valid_mBA8E68867067FE8B51F4DA6B9BD6A4926418AE8C (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_mB54551B1D8C0BF391FC4910C31536CDA2A8EAB55 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___0_owner, int32_t ___1_index, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___2_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CopyFrom_mF3794E85475465E4DC83BBC615BC0A1506BFD105 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 ___0_record, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Record_get_version_m520FC2A134CE62BD9A4A66849B43461C4189FC51_inline (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline bool Record_Equals_m17C216CDC45654F53F8191093F3404478DB16B69 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4*, Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4, const RuntimeMethod*))Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_mCFF126DD568EA648A8BA307BC1FB676597986C7A (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3* Record_get_control_m5FA21546D78E360D3A5FF4190AC3A07C9A6C74F2 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 Record_ReadValue_mA4F2FFE56E7F28BF41E48C79A47CF6CD1F874E4A (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Record_get_time_m5976C10C2C3A2A2089D57F1DF9AE5557C10DF47E (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Record_ToString_m8F86BC9A48C4262405B37FA195868965AD3E566D (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) ;
inline void Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086 (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___0_owner, int32_t ___1_index, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___2_header, const RuntimeMethod* method)
{
	((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8*, int32_t, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, const RuntimeMethod*))Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086_fshared)(__this, ___0_owner, ___1_index, ___2_header, method);
}
inline bool Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D, const RuntimeMethod*))Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE_fshared)(__this, ___0_other, method);
}
inline bool Record_Equals_m982576B6A0444BC40CD4742937A6E31DB2C4C668 (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, RuntimeObject*, const RuntimeMethod*))Record_Equals_m982576B6A0444BC40CD4742937A6E31DB2C4C668_fshared)(__this, ___0_obj, method);
}
inline int32_t Record_GetHashCode_m5A566222F9BAF8C0DE94FE08A30EE5466A44E19E (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))Record_GetHashCode_m5A566222F9BAF8C0DE94FE08A30EE5466A44E19E_fshared)(__this, method);
}
inline String_t* Record_ToString_mC6664AF6A40866414A8D5EE160B6C93BD3170BA9 (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))Record_ToString_mC6664AF6A40866414A8D5EE160B6C93BD3170BA9_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687 (int32_t ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InheritedData_Dispose_mA70C0374C34D611EA89B31239CA7D97A127B79CD (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F (intptr_t ___0_ptr, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 InheritedData_Copy_m0EABC6E355A3778EBE1EBBC888F0A33D4A3CC12E (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* RefCounted_Create_m9A80FBE31EF1C91D39E51F95EF275D6BC5FAEFF6 (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF (void* ___0_ptr1, void* ___1_ptr2, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline (void* ___0_data, int32_t ___1_intCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutData_Dispose_m42A74542654692812E38C38ACB36FC8314F7BB95 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 LayoutData_Copy_m43CB8791B4A3BEDD9E8184D6E868008688E9EC31 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* RefCounted_Create_mC56A498828CC9C59F184070685A993EC2ACC8772 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RareData_Dispose_m085EE30B97744A1C3A871BE0C0DFA68AA28BEF3A (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 RareData_Copy_m704FCCC82A27DD5034CFB2E88E94D1C27582E29E (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* RefCounted_Create_mE6EC70587FE53B656EAFE04F9D850DA5B3B6C8AD (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformData_Dispose_m43673FEFBE06181C71C7B1AD3D612B5C7C6494CB (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 TransformData_Copy_m1C72DA746E9EDA30EF3A0B6B582ADE0D1F1CC1E1 (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* RefCounted_Create_m563C542302977FD0F7B397856A7C036D8E333C29 (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionData_Dispose_mA86C0781E0655BB52DAD6802625F1C2D87C128FF (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 TransitionData_Copy_m6AECD90470D754363F0DCB00918CB167788DC51B (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* RefCounted_Create_m9ED53DBFEEB54830601677E6FAA4A5506359B8A0 (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualData_Dispose_mBCD1939BA50613AB6F43C5D6BA6A0789C6D0AE10 (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B VisualData_Copy_m4672E40E37CE425C9991B5FC11EE9EEF32CD1A0F (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* RefCounted_Create_m0BA0AAE0A0BBD8F28E57A9E2BE2C641ADE50B57B (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CreatePropertyAttribute_get_ReadOnly_m451FE098EF663531E062E280D98B8A425B032E61_inline (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___0_type, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_11);
		int32_t L_13 = ___1_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14;
		L_14 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_12, L_13, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m088E77B465B234F72478655D87CDAB7623DF89D1 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>((uint8_t*)L_1);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ReadOnlySpan_1_get_Item_m9F9069E5AAD473CC38A25C740FFDD763CE37B013 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_3, L_4, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mCBAD005C0BE38AAC518E922BCA5D968D09AD2D24 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2 = ___0_destination;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m24BD4A9F313753A60A3EE6AB3EE6BAC10E13DE76 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2 = ___0_destination;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0BAC186728C6C5141C541EA3CB130C6BE8C55643 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE ReadOnlySpan_1_Slice_m444A1B06EB746190DBE6FB2D573C378B6BB5FEF5 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_3, L_4, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE ReadOnlySpan_1_Slice_m9C5892A5CC9969DAE8A72E2CCFA6754A3C958E09 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_6, L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ReadOnlySpan_1_ToArray_m097EB6D7F99D0BF38D80C5D7B12BF7ED201B6ACD (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_5);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mE0D239671E43B5C4C3E1183DA937233B8780375F (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE ___0_left, ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_0 = ___0_left;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mAE20D3F99534D14AD6797601E32CC1736C979D1B(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m6B29EEB8F45C80D0DA9C3CBD7D084AAEF2973597 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m97EC35235F5D07785D22A3EC490343A227918156 (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_11);
		int32_t L_13 = ___1_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14;
		L_14 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_12, L_13, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEB8525E8229E45A2D6D507AD1A04D52E90566F7D (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>((uint8_t*)L_1);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ReadOnlySpan_1_get_Item_mC26269A69FB287454FB66698EDAF4B7977E8B385 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_3, L_4, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m09A81CE439D945697B4465D67B50684BA749D33A (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2 = ___0_destination;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m0C1CB200D4E125AD38567E5A044D1CF0D2ACCB22 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2 = ___0_destination;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m46078CE16BD963A12AFC20816C7316FA38C3060D (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 ReadOnlySpan_1_Slice_mC6EB27DF2F4D749056385993A9DC8C00D1D78CBA (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_3, L_4, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 ReadOnlySpan_1_Slice_m95BABE0D08892C57C30111494F9956D3521EDBFA (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_6, L_7, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ReadOnlySpan_1_ToArray_m8BC85EB4C5AB9472EE98AD4009F4B888A2BBFE50 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1;
		L_1 = Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_5);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m2234D50A08473C3F3398BA25E7F5BCEBEAAC5AB3 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 ___0_left, ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_0 = ___0_left;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m189490571FC19845148BCEDC568782AE1686FD91(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m5F26CC9E3E6FED280ED55D0F1E8C6B519E78E336 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m246400F6037AA45BD92ED8CE79C565B9CA335536 (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5077FC6E2568ACEDA88D899BD16C861E7F3A4DA3 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>(L_11);
		int32_t L_13 = ___1_start;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_14;
		L_14 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_12, L_13, sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m8B197C469DBDC5433C3E084E3BD64D262A0F8E4F (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>((uint8_t*)L_1);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ReadOnlySpan_1_get_Item_m3B7133E0CF864027BD092EA49E6DA5AD6CDFB183 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_2 = __this->____pointer;
		V_0 = L_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_5;
		L_5 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_3, L_4, sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mF8D034B17CF84EEFA3D350523D59299EE177E7C8 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_2 = ___0_destination;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_3 = L_2.____pointer;
		V_0 = L_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_0 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m21A5D9CFC3A5AF135B6AE3F7E8C38EA62600968B (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m04EC398D32B0C4B1E3C1C9FC225757A0414FEC91_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC33D382E526B4F8C6EDCA373AD4345BA58673D8E L_2 = ___0_destination;
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_3 = L_2.____pointer;
		V_1 = L_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_1));
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_1 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD6FD801B80B413EA34C62F3B457C0C3D516A6A5C (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A ReadOnlySpan_1_Slice_m4CA4C00BC0CF6776163A058E1B7B096E8D3B0366 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_2 = __this->____pointer;
		V_0 = L_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_5;
		L_5 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_3, L_4, sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A ReadOnlySpan_1_Slice_m6382938B90F21E36B04838C95F96E61FD68C1CC6 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_5 = __this->____pointer;
		V_0 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_8;
		L_8 = il2cpp_unsafe_add<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7,int32_t>(L_6, L_7, sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7E238E2EA0773CDB439F87E732C9E7AD0CF67AEF_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ReadOnlySpan_1_ToArray_m7766D578A50EFBD70028660345972DF4443F8673 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_1;
		L_1 = Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_3 = (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*)(VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>(L_5);
		ByReference_1_tDB2E57963CDD5776F8F033EAE071CD9E7DB1359B L_7 = __this->____pointer;
		V_0 = L_7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m62CF6B7966AF87AA909216351F5623A331000F46 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A ___0_left, ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A L_0 = ___0_left;
		ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m5B445CA901BBC88DCCBECDD1FEA070AC11B44D38(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m65844D00CD960C0DC0BF5ABD8198F68FDAB7A176 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m39FF3228809FF7F0DE64EA0AA311445DB00DD2F6 (ReadOnlySpan_1_t63019D57052C95CA42C48E9757509354A8099A5A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m21926E00552522289CBD3F979B3596CCC0BD8D6B (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_12;
		L_12 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>(L_11);
		int32_t L_13 = ___1_start;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_14;
		L_14 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_12, L_13, sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4 (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_2;
		L_2 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>((uint8_t*)L_1);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ReadOnlySpan_1_get_Item_m630BC872D6C3D717C16D0BE02A99457A81C7E6C9 (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_2 = __this->____pointer;
		V_0 = L_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_5;
		L_5 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_3, L_4, sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m7609F169DF2D60033F1F8ADE99444B2F78F80852 (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_2 = ___0_destination;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3 = L_2.____pointer;
		V_0 = L_3;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_0 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m0A1471476495937C100FD0ADFA3041B0F8D0BD53 (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3CBE615865BBBA37C35E5624C623561A3CA7780F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tA5C1C4A28024D89A0077601B805025F51EFEE6E0 L_2 = ___0_destination;
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3 = L_2.____pointer;
		V_1 = L_3;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_1));
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_1 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m858ABB3C084575CF8F4AB4A5A7D35D2DAB121FCF (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ReadOnlySpan_1_Slice_mE9CA688AC3C4DE66D676FAF085F01D5D3E8016DB (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_2 = __this->____pointer;
		V_0 = L_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_5;
		L_5 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_3, L_4, sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ReadOnlySpan_1_Slice_mFC3CAFEDB606E82471E5B24E9E826DD660D5A6DE (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_5 = __this->____pointer;
		V_0 = L_5;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_8;
		L_8 = il2cpp_unsafe_add<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76,int32_t>(L_6, L_7, sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB95FD3804E51521FC7AA12B18DE8BB2E8D05AA73_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ReadOnlySpan_1_ToArray_mA4636BCEDF9716846FE602470940CE7BDFD9A98C (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_1;
		L_1 = Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_3 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_6;
		L_6 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>(L_5);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_7 = __this->____pointer;
		V_0 = L_7;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mB059D15F8F23354E0E419C6336089897FF388ECD (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___0_left, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_0 = ___0_left;
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m0AD6B888611C0269980F6748904425853D6AA912(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mB2384EC4B2645FEBD026489E2F8C31874E157906 (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m3BF49D59DB1D3FDAA060108BF80310C1029E564E (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m750C6EED287F7E0F48B89F1DCAD75524A0B01B82_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppSharedGenericObject** L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppSharedGenericObject*>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppSharedGenericObject** L_14;
		L_14 = il2cpp_unsafe_add<Il2CppSharedGenericObject*,int32_t>(L_12, L_13, sizeof(Il2CppSharedGenericObject*));
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m785AE483D4BB9050619877A7B8F68CBB1C9DF766_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		Il2CppSharedGenericObject** L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppSharedGenericObject*>((uint8_t*)L_3);
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		int32_t L_6 = ___1_length;
		__this->____length = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** ReadOnlySpan_1_get_Item_mAA7DEA9281AF10C6F1B15DE6FC1353A37E7FEAB9_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppSharedGenericObject** L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppSharedGenericObject** L_5;
		L_5 = il2cpp_unsafe_add<Il2CppSharedGenericObject*,int32_t>(L_3, L_4, sizeof(Il2CppSharedGenericObject*));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m5294B8EF462901B2A9CD84022EBCBEFCC79E4006_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE87FEC85744938B2FEE3E95ED49EA79A9A82EFB4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_2 = ___0_destination;
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppSharedGenericObject** L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_0));
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppSharedGenericObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mBF69992A7FED1F66E3411849CE60C26540CE6BA1_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE87FEC85744938B2FEE3E95ED49EA79A9A82EFB4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_2 = ___0_destination;
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppSharedGenericObject** L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_1));
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppSharedGenericObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4A5CE1F823D432CDDA22AD12A6938B4DCB3C4528_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 ReadOnlySpan_1_Slice_m443ED5587A12D208AD9019D29BB53B57BC62C88D_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppSharedGenericObject** L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppSharedGenericObject** L_5;
		L_5 = il2cpp_unsafe_add<Il2CppSharedGenericObject*,int32_t>(L_3, L_4, sizeof(Il2CppSharedGenericObject*));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mF5DF18953F36EB9AACBDD52097208A1C300913F4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 ReadOnlySpan_1_Slice_m63D6BDDB1E4358A4DFEC479576512C3F81E5D445_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppSharedGenericObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppSharedGenericObject** L_8;
		L_8 = il2cpp_unsafe_add<Il2CppSharedGenericObject*,int32_t>(L_6, L_7, sizeof(Il2CppSharedGenericObject*));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mF5DF18953F36EB9AACBDD52097208A1C300913F4_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ReadOnlySpan_1_ToArray_m19B11138CFA19439BCE0164187338B8ACCB44716_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1;
		L_1 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppSharedGenericObject** L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppSharedGenericObject*>(L_5);
		ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppSharedGenericObject** L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppSharedGenericObject*, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisIl2CppSharedGenericObject_mEC0190E4922D786C71391DC7D4AA550843D5018E(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m35F28FD222084C1F9C2E774BD6DCB18825024EAE_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 ___0_left, ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 L_0 = ___0_left;
		ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mCC3D9C5DEDAC30D9D078F184D82ADE31EB01CACA(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m62683388C5D633694B254B406C025236F47707BE_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m9D3AFC524BDD6AE021F5377FDB1F067AFF0E5E7E_gshared (ReadOnlySpan_1_tC2E60415EE483D6C4572C088244A59F176E5B905* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_2);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		__this->____length = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_GetPinnableReference_m9D6823661F0B12D72F4403789EFBE9FB85F765B0_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		Il2CppFullySharedGenericAny* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)L_1);
		return L_2;
	}

IL_0010:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = __this->____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m28C620FC83437DB4DA07A6AE8509838FEEC3CB44_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_left, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_4 = ___0_left;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = L_4.____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_7 = ___1_right;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_8 = L_7.____pointer;
		V_0 = L_8;
		Il2CppFullySharedGenericAny* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = __this->____pointer;
		V_1 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppChar>(L_2);
		V_0 = L_3;
		Il2CppChar* L_4 = V_0;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_4,NULL));
		int32_t L_6 = __this->____length;
		String_t* L_7;
		L_7 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_5, 0, L_6, NULL);
		return L_7;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_9);
		int32_t L_11 = __this->____length;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_10, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_6, L_7, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlySpan_1_ToArray_mC80D8D89B94D8ACFFFA96DC9812EFABF437B8830_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_mF9C2BB2D1BC343ECA2DD473397A9E9314A1F65EA_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m7188F29A598B654DED4746C4BCA62C3D284DCD83_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_left, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = ___0_left;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = ___1_right;
		bool L_2;
		L_2 = ((  bool (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m47E226FBCC60E1F22C0A7012C93B763B35BAEB7B_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mCBD885A11AC8A168D48E4362A144A9F92E6DB56C_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_op_Implicit_mA3F92A25347CAF6EE827341F881A3F7527D8559A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_get_Empty_mBF0BAF52E133CA2C4344C933D07E81B9E5005980_fshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFCDDAFC5328CE3BB7A2FAB10E04FFBF5F8030DCA_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int32_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int32_t>(L_11);
		int32_t L_13 = ___1_start;
		int32_t* L_14;
		L_14 = il2cpp_unsafe_add<int32_t,int32_t>(L_12, L_13, sizeof(int32_t));
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m449E459431681A628F1619D8F0CF125532993745_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ReadOnlySpan_1_get_Item_m6ED4948892A5B305133E9D373A3CC7EEDF963BB2_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4, sizeof(int32_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mDF137032EE05634A6780263A93F6E88CB5684E96_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0DD2ADC05EFC779C90C83F2D66E98A58B5DC26B5_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6 L_2 = ___0_destination;
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC744F69DDE971E0C28FA85B69D0A02084E9D5A1C_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0DD2ADC05EFC779C90C83F2D66E98A58B5DC26B5_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5A404F77A4C3643DDB40D15A0BAD7BBA26873CE6 L_2 = ___0_destination;
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m40B925AB73A6E41B863219E2E05A2E74A2CD0CD2_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E ReadOnlySpan_1_Slice_m5FBB19D29E2269846B30FD37310858873994597D_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4, sizeof(int32_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB87C3180669CF3AE950AB596F7DD0EA8F8060492_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E ReadOnlySpan_1_Slice_mA8291359C8E01E4DF5F51B8BFC3B433AD88F83CB_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7, sizeof(int32_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB87C3180669CF3AE950AB596F7DD0EA8F8060492_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ReadOnlySpan_1_ToArray_mCA00019D49C831B87BD2DCD092839F99A6F061EA_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1;
		L_1 = Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_3 = (__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)(__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_t3747EBE8AAD37F6624BB0D1E61ED7CB5FCD6655E L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD096672145DB9A7F8404CFCD92F3DA783DBEFC24(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m1E1A2D3BB1227236EEC57BE0FB237D852A58028A_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E ___0_left, ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E L_0 = ___0_left;
		ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m4872DDA55176D5F6754C9F426FE12934FB7C2419(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m58D487E9D90A826491E8A1B10327CE0F284DAF5E_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m945B5A7C8656FBA5CB89E6D83C321CD381911C99_gshared (ReadOnlySpan_1_tDFED1E92751A6EBC762EDE852E1ABE93EC8EFC7E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1F6C5A6228A23E3B5ED6C0824B81D8A3B1CCFC9E (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_12;
		L_12 = il2cpp_unsafe_as_ref<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83>(L_11);
		int32_t L_13 = ___1_start;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_14;
		L_14 = il2cpp_unsafe_add<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83,int32_t>(L_12, L_13, sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83));
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE2152502EAA5A97FE4D9D13D6D8DA0B8D4068943 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_2;
		L_2 = il2cpp_unsafe_as_ref<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83>((uint8_t*)L_1);
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* ReadOnlySpan_1_get_Item_mC0D49EF50934B701861F59C3F3D003814AECC704 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_2 = __this->____pointer;
		V_0 = L_2;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_5;
		L_5 = il2cpp_unsafe_add<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83,int32_t>(L_3, L_4, sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mE8C3CFFB6C8D7EB0CE8651A5A966EB0D84BE0F7A (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3F55D64B714E060047FF4F98203E3203A4B7646E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E L_2 = ___0_destination;
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_3 = L_2.____pointer;
		V_0 = L_3;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_0));
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_5 = __this->____pointer;
		V_0 = L_5;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mE5B2C52769EDE045F2577ADB3ADD9A1CF5999927(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD61335A1DAE966403392E97C9B6891C819AB07AA (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3F55D64B714E060047FF4F98203E3203A4B7646E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tB2DEB7EEBC5600D265AF70515D8F0AB0CB85564E L_2 = ___0_destination;
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_3 = L_2.____pointer;
		V_1 = L_3;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_1));
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_5 = __this->____pointer;
		V_1 = L_5;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mE5B2C52769EDE045F2577ADB3ADD9A1CF5999927(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m2F9879E3E58C2333C4906387330AA4C1411F40B2 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B ReadOnlySpan_1_Slice_mE4C0B2D8B2E2DEA9849CEFA97CE0CFDF94A0F340 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_2 = __this->____pointer;
		V_0 = L_2;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_5;
		L_5 = il2cpp_unsafe_add<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83,int32_t>(L_3, L_4, sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m3A63F17254FC3DF2E00CCC692812D8C72DF3784D_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B ReadOnlySpan_1_Slice_m9E9B38C76F6F74CCABF1013E41900C60CF0BE3F4 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_5 = __this->____pointer;
		V_0 = L_5;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_8;
		L_8 = il2cpp_unsafe_add<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83,int32_t>(L_6, L_7, sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m3A63F17254FC3DF2E00CCC692812D8C72DF3784D_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* ReadOnlySpan_1_ToArray_mBE610131A61941C460613ADE3AC8E71938012384 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_1;
		L_1 = Array_Empty_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mD7351894C422FD84130C44C695C7D6DA4604C170_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_3 = (double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14*)(double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_6;
		L_6 = il2cpp_unsafe_as_ref<double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83>(L_5);
		ByReference_1_t57A197476F870FF519AC1D1BDB25FE2AC3E204D0 L_7 = __this->____pointer;
		V_0 = L_7;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mE5B2C52769EDE045F2577ADB3ADD9A1CF5999927(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m1CFE0DFC7B2DA417F7ED9C7F9A49C84519AF2161 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B ___0_left, ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B L_0 = ___0_left;
		ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF7633EA1F19630649B8966908392710B069279F8(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mB157EF42CFDCE035498A12E5291EDAA61738E3C4 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m415B6905D29673EA4588AA3098E0D440F210CE59 (ReadOnlySpan_1_tFAF23030F23D88A9A6A95DE20E61FB98EDEEF43B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1342B7C159EAF5CA4621FCF53F23235834AA0CE4 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_12;
		L_12 = il2cpp_unsafe_as_ref<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5>(L_11);
		int32_t L_13 = ___1_start;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_14;
		L_14 = il2cpp_unsafe_add<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5,int32_t>(L_12, L_13, sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA5E8DCD8B6D5EB368DB9B8775F44BD59B9AFBAFC (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_2;
		L_2 = il2cpp_unsafe_as_ref<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5>((uint8_t*)L_1);
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* ReadOnlySpan_1_get_Item_m7B473F3A1FAA1875874FD0CF0C1DD58400979BB2 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_2 = __this->____pointer;
		V_0 = L_2;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_5;
		L_5 = il2cpp_unsafe_add<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5,int32_t>(L_3, L_4, sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m5352780AF5D364CBCF6C0AC0B7ECFC243787A181 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7AD50C87FFE875E7D2FF11A4CF9CACAAE94939D5_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28 L_2 = ___0_destination;
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_3 = L_2.____pointer;
		V_0 = L_3;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_0));
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_5 = __this->____pointer;
		V_0 = L_5;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m09F99891F770930782E4C039300A5D475EEE9A99(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m0181454B664D6CAC636421722892DEDFF93FA232 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7AD50C87FFE875E7D2FF11A4CF9CACAAE94939D5_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t354CB192AF55CF92AB6D8DFF3DA574A8AF38EA28 L_2 = ___0_destination;
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_3 = L_2.____pointer;
		V_1 = L_3;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_1));
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_5 = __this->____pointer;
		V_1 = L_5;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m09F99891F770930782E4C039300A5D475EEE9A99(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD689514409AC4182B3F6CE76EB57F9DACFB3FF53 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD ReadOnlySpan_1_Slice_m4C91D577F5D67D1B8A808D1D8131804F15B1E312 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_2 = __this->____pointer;
		V_0 = L_2;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_5;
		L_5 = il2cpp_unsafe_add<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5,int32_t>(L_3, L_4, sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m4323390AF4AE396A90C5B1727C6AA4CA5043E794_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD ReadOnlySpan_1_Slice_m16F1880400B154373738A485FFAD9B06370063CE (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_5 = __this->____pointer;
		V_0 = L_5;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_8;
		L_8 = il2cpp_unsafe_add<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5,int32_t>(L_6, L_7, sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m4323390AF4AE396A90C5B1727C6AA4CA5043E794_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* ReadOnlySpan_1_ToArray_mE24BA05A300ADB4643E159A64D6622533538AAB3 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_1;
		L_1 = Array_Empty_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mFF5FD82D645331DAD440EA02061FA06762861A4D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_3 = (float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*)(float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_6;
		L_6 = il2cpp_unsafe_as_ref<float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5>(L_5);
		ByReference_1_t17F6C63B42D98BF9067100E6845B573D1DE3A36E L_7 = __this->____pointer;
		V_0 = L_7;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m09F99891F770930782E4C039300A5D475EEE9A99(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m0B66D174A22367586268764026F782DB6DF475E5 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD ___0_left, ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD L_0 = ___0_left;
		ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF7E39C05BBFED35C460DAA963E9E5FA4D281DC02(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA87D1B65656DD2ED9E312C88FD9736A14AA6CA32 (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5A15119FA7E0D3CDA21D91ECC4EA08266E08C08D (ReadOnlySpan_1_t2C0E6E12926E6D46A1DAFFFC018AF789BCE52AFD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDEA115FBE3EE53C8A65D54AB2BDAA22CFCD14952 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_12;
		L_12 = il2cpp_unsafe_as_ref<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D>(L_11);
		int32_t L_13 = ___1_start;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_14;
		L_14 = il2cpp_unsafe_add<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D,int32_t>(L_12, L_13, sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D));
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m21038947157534725A0CA5828679CCBFB635637B (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_2;
		L_2 = il2cpp_unsafe_as_ref<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D>((uint8_t*)L_1);
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* ReadOnlySpan_1_get_Item_m1AFC4AEC396F9DD00E7A83306B118AADD9D3D2B0 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_2 = __this->____pointer;
		V_0 = L_2;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_5;
		L_5 = il2cpp_unsafe_add<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D,int32_t>(L_3, L_4, sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m51D3F1DBE71EDF247B56F312AE102B20E4CAF49C (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m5402FB8841522654101217DE977F5EACB40EE395_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434 L_2 = ___0_destination;
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_3 = L_2.____pointer;
		V_0 = L_3;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_0));
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_5 = __this->____pointer;
		V_0 = L_5;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC7B857CDC6A072A32945530F9D36320CBE071E83(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m419961C753C090C3CE8CAD23381BB6F1BB405B1E (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m5402FB8841522654101217DE977F5EACB40EE395_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t646AEEFB5420291470BC56CE8B83DC03EE438434 L_2 = ___0_destination;
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_3 = L_2.____pointer;
		V_1 = L_3;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_1));
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_5 = __this->____pointer;
		V_1 = L_5;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC7B857CDC6A072A32945530F9D36320CBE071E83(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m711E3A20446C98F504F68010D91230122662F3EE (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 ReadOnlySpan_1_Slice_m66CAEB10D1B10F8C57B0F17290895528482ED6BE (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_2 = __this->____pointer;
		V_0 = L_2;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_5;
		L_5 = il2cpp_unsafe_add<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D,int32_t>(L_3, L_4, sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mBD5467EA1FFA19ADC77EDADD51889507AE4EA054_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 ReadOnlySpan_1_Slice_m7D35D4EC9A814A704FA4653C5667862432C7CF37 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_5 = __this->____pointer;
		V_0 = L_5;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_8;
		L_8 = il2cpp_unsafe_add<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D,int32_t>(L_6, L_7, sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mBD5467EA1FFA19ADC77EDADD51889507AE4EA054_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* ReadOnlySpan_1_ToArray_m401F1631DA6816ED67B96588520800311CD44B58 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_1;
		L_1 = Array_Empty_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC8B23EACBA3AF3BD73FB4E99E16BBF4124FC07F7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_3 = (int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8*)(int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_6;
		L_6 = il2cpp_unsafe_as_ref<int2_tB123E869131C6102341F8F9AA01726E0E7C2768D>(L_5);
		ByReference_1_t10ADE187E25C0DA2249A6B3FA30EBC4AABC4EBB3 L_7 = __this->____pointer;
		V_0 = L_7;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC7B857CDC6A072A32945530F9D36320CBE071E83(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m02C29BD5C82019D123CC3B0C0B0BF0221F3BDD78 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 ___0_left, ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 L_0 = ___0_left;
		ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mD6BE4F332174C1599E7C2482DD831A0075DF6315(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9BF06D7350B02F723261781E1907171516EC022E (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7C1E126B106845A976DEE2E20C713F2235D947B4 (ReadOnlySpan_1_t8BACFD9692E6263B4D35C693A719AB4565AB0FE3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBEC656AA3A9068C9D7B168BFFB4FC5D33923B2AA (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_12;
		L_12 = il2cpp_unsafe_as_ref<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5>(L_11);
		int32_t L_13 = ___1_start;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_14;
		L_14 = il2cpp_unsafe_add<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5,int32_t>(L_12, L_13, sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5));
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m81C87A91F8305B9FD4BAE4A8FDC6024F1F2B7575 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_2;
		L_2 = il2cpp_unsafe_as_ref<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5>((uint8_t*)L_1);
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ReadOnlySpan_1_get_Item_m52348295B4E45ECAB4012B5BF0807D6C6E29E569 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_2 = __this->____pointer;
		V_0 = L_2;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_5;
		L_5 = il2cpp_unsafe_add<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5,int32_t>(L_3, L_4, sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m5E7DC31626BA0C333B678C4F79EF12F37379E585 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m43013486A907360A2A22B0CEE830D49B5B26C95F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18 L_2 = ___0_destination;
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_3 = L_2.____pointer;
		V_0 = L_3;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_0));
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_5 = __this->____pointer;
		V_0 = L_5;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4FF09229E021E79AB3601AFA9865CFB2FF0FA705(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mE99DBBBFA32E6A640B98A9EABC9EACD0F3BF12D3 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m43013486A907360A2A22B0CEE830D49B5B26C95F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t7AFB509B56FB54B6397F292C8FF30A896E3B1D18 L_2 = ___0_destination;
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_3 = L_2.____pointer;
		V_1 = L_3;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_1));
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_5 = __this->____pointer;
		V_1 = L_5;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4FF09229E021E79AB3601AFA9865CFB2FF0FA705(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mEB696085F34B829EC86D042873F5861095A44AFD (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC ReadOnlySpan_1_Slice_mDCD49EDA17008EB8153F88CD0707ABF4DB419808 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_2 = __this->____pointer;
		V_0 = L_2;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_5;
		L_5 = il2cpp_unsafe_add<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5,int32_t>(L_3, L_4, sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC22A24718575E6E7646443807D6F2189CEAF76C1_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC ReadOnlySpan_1_Slice_mFD331D6C84E694CDB6639308723286FF248180A9 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_5 = __this->____pointer;
		V_0 = L_5;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_8;
		L_8 = il2cpp_unsafe_add<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5,int32_t>(L_6, L_7, sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mC22A24718575E6E7646443807D6F2189CEAF76C1_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* ReadOnlySpan_1_ToArray_m8DB6E63DB996A93CFBEA62538F2F3FCC939EB1AF (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_1;
		L_1 = Array_Empty_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4DC5C50A1BD1D2394223035DD2D6F24AB4F758AC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_3 = (int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F*)(int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_6;
		L_6 = il2cpp_unsafe_as_ref<int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5>(L_5);
		ByReference_1_t6FB5022AEC023F8882CD86C958CBCEC30E61E74E L_7 = __this->____pointer;
		V_0 = L_7;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4FF09229E021E79AB3601AFA9865CFB2FF0FA705(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m6C89D40399ADA57616AC226365C848790FFF1FED (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC ___0_left, ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC L_0 = ___0_left;
		ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF1273621D0EEE17A95A86B5F40579C96FA9AC1DD(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m336FDD7DC10DADCF17D2C1530BD3633731FCABAB (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7DEC43D478CB9C715BDF59863EDBAEE8A0EB14B5 (ReadOnlySpan_1_t19A80399B3B198E8936B5E231AD4C50E16894ADC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B618889C83F57E95442540FEAA072E72B4138F (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_12;
		L_12 = il2cpp_unsafe_as_ref<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90>(L_11);
		int32_t L_13 = ___1_start;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_14;
		L_14 = il2cpp_unsafe_add<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90,int32_t>(L_12, L_13, sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90));
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1DAB4D835D5D102A4E53F8F1F3509AE041CF0F80 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_2;
		L_2 = il2cpp_unsafe_as_ref<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90>((uint8_t*)L_1);
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* ReadOnlySpan_1_get_Item_m7CACD79AE5AAC48160C9A1C4F69FE757CC72769E (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_2 = __this->____pointer;
		V_0 = L_2;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_5;
		L_5 = il2cpp_unsafe_add<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90,int32_t>(L_3, L_4, sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m05E72B18F4069BE74AE88F4A2B19F84E6E8F66E8 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1AF6A9179A2A7FFDC1A8627B60150E30B25053C4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F L_2 = ___0_destination;
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_3 = L_2.____pointer;
		V_0 = L_3;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_0));
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_5 = __this->____pointer;
		V_0 = L_5;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m3FA480905D3832BFC57B216E6655237923C5C72B(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mF4FF4634A5F5F51DC1E513B115A0C22B211CD452 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1AF6A9179A2A7FFDC1A8627B60150E30B25053C4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t74DDA7A2183149E41F344AE66D6717D3D766DF1F L_2 = ___0_destination;
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_3 = L_2.____pointer;
		V_1 = L_3;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_1));
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_5 = __this->____pointer;
		V_1 = L_5;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m3FA480905D3832BFC57B216E6655237923C5C72B(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m761E359D2807E16EA102C61F5245DC2AFBEF52D9 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 ReadOnlySpan_1_Slice_mA1DFE53522352AF5BF077EEE84A100F323625539 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_2 = __this->____pointer;
		V_0 = L_2;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_5;
		L_5 = il2cpp_unsafe_add<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90,int32_t>(L_3, L_4, sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m5172C7FEA350105C42035E417D11C9CEC7720AF4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 ReadOnlySpan_1_Slice_mF5977F4A33D475FF06B582BF5E359DB4DBB76FA8 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_5 = __this->____pointer;
		V_0 = L_5;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_8;
		L_8 = il2cpp_unsafe_add<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90,int32_t>(L_6, L_7, sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m5172C7FEA350105C42035E417D11C9CEC7720AF4_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* ReadOnlySpan_1_ToArray_mAA85DFCA4DDB4EB41F20290496A67069E1025EED (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_1;
		L_1 = Array_Empty_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mB74DD69930C5B7D7471484F342DEF795E765B85A_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_3 = (int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184*)(int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_6;
		L_6 = il2cpp_unsafe_as_ref<int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90>(L_5);
		ByReference_1_t494C2873EF11FED5CA7E55D1A6F78C54E5A8156E L_7 = __this->____pointer;
		V_0 = L_7;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m3FA480905D3832BFC57B216E6655237923C5C72B(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m1093030C0284A73A521A74FD6172FAC9CA7FED3C (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 ___0_left, ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 L_0 = ___0_left;
		ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m4A8F9991F25E8CB8907F98FE337B2B06E5550D3F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m2A7F7549B0C17565ECC2EC19763C91FC7E8EEB64 (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m140456467B89670427EAC1FE5E7F8CEF95457EDD (ReadOnlySpan_1_t9ACE3AE30CC2B322254C45C88B9F104794FF7EA7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6AB17ECF47DBC1ED568C1CF2A68B167E824F08D9 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_12;
		L_12 = il2cpp_unsafe_as_ref<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93>(L_11);
		int32_t L_13 = ___1_start;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_14;
		L_14 = il2cpp_unsafe_add<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93,int32_t>(L_12, L_13, sizeof(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93));
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m96913AD1CEE44C16BB776BFBA34A6798B0B0FDA0 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_2;
		L_2 = il2cpp_unsafe_as_ref<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93>((uint8_t*)L_1);
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* ReadOnlySpan_1_get_Item_mFA6202F9D3A68DE2D1334E1D18BEE1748C85DD39 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_2 = __this->____pointer;
		V_0 = L_2;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_5;
		L_5 = il2cpp_unsafe_add<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93,int32_t>(L_3, L_4, sizeof(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mECF060C3D4F0484971E2D8D7ADBA1ACDA2F9CEFB (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE664ADB27D5673D9074907A6AC1CFEBA0DC5EA0D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31 L_2 = ___0_destination;
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_3 = L_2.____pointer;
		V_0 = L_3;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_0));
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_5 = __this->____pointer;
		V_0 = L_5;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_m2ED898FC1D3AC4604D483DC7ED8D5CF5AE08E6AC(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC1C46B393AE1E1D87CA73B359DC6A4927738B66A (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE664ADB27D5673D9074907A6AC1CFEBA0DC5EA0D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t8AB8971F1E8375A6D85815B1738E6C07B0869A31 L_2 = ___0_destination;
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_3 = L_2.____pointer;
		V_1 = L_3;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_1));
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_5 = __this->____pointer;
		V_1 = L_5;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_m2ED898FC1D3AC4604D483DC7ED8D5CF5AE08E6AC(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD93FC84EEE6140398F1CDA0C194D1ED7E6DC8339 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 ReadOnlySpan_1_Slice_m112E57A0F830C8BB6BF9290329FBA1A03B5C7511 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_2 = __this->____pointer;
		V_0 = L_2;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_5;
		L_5 = il2cpp_unsafe_add<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93,int32_t>(L_3, L_4, sizeof(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m91BD2B300F5D1A98B69990385CD81A21EC8F5B5B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 ReadOnlySpan_1_Slice_mC0E5149A7FADD010C36BA240EA2C06B2BDFB8808 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_5 = __this->____pointer;
		V_0 = L_5;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_8;
		L_8 = il2cpp_unsafe_add<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93,int32_t>(L_6, L_7, sizeof(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m91BD2B300F5D1A98B69990385CD81A21EC8F5B5B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* ReadOnlySpan_1_ToArray_m3D8CCAA9D6BF71334CE80955B911A76A88B0697C (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_1;
		L_1 = Array_Empty_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_mE757E1AA65E80785446556426840F6533156FE25_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_3 = (CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C*)(CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_6;
		L_6 = il2cpp_unsafe_as_ref<CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93>(L_5);
		ByReference_1_t3B50981E6A7CACE7CF8DB37CF73FDE3E92CE7EC3 L_7 = __this->____pointer;
		V_0 = L_7;
		CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_m2ED898FC1D3AC4604D483DC7ED8D5CF5AE08E6AC(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m6374AC1DC8B76E20D7F5DFC01B3632805E77E2D6 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 ___0_left, ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 L_0 = ___0_left;
		ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m01AFC050BE60BBC51DD803A947751EE3D013D9EC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA0823FAAA3DB9E46E4C8255E47B96B8CCC492E76 (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m03438951BF92CF71287F2C66932BE6DEA6214D9E (ReadOnlySpan_1_t1B34DACF3A745C85C7F8ECB6CAFF4E594F637F18* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF3F77188C463C0FEF6AA4121C0B65E3DBF97E430 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_12;
		L_12 = il2cpp_unsafe_as_ref<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>(L_11);
		int32_t L_13 = ___1_start;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_14;
		L_14 = il2cpp_unsafe_add<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D,int32_t>(L_12, L_13, sizeof(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D));
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m57164971F106186CD41C088CEDF65CFE3231CB74 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_2;
		L_2 = il2cpp_unsafe_as_ref<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>((uint8_t*)L_1);
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ReadOnlySpan_1_get_Item_m26606B4968031F4379E58594E4EDD790CD9531FB (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_2 = __this->____pointer;
		V_0 = L_2;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_5;
		L_5 = il2cpp_unsafe_add<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D,int32_t>(L_3, L_4, sizeof(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0A1BF603D3E2780574D1270FB59D5A1E819BB91F (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF1E83F76487E8193B8015DE8FCE05A479114E769_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A L_2 = ___0_destination;
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_3 = L_2.____pointer;
		V_0 = L_3;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_0));
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_5 = __this->____pointer;
		V_0 = L_5;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mF9DCC6100F09F54A14D524B0AFBA6E80723A747E (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF1E83F76487E8193B8015DE8FCE05A479114E769_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C1D550A10273E67B3A98080D9D3CCC2755ABA7A L_2 = ___0_destination;
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_3 = L_2.____pointer;
		V_1 = L_3;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_1));
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_5 = __this->____pointer;
		V_1 = L_5;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m41015DC29C2AAA7F6EC18F23A93723672BC01FFD (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 ReadOnlySpan_1_Slice_m1C14A08C926ADF0AD5E184DBDA10F7AA244C9ADF (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_2 = __this->____pointer;
		V_0 = L_2;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_5;
		L_5 = il2cpp_unsafe_add<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D,int32_t>(L_3, L_4, sizeof(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m68A476F8A504CB4DC92AF2972F50EBB5676C43B0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 ReadOnlySpan_1_Slice_mFA0FC4DA3A777B8BD2F5D55CDEDEF5E3AD901C19 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_5 = __this->____pointer;
		V_0 = L_5;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_8;
		L_8 = il2cpp_unsafe_add<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D,int32_t>(L_6, L_7, sizeof(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m68A476F8A504CB4DC92AF2972F50EBB5676C43B0_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* ReadOnlySpan_1_ToArray_m7E15BD308616B7C1E7605CAED9085FD4550A75C1 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_1;
		L_1 = Array_Empty_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mFEFA48960FFA5F901A995538B728C31718842335_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_3 = (BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7*)(BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_6;
		L_6 = il2cpp_unsafe_as_ref<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>(L_5);
		ByReference_1_tE6651605597E9FAC2AEEA012019AEBE9EB715F14 L_7 = __this->____pointer;
		V_0 = L_7;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mCC3EB0724160B09D3DE5590C35D14243962A0C71 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 ___0_left, ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 L_0 = ___0_left;
		ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m96A2E0481353DA6A9D8B0B025FD8BDAFE559817E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mC3CDC69AB26AB5125760B5B13E2496A7EF42F444 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m461C5010DCBCA16697329475CF6940A0D9DF1A91 (ReadOnlySpan_1_t81A20C5A3A0D41C722D853F67F261D7A01C1DB88* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m34269582531425BECEDD0769B8328C7C528F4AAA (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_12;
		L_12 = il2cpp_unsafe_as_ref<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>(L_11);
		int32_t L_13 = ___1_start;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_14;
		L_14 = il2cpp_unsafe_add<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2,int32_t>(L_12, L_13, sizeof(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2));
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2DC2FB5FEB0E228D1AAA3C81523A6948B734D086 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_2;
		L_2 = il2cpp_unsafe_as_ref<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>((uint8_t*)L_1);
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ReadOnlySpan_1_get_Item_mB4265B1FA67587C296A037B501BB1AFA6D34F009 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_2 = __this->____pointer;
		V_0 = L_2;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_5;
		L_5 = il2cpp_unsafe_add<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2,int32_t>(L_3, L_4, sizeof(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mCDC6AC2ADDEC176804AAECEEADFBE8CD66E92681 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF8B1105F32BF5512B56E8CBDBE60FD686EE7C151_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05 L_2 = ___0_destination;
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_3 = L_2.____pointer;
		V_0 = L_3;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_0));
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_5 = __this->____pointer;
		V_0 = L_5;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6C9B5D981FDDBF5790EA61EDEBBC0C7D5F47B695 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF8B1105F32BF5512B56E8CBDBE60FD686EE7C151_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tAD0EB0108045F8DC01462F4A899226287C8D5D05 L_2 = ___0_destination;
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_3 = L_2.____pointer;
		V_1 = L_3;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_1));
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_5 = __this->____pointer;
		V_1 = L_5;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mEB31D7D1CC6521606CF0B5F500F3B01FF7D6851C (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B ReadOnlySpan_1_Slice_mCBC47384D562156D5E98A99379E4B0383DAC6067 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_2 = __this->____pointer;
		V_0 = L_2;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_5;
		L_5 = il2cpp_unsafe_add<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2,int32_t>(L_3, L_4, sizeof(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB414AC626E6707DB9114C3B08B2363092496F4DB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B ReadOnlySpan_1_Slice_mCC0DD56B8ED29011841CAA42DE3E9371CCE6BDA5 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_5 = __this->____pointer;
		V_0 = L_5;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_8;
		L_8 = il2cpp_unsafe_add<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2,int32_t>(L_6, L_7, sizeof(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB414AC626E6707DB9114C3B08B2363092496F4DB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* ReadOnlySpan_1_ToArray_m6CAD51791E878EDB6FE1D9498123B47074DB57E6 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_1;
		L_1 = Array_Empty_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA99C337890AF264084717B5AFADC848638F58665_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_3 = (TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE*)(TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_6;
		L_6 = il2cpp_unsafe_as_ref<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>(L_5);
		ByReference_1_t00A4C494D26F185BE151534CF5B8C344A344686E L_7 = __this->____pointer;
		V_0 = L_7;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m74149DFABDFFA2B1A86094C20083A1690DD83E06 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B ___0_left, ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B L_0 = ___0_left;
		ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mED0C8BBC069F18B83B27BB415715FC09842A281F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m275B822BCA940E7BCF6D68223FF83B1AB28E67A5 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m36AB527EC50308D2C5FC7DE1A28AC86E05338BB3 (ReadOnlySpan_1_t5DA2B49AA27EDFA4CAEF973D52D971C10B87235B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m8CF01B3C35FB138EF093CC07FFDE9D56329F6A70 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_12;
		L_12 = il2cpp_unsafe_as_ref<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>(L_11);
		int32_t L_13 = ___1_start;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_14;
		L_14 = il2cpp_unsafe_add<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF,int32_t>(L_12, L_13, sizeof(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF));
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF3B298A6F6025DC39A76785BD7CC25068514561B (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_2;
		L_2 = il2cpp_unsafe_as_ref<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>((uint8_t*)L_1);
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ReadOnlySpan_1_get_Item_mDB8E87FBFDEAEA0086F6B7FDA68E38D45381749E (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_2 = __this->____pointer;
		V_0 = L_2;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_5;
		L_5 = il2cpp_unsafe_add<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF,int32_t>(L_3, L_4, sizeof(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mFE36AE6797BD609B5B16F592C3627C6F4319569A (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m553FE2497BA07FCBB0EAA5C96339ED4281950592_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9 L_2 = ___0_destination;
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_3 = L_2.____pointer;
		V_0 = L_3;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_0));
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_5 = __this->____pointer;
		V_0 = L_5;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m9D1F7C16635038169DB4365E4B82E9A91DAC7CF4 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m553FE2497BA07FCBB0EAA5C96339ED4281950592_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t077F1BB717C60F1734C60CF5A36E7F50615577F9 L_2 = ___0_destination;
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_3 = L_2.____pointer;
		V_1 = L_3;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_1));
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_5 = __this->____pointer;
		V_1 = L_5;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mE67BBC720FA3D8C2B1F7A00DABA3FD9697A4E330 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 ReadOnlySpan_1_Slice_m9E87A4C49F439442DA91A19E267C645434740840 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_2 = __this->____pointer;
		V_0 = L_2;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_5;
		L_5 = il2cpp_unsafe_add<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF,int32_t>(L_3, L_4, sizeof(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m70360B57D6E2C07FBB696FF7C6B140718228E7C9_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 ReadOnlySpan_1_Slice_m404EC001FAB48E72AA3DB4D3586042F8D2664320 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_5 = __this->____pointer;
		V_0 = L_5;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_8;
		L_8 = il2cpp_unsafe_add<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF,int32_t>(L_6, L_7, sizeof(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m70360B57D6E2C07FBB696FF7C6B140718228E7C9_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* ReadOnlySpan_1_ToArray_mA6E4D466261527FC09585302D590F5BD6A67B549 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_1;
		L_1 = Array_Empty_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m773ADBF9E2B07E505ACAC896769DCC8C952EAAC2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_3 = (Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44*)(Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_6;
		L_6 = il2cpp_unsafe_as_ref<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>(L_5);
		ByReference_1_t385FF68C3885D6BC8EC8E0EEBA0B46C8316737F1 L_7 = __this->____pointer;
		V_0 = L_7;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mAB91BB0A042ABD4053546F300C2C1713F64B38CC (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 ___0_left, ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 L_0 = ___0_left;
		ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mDE560B84F0A26DC7C1D6D5B45AA0BD35403686F7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA78D3125BF49AE9B2ADA1BBA403FBD02D4D90C96 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mA68D34855BF82E73EC1A385AE81812B1A4AC2AF3 (ReadOnlySpan_1_t85DC76595F3EEC394BC0043F053CB0CF0D727AC0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5E403123E6D36331FEBB66E4FBA8ACA49F25985C (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_12;
		L_12 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>(L_11);
		int32_t L_13 = ___1_start;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_14;
		L_14 = il2cpp_unsafe_add<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7,int32_t>(L_12, L_13, sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7));
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA9F825B8DBAC91D3842286C7178418ABB07B1D26 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>((uint8_t*)L_1);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ReadOnlySpan_1_get_Item_mE6BD48D16A4EC0829AA17F85D82240E29A428B74 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_2 = __this->____pointer;
		V_0 = L_2;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_5;
		L_5 = il2cpp_unsafe_add<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7,int32_t>(L_3, L_4, sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m9C4A08D1D66A727A41783FAF155A9EBFD43E3AED (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m837D39395B41292FD42A4C8440B0CF2FCEACF63C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_2 = ___0_destination;
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3 = L_2.____pointer;
		V_0 = L_3;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_0));
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_5 = __this->____pointer;
		V_0 = L_5;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mE9356EFC995C91F1F68E7014F63C01ACE44A92FD(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2563DC0388C294F7BC7A8D92608B0835AEA5DEB7 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m837D39395B41292FD42A4C8440B0CF2FCEACF63C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_2 = ___0_destination;
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3 = L_2.____pointer;
		V_1 = L_3;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_1));
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_5 = __this->____pointer;
		V_1 = L_5;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mE9356EFC995C91F1F68E7014F63C01ACE44A92FD(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4C616750992EAE20DB2DF48FD1D5CC95F271ABA8 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD ReadOnlySpan_1_Slice_mB744AFAAD1E3477B00FD27BDCB8139232D7C049F (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_2 = __this->____pointer;
		V_0 = L_2;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_5;
		L_5 = il2cpp_unsafe_add<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7,int32_t>(L_3, L_4, sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mF6559C79A40F333398BADB37F314B3377ED80DBD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD ReadOnlySpan_1_Slice_m11943128643537959E9A04000BBC1CD6014B1B72 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_5 = __this->____pointer;
		V_0 = L_5;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_8;
		L_8 = il2cpp_unsafe_add<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7,int32_t>(L_6, L_7, sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mF6559C79A40F333398BADB37F314B3377ED80DBD_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* ReadOnlySpan_1_ToArray_m13A871F20BEF3FBF9B8425B5FD833901F4CA98E4 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_1;
		L_1 = Array_Empty_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2B94F34A92C08A3CE8206FE64FFC16E41FEFD896_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_3 = (TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264*)(TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_6;
		L_6 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>(L_5);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_7 = __this->____pointer;
		V_0 = L_7;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mE9356EFC995C91F1F68E7014F63C01ACE44A92FD(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mAA7DBFC7CC01CF7B3C8347F941779303C2206562 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD ___0_left, ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD L_0 = ___0_left;
		ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m1B2862A8EF67D4678988FAB331A34DE03C0B2AB1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m016DEB651DD97402DA0DE1BC244EC2653A32A7D0 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mF1FFDEC388A9B3C5FD276EE1E815917D81D62A58 (ReadOnlySpan_1_tAC0F3060817E6318960A501734CB2EE42DE5CFAD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0266AA3E0300DA3D52E2E98EB7520CD7F8208A21 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_12;
		L_12 = il2cpp_unsafe_as_ref<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70>(L_11);
		int32_t L_13 = ___1_start;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_14;
		L_14 = il2cpp_unsafe_add<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70,int32_t>(L_12, L_13, sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70));
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9611EF1C39BCA7A6F1A8CDAB55AFC60705930096 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70>((uint8_t*)L_1);
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* ReadOnlySpan_1_get_Item_m3FB78F66FCAAFB0E3B1828753E01F1B9E0632632 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_2 = __this->____pointer;
		V_0 = L_2;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_5;
		L_5 = il2cpp_unsafe_add<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70,int32_t>(L_3, L_4, sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m44F9EC5FE21021FDFDCB681F8DDE0F1C742DEB7E (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m23D3155143CC1526C7A904C5D00B8E91BC807785_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757 L_2 = ___0_destination;
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_3 = L_2.____pointer;
		V_0 = L_3;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_0));
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_5 = __this->____pointer;
		V_0 = L_5;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m3BDDDFA56B678A3F6CD9367229A2AB2DD655DBC6(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mAA5D01E703360828CD233A60290CC6A190135BC4 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m23D3155143CC1526C7A904C5D00B8E91BC807785_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tAB99C3A62B99C371A57890CBEF54E67D40C74757 L_2 = ___0_destination;
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_3 = L_2.____pointer;
		V_1 = L_3;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_1));
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_5 = __this->____pointer;
		V_1 = L_5;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m3BDDDFA56B678A3F6CD9367229A2AB2DD655DBC6(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m6BAFF649903A2514832425D6D084EDB15D67C099 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D ReadOnlySpan_1_Slice_mF7C5CDA163CE43A6834B10B3CFCA9BFA35AA8C68 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_2 = __this->____pointer;
		V_0 = L_2;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_5;
		L_5 = il2cpp_unsafe_add<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70,int32_t>(L_3, L_4, sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m00E19411A1DA4219905A9D0F310A0F5EFE91452E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D ReadOnlySpan_1_Slice_mDA35F1D771A6D8C86ED230EB0B1EBC2A6B9053D5 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_5 = __this->____pointer;
		V_0 = L_5;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_8;
		L_8 = il2cpp_unsafe_add<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70,int32_t>(L_6, L_7, sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m00E19411A1DA4219905A9D0F310A0F5EFE91452E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* ReadOnlySpan_1_ToArray_m67F066539349535E41F1B86338BC6B9D3FDBF52A (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_1;
		L_1 = Array_Empty_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m75584547F5E98D337086D729A5763DF7208584F1_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_3 = (TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A*)(TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_6;
		L_6 = il2cpp_unsafe_as_ref<TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70>(L_5);
		ByReference_1_t415545A4923282B4F0E5B6849F0D0EBCFCEC0FA1 L_7 = __this->____pointer;
		V_0 = L_7;
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m3BDDDFA56B678A3F6CD9367229A2AB2DD655DBC6(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m6E872211411756DA01878DF4457DCDB2F7493555 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D ___0_left, ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D L_0 = ___0_left;
		ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mA409BD2C1E701E5F6E9F07272324A5CBB4CBD885(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m4A790A1E1959BE0E07C8B7EA1967849241071FDE (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mED2CB20B34D7F34A52387C815F35F6058E533845 (ReadOnlySpan_1_t410D7557D7A648D15425D3011CEA20EC1E70F51D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4C04D1CB12D6338D293224C05C5F29176F7F099B (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_12;
		L_12 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>(L_11);
		int32_t L_13 = ___1_start;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_14;
		L_14 = il2cpp_unsafe_add<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84,int32_t>(L_12, L_13, sizeof(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84));
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>((uint8_t*)L_1);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ReadOnlySpan_1_get_Item_m98BF489142C1E56A1E42C8EB996933EC08817A16 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_2 = __this->____pointer;
		V_0 = L_2;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_5;
		L_5 = il2cpp_unsafe_add<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84,int32_t>(L_3, L_4, sizeof(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB6AC8A73400B969AC07CE1B675218D95BC0F5F44 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB8D6DC684227BC3DC2A01E24AC8328E292792606_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B L_2 = ___0_destination;
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3 = L_2.____pointer;
		V_0 = L_3;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_0));
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_5 = __this->____pointer;
		V_0 = L_5;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m18BC246A3E2FFC089BAEC08B8D3687BB57C1AFA0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m046D2E4751AB7411F3AC70C9519434D35D3EC892 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB8D6DC684227BC3DC2A01E24AC8328E292792606_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF43A7E39B0E02FA581099E65B07DE705C84BF82B L_2 = ___0_destination;
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3 = L_2.____pointer;
		V_1 = L_3;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_1));
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_5 = __this->____pointer;
		V_1 = L_5;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m18BC246A3E2FFC089BAEC08B8D3687BB57C1AFA0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m3D536C1AA846103B3CFF3169499B0ECC6C8E759C (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 ReadOnlySpan_1_Slice_m2A10A4F560BFE91042BF40F6BE6F6A7828167725 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_2 = __this->____pointer;
		V_0 = L_2;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_5;
		L_5 = il2cpp_unsafe_add<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84,int32_t>(L_3, L_4, sizeof(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mD3089C4AF8BE4035B994BDFBEC9A9CAFA8CB265B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 ReadOnlySpan_1_Slice_mEF6FE8B97B84D983A28F1006CEEF109A76ECF91B (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_5 = __this->____pointer;
		V_0 = L_5;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_8;
		L_8 = il2cpp_unsafe_add<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84,int32_t>(L_6, L_7, sizeof(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mD3089C4AF8BE4035B994BDFBEC9A9CAFA8CB265B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* ReadOnlySpan_1_ToArray_m4ED818D212DE86CD4A113A58341514BD8CAD3102 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_1;
		L_1 = Array_Empty_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_mBAA221AAA40C49D352B30E0C85FCCDAC43BDE87A_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_3 = (BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166*)(BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_6;
		L_6 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>(L_5);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_7 = __this->____pointer;
		V_0 = L_7;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m18BC246A3E2FFC089BAEC08B8D3687BB57C1AFA0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mE4BFE6BC41C31CA8E1E3B00CD8447F54D29786BC (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 ___0_left, ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_0 = ___0_left;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m6856D87C72E706B448D244EE0B1EF4259A182699(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mC6767D1B0152C1686E3900AFEC7E35FCF444EED7 (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mCF4110B25684A86C222A4BFABA18A6F7CE7CE2CF (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC89BBC8EEC55027BDC6E8B2BFFAF8A5EDCD8E0B4 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_12;
		L_12 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>(L_11);
		int32_t L_13 = ___1_start;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_14;
		L_14 = il2cpp_unsafe_add<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC,int32_t>(L_12, L_13, sizeof(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC));
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>((uint8_t*)L_1);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ReadOnlySpan_1_get_Item_m118E16DE91D6BF4342418064350C0EBC99B0D9A1 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_2 = __this->____pointer;
		V_0 = L_2;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_5;
		L_5 = il2cpp_unsafe_add<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC,int32_t>(L_3, L_4, sizeof(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m949C848BA3F7200BD58DB714932A8671DB87FE0B (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1441A9353CECB931EBDA97BCF2C7508CDB9BD4A8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693 L_2 = ___0_destination;
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3 = L_2.____pointer;
		V_0 = L_3;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_0));
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_5 = __this->____pointer;
		V_0 = L_5;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m3BA9BCA32F825FF35D49D9750CB97FD36423FEAE(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mCB2719F202D0E8F3837266DA81D5BB168F9213BC (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1441A9353CECB931EBDA97BCF2C7508CDB9BD4A8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t7788EA7D78B35C79410AE1276F02A3C32F524693 L_2 = ___0_destination;
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3 = L_2.____pointer;
		V_1 = L_3;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_1));
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_5 = __this->____pointer;
		V_1 = L_5;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m3BA9BCA32F825FF35D49D9750CB97FD36423FEAE(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m9FDABA43D8B6263BB113B1A022CE763152EF97C9 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 ReadOnlySpan_1_Slice_m81347F3EA3E2566D1069F3F9510EFC34FCF956D0 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_2 = __this->____pointer;
		V_0 = L_2;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_5;
		L_5 = il2cpp_unsafe_add<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC,int32_t>(L_3, L_4, sizeof(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m4C6CC6D30209938BC19156C6F85502199EC49ED4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 ReadOnlySpan_1_Slice_m3281E270BB50B25D2C95C030D4BF01387C4C61B0 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_5 = __this->____pointer;
		V_0 = L_5;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_8;
		L_8 = il2cpp_unsafe_add<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC,int32_t>(L_6, L_7, sizeof(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m4C6CC6D30209938BC19156C6F85502199EC49ED4_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* ReadOnlySpan_1_ToArray_mCAA308A034B82CDB427D1053EF39AB2FD00AE292 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_1;
		L_1 = Array_Empty_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m58A6111002D80C622DDC926C5C82A9B6E073CF2E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_3 = (ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B*)(ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_6;
		L_6 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>(L_5);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_7 = __this->____pointer;
		V_0 = L_7;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m3BA9BCA32F825FF35D49D9750CB97FD36423FEAE(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m00CCEFB87261E2366E9E45BF52B1F4330313DA9B (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 ___0_left, ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_0 = ___0_left;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m0FEB17F2AEA2B5972F95F6A7A8A8EA18AFACC1B7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA7B6C2FC2BD57F9AD36005BBD70DB583FD321817 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m083DFC50585276FF33F2FD17384CFFC69430D1F1 (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5CDA6F9AB0B117F96FE2AA43C008269A0CED05DA (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_12;
		L_12 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>(L_11);
		int32_t L_13 = ___1_start;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_14;
		L_14 = il2cpp_unsafe_add<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A,int32_t>(L_12, L_13, sizeof(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A));
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>((uint8_t*)L_1);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ReadOnlySpan_1_get_Item_m85C4E0A8EA5A914E162E008FF5135E345DA7D228 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_2 = __this->____pointer;
		V_0 = L_2;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_5;
		L_5 = il2cpp_unsafe_add<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A,int32_t>(L_3, L_4, sizeof(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m45D5AE6AA5BEEB614073D094DF60E86EE8866D82 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0AD1DB021C04574974A6E80E0085E34CC13B8DA3_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9 L_2 = ___0_destination;
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3 = L_2.____pointer;
		V_0 = L_3;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_0));
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_5 = __this->____pointer;
		V_0 = L_5;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m153FD379A473F081F8F4034F9A3BD8D7C77C4250(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mBCEC7ADE904A236106F2381B5FC76FAD5F032738 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0AD1DB021C04574974A6E80E0085E34CC13B8DA3_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9AC0625A10517F134F8A74A5510C8E2303A60AC9 L_2 = ___0_destination;
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3 = L_2.____pointer;
		V_1 = L_3;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_1));
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_5 = __this->____pointer;
		V_1 = L_5;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m153FD379A473F081F8F4034F9A3BD8D7C77C4250(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m5C750F99F7FD8B4EFB9C9134052A49C8C57D6B17 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 ReadOnlySpan_1_Slice_m6AEDE690364F123952B9952BDFF665CB23052BC1 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_2 = __this->____pointer;
		V_0 = L_2;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_5;
		L_5 = il2cpp_unsafe_add<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A,int32_t>(L_3, L_4, sizeof(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m9039EBF76947D375B56C4F07CBA81BDECB9BC3AE_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 ReadOnlySpan_1_Slice_m2C01DE70406F6958F76EB4B3BFC22BFA74B219A8 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_5 = __this->____pointer;
		V_0 = L_5;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_8;
		L_8 = il2cpp_unsafe_add<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A,int32_t>(L_6, L_7, sizeof(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m9039EBF76947D375B56C4F07CBA81BDECB9BC3AE_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* ReadOnlySpan_1_ToArray_m5A643F5065330858DF326EC07C5F2755187AA0E2 (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_1;
		L_1 = Array_Empty_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m92FCB0D0A9B633E1630815326903D9A2ACF5FCB5_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_3 = (ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44*)(ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_6;
		L_6 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>(L_5);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_7 = __this->____pointer;
		V_0 = L_7;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m153FD379A473F081F8F4034F9A3BD8D7C77C4250(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m3C20B20802D6773EE4055368BCD557C2501EF9AC (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 ___0_left, ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_0 = ___0_left;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mA7324C0FF66415919E90638B27E56748E6B71AC2(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mAB783172BFF894C19C36DC13ECB0CE952C5A3B3F (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m72A073A6514C47F54C726C26CD83D79D5688AC3E (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEB5A4BCFDA834CC2E5D0EF67B82C0B08CD829485 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_12;
		L_12 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>(L_11);
		int32_t L_13 = ___1_start;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_14;
		L_14 = il2cpp_unsafe_add<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF,int32_t>(L_12, L_13, sizeof(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF));
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>((uint8_t*)L_1);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ReadOnlySpan_1_get_Item_m9A78BD7C8ED715BE9942695A8B8AD62C23DA19F2 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_2 = __this->____pointer;
		V_0 = L_2;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_5;
		L_5 = il2cpp_unsafe_add<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF,int32_t>(L_3, L_4, sizeof(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mE4A4DEF23F3DBA3597645BB91AB48EEE8BA8BBE0 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m70E23654E8CB62EA909EBE35A2725216426CDC8C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE L_2 = ___0_destination;
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3 = L_2.____pointer;
		V_0 = L_3;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_0));
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_5 = __this->____pointer;
		V_0 = L_5;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m6767CF285BBDBBAC312EEBC7DF05904C03206D04(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m17C466294EDB766F9C50741D0485D3DFDBEC9984 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m70E23654E8CB62EA909EBE35A2725216426CDC8C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t88F8CD1EA75EBE712BE2BF4097FFF46F17BF67FE L_2 = ___0_destination;
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3 = L_2.____pointer;
		V_1 = L_3;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_1));
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_5 = __this->____pointer;
		V_1 = L_5;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m6767CF285BBDBBAC312EEBC7DF05904C03206D04(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4DA8A9A812DFF699CBFA9962CEE3464531A9C722 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B ReadOnlySpan_1_Slice_m2A81E5585609F5BE4CD3010A17E5EEBE671A1891 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_2 = __this->____pointer;
		V_0 = L_2;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_5;
		L_5 = il2cpp_unsafe_add<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF,int32_t>(L_3, L_4, sizeof(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m4D6AB0B6AD175C1EA54B7A8B073D0A107C35F7C5_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B ReadOnlySpan_1_Slice_mCAB73E039B5E60A95B1BAE8A2294E6C64300706A (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_5 = __this->____pointer;
		V_0 = L_5;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_8;
		L_8 = il2cpp_unsafe_add<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF,int32_t>(L_6, L_7, sizeof(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m4D6AB0B6AD175C1EA54B7A8B073D0A107C35F7C5_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* ReadOnlySpan_1_ToArray_m9478DCEFAD2B5437654F0EEC3C6DB5000C9EE0F9 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_1;
		L_1 = Array_Empty_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m08CC1C892BC9DDB814A3E1280ABE5D319B561552_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_3 = (JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E*)(JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_6;
		L_6 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>(L_5);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_7 = __this->____pointer;
		V_0 = L_7;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m6767CF285BBDBBAC312EEBC7DF05904C03206D04(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m9F31AB2C838CB9E1FA53AEEAC739619225CEA633 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B ___0_left, ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_0 = ___0_left;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m503523B13A92F5642F25ED4EB0A350353F3BB7A7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m43C01E27545654D2417875C1F6543707630D244D (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m4FA916BEE0204372E273DFFC70D410FBA299EF67 (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD2CFDC0D12AE905CD00EBB34A857545F5BBE84C7 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_12;
		L_12 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>(L_11);
		int32_t L_13 = ___1_start;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_14;
		L_14 = il2cpp_unsafe_add<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576,int32_t>(L_12, L_13, sizeof(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576));
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>((uint8_t*)L_1);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ReadOnlySpan_1_get_Item_m55C6DBE95469C70541AB0543BB3E838A6CB2BDA1 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_2 = __this->____pointer;
		V_0 = L_2;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_5;
		L_5 = il2cpp_unsafe_add<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576,int32_t>(L_3, L_4, sizeof(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m559BF1687C9A17E376205A4BA75C0DDF898181DA (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m48A4699144480E2412ACDB27540CE6E223FDE180_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A L_2 = ___0_destination;
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3 = L_2.____pointer;
		V_0 = L_3;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_0));
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_5 = __this->____pointer;
		V_0 = L_5;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_mC7369972D7C29F4E9A0BF1C43373772035484C5A(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m462140199082C7C6401FE8EE34D65AFA049E0B73 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m48A4699144480E2412ACDB27540CE6E223FDE180_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t79152BAC0EB801C28951EADEE8C12D339766593A L_2 = ___0_destination;
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3 = L_2.____pointer;
		V_1 = L_3;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_1));
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_5 = __this->____pointer;
		V_1 = L_5;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_mC7369972D7C29F4E9A0BF1C43373772035484C5A(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m2F744AB8CE9F28C35339FC87910CBEFA0B925E5F (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 ReadOnlySpan_1_Slice_m4FDBF0516D5B657F8526E413214B77F01F1DC6C0 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_2 = __this->____pointer;
		V_0 = L_2;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_5;
		L_5 = il2cpp_unsafe_add<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576,int32_t>(L_3, L_4, sizeof(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m2FAC2A6042FF54E58FCE6FA46894B654C463A9A2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 ReadOnlySpan_1_Slice_m4CA0B25402D0558DF34F394CD61E1E9A3675626C (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_5 = __this->____pointer;
		V_0 = L_5;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_8;
		L_8 = il2cpp_unsafe_add<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576,int32_t>(L_6, L_7, sizeof(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m2FAC2A6042FF54E58FCE6FA46894B654C463A9A2_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* ReadOnlySpan_1_ToArray_m773777742FF9C961EC156E5D7171FF5B12C6F558 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_1;
		L_1 = Array_Empty_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m71B89F046A32E33B23E36FDFFAF080A134900C52_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_3 = (TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6*)(TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_6;
		L_6 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>(L_5);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_7 = __this->____pointer;
		V_0 = L_7;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_mC7369972D7C29F4E9A0BF1C43373772035484C5A(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m3CF749B662AE0CE71FF165F481E93959A56E6A79 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 ___0_left, ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_0 = ___0_left;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m1B9D0C3880192DADA46556C5E5AD520F7A83270E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m37E1D157224CBB6ED13B3FE5B0C8F257F30F39D5 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7BE167B8155D329F6E5664E01B2A6AA4D35619B6 (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD0DDA163ACC1DCDB9DCF9ECAB15F50A66FFF1F69 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_12;
		L_12 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>(L_11);
		int32_t L_13 = ___1_start;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_14;
		L_14 = il2cpp_unsafe_add<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A,int32_t>(L_12, L_13, sizeof(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A));
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>((uint8_t*)L_1);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ReadOnlySpan_1_get_Item_mA139A79660B65AE904F0B81F01E1D25D2D19C54D (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_2 = __this->____pointer;
		V_0 = L_2;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_5;
		L_5 = il2cpp_unsafe_add<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A,int32_t>(L_3, L_4, sizeof(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m019EFB4D93929BECBF04277BC32087432300ACEF (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC82BE656FB6C3944CDACEFFE61C57838A42AC65A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C L_2 = ___0_destination;
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3 = L_2.____pointer;
		V_0 = L_3;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_0));
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_5 = __this->____pointer;
		V_0 = L_5;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m84450478D3370688499D5259748C93A6F42F4380(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m090F184D98D385E1B1301C87C72B987E375E920B (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC82BE656FB6C3944CDACEFFE61C57838A42AC65A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t558158396DF3F0024B523894C571C6BDC2EBB44C L_2 = ___0_destination;
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3 = L_2.____pointer;
		V_1 = L_3;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_1));
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_5 = __this->____pointer;
		V_1 = L_5;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m84450478D3370688499D5259748C93A6F42F4380(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m68A4CBE73B8FD1D532FCED023D48F7A96750D682 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 ReadOnlySpan_1_Slice_mA0AF113309F825E81771A17BBD5623A75CEDD02D (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_2 = __this->____pointer;
		V_0 = L_2;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_5;
		L_5 = il2cpp_unsafe_add<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A,int32_t>(L_3, L_4, sizeof(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m004E1664553EC2187EE15EA6208D7E911085778B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 ReadOnlySpan_1_Slice_m788F80642992F35C2C1256E9D115DE2DF8A47CAC (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_5 = __this->____pointer;
		V_0 = L_5;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_8;
		L_8 = il2cpp_unsafe_add<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A,int32_t>(L_6, L_7, sizeof(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m004E1664553EC2187EE15EA6208D7E911085778B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* ReadOnlySpan_1_ToArray_m2FF12553B2FC0100FCD6773A60322A9863473DF8 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_1;
		L_1 = Array_Empty_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m63D30574F41CEDB52830394088C6A9B85051E000_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_3 = (TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB*)(TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_6;
		L_6 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>(L_5);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_7 = __this->____pointer;
		V_0 = L_7;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m84450478D3370688499D5259748C93A6F42F4380(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m0E41763A92B6118EA07A75F83617DB343F91BDB9 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 ___0_left, ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_0 = ___0_left;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m3149F4D5B719881491AA225AC949DCE4486B8BB5(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m1A3976F772DB91A67CF27DE446DCB03C3E04F8E6 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m6E11C77DE3379C049FD4953B718154B45525ED91 (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m16152BBCD656192BD992860B4A810BFCDE2518A2 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_12;
		L_12 = il2cpp_unsafe_as_ref<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E>(L_11);
		int32_t L_13 = ___1_start;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_14;
		L_14 = il2cpp_unsafe_add<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E,int32_t>(L_12, L_13, sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E));
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7FCBCC129D05176924D46CE84043B3F53307CF9D (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_2;
		L_2 = il2cpp_unsafe_as_ref<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E>((uint8_t*)L_1);
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* ReadOnlySpan_1_get_Item_m48D4B330249910025F3931E9991E562B6249766F (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_2 = __this->____pointer;
		V_0 = L_2;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_5;
		L_5 = il2cpp_unsafe_add<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E,int32_t>(L_3, L_4, sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD173AAECEBA210C7E9201FAF59C44FA89B980BA4 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m2DCE95B7B5FB2FFADFDAB65FF2CDFEF5319C637A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 L_2 = ___0_destination;
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_3 = L_2.____pointer;
		V_0 = L_3;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_0));
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_5 = __this->____pointer;
		V_0 = L_5;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9978769A30A23555B7484A5BF39FD62F50734CD0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD7F4607B41A84464FCB66CD70B0C813371E0CF18 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m2DCE95B7B5FB2FFADFDAB65FF2CDFEF5319C637A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t180448960B6B6F682EFC16994B9716109E7DD2C6 L_2 = ___0_destination;
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_3 = L_2.____pointer;
		V_1 = L_3;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_1));
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_5 = __this->____pointer;
		V_1 = L_5;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9978769A30A23555B7484A5BF39FD62F50734CD0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m07DFA5742464B6589BBB381A6E9CD9F34A81D71D (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A ReadOnlySpan_1_Slice_m5B48F55218C16394AD34D6C4C5D1BD3ECC0D196A (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_2 = __this->____pointer;
		V_0 = L_2;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_5;
		L_5 = il2cpp_unsafe_add<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E,int32_t>(L_3, L_4, sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m7137C117AE03D531CDB3B2064C00B8267E6FACF0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A ReadOnlySpan_1_Slice_mC73CD453EDB203880E4637AA0E5D555931F3BB33 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_5 = __this->____pointer;
		V_0 = L_5;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_8;
		L_8 = il2cpp_unsafe_add<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E,int32_t>(L_6, L_7, sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7137C117AE03D531CDB3B2064C00B8267E6FACF0_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* ReadOnlySpan_1_ToArray_m2361EF9CC4DB7CD630CC949A04157A7E7C8639D5 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_1;
		L_1 = Array_Empty_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m7BB2577DAF99987D952BF456168D30CB2984111F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_3 = (CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8*)(CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_6;
		L_6 = il2cpp_unsafe_as_ref<CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E>(L_5);
		ByReference_1_t55AA67E29A3ECACAB26A99C259BAE9986833066F L_7 = __this->____pointer;
		V_0 = L_7;
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9978769A30A23555B7484A5BF39FD62F50734CD0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m051519AE4B8ED04EE5B917E33F3133D23B75C368 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A ___0_left, ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A L_0 = ___0_left;
		ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m0068C3A40B289B4CFCF016E630DA57280BCD5433(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m4EA9E0E165E314F7DE6FCA90E9E92B1342D8B6E5 (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mC579181039FFDE9CB3DF2B11B2D81401C268597A (ReadOnlySpan_1_t69C2D231426A3CCD49A1147827E6A4A20797BD4A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m35026A62427132776570C05B49D7F6EB78F1D498 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_12;
		L_12 = il2cpp_unsafe_as_ref<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1>(L_11);
		int32_t L_13 = ___1_start;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_14;
		L_14 = il2cpp_unsafe_add<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1,int32_t>(L_12, L_13, sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1));
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA21B81C83B72BEC7DEA6D711A8FF00D4A446E8FA (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_2;
		L_2 = il2cpp_unsafe_as_ref<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1>((uint8_t*)L_1);
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* ReadOnlySpan_1_get_Item_m0B91B645FD6067D3491CD7A1D0DCEF3218B26DA6 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_2 = __this->____pointer;
		V_0 = L_2;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_5;
		L_5 = il2cpp_unsafe_add<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1,int32_t>(L_3, L_4, sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m50954C24FFDA6E28877E0071C18275110AAA8A71 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mEC524ECFE2671AB0409E6BFE4D02A0913CD301B4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE L_2 = ___0_destination;
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_3 = L_2.____pointer;
		V_0 = L_3;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_0));
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_5 = __this->____pointer;
		V_0 = L_5;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mBE843C8D3F1594DAA3685F0F40EA7AC2617FA01F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC8F0B84768D1556AE9847E5883FF3F0DA8B5EEE2 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mEC524ECFE2671AB0409E6BFE4D02A0913CD301B4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t34B932F5AC7CBB47C9A670FA2E06063AE44CEEEE L_2 = ___0_destination;
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_3 = L_2.____pointer;
		V_1 = L_3;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_1));
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_5 = __this->____pointer;
		V_1 = L_5;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mBE843C8D3F1594DAA3685F0F40EA7AC2617FA01F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mCB988190282A15B609D22AD2FEEA55E8BBB06FE6 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE ReadOnlySpan_1_Slice_mA5AC86BB6ED47AE66F837DEDF4FADDAB69D86F94 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_2 = __this->____pointer;
		V_0 = L_2;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_5;
		L_5 = il2cpp_unsafe_add<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1,int32_t>(L_3, L_4, sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m94483C496A2F1BC4FB1666B2D49A273A58047BE3_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE ReadOnlySpan_1_Slice_m196A8BFA4DB850BAF876452B439560F73F595BEE (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_5 = __this->____pointer;
		V_0 = L_5;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_8;
		L_8 = il2cpp_unsafe_add<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1,int32_t>(L_6, L_7, sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m94483C496A2F1BC4FB1666B2D49A273A58047BE3_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* ReadOnlySpan_1_ToArray_mF7C77FCDABCF95CFA6A51A6BB79E309D9EB94F7C (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_1;
		L_1 = Array_Empty_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m65292F3D2977B5BFC00B694183387447DC47AC22_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_3 = (CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0*)(CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_6;
		L_6 = il2cpp_unsafe_as_ref<CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1>(L_5);
		ByReference_1_t36B48293C971AABB7949CED7934A487AB408F9FB L_7 = __this->____pointer;
		V_0 = L_7;
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mBE843C8D3F1594DAA3685F0F40EA7AC2617FA01F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mC5A3203450D2CD0BCC06F9565096F33BA7BE4CEA (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE ___0_left, ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE L_0 = ___0_left;
		ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF2921BDF8193F5F91B3FD6EE1200F144E44DAA95(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m83B498E841ECBF78E108E208B855AA1EA868830E (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mC758F3512DCED24D96FFCCDAD8D621D325276C59 (ReadOnlySpan_1_tFE6B88D1F5F985608AD058B340743800AACA21CE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m94A14B8F988C0C41801D7747B9C0A6F8F259D420 (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_12;
		L_12 = il2cpp_unsafe_as_ref<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454>(L_11);
		int32_t L_13 = ___1_start;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_14;
		L_14 = il2cpp_unsafe_add<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454,int32_t>(L_12, L_13, sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454));
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC6C84141EB1405384834AAFC037DC1CE569FF3E5 (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_2;
		L_2 = il2cpp_unsafe_as_ref<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454>((uint8_t*)L_1);
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* ReadOnlySpan_1_get_Item_mCC39365027F3774B876459A25E215C757353219F (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_2 = __this->____pointer;
		V_0 = L_2;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_5;
		L_5 = il2cpp_unsafe_add<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454,int32_t>(L_3, L_4, sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mE10B7D5065BBCAD4F7085EC9DC83AA908CEC92E4 (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFE869BB22348BD895B3026AEC99D7C3BD47A9B4E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB L_2 = ___0_destination;
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_3 = L_2.____pointer;
		V_0 = L_3;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_0));
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_5 = __this->____pointer;
		V_0 = L_5;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8B55F465541EFB55C267F9ED9D279673603D6B86(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m83EBF91D7E2875AEAA9F05B48E7734038CB745AF (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFE869BB22348BD895B3026AEC99D7C3BD47A9B4E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t497BE6EFB8E493B6B683E05FE152E8C5354022CB L_2 = ___0_destination;
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_3 = L_2.____pointer;
		V_1 = L_3;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_1));
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_5 = __this->____pointer;
		V_1 = L_5;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8B55F465541EFB55C267F9ED9D279673603D6B86(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mCD0FBE39950693164647B81D949803B4407C5A95 (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B ReadOnlySpan_1_Slice_mBFC638BB2D800CD5CF57E5DB56ACD9789BD46E0F (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_2 = __this->____pointer;
		V_0 = L_2;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_5;
		L_5 = il2cpp_unsafe_add<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454,int32_t>(L_3, L_4, sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m94D331FACB81B16B5A8B53A0CBBC1B89F4C9FC08_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B ReadOnlySpan_1_Slice_m76A4CC67CBF3416B9F790FBA0750C279A6F235BD (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_5 = __this->____pointer;
		V_0 = L_5;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_8;
		L_8 = il2cpp_unsafe_add<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454,int32_t>(L_6, L_7, sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m94D331FACB81B16B5A8B53A0CBBC1B89F4C9FC08_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* ReadOnlySpan_1_ToArray_mF315C534BCB37ACBD833313DA1783BC308A4ABBF (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_1;
		L_1 = Array_Empty_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AF5F83A171B2A0940684FA1B098063FEF5F3F62_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_3 = (LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2*)(LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_6;
		L_6 = il2cpp_unsafe_as_ref<LineElement_t012671A3568902C51830B75D1F5DB18B390F8454>(L_5);
		ByReference_1_tFBE5581BA218BD534C93EE5CDBFF72F1850DAB2D L_7 = __this->____pointer;
		V_0 = L_7;
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8B55F465541EFB55C267F9ED9D279673603D6B86(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m5AB2F5B6405A58A069464303D74CB580756B0575 (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B ___0_left, ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B L_0 = ___0_left;
		ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mC55A8136D367638DA49062FC3A5CFC65D8ECB4AE(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF03221207F9B61F2ECFFBB7EFFB787790A7199ED (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m23E48DA7E6FC2A63926881812692AA9884B7454B (ReadOnlySpan_1_tA503B85A737C7971441E515A87B4E45C451DFD2B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB05D1D7672A03A4ABD58749E08DEDE580EB94BB7 (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_12;
		L_12 = il2cpp_unsafe_as_ref<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0>(L_11);
		int32_t L_13 = ___1_start;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_14;
		L_14 = il2cpp_unsafe_add<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0,int32_t>(L_12, L_13, sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0));
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m69023E99F9EB5B13873BC82D49633BB81D14BD6F (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_2;
		L_2 = il2cpp_unsafe_as_ref<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0>((uint8_t*)L_1);
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* ReadOnlySpan_1_get_Item_m1E21404DBB138B8D233397EE0648E9E1C2CDCC26 (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_2 = __this->____pointer;
		V_0 = L_2;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_5;
		L_5 = il2cpp_unsafe_add<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0,int32_t>(L_3, L_4, sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mA53D742C33428E8F1A2EF9329BCE654E8C18C2A6 (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4D14532C649F00E0AB18ED9138D0319E489FC85D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA L_2 = ___0_destination;
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_3 = L_2.____pointer;
		V_0 = L_3;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_0));
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_5 = __this->____pointer;
		V_0 = L_5;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m2324A006C0CF902BAA1CAAB0BD55B0B9767D72E5(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m8E86BF1255669DC3F2FAF146CFEBBAA72E7E50E5 (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4D14532C649F00E0AB18ED9138D0319E489FC85D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tD01BE6CE0AD935A9C7F96CFE915AB46E9ECED0AA L_2 = ___0_destination;
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_3 = L_2.____pointer;
		V_1 = L_3;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_1));
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_5 = __this->____pointer;
		V_1 = L_5;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m2324A006C0CF902BAA1CAAB0BD55B0B9767D72E5(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m76A170539FF80475CF88B65FC84156B7CB4DABFE (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 ReadOnlySpan_1_Slice_m69EE423699CC937442B6991E383EA2276C2332DF (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_2 = __this->____pointer;
		V_0 = L_2;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_5;
		L_5 = il2cpp_unsafe_add<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0,int32_t>(L_3, L_4, sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m73AD5327FFB0ECD982D40208F256B5A3C9E63E12_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 ReadOnlySpan_1_Slice_mC32EF9B667EAC59E77ED9B2AC23F03A4A9ACC4FA (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_5 = __this->____pointer;
		V_0 = L_5;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_8;
		L_8 = il2cpp_unsafe_add<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0,int32_t>(L_6, L_7, sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m73AD5327FFB0ECD982D40208F256B5A3C9E63E12_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* ReadOnlySpan_1_ToArray_mD8B7A38E2793D8A10F4894DC9C384C999F5E6DF2 (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_1;
		L_1 = Array_Empty_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m1756BA292F193E432E2209DEC922CC54B91C28B5_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_3 = (PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115*)(PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_6;
		L_6 = il2cpp_unsafe_as_ref<PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0>(L_5);
		ByReference_1_t35C7A568359B649F81337FEE709ED5AE4A4F5BB0 L_7 = __this->____pointer;
		V_0 = L_7;
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m2324A006C0CF902BAA1CAAB0BD55B0B9767D72E5(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m2940E0EA0F9AC51C9397204D5FE6E4C64703CABA (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 ___0_left, ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 L_0 = ___0_left;
		ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m7F18B1D59850E0EAE5E9DD3D75AF587238A6B7DC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mB002A48D458073CA6CBD0BEAE7FDDC0C0A57586F (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2E2D11598916956515AA969E23DEEF058AD769E4 (ReadOnlySpan_1_tBCBB7D56F632F6E0544071FFF75E20BFDB5F67D3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m607E830FDD3BC5A9448C5A54D41CDA0E40DFD4DC (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_12;
		L_12 = il2cpp_unsafe_as_ref<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57>(L_11);
		int32_t L_13 = ___1_start;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_14;
		L_14 = il2cpp_unsafe_add<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57,int32_t>(L_12, L_13, sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57));
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m23B0F76F1B305CBC247854C85838459CBE3EF401 (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_2;
		L_2 = il2cpp_unsafe_as_ref<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57>((uint8_t*)L_1);
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* ReadOnlySpan_1_get_Item_m129C0BA7191FD77D18D1327C707FB27C5848B50B (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_2 = __this->____pointer;
		V_0 = L_2;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_5;
		L_5 = il2cpp_unsafe_add<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57,int32_t>(L_3, L_4, sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD4C230EDE128260BAF21FBA7A113839D0260DB7A (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB83468B4122A53ED969B7D57062C2C68CF5FD11A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 L_2 = ___0_destination;
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_3 = L_2.____pointer;
		V_0 = L_3;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_0));
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_5 = __this->____pointer;
		V_0 = L_5;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m0A4EB1FDAC59253300D8EA7C3EBC00D9165BBB60(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m754E8B81BD36EEA609D13BF6FD81B2F6C8259F9B (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB83468B4122A53ED969B7D57062C2C68CF5FD11A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tFEDD78D7F7F7CAC447265BA315649C319C0AE5A9 L_2 = ___0_destination;
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_3 = L_2.____pointer;
		V_1 = L_3;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_1));
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_5 = __this->____pointer;
		V_1 = L_5;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m0A4EB1FDAC59253300D8EA7C3EBC00D9165BBB60(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0FDB31C500D773326DF52167CD7A8F2C32394D83 (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 ReadOnlySpan_1_Slice_m5603AE6ABCBF424E908A904F7AA4FADCC64C0B39 (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_2 = __this->____pointer;
		V_0 = L_2;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_5;
		L_5 = il2cpp_unsafe_add<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57,int32_t>(L_3, L_4, sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m775EB674DE455FEB51464BE0F58F26E63630BC9B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 ReadOnlySpan_1_Slice_mFAC30A4808DCFD4DC32869F387356C77BBC6D15C (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_5 = __this->____pointer;
		V_0 = L_5;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_8;
		L_8 = il2cpp_unsafe_add<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57,int32_t>(L_6, L_7, sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m775EB674DE455FEB51464BE0F58F26E63630BC9B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* ReadOnlySpan_1_ToArray_mC63738226C36A327665A048784A84D3CBE87BA8F (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_1;
		L_1 = Array_Empty_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mB048C0209901507C7E3FF27596E2221297332DC3_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_3 = (PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18*)(PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_6;
		L_6 = il2cpp_unsafe_as_ref<PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57>(L_5);
		ByReference_1_t202968E70F3E147C9542F8B8D25464AEC5A17767 L_7 = __this->____pointer;
		V_0 = L_7;
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m0A4EB1FDAC59253300D8EA7C3EBC00D9165BBB60(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m573B93F77F0CAD3A515AB15BDCECE113927DE678 (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 ___0_left, ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 L_0 = ___0_left;
		ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m475DC2CD0A087F285950572B3A1B31E9A34D7777(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m5FBBF9C1F295320CAC34ECBF6DCBC1782DCC11DA (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m4B6D6CF6FA7093B8442025C2C22A153DB943615D (ReadOnlySpan_1_tFCAB81603EED44CB0EDDA615229DA6C9D58F8C33* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182(__this, NULL);
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_2;
		L_2 = InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_get_valid_mBA8E68867067FE8B51F4DA6B9BD6A4926418AE8C (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = __this->___m_IndexPlusOne;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_2;
		L_2 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		uint32_t L_3 = L_2->___version;
		uint32_t L_4 = __this->___m_Version;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Record_get_index_m8BF5DBF4C267EED76E3802B249F2856F29DAD8A6 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182(__this, NULL);
		int32_t L_2;
		L_2 = InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Record_get_time_m5976C10C2C3A2A2089D57F1DF9AE5557C10DF47E (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_0;
		L_0 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		double L_1 = L_0->___time;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3* Record_get_control_m5FA21546D78E360D3A5FF4190AC3A07C9A6C74F2 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_1;
		L_1 = InputStateHistory_get_controls_m2B1056A5B21F2A8CFAAEE9136E24D27C4BFF31CC(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlyArray_1_get_Count_m5061AE58EC2D8AE48182ADF368A108D8E9E116B6_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_3 = __this->___m_Owner;
		bool L_4 = ((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_3)->___m_AddNewControls;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_5;
		L_5 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		return ((InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3*)CastclassClass((RuntimeObject*)L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	}

IL_0037:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_6;
		L_6 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		int32_t L_7 = L_6->___controlIndex;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_8;
		L_8 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), L_7, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		return ((InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 Record_get_next_mE5872413393AD567142A709082200AC08FD1E99E (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182(__this, NULL);
		int32_t L_2;
		L_2 = InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_4 = __this->___m_Owner;
		int32_t L_5;
		L_5 = InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline(L_4, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1))) < ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4));
		Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 L_6 = V_2;
		return L_6;
	}

IL_0032:
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_7 = __this->___m_Owner;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = InputStateHistory_UserIndexToRecordIndex_m81D4D6EE19ED80607BAAA31F3159168AC3B5B678(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		V_1 = L_9;
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_10 = __this->___m_Owner;
		int32_t L_11 = V_1;
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_12 = __this->___m_Owner;
		int32_t L_13 = V_1;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_14;
		L_14 = InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F(L_12, L_13, NULL);
		Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Record__ctor_m1CACECB022FDAACE6482C208E6552F7614445895((&L_15), L_10, L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 Record_get_previous_mE86C99A3EFBD72206B8BFC7D55792223057BE29F (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182(__this, NULL);
		int32_t L_2;
		L_2 = InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1))) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4));
		Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 L_4 = V_2;
		return L_4;
	}

IL_0028:
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_5 = __this->___m_Owner;
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = InputStateHistory_UserIndexToRecordIndex_m81D4D6EE19ED80607BAAA31F3159168AC3B5B678(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_1 = L_7;
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_8 = __this->___m_Owner;
		int32_t L_9 = V_1;
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_10 = __this->___m_Owner;
		int32_t L_11 = V_1;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_12;
		L_12 = InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F(L_10, L_11, NULL);
		Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Record__ctor_m1CACECB022FDAACE6482C208E6552F7614445895((&L_13), L_8, L_9, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 Record_ReadValue_mA4F2FFE56E7F28BF41E48C79A47CF6CD1F874E4A (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 L_2;
		L_2 = InputStateHistory_ReadValue_TisTouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97_mBF51236691ADD46F7A6501AA3951A0C453C4795C(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeMemoryPtr_m4A6CB638D79C8490F8DBC173FD42EACC9D832069 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		void* L_0;
		L_0 = Record_GetUnsafeMemoryPtrUnchecked_m52990CD3C2FF0DB8735E39A95B877923A6D6F5A0(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeMemoryPtrUnchecked_m52990CD3C2FF0DB8735E39A95B877923A6D6F5A0 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_1;
		L_1 = InputStateHistory_get_controls_m2B1056A5B21F2A8CFAAEE9136E24D27C4BFF31CC(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlyArray_1_get_Count_m5061AE58EC2D8AE48182ADF368A108D8E9E116B6_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_3 = __this->___m_Owner;
		bool L_4 = ((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_3)->___m_AddNewControls;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_5;
		L_5 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		uint8_t* L_6;
		L_6 = RecordHeader_get_statePtrWithoutControlIndex_m06FC191CB4801F442A0B972DA23B48ECE629922C((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)L_5, NULL);
		return (void*)(L_6);
	}

IL_002f:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_7;
		L_7 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		uint8_t* L_8;
		L_8 = RecordHeader_get_statePtrWithControlIndex_m68BBA8402AF00318B40229E5121F9C5132A3B655((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)L_7, NULL);
		return (void*)(L_8);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeExtraMemoryPtr_mF305A3D8857DFF297E9FB6573684E4B9BF82022C (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		void* L_0;
		L_0 = Record_GetUnsafeExtraMemoryPtrUnchecked_m43B2E6AC3AF2307D2DDF2C92E90A629666277F66(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeExtraMemoryPtrUnchecked_m43B2E6AC3AF2307D2DDF2C92E90A629666277F66 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = InputStateHistory_get_extraMemoryPerRecord_m4E4C9D89BC37B9CD7E6AFFD58D95A9030F92E653_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral228690F85C6AD8ED815D48DC2A017A1AAD28D67E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0018:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_3;
		L_3 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_4 = __this->___m_Owner;
		int32_t L_5;
		L_5 = InputStateHistory_get_bytesPerRecord_mAF516CE1E45E3EBA46EDFFF2923908D6B672D114(L_4, NULL);
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_6 = __this->___m_Owner;
		int32_t L_7;
		L_7 = InputStateHistory_get_extraMemoryPerRecord_m4E4C9D89BC37B9CD7E6AFFD58D95A9030F92E653_inline(L_6, NULL);
		return (void*)(((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)il2cpp_codegen_subtract((intptr_t)((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)il2cpp_codegen_add((intptr_t)L_3, L_5)), L_7)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CopyFrom_mC840D13B255BD37B697560D35F9A31C7D1E1CDA6 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___0_record, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		bool L_0;
		L_0 = Record_get_valid_mBA8E68867067FE8B51F4DA6B9BD6A4926418AE8C((&___0_record), NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07502A9394E2D4006BEA38B6D757C8DD641C761C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AEF35B4D1778407DD318B95E28D5C52594A31FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001f:
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_2 = __this->___m_Owner;
		int32_t L_3;
		L_3 = Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182(__this, NULL);
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_4;
		L_4 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		Record__ctor_mB54551B1D8C0BF391FC4910C31536CDA2A8EAB55((&V_0), L_2, L_3, L_4, NULL);
		Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 L_5 = ___0_record;
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_6 = L_5.___m_Owner;
		int32_t L_7;
		L_7 = Record_get_recordIndex_m060A17C7C215DE6E568EFECEAFE79461817A7182((&___0_record), NULL);
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_8;
		L_8 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7((&___0_record), NULL);
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Record__ctor_mB54551B1D8C0BF391FC4910C31536CDA2A8EAB55((&L_9), L_6, L_7, L_8, NULL);
		Record_CopyFrom_mF3794E85475465E4DC83BBC615BC0A1506BFD105((&V_0), L_9, NULL);
		uint32_t L_10;
		L_10 = Record_get_version_m520FC2A134CE62BD9A4A66849B43461C4189FC51_inline((&V_0), NULL);
		__this->___m_Version = L_10;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_mA3DC93BC4036C3B0ACD487CC328EFEE221659030 (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* L_0 = __this->___m_Owner;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->___m_IndexPlusOne;
		if (L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD368221222123B4D9D426DC9D6DBC9E02A655C26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_3;
		L_3 = Record_get_header_m728858F84A01BF19D1133578582AE8309EC39CF7(__this, NULL);
		uint32_t L_4 = L_3->___version;
		uint32_t L_5 = __this->___m_Version;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CB991168362F6F6217558DEDAD35C480D6B523C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_mCFF126DD568EA648A8BA307BC1FB676597986C7A (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10))));
		Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 L_2 = V_0;
		bool L_3;
		L_3 = Record_Equals_m17C216CDC45654F53F8191093F3404478DB16B69(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Record_Equals_mCFF126DD568EA648A8BA307BC1FB676597986C7A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4>(__this);
	bool _returnValue;
	_returnValue = Record_Equals_mCFF126DD568EA648A8BA307BC1FB676597986C7A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Record_ToString_m8F86BC9A48C4262405B37FA195868965AD3E566D (Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90C285823967F4BB319AA93A10BBA680529F1E2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC4CAD2EE688756442F133610DECC9EF98A0A1D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		bool L_0;
		L_0 = Record_get_valid_mBA8E68867067FE8B51F4DA6B9BD6A4926418AE8C(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralCDC4CAD2EE688756442F133610DECC9EF98A0A1D;
	}

IL_000e:
	{
		InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3* L_1;
		L_1 = Record_get_control_m5FA21546D78E360D3A5FF4190AC3A07C9A6C74F2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 L_2;
		L_2 = Record_ReadValue_mA4F2FFE56E7F28BF41E48C79A47CF6CD1F874E4A(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), &L_3);
		double L_5;
		L_5 = Record_get_time_m5976C10C2C3A2A2089D57F1DF9AE5557C10DF47E(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral90C285823967F4BB319AA93A10BBA680529F1E2A, L_1, L_4, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* Record_ToString_m8F86BC9A48C4262405B37FA195868965AD3E566D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4>(__this);
	String_t* _returnValue;
	_returnValue = Record_ToString_m8F86BC9A48C4262405B37FA195868965AD3E566D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_mA8B38975A85CAA1AD92B881ADC727BE211508CA9_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, NULL);
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_2;
		L_2 = InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Record_get_recordIndex_m0BB1165AB0817E19186261B80CEBC3B9B8BC75EC_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_IndexPlusOne;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_get_valid_mA7850D33F8A8F019B2445E61ECC48DAE8706D53D_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = __this->___m_IndexPlusOne;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_2;
		L_2 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		uint32_t L_3 = L_2->___version;
		uint32_t L_4 = __this->___m_Version;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* Record_get_owner_m428F492C0B3B9B2F43A79DE3BB537779CFBFF9E3_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Record_get_index_mBAE10C2E48D4311064A09482B87A549D3C9F77C9_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, NULL);
		int32_t L_2;
		L_2 = InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Record_get_time_m06D9FBB44EF2FC0639A1C12E0C53FA52CF26D716_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_0;
		L_0 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		double L_1 = L_0->___time;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* Record_get_control_mD054E4ABD5848E5ED7377C98EB2E8614518FAAA3_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_1;
		L_1 = InputStateHistory_get_controls_m2B1056A5B21F2A8CFAAEE9136E24D27C4BFF31CC((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlyArray_1_get_Count_m5061AE58EC2D8AE48182ADF368A108D8E9E116B6_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_3 = __this->___m_Owner;
		bool L_4 = ((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_3)->___m_AddNewControls;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_5;
		L_5 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		return ((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	}

IL_0037:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_6;
		L_6 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_7 = L_6->___controlIndex;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_8;
		L_8 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), L_7, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		return ((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D Record_get_next_mC2C807844A9D6ED47901F823FAF6AD32EF8B58C5_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, NULL);
		int32_t L_2;
		L_2 = InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_4 = __this->___m_Owner;
		int32_t L_5;
		L_5 = InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_4, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1))) < ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D));
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_6 = V_2;
		return L_6;
	}

IL_0032:
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_7 = __this->___m_Owner;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = InputStateHistory_UserIndexToRecordIndex_m81D4D6EE19ED80607BAAA31F3159168AC3B5B678((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		V_1 = L_9;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_10 = __this->___m_Owner;
		int32_t L_11 = V_1;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_12 = __this->___m_Owner;
		int32_t L_13 = V_1;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_14;
		L_14 = InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_12, L_13, NULL);
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_15;
		memset((&L_15), 0, sizeof(L_15));
		Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086((&L_15), L_10, L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D Record_get_previous_m4B47F31D52FA3270432BCB9B4AEB4852B525040D_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, NULL);
		int32_t L_2;
		L_2 = InputStateHistory_RecordIndexToUserIndex_mC63AB3D5F356A60D9854C9636E4796D798AECC95((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1))) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D));
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_4 = V_2;
		return L_4;
	}

IL_0028:
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_5 = __this->___m_Owner;
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = InputStateHistory_UserIndexToRecordIndex_m81D4D6EE19ED80607BAAA31F3159168AC3B5B678((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_1 = L_7;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_8 = __this->___m_Owner;
		int32_t L_9 = V_1;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_10 = __this->___m_Owner;
		int32_t L_11 = V_1;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_12;
		L_12 = InputStateHistory_GetRecord_m85FF7089306517975159512B91057A59C16CC12F((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_10, L_11, NULL);
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086((&L_13), L_8, L_9, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m607E8346CD0A2435B2992177B0D5796C62E29086_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___0_owner, int32_t ___1_index, RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* ___2_header, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = ___0_owner;
		__this->___m_Owner = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Owner), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___m_IndexPlusOne = ((int32_t)il2cpp_codegen_add(L_1, 1));
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_2 = ___2_header;
		uint32_t L_3 = L_2->___version;
		__this->___m_Version = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m00980ABC6C9DBD89E09A500C7549B53C42E21698_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___0_owner, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = ___0_owner;
		__this->___m_Owner = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Owner), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___m_IndexPlusOne = ((int32_t)il2cpp_codegen_add(L_1, 1));
		__this->___m_Version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_m3B6509D00AED793B48225C080E21417176CA6B28_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t87C738CC151BC5587C97C29242C2352B1F8D1BEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_t87C738CC151BC5587C97C29242C2352B1F8D1BEB);
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t87C738CC151BC5587C97C29242C2352B1F8D1BEB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeMemoryPtr_mC1A279A04DEE8017E92D21C927CB95D5A40EC69D_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		void* L_0;
		L_0 = ((  void* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeMemoryPtrUnchecked_m263EAE3E4CA198AB44B95B61313433415EDE774F_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_1;
		L_1 = InputStateHistory_get_controls_m2B1056A5B21F2A8CFAAEE9136E24D27C4BFF31CC((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlyArray_1_get_Count_m5061AE58EC2D8AE48182ADF368A108D8E9E116B6_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_3 = __this->___m_Owner;
		bool L_4 = ((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_3)->___m_AddNewControls;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_5;
		L_5 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		uint8_t* L_6;
		L_6 = RecordHeader_get_statePtrWithoutControlIndex_m06FC191CB4801F442A0B972DA23B48ECE629922C((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)L_5, NULL);
		return (void*)(L_6);
	}

IL_002f:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_7;
		L_7 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		uint8_t* L_8;
		L_8 = RecordHeader_get_statePtrWithControlIndex_m68BBA8402AF00318B40229E5121F9C5132A3B655((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)L_7, NULL);
		return (void*)(L_8);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeExtraMemoryPtr_mEE092C470E1CC2C098C4C1F60E4CC48E60600B3C_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		void* L_0;
		L_0 = ((  void* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Record_GetUnsafeExtraMemoryPtrUnchecked_m06454844EB461FB5CD6C8BDBEA0308F683D9FB6A_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		int32_t L_1;
		L_1 = InputStateHistory_get_extraMemoryPerRecord_m4E4C9D89BC37B9CD7E6AFFD58D95A9030F92E653_inline((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral228690F85C6AD8ED815D48DC2A017A1AAD28D67E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0018:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_3;
		L_3 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_4 = __this->___m_Owner;
		int32_t L_5;
		L_5 = InputStateHistory_get_bytesPerRecord_mAF516CE1E45E3EBA46EDFFF2923908D6B672D114((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_4, NULL);
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_6 = __this->___m_Owner;
		int32_t L_7;
		L_7 = InputStateHistory_get_extraMemoryPerRecord_m4E4C9D89BC37B9CD7E6AFFD58D95A9030F92E653_inline((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_6, NULL);
		return (void*)(((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)il2cpp_codegen_subtract((intptr_t)((RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*)il2cpp_codegen_add((intptr_t)L_3, L_5)), L_7)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CopyFrom_mF7D9FEC54DB7519CE815519D7D45969BE32B876E_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D ___0_record, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		((  void (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		bool L_0;
		L_0 = ((  bool (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))((&___0_record), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07502A9394E2D4006BEA38B6D757C8DD641C761C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AEF35B4D1778407DD318B95E28D5C52594A31FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_001f:
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_2 = __this->___m_Owner;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, NULL);
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_4;
		L_4 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		Record__ctor_mB54551B1D8C0BF391FC4910C31536CDA2A8EAB55((&V_0), (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_2, L_3, L_4, NULL);
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_5 = ___0_record;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_6 = L_5.___m_Owner;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))((&___0_record), NULL);
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_8;
		L_8 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))((&___0_record), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Record__ctor_mB54551B1D8C0BF391FC4910C31536CDA2A8EAB55((&L_9), (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_6, L_7, L_8, NULL);
		Record_CopyFrom_mF3794E85475465E4DC83BBC615BC0A1506BFD105((&V_0), L_9, NULL);
		uint32_t L_10;
		L_10 = Record_get_version_m520FC2A134CE62BD9A4A66849B43461C4189FC51_inline((&V_0), NULL);
		__this->___m_Version = L_10;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_mA237AAEC9DD27CC9D08B493D6F29361454BF0862_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->___m_IndexPlusOne;
		if (L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD368221222123B4D9D426DC9D6DBC9E02A655C26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_3;
		L_3 = ((  RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		uint32_t L_4 = L_3->___version;
		uint32_t L_5 = __this->___m_Version;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CB991168362F6F6217558DEDAD35C480D6B523C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D ___0_other, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_1 = ___0_other;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_2 = L_1.___m_Owner;
		if ((!(((RuntimeObject*)(InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8*)L_0) == ((RuntimeObject*)(InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8*)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = __this->___m_IndexPlusOne;
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_4 = ___0_other;
		int32_t L_5 = L_4.___m_IndexPlusOne;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_6 = __this->___m_Version;
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_7 = ___0_other;
		uint32_t L_8 = L_7.___m_Version;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE_AdjustorThunk (RuntimeObject* __this, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D ___0_other, const RuntimeMethod* method)
{
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D>(__this);
	bool _returnValue;
	_returnValue = Record_Equals_m693E022E217EC85A375B45392BEBD32CBDF0F8FE(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_m982576B6A0444BC40CD4742937A6E31DB2C4C668_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10))));
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Record_Equals_m982576B6A0444BC40CD4742937A6E31DB2C4C668_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D>(__this);
	bool _returnValue;
	_returnValue = Record_Equals_m982576B6A0444BC40CD4742937A6E31DB2C4C668(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Record_GetHashCode_m5A566222F9BAF8C0DE94FE08A30EE5466A44E19E_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_Owner;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_1 = __this->___m_Owner;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		int32_t L_3 = __this->___m_IndexPlusOne;
		uint32_t L_4 = __this->___m_Version;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)397)))^L_3)), ((int32_t)397)))^(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Record_GetHashCode_m5A566222F9BAF8C0DE94FE08A30EE5466A44E19E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D>(__this);
	int32_t _returnValue;
	_returnValue = Record_GetHashCode_m5A566222F9BAF8C0DE94FE08A30EE5466A44E19E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Record_ToString_mC6664AF6A40866414A8D5EE160B6C93BD3170BA9_fshared (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90C285823967F4BB319AA93A10BBA680529F1E2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC4CAD2EE688756442F133610DECC9EF98A0A1D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t87C738CC151BC5587C97C29242C2352B1F8D1BEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_t87C738CC151BC5587C97C29242C2352B1F8D1BEB);
	{
		bool L_0;
		L_0 = ((  bool (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralCDC4CAD2EE688756442F133610DECC9EF98A0A1D;
	}

IL_000e:
	{
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_1;
		L_1 = ((  InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), __this, (Il2CppFullySharedGenericStruct*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2);
		double L_4;
		L_4 = ((  double (*) (Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral90C285823967F4BB319AA93A10BBA680529F1E2A, (RuntimeObject*)L_1, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Record_ToString_mC6664AF6A40866414A8D5EE160B6C93BD3170BA9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D>(__this);
	String_t* _returnValue;
	_returnValue = Record_ToString_mC6664AF6A40866414A8D5EE160B6C93BD3170BA9(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690_Multicast(RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8* __this, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___0_x, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___1_y, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8* currentDelegate = reinterpret_cast<RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690_OpenInstance(RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8* __this, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___0_x, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___1_y, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_x, ___1_y, method);
}
int32_t RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690_OpenStatic(RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8* __this, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___0_x, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___1_y, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_x, ___1_y, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefComparison_1__ctor_mFA4E340B122637588A7DFD5A950E2E7989D3928A (RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690_OpenInstance;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefComparison_1_Invoke_m512F8E3877EC11623DCCF65952160EF1D90C3690 (RefComparison_1_tEEB3FCE81A6B1AD0D59BB7E68DDAA681F5EEC7C8* __this, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___0_x, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72* ___1_y, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, SelectorRangeDescriptor_t7D9E7AED1604D7EC60BADD32A999A578BFC9AD72*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F_Multicast(RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___0_x, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___1_y, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* currentDelegate = reinterpret_cast<RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F_OpenInstance(RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___0_x, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___1_y, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_x, ___1_y, method);
}
int32_t RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F_OpenStatic(RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___0_x, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___1_y, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_x, ___1_y, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefComparison_1__ctor_mAC57F60AE2E83C193F00F33A0FEFB5D333F7DFE9 (RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F_OpenInstance;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefComparison_1_Invoke_m5838AFA1798C85563DEB2BB5E14655443756BF6F (RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___0_x, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* ___1_y, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_Multicast(RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55* __this, Il2CppFullySharedGenericAny* ___0_x, Il2CppFullySharedGenericAny* ___1_y, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55* currentDelegate = reinterpret_cast<RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_OpenInstance(RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55* __this, Il2CppFullySharedGenericAny* ___0_x, Il2CppFullySharedGenericAny* ___1_y, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_x, ___1_y, method);
}
int32_t RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_OpenStatic(RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55* __this, Il2CppFullySharedGenericAny* ___0_x, Il2CppFullySharedGenericAny* ___1_y, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_x, ___1_y, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefComparison_1__ctor_m3D87CF9FD92A5E2864C2F9F740C554721CE07E66_fshared (RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_OpenInstance;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefComparison_1_Invoke_m279BE52F2CF9CC4226568B31A43687970F734946_fshared (RefComparison_1_t3C630D846E950ADCDC43D6092890A19569E8DF55* __this, Il2CppFullySharedGenericAny* ___0_x, Il2CppFullySharedGenericAny* ___1_y, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_mDA6C3EA05DA938316AD79899DB789AFE0BFE517D (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* RefCounted_Create_m9A80FBE31EF1C91D39E51F95EF275D6BC5FAEFF6 (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44*)L_2;
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_3 = V_0;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_4 = ___0_value;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 L_5 = (*(InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)L_4);
		L_3->___value = L_5;
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_m2BE3ED2C2A2FC88B4370B7A5A407B93FFC7C0D88 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_0 = ___0_self;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_1 = (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)(&L_0->___value);
		InheritedData_Dispose_mA70C0374C34D611EA89B31239CA7D97A127B79CD(L_1, NULL);
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_2 = ___0_self;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = ((StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m035B4EA8D59E276E1DC24433426EA75673557C9F (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m8BC836BAA34887A77338EF8567D43C1534ED8B23 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* RefCounted_Copy_m0F9FD109F489DBF27DF864FF5CC4638C9CC7C0E5 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_0 = ___0_self;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_1 = (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)(&L_0->___value);
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 L_2;
		L_2 = InheritedData_Copy_m0EABC6E355A3778EBE1EBBC888F0A33D4A3CC12E(L_1, NULL);
		V_0 = L_2;
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_3;
		L_3 = RefCounted_Create_m9A80FBE31EF1C91D39E51F95EF275D6BC5FAEFF6((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_mDF943FC8168FCB7C1DAB0C50353A295FCD5B7EF2 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___0_self, RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_0 = ___0_self;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_1 = (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*,intptr_t,false,false>(L_1,NULL));
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_3 = ___1_other;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_4 = (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)(&L_3->___value);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*,intptr_t,false,false>(L_4,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6 = ((StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_SizeOf;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8;
		L_8 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_2, (void*)L_5, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_m552E96F7F30CEF71DEFB4C9CC8E9B79F40E1D682 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_0 = ___0_self;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_1 = (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*,intptr_t,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_IntDataCount;
		int32_t L_4;
		L_4 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m1AD16289A8C8D8DA3A7ECC0680231BC6A4066926 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* RefCounted_Create_mC56A498828CC9C59F184070685A993EC2ACC8772 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1*)L_2;
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_3 = V_0;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_4 = ___0_value;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 L_5 = (*(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)L_4);
		L_3->___value = L_5;
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_mA8B13DDE67B51C925E2096AD28E061ED5051601F (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_0 = ___0_self;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_1 = (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)(&L_0->___value);
		CHECKED_LOCAL_INIT(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_StaticInit,(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		LayoutData_Dispose_m42A74542654692812E38C38ACB36FC8314F7BB95(L_1, NULL);
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_2 = ___0_self;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = ((StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m425354771732561E790099B6F6FE3027FB6BCB01 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m72C2643CF7F289E61C778A23B1D4F1A9565B3498 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* RefCounted_Copy_m20E1B76AE4F588C1182E034CB622F20D39049385 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_0 = ___0_self;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_1 = (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)(&L_0->___value);
		CHECKED_LOCAL_INIT(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_StaticInit,(LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 L_2;
		L_2 = LayoutData_Copy_m43CB8791B4A3BEDD9E8184D6E868008688E9EC31(L_1, NULL);
		V_0 = L_2;
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_3;
		L_3 = RefCounted_Create_mC56A498828CC9C59F184070685A993EC2ACC8772((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_mE456DB498FCD3EE558FBD1E1AD4639EB0C1C0D65 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___0_self, RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_0 = ___0_self;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_1 = (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*,intptr_t,false,false>(L_1,NULL));
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_3 = ___1_other;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_4 = (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)(&L_3->___value);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*,intptr_t,false,false>(L_4,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6 = ((StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_SizeOf;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8;
		L_8 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_2, (void*)L_5, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_m8C2D387B3485BF0CAF28EC778862DD882B016267 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_0 = ___0_self;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_1 = (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*,intptr_t,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_IntDataCount;
		int32_t L_4;
		L_4 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m8DD4FE1E5657F49CE812DABF94FED33D1499D117 (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* RefCounted_Create_mE6EC70587FE53B656EAFE04F9D850DA5B3B6C8AD (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD*)L_2;
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_3 = V_0;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_4 = ___0_value;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 L_5 = (*(RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)L_4);
		L_3->___value = L_5;
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_m5BD719CFE34E8CDCC82FEA9E6136F81026A241D7 (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_0 = ___0_self;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_1 = (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)(&L_0->___value);
		RareData_Dispose_m085EE30B97744A1C3A871BE0C0DFA68AA28BEF3A(L_1, NULL);
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_2 = ___0_self;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = ((StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m5C1EE58D70A887930B24661DC47C72BF77B277B5 (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_mC2F546EB4EC39890099D84637183FD80DFA09F8C (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* RefCounted_Copy_m918D961ADA1D02713AC1542AA4B6E60571A61316 (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_0 = ___0_self;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_1 = (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)(&L_0->___value);
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 L_2;
		L_2 = RareData_Copy_m704FCCC82A27DD5034CFB2E88E94D1C27582E29E(L_1, NULL);
		V_0 = L_2;
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_3;
		L_3 = RefCounted_Create_mE6EC70587FE53B656EAFE04F9D850DA5B3B6C8AD((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_m1863DA85C131AF12EB2BFF35BF48F0D08B939CAE (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___0_self, RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_0 = ___0_self;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_1 = (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*,intptr_t,false,false>(L_1,NULL));
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_3 = ___1_other;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_4 = (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)(&L_3->___value);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*,intptr_t,false,false>(L_4,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6 = ((StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_SizeOf;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8;
		L_8 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_2, (void*)L_5, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_mD8FF12B7D3ABFACEB0678F3002E625D4767E0BE4 (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_0 = ___0_self;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_1 = (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*,intptr_t,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_IntDataCount;
		int32_t L_4;
		L_4 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m9DFC803B92AC1D8B79AC40AA5505C094FDE12E88 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* RefCounted_Create_m563C542302977FD0F7B397856A7C036D8E333C29 (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D*)L_2;
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_3 = V_0;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_4 = ___0_value;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 L_5 = (*(TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)L_4);
		L_3->___value = L_5;
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_mCC86826792C366E688564677EE667989D62F74D9 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_0 = ___0_self;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_1 = (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)(&L_0->___value);
		TransformData_Dispose_m43673FEFBE06181C71C7B1AD3D612B5C7C6494CB(L_1, NULL);
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_2 = ___0_self;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = ((StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_mD9974AF42BC7934D9986CAB91BDFCCE7C2680B21 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m6307DCC71675FF62601B91E7A493D444182B9E52 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* RefCounted_Copy_mD4838FA53290C520CB667F7C0B53E6176BDB59D4 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_0 = ___0_self;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_1 = (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)(&L_0->___value);
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 L_2;
		L_2 = TransformData_Copy_m1C72DA746E9EDA30EF3A0B6B582ADE0D1F1CC1E1(L_1, NULL);
		V_0 = L_2;
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_3;
		L_3 = RefCounted_Create_m563C542302977FD0F7B397856A7C036D8E333C29((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_m4D1A326644B52991144889E97E29A41C236033F6 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___0_self, RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_0 = ___0_self;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_1 = (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*,intptr_t,false,false>(L_1,NULL));
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_3 = ___1_other;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_4 = (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)(&L_3->___value);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*,intptr_t,false,false>(L_4,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6 = ((StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_SizeOf;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8;
		L_8 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_2, (void*)L_5, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_m1353699A6DC860FE2D28D61B15D849E87C1DFCE6 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_0 = ___0_self;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_1 = (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*,intptr_t,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_IntDataCount;
		int32_t L_4;
		L_4 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m7E469A5FB2F14DB3BA642166067928D80EE5E95A (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* RefCounted_Create_m9ED53DBFEEB54830601677E6FAA4A5506359B8A0 (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9*)L_2;
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_3 = V_0;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_4 = ___0_value;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 L_5 = (*(TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)L_4);
		L_3->___value = L_5;
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_mB51F6D8DBA28B6A72321CBB4EAA0146702C14465 (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_0 = ___0_self;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_1 = (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)(&L_0->___value);
		TransitionData_Dispose_mA86C0781E0655BB52DAD6802625F1C2D87C128FF(L_1, NULL);
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_2 = ___0_self;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = ((StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m8C0F56C0D1E1BF867100AF1A2AD95BE177CEA593 (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m434729833D2FA7BDFF1318EFB1B313D9E8B74C89 (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* RefCounted_Copy_mB2348DC2E969867AB8BBC823F06BF26E7E8A508B (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_0 = ___0_self;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_1 = (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)(&L_0->___value);
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 L_2;
		L_2 = TransitionData_Copy_m6AECD90470D754363F0DCB00918CB167788DC51B(L_1, NULL);
		V_0 = L_2;
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_3;
		L_3 = RefCounted_Create_m9ED53DBFEEB54830601677E6FAA4A5506359B8A0((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_m9AF3488F638F0EDFE471A66A3E7ED420570A8A3C (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___0_self, RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_0 = ___0_self;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_1 = (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*,intptr_t,false,false>(L_1,NULL));
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_3 = ___1_other;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_4 = (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)(&L_3->___value);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*,intptr_t,false,false>(L_4,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6 = ((StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_SizeOf;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8;
		L_8 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_2, (void*)L_5, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_mFCAE9B5A399E514E3BD9823D3C36073E9F03F66D (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_0 = ___0_self;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_1 = (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*,intptr_t,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_IntDataCount;
		int32_t L_4;
		L_4 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m8722390CF6EBB0B91042486B5E20A582C7241995 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* RefCounted_Create_m0BA0AAE0A0BBD8F28E57A9E2BE2C641ADE50B57B (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A*)L_2;
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_3 = V_0;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_4 = ___0_value;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B L_5 = (*(VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)L_4);
		L_3->___value = L_5;
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_m745556DDE5677C825D30AE502C8A1F78D9313C72 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_0 = ___0_self;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_1 = (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)(&L_0->___value);
		VisualData_Dispose_mBCD1939BA50613AB6F43C5D6BA6A0789C6D0AE10(L_1, NULL);
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_2 = ___0_self;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = ((StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_Type;
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m758ACF0FC4A33A56D63B3EDA9E5726A87731C542 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m7C551570A08A499A42E0345743338E524CB75E75 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* RefCounted_Copy_m7EA6B6671FFF26812F05ADDD0A0699B94E66E942 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_0 = ___0_self;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_1 = (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)(&L_0->___value);
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B L_2;
		L_2 = VisualData_Copy_m4672E40E37CE425C9991B5FC11EE9EEF32CD1A0F(L_1, NULL);
		V_0 = L_2;
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_3;
		L_3 = RefCounted_Create_m0BA0AAE0A0BBD8F28E57A9E2BE2C641ADE50B57B((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_m8D0BD26C57626F5C30EA8F5A767DC96471793607 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___0_self, RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_0 = ___0_self;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_1 = (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*,intptr_t,false,false>(L_1,NULL));
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_3 = ___1_other;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_4 = (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)(&L_3->___value);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*,intptr_t,false,false>(L_4,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6 = ((StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_SizeOf;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8;
		L_8 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_2, (void*)L_5, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_mB35214C4DBDFA80E6ED317DEE26F44B20533E27D (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_0 = ___0_self;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_1 = (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)(&L_0->___value);
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*,intptr_t,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___k_IntDataCount;
		int32_t L_4;
		L_4 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_mE664226CBB5FEE074ADE0ED90A84AC43C29B4C81_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* RefCounted_Create_m8391A698510AB86730368D7D33140E1BBFD6D12C_fshared (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	const uint32_t SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
	RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((void*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		intptr_t L_1;
		L_1 = StyleDataAllocator_Allocate_m71F206240116333EF6F149418E52133715170687(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		V_0 = (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01*)L_2;
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_3 = V_0;
		Il2CppFullySharedGenericStruct* L_4 = ___0_value;
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
		il2cpp_codegen_write_field_data<true>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_5, SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Dispose_m07ECFC5B49323FD5285263B3BD3FAF93235D0312_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)));
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_0 = ___0_self;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), &L_2, L_1);
		typedef void ( *func_L_4)(void*,const RuntimeMethod*);
		((func_L_4)L_3)(L_2.thisPtr,L_2.method);
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_5 = ___0_self;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_5, NULL);
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((void*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		StyleDataAllocator_Free_m1316D5F1277184DC2FA3D2CB2A8EF48CB61D808F(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m1BFD34EAD02D7839AF6B8BEED931A49133D17991_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m366419440666897A7846596D074041C76EC83051_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_subtract(L_0, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* RefCounted_Copy_mCFC2D19F20255D530758200D1BF4D2EA5EC76329_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
	memset(V_0, 0, SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
	{
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_0 = ___0_self;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), &L_2, L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(L_3, L_2.method,L_2.thisPtr,(Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_5;
		L_5 = ((  RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))((Il2CppFullySharedGenericStruct*)V_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RefCounted_ValueEquals_m273FC43A84F92F6C1E3E16ECB24F8A2016B97A74_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* ___0_self, RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* ___1_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_0 = ___0_self;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))),NULL));
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_2 = ___1_other;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))),NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((void*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF((void*)L_1, (void*)L_3, L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_GetValueHashCode_mAF111227D2855172BBB041CC57C9BE56598426F7_fshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* ___0_self, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit);
	{
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_0 = ___0_self;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))),NULL));
		CHECKED_LOCAL_INIT(StyleDataRef_1_t505C75435B5D14A1F4476890BBB06D571E5CB49F_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((void*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		int32_t L_3;
		L_3 = StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline((void*)L_1, L_2, NULL);
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectedMemberProperty_2_get_Name_m06EF5B89A747065C7498B30D45F846DD0D5A0011_fshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectedMemberProperty_2_get_IsReadOnly_m129D0BF1D51C3AD9F47CCF6E963CDB5433DDDD58_fshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMemberProperty_2__ctor_m475C932496DECA3F709E33D1778A0998E5631115_fshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, RuntimeObject* ___0_info, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	bool V_0 = false;
	CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MethodInfo_t* V_4 = NULL;
	MethodInfo_t* V_5 = NULL;
	MethodInfo_t* V_6 = NULL;
	MethodInfo_t* V_7 = NULL;
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, NULL);
		String_t* L_0 = ___1_name;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		RuntimeObject* L_1 = ___0_info;
		__this->___m_Info = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Info), (void*)L_1);
		bool L_2 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		__this->___m_IsStructContainerType = L_2;
		RuntimeObject* L_3 = ___0_info;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_3);
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, L_4, NULL);
		RuntimeObject* L_5 = __this->___m_Info;
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(1, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		bool L_7;
		L_7 = ((  bool (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92* L_8;
		L_8 = ((  CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92* (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_8;
		bool L_9 = V_0;
		CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92* L_10 = V_1;
		bool L_11;
		L_11 = CreatePropertyAttribute_get_ReadOnly_m451FE098EF663531E062E280D98B8A425B032E61_inline(L_10, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_9|(int32_t)L_11));
	}

IL_0059:
	{
		bool L_12 = V_0;
		__this->___U3CIsReadOnlyU3Ek__BackingField = L_12;
		RuntimeObject* L_13 = __this->___m_Info;
		V_2 = L_13;
		RuntimeObject* L_14 = V_2;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject* L_15 = V_2;
		return;
	}

IL_0077:
	{
		RuntimeObject* L_16 = __this->___m_Info;
		V_2 = L_16;
		RuntimeObject* L_17 = V_2;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var)))
		{
			goto IL_014a;
		}
	}
	{
		RuntimeObject* L_18 = V_2;
		V_3 = ((*(PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984*)UnBox(L_18, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var)));
		bool L_19 = __this->___m_IsStructContainerType;
		if (!L_19)
		{
			goto IL_00f3;
		}
	}
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_20 = V_3;
		PropertyInfo_t* L_21 = L_20.___m_PropertyInfo;
		MethodInfo_t* L_22;
		L_22 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(20, L_21, (bool)1);
		V_4 = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 6)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		MethodInfo_t* L_25 = V_4;
		Delegate_t* L_26;
		L_26 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_24, L_25, NULL);
		__this->___m_GetStructValueAction = ((GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GetStructValueAction), (void*)((GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))));
		bool L_27 = V_0;
		if (L_27)
		{
			goto IL_014a;
		}
	}
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_28 = V_3;
		PropertyInfo_t* L_29 = L_28.___m_PropertyInfo;
		MethodInfo_t* L_30;
		L_30 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(21, L_29, (bool)1);
		V_5 = L_30;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		MethodInfo_t* L_33 = V_5;
		Delegate_t* L_34;
		L_34 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_32, L_33, NULL);
		__this->___m_SetStructValueAction = ((SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SetStructValueAction), (void*)((SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9))));
		return;
	}

IL_00f3:
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_35 = V_3;
		PropertyInfo_t* L_36 = L_35.___m_PropertyInfo;
		MethodInfo_t* L_37;
		L_37 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(20, L_36, (bool)1);
		V_6 = L_37;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		MethodInfo_t* L_40 = V_6;
		Delegate_t* L_41;
		L_41 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_39, L_40, NULL);
		__this->___m_GetClassValueAction = ((GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GetClassValueAction), (void*)((GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11))));
		bool L_42 = V_0;
		if (L_42)
		{
			goto IL_014a;
		}
	}
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_43 = V_3;
		PropertyInfo_t* L_44 = L_43.___m_PropertyInfo;
		MethodInfo_t* L_45;
		L_45 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(21, L_44, (bool)1);
		V_7 = L_45;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		MethodInfo_t* L_48 = V_7;
		Delegate_t* L_49;
		L_49 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_47, L_48, NULL);
		__this->___m_SetClassValueAction = ((SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7*)Castclass((RuntimeObject*)L_49, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SetClassValueAction), (void*)((SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7*)Castclass((RuntimeObject*)L_49, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13))));
	}

IL_014a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMemberProperty_2_GetValue_m2E00072D25CFF08F027C896F839E6456A5B47DAF_fshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const uint32_t SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
	const Il2CppFullySharedGenericAny L_15 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
	const Il2CppFullySharedGenericAny L_10 = L_4;
	const Il2CppFullySharedGenericAny L_16 = L_4;
	const Il2CppFullySharedGenericAny L_22 = L_4;
	{
		bool L_0 = __this->___m_IsStructContainerType;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* L_1 = __this->___m_GetStructValueAction;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* L_2 = __this->___m_GetStructValueAction;
		Il2CppFullySharedGenericAny* L_3 = ___0_container;
		InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), L_2, L_3, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		return;
	}

IL_001d:
	{
		RuntimeObject* L_5 = __this->___m_Info;
		Il2CppFullySharedGenericAny* L_6 = ___0_container;
		il2cpp_codegen_memcpy(L_7, L_6, SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(3, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_5, L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15), L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11)), SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		return;
	}

IL_0039:
	{
		GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* L_12 = __this->___m_GetClassValueAction;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* L_13 = __this->___m_GetClassValueAction;
		Il2CppFullySharedGenericAny* L_14 = ___0_container;
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_15: *(void**)L_15), (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		return;
	}

IL_0053:
	{
		RuntimeObject* L_17 = __this->___m_Info;
		Il2CppFullySharedGenericAny* L_18 = ___0_container;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(3, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_17, L_20);
		void* L_23 = UnBox_Any(L_21, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15), L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_23)), SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMemberProperty_2_SetValue_m2EEF169DD7966DF79B3481F28F75A14FD5CBE0CD_fshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const uint32_t SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
	const Il2CppFullySharedGenericAny L_21 = L_5;
	const Il2CppFullySharedGenericAny L_27 = L_5;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
	const Il2CppFullySharedGenericAny L_17 = L_9;
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_28 = L_9;
	RuntimeObject* V_0 = NULL;
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(13, (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67A259F304E2092F70DB1D23B44E7E844A4A8365)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		bool L_2 = __this->___m_IsStructContainerType;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* L_3 = __this->___m_SetStructValueAction;
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_container;
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_0 = L_6;
		RuntimeObject* L_7 = __this->___m_Info;
		RuntimeObject* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___1_value : &___1_value), SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15), L_9);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_7, L_8, L_10);
		Il2CppFullySharedGenericAny* L_11 = ___0_container;
		RuntimeObject* L_12 = V_0;
		void* L_14 = UnBox_Any(L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_13);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_14)), SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_14)));
		return;
	}

IL_004e:
	{
		SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* L_15 = __this->___m_SetStructValueAction;
		Il2CppFullySharedGenericAny* L_16 = ___0_container;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___1_value : &___1_value), SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_15, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_17: *(void**)L_17));
		return;
	}

IL_005c:
	{
		SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* L_18 = __this->___m_SetClassValueAction;
		if (L_18)
		{
			goto IL_0081;
		}
	}
	{
		RuntimeObject* L_19 = __this->___m_Info;
		Il2CppFullySharedGenericAny* L_20 = ___0_container;
		il2cpp_codegen_memcpy(L_21, L_20, SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_21);
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___1_value : &___1_value), SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15), L_23);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_19, L_22, L_24);
		return;
	}

IL_0081:
	{
		SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* L_25 = __this->___m_SetClassValueAction;
		Il2CppFullySharedGenericAny* L_26 = ___0_container;
		il2cpp_codegen_memcpy(L_27, L_26, SizeOf_TContainer_t6B79C0430548272CDF11CE5D7BC7097BC53F00F7);
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___1_value : &___1_value), SizeOf_TValue_t9375B4BEC7D12F75C9E889472CB86BD031018A8D);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_28: *(void**)L_28));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RecordCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_extraMemoryPerRecord_m4E4C9D89BC37B9CD7E6AFFD58D95A9030F92E653_inline (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_ExtraMemoryPerRecord;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Record_get_version_m520FC2A134CE62BD9A4A66849B43461C4189FC51_inline (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___m_Version;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StyleHashUtility_Hash32_mF38B5E9EF8430761293476884F64D3C8E2BE8829_inline (void* ___0_data, int32_t ___1_intCount, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		V_0 = ((int64_t)-3750763034362895579LL);
		V_1 = ((int64_t)3750763034362895578LL);
		void* L_0 = ___0_data;
		V_2 = (uint64_t*)L_0;
		int32_t L_1 = ___1_intCount;
		V_3 = ((int32_t)(L_1>>1));
		V_4 = 0;
		int32_t L_2 = V_3;
		V_5 = ((int32_t)(L_2&((int32_t)-2)));
		goto IL_0052;
	}

IL_0025:
	{
		uint64_t L_3 = V_0;
		uint64_t* L_4 = V_2;
		int64_t L_5 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)L_4));
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)((int64_t)L_3^L_5)), ((int64_t)1099511628211LL)));
		uint64_t L_6 = V_1;
		uint64_t* L_7 = V_2;
		int64_t L_8 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, 8))));
		V_1 = ((int64_t)il2cpp_codegen_multiply(((int64_t)((int64_t)L_6^L_8)), ((int64_t)1099511628211LL)));
		uint64_t* L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		V_2 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_10, 8))));
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 2));
	}

IL_0052:
	{
		int32_t L_12 = V_4;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0025;
		}
	}
	{
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_6 = ((int64_t)((int64_t)L_14^(int64_t)L_15));
		goto IL_007a;
	}

IL_005f:
	{
		uint64_t L_16 = V_6;
		uint64_t* L_17 = V_2;
		uint64_t* L_18 = L_17;
		V_2 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_18, 8));
		int64_t L_19 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)L_18));
		V_6 = ((int64_t)il2cpp_codegen_multiply(((int64_t)((int64_t)L_16^L_19)), ((int64_t)1099511628211LL)));
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007a:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_23 = ___1_intCount;
		if (!((int32_t)(L_23&1)))
		{
			goto IL_009d;
		}
	}
	{
		uint64_t L_24 = V_6;
		void* L_25 = ___0_data;
		int32_t L_26 = ___1_intCount;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_26, 1)),NULL));
		int32_t L_28 = il2cpp_codegen_ldind<int32_t, uint32_t>(((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4))))));
		uint64_t L_29 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_28,NULL));
		V_6 = ((int64_t)il2cpp_codegen_multiply(((int64_t)((int64_t)L_24^(int64_t)L_29)), ((int64_t)1099511628211LL)));
	}

IL_009d:
	{
		uint64_t L_30 = V_6;
		uint64_t L_31 = V_6;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_30^((int64_t)((uint64_t)L_31>>((int32_t)32))))),NULL));
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CreatePropertyAttribute_get_ReadOnly_m451FE098EF663531E062E280D98B8A425B032E61_inline (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReadOnlyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ((EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* Array_Empty_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF047DEE22BA81CA2272F392E9BFA291FA2E76093_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_0 = ((EmptyArray_1_t5D64CDB38E9BC651C8728695C6D0949FFDA864CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* Array_Empty_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m998FF89091ADB380AE37B11326EBA4E636539F6C_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = ((EmptyArray_1_t6EF0DB735E40251F6DDFDAA3DBCE13757E3630B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_2);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		__this->____length = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* Array_Empty_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE6CAE32FAFB50C35AA03F64061D6BECCC6387DC4_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ((EmptyArray_1_tB9CE11D20D32521AB83609C42537BFB49B249794_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* Array_Empty_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mD7351894C422FD84130C44C695C7D6DA4604C170_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		double2U5BU5D_t82BE7ACF41121F68641782A21FD8EC2801634A14* L_0 = ((EmptyArray_1_t36D598E1DC818CD3452B591DF1FB0D15E184AB4A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* Array_Empty_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mFF5FD82D645331DAD440EA02061FA06762861A4D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_0 = ((EmptyArray_1_tA9F21BBA05B1C0F2F44D3B7241C8EF7738405ACB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* Array_Empty_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mC8B23EACBA3AF3BD73FB4E99E16BBF4124FC07F7_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		int2U5BU5D_t4C1C0F31094CA203F9DA7D1A6E201851FEDCFAA8* L_0 = ((EmptyArray_1_t507F360D1773D47A3D4EC6D967444D3F484ECF64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* Array_Empty_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m4DC5C50A1BD1D2394223035DD2D6F24AB4F758AC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		int3U5BU5D_tDC3701B6CE7A1C2958CCCF3B8F9C1E861B1DB06F* L_0 = ((EmptyArray_1_t110707ABA4473D816A2028A4C0AE00293A541767_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* Array_Empty_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mB74DD69930C5B7D7471484F342DEF795E765B85A_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		int4U5BU5D_t93E6D20419CF02D861E9955F280FC0374AF95184* L_0 = ((EmptyArray_1_t55E63C31F7292F0E27BA82968C2CE1DE151F8437_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* Array_Empty_TisCpuCopyRange_tCE4B2EBDC2B62D128407AE7B9484BB04BBC8FE93_mE757E1AA65E80785446556426840F6533156FE25_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CpuCopyRangeU5BU5D_tF94C193A0D647AEA5A6127D4FCDB799229AFC42C* L_0 = ((EmptyArray_1_tBDBEC0E97A57956862232508CF7EE7DB97C4F33D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* Array_Empty_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mFEFA48960FFA5F901A995538B728C31718842335_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BackgroundRepeatInstanceU5BU5D_tD08374B4FFD796C15A6CF7BFDE27A62E1A5235F7* L_0 = ((EmptyArray_1_t8E932C0E3F71BFEF8F7B403C88AD488CF5FB6893_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* Array_Empty_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA99C337890AF264084717B5AFADC848638F58665_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		TessellationJobParametersU5BU5D_tFDC79BFC52A9ED8B50D955BAB909B22B626749EE* L_0 = ((EmptyArray_1_t1FED3FDB097A3190FE996FD44CCDE8BA3540FA34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* Array_Empty_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m773ADBF9E2B07E505ACAC896769DCC8C952EAAC2_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Painter2DJobDataU5BU5D_t357073CDDC47FE6B5DAC4A45876119B855E0BC44* L_0 = ((EmptyArray_1_tD4EDE6DCD201BEDB32E7D8039F9D1238A2A87E3F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* Array_Empty_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2B94F34A92C08A3CE8206FE64FFC16E41FEFD896_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		TransformWriteTweenU5BU5D_t18E245A000DEFDAA4004850C2D8A8171101FE264* L_0 = ((EmptyArray_1_t35B0092BC5943603A9DAA4F29619414C79CF60FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* Array_Empty_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m75584547F5E98D337086D729A5763DF7208584F1_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		TransformChangeEventU5BU5D_t9C290CDCBEC04CD6256AE1B785690AA19C1F772A* L_0 = ((EmptyArray_1_tD691CE4C97FEE06B67ACBF4E35E7896E1150742D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* Array_Empty_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_mBAA221AAA40C49D352B30E0C85FCCDAC43BDE87A_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BodyUpdateTargetU5BU5D_t5D4BD4B5C827E7F4843BFD2E3EC693BB16E36166* L_0 = ((EmptyArray_1_t7619D9CE58F36449BA5F98F45B91F54257C625D0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* Array_Empty_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m58A6111002D80C622DDC926C5C82A9B6E073CF2E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ContactBeginTargetU5BU5D_tAC27987891A046FB92D0A46EB518256A19BCD33B* L_0 = ((EmptyArray_1_t862BABF3853CA37787E211271876A549D8F3ADA0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* Array_Empty_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m92FCB0D0A9B633E1630815326903D9A2ACF5FCB5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ContactEndTargetU5BU5D_t1D2126A8408E50570A7112B1BC01DEFD5523EA44* L_0 = ((EmptyArray_1_t0817E0A0ECC3A931A3E5D2899F16D9F0726D27A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* Array_Empty_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m08CC1C892BC9DDB814A3E1280ABE5D319B561552_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		JointThresholdTargetU5BU5D_tDF23D282AD8A1893D2FD954450F7F60B5DCAA60E* L_0 = ((EmptyArray_1_tA2F78F09AE613D9B933FE2EEA4128586E7C96200_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* Array_Empty_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m71B89F046A32E33B23E36FDFFAF080A134900C52_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		TriggerBeginTargetU5BU5D_tFC03B81B7F6EC01D3836BCDDA397066069D1FED6* L_0 = ((EmptyArray_1_t38FAFDB42E4C6A7D118A86D8307859B951C0787C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* Array_Empty_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m63D30574F41CEDB52830394088C6A9B85051E000_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		TriggerEndTargetU5BU5D_tAE18D417A3AF8BC549C5EE257A0103E48D483CCB* L_0 = ((EmptyArray_1_tD663AE0E0EA46779F38B948F772123D03045E226_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* Array_Empty_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m7BB2577DAF99987D952BF456168D30CB2984111F_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CapsuleGeometryElementU5BU5D_t5EC627D962DAD22492724B3A6E8DFE6BB7DA70C8* L_0 = ((EmptyArray_1_t2D92677C7F2B75B810564C211A1B0E657BDF3206_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* Array_Empty_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m65292F3D2977B5BFC00B694183387447DC47AC22_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CircleGeometryElementU5BU5D_t2315FED6B2715C426040EC3B3D36C6E684245DD0* L_0 = ((EmptyArray_1_t1769D9A56B57EBDDC38A2C1A0E47EF8020D4C776_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* Array_Empty_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m1AF5F83A171B2A0940684FA1B098063FEF5F3F62_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		LineElementU5BU5D_tA35E6C251A054CABB09D18A667DEFC83F415BCC2* L_0 = ((EmptyArray_1_t30BC65001725F2360565B37E75CD2F1688D40E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* Array_Empty_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m1756BA292F193E432E2209DEC922CC54B91C28B5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		PointElementU5BU5D_t2A3A6DE779A23751FC4B89B33978060A655B5115* L_0 = ((EmptyArray_1_t4AEE35D2E3726A46B6EC3BBE8402602C4BF8A706_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* Array_Empty_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mB048C0209901507C7E3FF27596E2221297332DC3_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		PolygonGeometryElementU5BU5D_t4B5612FD3E5DD9A8A7358E74E4AD92F8BFDCFE18* L_0 = ((EmptyArray_1_tCB6BED9B9589F32A63D3F504B993E00FE14EDE21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
