// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: AmplifyColor
namespace AmplifyColor {
  // Forward declaring type: VersionInfo
  class VersionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AmplifyColor::VersionInfo);
DEFINE_IL2CPP_ARG_TYPE(::AmplifyColor::VersionInfo*, "AmplifyColor", "VersionInfo");
// Type namespace: AmplifyColor
namespace AmplifyColor {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColor.VersionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 m_major
    // Size: 0x4
    // Offset: 0x10
    int m_major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_minor
    // Size: 0x4
    // Offset: 0x14
    int m_minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_release
    // Size: 0x4
    // Offset: 0x18
    int m_release;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static public System.Byte Major
    static constexpr const uint8_t Major = 1u;
    // Get static field: static public System.Byte Major
    static uint8_t _get_Major();
    // Set static field: static public System.Byte Major
    static void _set_Major(uint8_t value);
    // static field const value: static public System.Byte Minor
    static constexpr const uint8_t Minor = 6u;
    // Get static field: static public System.Byte Minor
    static uint8_t _get_Minor();
    // Set static field: static public System.Byte Minor
    static void _set_Minor(uint8_t value);
    // static field const value: static public System.Byte Release
    static constexpr const uint8_t Release = 4u;
    // Get static field: static public System.Byte Release
    static uint8_t _get_Release();
    // Set static field: static public System.Byte Release
    static void _set_Release(uint8_t value);
    // Get static field: static private System.String StageSuffix
    static ::StringW _get_StageSuffix();
    // Set static field: static private System.String StageSuffix
    static void _set_StageSuffix(::StringW value);
    // Get static field: static private System.String TrialSuffix
    static ::StringW _get_TrialSuffix();
    // Set static field: static private System.String TrialSuffix
    static void _set_TrialSuffix(::StringW value);
    // Get instance field reference: private System.Int32 m_major
    [[deprecated("Use field access instead!")]] int& dyn_m_major();
    // Get instance field reference: private System.Int32 m_minor
    [[deprecated("Use field access instead!")]] int& dyn_m_minor();
    // Get instance field reference: private System.Int32 m_release
    [[deprecated("Use field access instead!")]] int& dyn_m_release();
    // static public System.String StaticToString()
    // Offset: 0xF0034C
    static ::StringW StaticToString();
    // public System.Int32 get_Number()
    // Offset: 0xF00548
    int get_Number();
    // private System.Void .ctor()
    // Offset: 0xF00568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyColor::VersionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionInfo*, creationType>()));
    }
    // private System.Void .ctor(System.Byte major, System.Byte minor, System.Byte release)
    // Offset: 0xF005A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionInfo* New_ctor(uint8_t major, uint8_t minor, uint8_t release) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyColor::VersionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionInfo*, creationType>(major, minor, release)));
    }
    // static public AmplifyColor.VersionInfo Current()
    // Offset: 0xF005EC
    static ::AmplifyColor::VersionInfo* Current();
    // static public System.Boolean Matches(AmplifyColor.VersionInfo version)
    // Offset: 0xF0065C
    static bool Matches(::AmplifyColor::VersionInfo* version);
    // static private System.Void .cctor()
    // Offset: 0xF006AC
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xF00448
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // AmplifyColor.VersionInfo
  #pragma pack(pop)
  static check_size<sizeof(VersionInfo), 24 + sizeof(int)> __AmplifyColor_VersionInfoSizeCheck;
  static_assert(sizeof(VersionInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::StaticToString
// Il2CppName: StaticToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&AmplifyColor::VersionInfo::StaticToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VersionInfo*), "StaticToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::get_Number
// Il2CppName: get_Number
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AmplifyColor::VersionInfo::*)()>(&AmplifyColor::VersionInfo::get_Number)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VersionInfo*), "get_Number", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::Current
// Il2CppName: Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AmplifyColor::VersionInfo* (*)()>(&AmplifyColor::VersionInfo::Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VersionInfo*), "Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::AmplifyColor::VersionInfo*)>(&AmplifyColor::VersionInfo::Matches)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("AmplifyColor", "VersionInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VersionInfo*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&AmplifyColor::VersionInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VersionInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VersionInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AmplifyColor::VersionInfo::*)()>(&AmplifyColor::VersionInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VersionInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
