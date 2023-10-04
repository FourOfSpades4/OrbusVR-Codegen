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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: LocalVariableInfo
  class LocalVariableInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::LocalVariableInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::LocalVariableInfo*, "System.Reflection", "LocalVariableInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.LocalVariableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A594D0
  class LocalVariableInfo : public ::Il2CppObject {
    public:
    public:
    // System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Boolean is_pinned
    // Size: 0x1
    // Offset: 0x18
    bool is_pinned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_pinned and: position
    char __padding1[0x1] = {};
    // System.UInt16 position
    // Size: 0x2
    // Offset: 0x1A
    uint16_t position;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Get instance field reference: System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // Get instance field reference: System.Boolean is_pinned
    [[deprecated("Use field access instead!")]] bool& dyn_is_pinned();
    // Get instance field reference: System.UInt16 position
    [[deprecated("Use field access instead!")]] uint16_t& dyn_position();
    // public override System.String ToString()
    // Offset: 0x1D78020
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Reflection.LocalVariableInfo
  #pragma pack(pop)
  static check_size<sizeof(LocalVariableInfo), 26 + sizeof(uint16_t)> __System_Reflection_LocalVariableInfoSizeCheck;
  static_assert(sizeof(LocalVariableInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::LocalVariableInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::LocalVariableInfo::*)()>(&System::Reflection::LocalVariableInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::LocalVariableInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
