// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarSettings
  class OvrAvatarSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarSettings*, "", "OvrAvatarSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private System.String ovrAppID
    // Size: 0x8
    // Offset: 0x18
    ::StringW ovrAppID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String ovrGearAppID
    // Size: 0x8
    // Offset: 0x20
    ::StringW ovrGearAppID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private OvrAvatarSettings instance
    static ::GlobalNamespace::OvrAvatarSettings* _get_instance();
    // Set static field: static private OvrAvatarSettings instance
    static void _set_instance(::GlobalNamespace::OvrAvatarSettings* value);
    // Get instance field reference: private System.String ovrAppID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ovrAppID();
    // Get instance field reference: private System.String ovrGearAppID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ovrGearAppID();
    // static public System.String get_AppID()
    // Offset: 0x10275D4
    static ::StringW get_AppID();
    // static public System.Void set_AppID(System.String value)
    // Offset: 0x1027784
    static void set_AppID(::StringW value);
    // static public System.String get_MobileAppID()
    // Offset: 0x1027600
    static ::StringW get_MobileAppID();
    // static public System.Void set_MobileAppID(System.String value)
    // Offset: 0x10277B4
    static void set_MobileAppID(::StringW value);
    // static public OvrAvatarSettings get_Instance()
    // Offset: 0x1027670
    static ::GlobalNamespace::OvrAvatarSettings* get_Instance();
    // static public System.Void set_Instance(OvrAvatarSettings value)
    // Offset: 0x10277E4
    static void set_Instance(::GlobalNamespace::OvrAvatarSettings* value);
    // public System.Void .ctor()
    // Offset: 0x1027838
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarSettings*, creationType>()));
    }
  }; // OvrAvatarSettings
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarSettings), 32 + sizeof(::StringW)> __GlobalNamespace_OvrAvatarSettingsSizeCheck;
  static_assert(sizeof(OvrAvatarSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::get_AppID
// Il2CppName: get_AppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OvrAvatarSettings::get_AppID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSettings*), "get_AppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::set_AppID
// Il2CppName: set_AppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OvrAvatarSettings::set_AppID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSettings*), "set_AppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::get_MobileAppID
// Il2CppName: get_MobileAppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OvrAvatarSettings::get_MobileAppID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSettings*), "get_MobileAppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::set_MobileAppID
// Il2CppName: set_MobileAppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OvrAvatarSettings::set_MobileAppID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSettings*), "set_MobileAppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarSettings* (*)()>(&GlobalNamespace::OvrAvatarSettings::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSettings*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OvrAvatarSettings*)>(&GlobalNamespace::OvrAvatarSettings::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OvrAvatarSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSettings*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!