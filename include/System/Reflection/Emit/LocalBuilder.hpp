// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.LocalVariableInfo
#include "System/Reflection/LocalVariableInfo.hpp"
// Including type: System.Runtime.InteropServices._LocalBuilder
#include "System/Runtime/InteropServices/_LocalBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection::Emit
namespace System::Reflection::Emit {
  // Forward declaring type: ILGenerator
  class ILGenerator;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: LocalBuilder
  class LocalBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::LocalBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::LocalBuilder*, "System.Reflection.Emit", "LocalBuilder");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.Emit.LocalBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A598C8
  // [ClassInterfaceAttribute] Offset: A598C8
  class LocalBuilder : public ::System::Reflection::LocalVariableInfo/*, public ::System::Runtime::InteropServices::_LocalBuilder*/ {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Reflection.Emit.ILGenerator ilgen
    // Size: 0x8
    // Offset: 0x28
    ::System::Reflection::Emit::ILGenerator* ilgen;
    // Field size check
    static_assert(sizeof(::System::Reflection::Emit::ILGenerator*) == 0x8);
    // private System.Int32 startOffset
    // Size: 0x4
    // Offset: 0x30
    int startOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 endOffset
    // Size: 0x4
    // Offset: 0x34
    int endOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_LocalBuilder
    operator ::System::Runtime::InteropServices::_LocalBuilder() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_LocalBuilder*>(this);
    }
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: System.Reflection.Emit.ILGenerator ilgen
    [[deprecated("Use field access instead!")]] ::System::Reflection::Emit::ILGenerator*& dyn_ilgen();
    // Get instance field reference: private System.Int32 startOffset
    [[deprecated("Use field access instead!")]] int& dyn_startOffset();
    // Get instance field reference: private System.Int32 endOffset
    [[deprecated("Use field access instead!")]] int& dyn_endOffset();
  }; // System.Reflection.Emit.LocalBuilder
  #pragma pack(pop)
  static check_size<sizeof(LocalBuilder), 52 + sizeof(int)> __System_Reflection_Emit_LocalBuilderSizeCheck;
  static_assert(sizeof(LocalBuilder) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
