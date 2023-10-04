// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamNative.CallbackHandle
#include "SteamNative/CallbackHandle.hpp"
// Including type: SteamNative.SteamAPICall_t
#include "SteamNative/SteamAPICall_t.hpp"
// Completed includes
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: CallResult
  class CallResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SteamNative::CallResult);
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::CallResult*, "SteamNative", "CallResult");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SteamNative.CallResult
  // [TokenAttribute] Offset: FFFFFFFF
  class CallResult : public ::SteamNative::CallbackHandle {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    public:
    // SteamNative.SteamAPICall_t Call
    // Size: 0x8
    // Offset: 0x38
    ::SteamNative::SteamAPICall_t Call;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamAPICall_t) == 0x8);
    public:
    // Creating conversion operator: operator ::SteamNative::SteamAPICall_t
    constexpr operator ::SteamNative::SteamAPICall_t() const noexcept {
      return Call;
    }
    // Get instance field reference: SteamNative.SteamAPICall_t Call
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamAPICall_t& dyn_Call();
    // System.Void Try()
    // Offset: 0x2841540
    void Try();
    // System.Void RunCallback()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RunCallback();
  }; // SteamNative.CallResult
  #pragma pack(pop)
  static check_size<sizeof(CallResult), 56 + sizeof(::SteamNative::SteamAPICall_t)> __SteamNative_CallResultSizeCheck;
  static_assert(sizeof(CallResult) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SteamNative::CallResult::Try
// Il2CppName: Try
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::CallResult::*)()>(&SteamNative::CallResult::Try)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::CallResult*), "Try", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: SteamNative::CallResult::RunCallback
// Il2CppName: RunCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::CallResult::*)()>(&SteamNative::CallResult::RunCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::CallResult*), "RunCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
