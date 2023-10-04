// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FMODUnity.Settings
#include "FMODUnity/Settings.hpp"
// Including type: FMODUnity.FMODPlatform
#include "FMODUnity/FMODPlatform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: PlatformSettingBase
  class PlatformSettingBase;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::FMODUnity::Settings::$$c__DisplayClass36_0_1, "FMODUnity", "Settings/<>c__DisplayClass36_0`1");
// Type namespace: FMODUnity
namespace FMODUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: FMODUnity.Settings/<>c__DisplayClass36_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC2894
  template<typename T>
  class Settings::$$c__DisplayClass36_0_1 : public ::Il2CppObject {
    public:
    public:
    // public FMODUnity.FMODPlatform platform
    // Size: 0x4
    // Offset: 0x0
    ::FMODUnity::FMODPlatform platform;
    // Field size check
    static_assert(sizeof(::FMODUnity::FMODPlatform) == 0x4);
    public:
    // Creating conversion operator: operator ::FMODUnity::FMODPlatform
    constexpr operator ::FMODUnity::FMODPlatform() const noexcept {
      return platform;
    }
    // Autogenerated instance field getter
    // Get instance field: public FMODUnity.FMODPlatform platform
    [[deprecated("Use field access instead!")]] ::FMODUnity::FMODPlatform& dyn_platform() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::Settings::$$c__DisplayClass36_0_1::dyn_platform");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "platform"))->offset;
      return *reinterpret_cast<::FMODUnity::FMODPlatform*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Settings::$$c__DisplayClass36_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::Settings::$$c__DisplayClass36_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Settings::$$c__DisplayClass36_0_1<T>*, creationType>()));
    }
    // System.Boolean <RemoveSetting>b__0(T x)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool $RemoveSetting$b__0(T x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::Settings::$$c__DisplayClass36_0_1::<RemoveSetting>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RemoveSetting>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, x);
    }
  }; // FMODUnity.Settings/<>c__DisplayClass36_0`1
  // Could not write size check! Type: FMODUnity.Settings/<>c__DisplayClass36_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
