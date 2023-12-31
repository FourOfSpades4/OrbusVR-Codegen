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
NEED_NO_BOX(::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3*, "UnLogickFactory", "UnityFbxExporterBinding/VoidIntPtrDouble3");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.UnityFbxExporterBinding/VoidIntPtrDouble3
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AC2694
  class UnityFbxExporterBinding::VoidIntPtrDouble3 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2143670
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityFbxExporterBinding::VoidIntPtrDouble3* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityFbxExporterBinding::VoidIntPtrDouble3*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr arg0, System.Double arg1, System.Double arg2, System.Double arg3)
    // Offset: 0x2143680
    void Invoke(::System::IntPtr arg0, double arg1, double arg2, double arg3);
    // public System.IAsyncResult BeginInvoke(System.IntPtr arg0, System.Double arg1, System.Double arg2, System.Double arg3, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2143B48
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr arg0, double arg1, double arg2, double arg3, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2143C20
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnLogickFactory.UnityFbxExporterBinding/VoidIntPtrDouble3
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::*)(::System::IntPtr, double, double, double)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::Invoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* arg3 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, arg1, arg2, arg3});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::*)(::System::IntPtr, double, double, double, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* arg3 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, arg1, arg2, arg3, callback, object});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::*)(::System::IAsyncResult*)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrDouble3*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
