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
NEED_NO_BOX(::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble*, "UnLogickFactory", "UnityFbxExporterBinding/VoidIntPtrStringDouble");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.UnityFbxExporterBinding/VoidIntPtrStringDouble
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AC275C
  class UnityFbxExporterBinding::VoidIntPtrStringDouble : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2145B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityFbxExporterBinding::VoidIntPtrStringDouble* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityFbxExporterBinding::VoidIntPtrStringDouble*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr arg0, System.String arg1, System.Double arg2)
    // Offset: 0x2145B68
    void Invoke(::System::IntPtr arg0, ::StringW arg1, double arg2);
    // public System.IAsyncResult BeginInvoke(System.IntPtr arg0, System.String arg1, System.Double arg2, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2146018
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr arg0, ::StringW arg1, double arg2, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x21460D0
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnLogickFactory.UnityFbxExporterBinding/VoidIntPtrStringDouble
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::*)(::System::IntPtr, ::StringW, double)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::Invoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::*)(::System::IntPtr, ::StringW, double, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, arg1, arg2, callback, object});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::*)(::System::IAsyncResult*)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrStringDouble*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
