// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnLogickFactory.UnityFbxExporterBinding
#include "UnLogickFactory/UnityFbxExporterBinding.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnLogickFactory::UnityFbxExporterBinding::BoolString);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::UnityFbxExporterBinding::BoolString*, "UnLogickFactory", "UnityFbxExporterBinding/BoolString");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.UnityFbxExporterBinding/BoolString
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AC248C
  class UnityFbxExporterBinding::BoolString : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x213B7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityFbxExporterBinding::BoolString* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::UnityFbxExporterBinding::BoolString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityFbxExporterBinding::BoolString*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String value)
    // Offset: 0x213B7B0
    bool Invoke(::StringW value);
    // public System.IAsyncResult BeginInvoke(System.String value, System.AsyncCallback callback, System.Object object)
    // Offset: 0x213BF08
    ::System::IAsyncResult* BeginInvoke(::StringW value, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x213BF2C
    bool EndInvoke(::System::IAsyncResult* result);
  }; // UnLogickFactory.UnityFbxExporterBinding/BoolString
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::BoolString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::BoolString::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnLogickFactory::UnityFbxExporterBinding::BoolString::*)(::StringW)>(&UnLogickFactory::UnityFbxExporterBinding::BoolString::Invoke)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::BoolString*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::BoolString::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnLogickFactory::UnityFbxExporterBinding::BoolString::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnLogickFactory::UnityFbxExporterBinding::BoolString::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::BoolString*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, callback, object});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::BoolString::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnLogickFactory::UnityFbxExporterBinding::BoolString::*)(::System::IAsyncResult*)>(&UnLogickFactory::UnityFbxExporterBinding::BoolString::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::BoolString*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};