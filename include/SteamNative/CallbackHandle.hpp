// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facepunch::Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: BaseSteamworks
  class BaseSteamworks;
}
// Completed forward declares
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: CallbackHandle
  class CallbackHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SteamNative::CallbackHandle);
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::CallbackHandle*, "SteamNative", "CallbackHandle");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: SteamNative.CallbackHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class CallbackHandle : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // Facepunch.Steamworks.BaseSteamworks Steamworks
    // Size: 0x8
    // Offset: 0x10
    ::Facepunch::Steamworks::BaseSteamworks* Steamworks;
    // Field size check
    static_assert(sizeof(::Facepunch::Steamworks::BaseSteamworks*) == 0x8);
    // System.Runtime.InteropServices.GCHandle FuncA
    // Size: 0x4
    // Offset: 0x18
    ::System::Runtime::InteropServices::GCHandle FuncA;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x4);
    // System.Runtime.InteropServices.GCHandle FuncB
    // Size: 0x4
    // Offset: 0x1C
    ::System::Runtime::InteropServices::GCHandle FuncB;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x4);
    // System.Runtime.InteropServices.GCHandle FuncC
    // Size: 0x4
    // Offset: 0x20
    ::System::Runtime::InteropServices::GCHandle FuncC;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x4);
    // Padding between fields: FuncC and: vTablePtr
    char __padding3[0x4] = {};
    // System.IntPtr vTablePtr
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr vTablePtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.Runtime.InteropServices.GCHandle PinnedCallback
    // Size: 0x4
    // Offset: 0x30
    ::System::Runtime::InteropServices::GCHandle PinnedCallback;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: Facepunch.Steamworks.BaseSteamworks Steamworks
    [[deprecated("Use field access instead!")]] ::Facepunch::Steamworks::BaseSteamworks*& dyn_Steamworks();
    // Get instance field reference: System.Runtime.InteropServices.GCHandle FuncA
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle& dyn_FuncA();
    // Get instance field reference: System.Runtime.InteropServices.GCHandle FuncB
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle& dyn_FuncB();
    // Get instance field reference: System.Runtime.InteropServices.GCHandle FuncC
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle& dyn_FuncC();
    // Get instance field reference: System.IntPtr vTablePtr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_vTablePtr();
    // Get instance field reference: System.Runtime.InteropServices.GCHandle PinnedCallback
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle& dyn_PinnedCallback();
    // public System.Void Dispose()
    // Offset: 0x2840E08
    void Dispose();
    // private System.Void UnregisterCallback()
    // Offset: 0x28461A0
    void UnregisterCallback();
  }; // SteamNative.CallbackHandle
  #pragma pack(pop)
  static check_size<sizeof(CallbackHandle), 48 + sizeof(::System::Runtime::InteropServices::GCHandle)> __SteamNative_CallbackHandleSizeCheck;
  static_assert(sizeof(CallbackHandle) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SteamNative::CallbackHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::CallbackHandle::*)()>(&SteamNative::CallbackHandle::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::CallbackHandle*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: SteamNative::CallbackHandle::UnregisterCallback
// Il2CppName: UnregisterCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::CallbackHandle::*)()>(&SteamNative::CallbackHandle::UnregisterCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::CallbackHandle*), "UnregisterCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
