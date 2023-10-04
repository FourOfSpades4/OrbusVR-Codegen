// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRSettings::_SetString);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSettings::_SetString*, "Valve.VR", "IVRSettings/_SetString");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSettings/_SetString
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AD01A0
  class IVRSettings::_SetString : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x25A60D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_SetString* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSettings::_SetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_SetString*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.String pchValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x25A60E0
    void Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<::Valve::VR::EVRSettingsError> peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.String pchValue, ref Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x25A68E8
    ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<::Valve::VR::EVRSettingsError> peError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x25A6998
    void EndInvoke(ByRef<::Valve::VR::EVRSettingsError> peError, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_SetString
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetString::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSettings::_SetString::*)(::StringW, ::StringW, ::StringW, ByRef<::Valve::VR::EVRSettingsError>)>(&Valve::VR::IVRSettings::_SetString::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_SetString*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, pchValue, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetString::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSettings::_SetString::*)(::StringW, ::StringW, ::StringW, ByRef<::Valve::VR::EVRSettingsError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSettings::_SetString::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_SetString*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, pchValue, peError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetString::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSettings::_SetString::*)(ByRef<::Valve::VR::EVRSettingsError>, ::System::IAsyncResult*)>(&Valve::VR::IVRSettings::_SetString::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_SetString*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};