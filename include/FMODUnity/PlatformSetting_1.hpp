// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FMODUnity.PlatformSettingBase
#include "FMODUnity/PlatformSettingBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: PlatformSetting`1<T>
  template<typename T>
  class PlatformSetting_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::FMODUnity::PlatformSetting_1, "FMODUnity", "PlatformSetting`1");
// Type namespace: FMODUnity
namespace FMODUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: FMODUnity.PlatformSetting`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class PlatformSetting_1 : public ::FMODUnity::PlatformSettingBase {
    public:
    public:
    // public T Value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T Value;
    public:
    // Deleting conversion operator: operator ::FMODUnity::FMODPlatform
    constexpr operator ::FMODUnity::FMODPlatform() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: public T Value
    [[deprecated("Use field access instead!")]] T& dyn_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::PlatformSetting_1::dyn_Value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: FMODUnity.PlatformSettingBase
    // Base method: System.Void PlatformSettingBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformSetting_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::PlatformSetting_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformSetting_1<T>*, creationType>()));
    }
  }; // FMODUnity.PlatformSetting`1
  // Could not write size check! Type: FMODUnity.PlatformSetting`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"