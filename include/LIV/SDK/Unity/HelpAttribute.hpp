// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: HelpAttribute
  class HelpAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LIV::SDK::Unity::HelpAttribute);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::HelpAttribute*, "LIV.SDK.Unity", "HelpAttribute");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.HelpAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: AD1D88
  class HelpAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.String text
    // Size: 0x8
    // Offset: 0x10
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return text;
    }
    // Get instance field reference: public readonly System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text();
    // public System.Void .ctor(System.String text)
    // Offset: 0x1068B00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpAttribute* New_ctor(::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::HelpAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpAttribute*, creationType>(text)));
    }
  }; // LIV.SDK.Unity.HelpAttribute
  #pragma pack(pop)
  static check_size<sizeof(HelpAttribute), 16 + sizeof(::StringW)> __LIV_SDK_Unity_HelpAttributeSizeCheck;
  static_assert(sizeof(HelpAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::HelpAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
