// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: SteamNative.Platform
#include "SteamNative/Platform.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamInventoryResult_t
  struct SteamInventoryResult_t;
}
// Completed forward declares
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamInventory
  class SteamInventory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SteamNative::SteamInventory);
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::SteamInventory*, "SteamNative", "SteamInventory");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamNative.SteamInventory
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamInventory : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // SteamNative.Platform/Interface platform
    // Size: 0x8
    // Offset: 0x10
    ::SteamNative::Platform::Interface* platform;
    // Field size check
    static_assert(sizeof(::SteamNative::Platform::Interface*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::SteamNative::Platform::Interface*
    constexpr operator ::SteamNative::Platform::Interface*() const noexcept {
      return platform;
    }
    // Get instance field reference: SteamNative.Platform/Interface platform
    [[deprecated("Use field access instead!")]] ::SteamNative::Platform::Interface*& dyn_platform();
    // public System.Void Dispose()
    // Offset: 0x284688C
    void Dispose();
    // public System.Void DestroyResult(SteamNative.SteamInventoryResult_t resultHandle)
    // Offset: 0x2844C44
    void DestroyResult(::SteamNative::SteamInventoryResult_t resultHandle);
  }; // SteamNative.SteamInventory
  #pragma pack(pop)
  static check_size<sizeof(SteamInventory), 16 + sizeof(::SteamNative::Platform::Interface*)> __SteamNative_SteamInventorySizeCheck;
  static_assert(sizeof(SteamInventory) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SteamNative::SteamInventory::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::SteamInventory::*)()>(&SteamNative::SteamInventory::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamInventory*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: SteamNative::SteamInventory::DestroyResult
// Il2CppName: DestroyResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::SteamInventory::*)(::SteamNative::SteamInventoryResult_t)>(&SteamNative::SteamInventory::DestroyResult)> {
  static const MethodInfo* get() {
    static auto* resultHandle = &::il2cpp_utils::GetClassFromName("SteamNative", "SteamInventoryResult_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamInventory*), "DestroyResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultHandle});
  }
};
