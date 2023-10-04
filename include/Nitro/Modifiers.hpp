// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CodeFragment
  class CodeFragment;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: Modifiers
  class Modifiers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::Modifiers);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::Modifiers*, "Nitro", "Modifiers");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.Modifiers
  // [TokenAttribute] Offset: FFFFFFFF
  class Modifiers : public ::Il2CppObject {
    public:
    // static public System.Boolean Check(Nitro.CodeFragment fragment, System.String modifier)
    // Offset: 0xF657BC
    static bool Check(::Nitro::CodeFragment* fragment, ::StringW modifier);
    // static public System.Void Handle(Nitro.CodeFragment fragment, out System.Boolean isPublic)
    // Offset: 0xF5D7E4
    static void Handle(::Nitro::CodeFragment* fragment, ByRef<bool> isPublic);
    // static public Nitro.CodeFragment Skip(Nitro.CodeFragment fragment)
    // Offset: 0xF65988
    static ::Nitro::CodeFragment* Skip(::Nitro::CodeFragment* fragment);
  }; // Nitro.Modifiers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::Modifiers::Check
// Il2CppName: Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Nitro::CodeFragment*, ::StringW)>(&Nitro::Modifiers::Check)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    static auto* modifier = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Modifiers*), "Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment, modifier});
  }
};
// Writing MetadataGetter for method: Nitro::Modifiers::Handle
// Il2CppName: Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Nitro::CodeFragment*, ByRef<bool>)>(&Nitro::Modifiers::Handle)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    static auto* isPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Modifiers*), "Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment, isPublic});
  }
};
// Writing MetadataGetter for method: Nitro::Modifiers::Skip
// Il2CppName: Skip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CodeFragment* (*)(::Nitro::CodeFragment*)>(&Nitro::Modifiers::Skip)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Modifiers*), "Skip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment});
  }
};
