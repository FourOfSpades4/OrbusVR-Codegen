// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxCoreInstancePINVOKE
#include "GlobalNamespace/VivoxCoreInstancePINVOKE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper*, "", "VivoxCoreInstancePINVOKE/SWIGStringHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VivoxCoreInstancePINVOKE/SWIGStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class VivoxCoreInstancePINVOKE::SWIGStringHelper : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate
    class SWIGStringDelegate;
    // Get static field: static private VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate stringDelegate
    static ::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate* _get_stringDelegate();
    // Set static field: static private VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate stringDelegate
    static void _set_stringDelegate(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate* value);
    // static public System.Void SWIGRegisterStringCallback_VivoxCoreInstance(VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate stringDelegate)
    // Offset: 0x14B2F48
    static void SWIGRegisterStringCallback_VivoxCoreInstance(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate* stringDelegate);
    // static private System.String CreateString(System.String cString)
    // Offset: 0x14B2F44
    static ::StringW CreateString(::StringW cString);
    // static private System.Void .cctor()
    // Offset: 0x14B2FE8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14B307C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VivoxCoreInstancePINVOKE::SWIGStringHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VivoxCoreInstancePINVOKE::SWIGStringHelper*, creationType>()));
    }
  }; // VivoxCoreInstancePINVOKE/SWIGStringHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_VivoxCoreInstance
// Il2CppName: SWIGRegisterStringCallback_VivoxCoreInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGStringDelegate*)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_VivoxCoreInstance)> {
  static const MethodInfo* get() {
    static auto* stringDelegate = &::il2cpp_utils::GetClassFromName("", "VivoxCoreInstancePINVOKE/SWIGStringHelper/SWIGStringDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper*), "SWIGRegisterStringCallback_VivoxCoreInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringDelegate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::CreateString)> {
  static const MethodInfo* get() {
    static auto* cString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cString});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VivoxCoreInstancePINVOKE::SWIGStringHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!