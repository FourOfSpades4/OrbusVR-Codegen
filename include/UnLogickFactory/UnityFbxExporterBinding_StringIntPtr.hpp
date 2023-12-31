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
NEED_NO_BOX(::UnLogickFactory::UnityFbxExporterBinding::StringIntPtr);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::UnityFbxExporterBinding::StringIntPtr*, "UnLogickFactory", "UnityFbxExporterBinding/StringIntPtr");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.UnityFbxExporterBinding/StringIntPtr
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AC270C
  class UnityFbxExporterBinding::StringIntPtr : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21426AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityFbxExporterBinding::StringIntPtr* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityFbxExporterBinding::StringIntPtr*, creationType>(object, method)));
    }
    // public System.String Invoke(System.IntPtr arg0)
    // Offset: 0x21426BC
    ::StringW Invoke(::System::IntPtr arg0);
    // public System.IAsyncResult BeginInvoke(System.IntPtr arg0, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2142B0C
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr arg0, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.String EndInvoke(System.IAsyncResult result)
    // Offset: 0x2142B98
    ::StringW EndInvoke(::System::IAsyncResult* result);
  }; // UnLogickFactory.UnityFbxExporterBinding/StringIntPtr
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::*)(::System::IntPtr)>(&UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::Invoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::StringIntPtr*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::*)(::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::StringIntPtr*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, callback, object});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::*)(::System::IAsyncResult*)>(&UnLogickFactory::UnityFbxExporterBinding::StringIntPtr::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::StringIntPtr*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
