// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ExtractExistingFileAction
  struct ExtractExistingFileAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::ExtractExistingFileAction, "Pathfinding.Ionic.Zip", "ExtractExistingFileAction");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.ExtractExistingFileAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExtractExistingFileAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ExtractExistingFileAction
    constexpr ExtractExistingFileAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction Throw
    static constexpr const int Throw = 0;
    // Get static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction Throw
    static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction _get_Throw();
    // Set static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction Throw
    static void _set_Throw(::Pathfinding::Ionic::Zip::ExtractExistingFileAction value);
    // static field const value: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction OverwriteSilently
    static constexpr const int OverwriteSilently = 1;
    // Get static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction OverwriteSilently
    static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction _get_OverwriteSilently();
    // Set static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction OverwriteSilently
    static void _set_OverwriteSilently(::Pathfinding::Ionic::Zip::ExtractExistingFileAction value);
    // static field const value: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction DoNotOverwrite
    static constexpr const int DoNotOverwrite = 2;
    // Get static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction DoNotOverwrite
    static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction _get_DoNotOverwrite();
    // Set static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction DoNotOverwrite
    static void _set_DoNotOverwrite(::Pathfinding::Ionic::Zip::ExtractExistingFileAction value);
    // static field const value: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction InvokeExtractProgressEvent
    static constexpr const int InvokeExtractProgressEvent = 3;
    // Get static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction InvokeExtractProgressEvent
    static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction _get_InvokeExtractProgressEvent();
    // Set static field: static public Pathfinding.Ionic.Zip.ExtractExistingFileAction InvokeExtractProgressEvent
    static void _set_InvokeExtractProgressEvent(::Pathfinding::Ionic::Zip::ExtractExistingFileAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zip.ExtractExistingFileAction
  #pragma pack(pop)
  static check_size<sizeof(ExtractExistingFileAction), 0 + sizeof(int)> __Pathfinding_Ionic_Zip_ExtractExistingFileActionSizeCheck;
  static_assert(sizeof(ExtractExistingFileAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
