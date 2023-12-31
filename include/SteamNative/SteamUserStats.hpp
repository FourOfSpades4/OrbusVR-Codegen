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
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamUserStats
  class SteamUserStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SteamNative::SteamUserStats);
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::SteamUserStats*, "SteamNative", "SteamUserStats");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamNative.SteamUserStats
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamUserStats : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2846E2C
    void Dispose();
  }; // SteamNative.SteamUserStats
  #pragma pack(pop)
  static check_size<sizeof(SteamUserStats), 16 + sizeof(::SteamNative::Platform::Interface*)> __SteamNative_SteamUserStatsSizeCheck;
  static_assert(sizeof(SteamUserStats) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SteamNative::SteamUserStats::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::SteamUserStats::*)()>(&SteamNative::SteamUserStats::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamUserStats*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
