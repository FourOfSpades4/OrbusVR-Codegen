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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRNamedArrayAttribute
  class OVRNamedArrayAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRNamedArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNamedArrayAttribute*, "", "OVRNamedArrayAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRNamedArrayAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRNamedArrayAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.String[] names
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> names;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::StringW>
    constexpr operator ::ArrayW<::StringW>() const noexcept {
      return names;
    }
    // Get instance field reference: public readonly System.String[] names
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_names();
    // public System.Void .ctor(System.String[] names)
    // Offset: 0x1393478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNamedArrayAttribute* New_ctor(::ArrayW<::StringW> names) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRNamedArrayAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNamedArrayAttribute*, creationType>(names)));
    }
  }; // OVRNamedArrayAttribute
  #pragma pack(pop)
  static check_size<sizeof(OVRNamedArrayAttribute), 16 + sizeof(::ArrayW<::StringW>)> __GlobalNamespace_OVRNamedArrayAttributeSizeCheck;
  static_assert(sizeof(OVRNamedArrayAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNamedArrayAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
