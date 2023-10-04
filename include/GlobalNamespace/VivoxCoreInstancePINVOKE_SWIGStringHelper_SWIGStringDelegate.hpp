// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxCoreInstancePINVOKE/SWIGStringHelper
#include "GlobalNamespace/VivoxCoreInstancePINVOKE_SWIGStringHelper.hpp"
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
NEED_NO_BOX(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate*, "", "VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14B306C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate*, creationType>(object, method)));
    }
    // public System.String Invoke(System.String message)
    // Offset: 0x14B3084
    ::StringW Invoke(::StringW message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14B37D4
    ::System::IAsyncResult* BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.String EndInvoke(System.IAsyncResult result)
    // Offset: 0x14B37F8
    ::StringW EndInvoke(::System::IAsyncResult* result);
  }; // VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::*)(::StringW)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};