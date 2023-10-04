// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: VivoxUnity.Properties.CollectionAccessType
#include "VivoxUnity/Properties/CollectionAccessType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Forward declaring type: CollectionAccessAttribute
  class CollectionAccessAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::CollectionAccessAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::CollectionAccessAttribute*, "VivoxUnity.Properties", "CollectionAccessAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.CollectionAccessAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD43C
  class CollectionAccessAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDE68
    // private VivoxUnity.Properties.CollectionAccessType <CollectionAccessType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::VivoxUnity::Properties::CollectionAccessType CollectionAccessType;
    // Field size check
    static_assert(sizeof(::VivoxUnity::Properties::CollectionAccessType) == 0x4);
    public:
    // Creating conversion operator: operator ::VivoxUnity::Properties::CollectionAccessType
    constexpr operator ::VivoxUnity::Properties::CollectionAccessType() const noexcept {
      return CollectionAccessType;
    }
    // Get instance field reference: private VivoxUnity.Properties.CollectionAccessType <CollectionAccessType>k__BackingField
    [[deprecated("Use field access instead!")]] ::VivoxUnity::Properties::CollectionAccessType& dyn_$CollectionAccessType$k__BackingField();
    // public System.Void .ctor(VivoxUnity.Properties.CollectionAccessType collectionAccessType)
    // Offset: 0x12D8F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionAccessAttribute* New_ctor(::VivoxUnity::Properties::CollectionAccessType collectionAccessType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::CollectionAccessAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionAccessAttribute*, creationType>(collectionAccessType)));
    }
    // public VivoxUnity.Properties.CollectionAccessType get_CollectionAccessType()
    // Offset: 0x12D8FA0
    ::VivoxUnity::Properties::CollectionAccessType get_CollectionAccessType();
    // private System.Void set_CollectionAccessType(VivoxUnity.Properties.CollectionAccessType value)
    // Offset: 0x12D8F98
    void set_CollectionAccessType(::VivoxUnity::Properties::CollectionAccessType value);
  }; // VivoxUnity.Properties.CollectionAccessAttribute
  #pragma pack(pop)
  static check_size<sizeof(CollectionAccessAttribute), 16 + sizeof(::VivoxUnity::Properties::CollectionAccessType)> __VivoxUnity_Properties_CollectionAccessAttributeSizeCheck;
  static_assert(sizeof(CollectionAccessAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::CollectionAccessAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::CollectionAccessAttribute::get_CollectionAccessType
// Il2CppName: get_CollectionAccessType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::Properties::CollectionAccessType (VivoxUnity::Properties::CollectionAccessAttribute::*)()>(&VivoxUnity::Properties::CollectionAccessAttribute::get_CollectionAccessType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::CollectionAccessAttribute*), "get_CollectionAccessType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::CollectionAccessAttribute::set_CollectionAccessType
// Il2CppName: set_CollectionAccessType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::CollectionAccessAttribute::*)(::VivoxUnity::Properties::CollectionAccessType)>(&VivoxUnity::Properties::CollectionAccessAttribute::set_CollectionAccessType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity.Properties", "CollectionAccessType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::CollectionAccessAttribute*), "set_CollectionAccessType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
