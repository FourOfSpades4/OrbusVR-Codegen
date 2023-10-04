// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Runtime.Versioning
namespace System::Runtime::Versioning {
  // Forward declaring type: BinaryCompatibility
  class BinaryCompatibility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Versioning::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Versioning::BinaryCompatibility*, "System.Runtime.Versioning", "BinaryCompatibility");
// Type namespace: System.Runtime.Versioning
namespace System::Runtime::Versioning {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Versioning.BinaryCompatibility
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryCompatibility : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Boolean TargetsAtLeast_Desktop_V4_5
    static bool _get_TargetsAtLeast_Desktop_V4_5();
    // Set static field: static public readonly System.Boolean TargetsAtLeast_Desktop_V4_5
    static void _set_TargetsAtLeast_Desktop_V4_5(bool value);
    // Get static field: static public readonly System.Boolean TargetsAtLeast_Desktop_V4_5_1
    static bool _get_TargetsAtLeast_Desktop_V4_5_1();
    // Set static field: static public readonly System.Boolean TargetsAtLeast_Desktop_V4_5_1
    static void _set_TargetsAtLeast_Desktop_V4_5_1(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1813340
    static void _cctor();
  }; // System.Runtime.Versioning.BinaryCompatibility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Versioning::BinaryCompatibility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Versioning::BinaryCompatibility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Versioning::BinaryCompatibility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
