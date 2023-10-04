// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.IReflectableType
#include "System/Reflection/IReflectableType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: TypeInfo
  class TypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeInfo*, "System.Reflection", "TypeInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.TypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5919C
  class TypeInfo : public ::System::Type/*, public ::System::Reflection::IReflectableType*/ {
    public:
    // Creating interface conversion operator: operator ::System::Reflection::IReflectableType
    operator ::System::Reflection::IReflectableType() noexcept {
      return *reinterpret_cast<::System::Reflection::IReflectableType*>(this);
    }
    // private System.Reflection.TypeInfo System.Reflection.IReflectableType.GetTypeInfo()
    // Offset: 0x1D853F8
    ::System::Reflection::TypeInfo* System_Reflection_IReflectableType_GetTypeInfo();
    // System.Void .ctor()
    // Offset: 0x1D85390
    // Implemented from: System.Type
    // Base method: System.Void Type::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::TypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInfo*, creationType>()));
    }
  }; // System.Reflection.TypeInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo
// Il2CppName: System.Reflection.IReflectableType.GetTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeInfo* (System::Reflection::TypeInfo::*)()>(&System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::TypeInfo*), "System.Reflection.IReflectableType.GetTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::TypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!