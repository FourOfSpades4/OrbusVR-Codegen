// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: LocalAppContextSwitches
  class LocalAppContextSwitches;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::LocalAppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalAppContextSwitches*, "System", "LocalAppContextSwitches");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalAppContextSwitches
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalAppContextSwitches : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Boolean MemberDescriptorEqualsReturnsFalseIfEquivalent
    static bool _get_MemberDescriptorEqualsReturnsFalseIfEquivalent();
    // Set static field: static public readonly System.Boolean MemberDescriptorEqualsReturnsFalseIfEquivalent
    static void _set_MemberDescriptorEqualsReturnsFalseIfEquivalent(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1AB2930
    static void _cctor();
  }; // System.LocalAppContextSwitches
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalAppContextSwitches::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::LocalAppContextSwitches::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalAppContextSwitches*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
