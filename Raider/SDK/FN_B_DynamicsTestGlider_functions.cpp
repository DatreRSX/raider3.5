// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_DynamicsTestGlider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.UserConstructionScript");

	AB_DynamicsTestGlider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_DynamicsTestGlider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.ReceiveBeginPlay");

	AB_DynamicsTestGlider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.FireDynamics
// (BlueprintCallable, BlueprintEvent)

void AB_DynamicsTestGlider_C::FireDynamics()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.FireDynamics");

	AB_DynamicsTestGlider_C_FireDynamics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.ExecuteUbergraph_B_DynamicsTestGlider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_DynamicsTestGlider_C::ExecuteUbergraph_B_DynamicsTestGlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.ExecuteUbergraph_B_DynamicsTestGlider");

	AB_DynamicsTestGlider_C_ExecuteUbergraph_B_DynamicsTestGlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif