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
NEED_NO_BOX(::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels*, "UnLogickFactory", "UnityFbxExporterBinding/VoidIntPtrIntPtrTextureChannels");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.UnityFbxExporterBinding/VoidIntPtrIntPtrTextureChannels
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AC25B8
  class UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2145500
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr arg0, System.IntPtr arg1, UnLogickFactory.UnityFbxExporterBinding/TextureChannels arg2)
    // Offset: 0x2137F7C
    void Invoke(::System::IntPtr arg0, ::System::IntPtr arg1, ::UnLogickFactory::UnityFbxExporterBinding::TextureChannels arg2);
    // public System.IAsyncResult BeginInvoke(System.IntPtr arg0, System.IntPtr arg1, UnLogickFactory.UnityFbxExporterBinding/TextureChannels arg2, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2145510
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr arg0, ::System::IntPtr arg1, ::UnLogickFactory::UnityFbxExporterBinding::TextureChannels arg2, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x21455D4
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnLogickFactory.UnityFbxExporterBinding/VoidIntPtrIntPtrTextureChannels
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::*)(::System::IntPtr, ::System::IntPtr, ::UnLogickFactory::UnityFbxExporterBinding::TextureChannels)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::Invoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "UnityFbxExporterBinding/TextureChannels")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::*)(::System::IntPtr, ::System::IntPtr, ::UnLogickFactory::UnityFbxExporterBinding::TextureChannels, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "UnityFbxExporterBinding/TextureChannels")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0, arg1, arg2, callback, object});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::*)(::System::IAsyncResult*)>(&UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::UnityFbxExporterBinding::VoidIntPtrIntPtrTextureChannels*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};