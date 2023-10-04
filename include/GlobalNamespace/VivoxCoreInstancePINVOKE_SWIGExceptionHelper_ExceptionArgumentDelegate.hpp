// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxCoreInstancePINVOKE/SWIGExceptionHelper
#include "GlobalNamespace/VivoxCoreInstancePINVOKE_SWIGExceptionHelper.hpp"
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
NEED_NO_BOX(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*, "", "VivoxCoreInstancePINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VivoxCoreInstancePINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14B1804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message, System.String paramName)
    // Offset: 0x14B181C
    void Invoke(::StringW message, ::StringW paramName);
    // public System.IAsyncResult BeginInvoke(System.String message, System.String paramName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14B1F9C
    ::System::IAsyncResult* BeginInvoke(::StringW message, ::StringW paramName, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14B1FCC
    void EndInvoke(::System::IAsyncResult* result);
  }; // VivoxCoreInstancePINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::*)(::StringW, ::StringW)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, paramName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, paramName, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};