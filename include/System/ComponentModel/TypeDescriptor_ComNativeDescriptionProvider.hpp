// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptor
#include "System/ComponentModel/TypeDescriptor.hpp"
// Including type: System.ComponentModel.TypeDescriptionProvider
#include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComNativeDescriptorHandler
  class IComNativeDescriptorHandler;
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider*, "System.ComponentModel", "TypeDescriptor/ComNativeDescriptionProvider");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::ComNativeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
    public:
    // Nested type: ::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor
    class ComNativeTypeDescriptor;
    public:
    // private System.ComponentModel.IComNativeDescriptorHandler _handler
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::IComNativeDescriptorHandler* handler;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::IComNativeDescriptorHandler*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::ComponentModel::IComNativeDescriptorHandler*
    constexpr operator ::System::ComponentModel::IComNativeDescriptorHandler*() const noexcept {
      return handler;
    }
    // Get instance field reference: private System.ComponentModel.IComNativeDescriptorHandler _handler
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::IComNativeDescriptorHandler*& dyn__handler();
    // System.Void .ctor(System.ComponentModel.IComNativeDescriptorHandler handler)
    // Offset: 0x1A99090
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::ComNativeDescriptionProvider* New_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::ComNativeDescriptionProvider*, creationType>(handler)));
    }
    // System.ComponentModel.IComNativeDescriptorHandler get_Handler()
    // Offset: 0x1A990BC
    ::System::ComponentModel::IComNativeDescriptorHandler* get_Handler();
    // System.Void set_Handler(System.ComponentModel.IComNativeDescriptorHandler value)
    // Offset: 0x1A990C4
    void set_Handler(::System::ComponentModel::IComNativeDescriptorHandler* value);
    // public override System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type objectType, System.Object instance)
    // Offset: 0x1A990CC
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetTypeDescriptor(System.Type objectType, System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::Il2CppObject* instance);
  }; // System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::ComNativeDescriptionProvider), 32 + sizeof(::System::ComponentModel::IComNativeDescriptorHandler*)> __System_ComponentModel_TypeDescriptor_ComNativeDescriptionProviderSizeCheck;
  static_assert(sizeof(TypeDescriptor::ComNativeDescriptionProvider) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::get_Handler
// Il2CppName: get_Handler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComNativeDescriptorHandler* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::*)()>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::get_Handler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider*), "get_Handler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::set_Handler
// Il2CppName: set_Handler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::*)(::System::ComponentModel::IComNativeDescriptorHandler*)>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::set_Handler)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "IComNativeDescriptorHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider*), "set_Handler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::ComNativeDescriptionProvider*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};