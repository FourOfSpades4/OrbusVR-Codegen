// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LeanTest
  class LeanTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeanTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeanTest*, "", "LeanTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LeanTest
  // [TokenAttribute] Offset: FFFFFFFF
  class LeanTest : public ::Il2CppObject {
    public:
    // Get static field: static public System.Int32 expected
    static int _get_expected();
    // Set static field: static public System.Int32 expected
    static void _set_expected(int value);
    // Get static field: static private System.Int32 tests
    static int _get_tests();
    // Set static field: static private System.Int32 tests
    static void _set_tests(int value);
    // Get static field: static private System.Int32 passes
    static int _get_passes();
    // Set static field: static private System.Int32 passes
    static void _set_passes(int value);
    // Get static field: static public System.Single timeout
    static float _get_timeout();
    // Set static field: static public System.Single timeout
    static void _set_timeout(float value);
    // Get static field: static public System.Boolean timeoutStarted
    static bool _get_timeoutStarted();
    // Set static field: static public System.Boolean timeoutStarted
    static void _set_timeoutStarted(bool value);
    // Get static field: static public System.Boolean testsFinished
    static bool _get_testsFinished();
    // Set static field: static public System.Boolean testsFinished
    static void _set_testsFinished(bool value);
    // static public System.Void debug(System.String name, System.Boolean didPass, System.String failExplaination)
    // Offset: 0x1AC1CFC
    static void debug(::StringW name, bool didPass, ::StringW failExplaination);
    // static public System.Void expect(System.Boolean didPass, System.String definition, System.String failExplaination)
    // Offset: 0x1AC1D78
    static void expect(bool didPass, ::StringW definition, ::StringW failExplaination);
    // static public System.String padRight(System.Int32 len)
    // Offset: 0x1AC2B7C
    static ::StringW padRight(int len);
    // static public System.Single printOutLength(System.String str)
    // Offset: 0x1AC2418
    static float printOutLength(::StringW str);
    // static public System.String formatBC(System.String str, System.String color)
    // Offset: 0x1AC2BEC
    static ::StringW formatBC(::StringW str, ::StringW color);
    // static public System.String formatB(System.String str)
    // Offset: 0x1AC2574
    static ::StringW formatB(::StringW str);
    // static public System.String formatC(System.String str, System.String color)
    // Offset: 0x1AC25D4
    static ::StringW formatC(::StringW str, ::StringW color);
    // static public System.Void overview()
    // Offset: 0x1AC27D0
    static void overview();
    // public System.Void .ctor()
    // Offset: 0x1AC2C64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeanTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeanTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeanTest*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AC2C6C
    static void _cctor();
  }; // LeanTest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::debug
// Il2CppName: debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, ::StringW)>(&GlobalNamespace::LeanTest::debug)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* didPass = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* failExplaination = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, didPass, failExplaination});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::expect
// Il2CppName: expect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW, ::StringW)>(&GlobalNamespace::LeanTest::expect)> {
  static const MethodInfo* get() {
    static auto* didPass = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* definition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failExplaination = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "expect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{didPass, definition, failExplaination});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::padRight
// Il2CppName: padRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&GlobalNamespace::LeanTest::padRight)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "padRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::printOutLength
// Il2CppName: printOutLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW)>(&GlobalNamespace::LeanTest::printOutLength)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "printOutLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::formatBC
// Il2CppName: formatBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&GlobalNamespace::LeanTest::formatBC)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "formatBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::formatB
// Il2CppName: formatB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::LeanTest::formatB)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "formatB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::formatC
// Il2CppName: formatC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&GlobalNamespace::LeanTest::formatC)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "formatC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::overview
// Il2CppName: overview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LeanTest::overview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), "overview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeanTest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LeanTest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeanTest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
