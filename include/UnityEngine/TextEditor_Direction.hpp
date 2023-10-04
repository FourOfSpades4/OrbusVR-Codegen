// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextEditor
#include "UnityEngine/TextEditor.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditor::Direction, "UnityEngine", "TextEditor/Direction");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextEditor/Direction
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextEditor::Direction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Direction
    constexpr Direction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextEditor/Direction Forward
    static constexpr const int Forward = 0;
    // Get static field: static public UnityEngine.TextEditor/Direction Forward
    static ::UnityEngine::TextEditor::Direction _get_Forward();
    // Set static field: static public UnityEngine.TextEditor/Direction Forward
    static void _set_Forward(::UnityEngine::TextEditor::Direction value);
    // static field const value: static public UnityEngine.TextEditor/Direction Backward
    static constexpr const int Backward = 1;
    // Get static field: static public UnityEngine.TextEditor/Direction Backward
    static ::UnityEngine::TextEditor::Direction _get_Backward();
    // Set static field: static public UnityEngine.TextEditor/Direction Backward
    static void _set_Backward(::UnityEngine::TextEditor::Direction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextEditor/Direction
  #pragma pack(pop)
  static check_size<sizeof(TextEditor::Direction), 0 + sizeof(int)> __UnityEngine_TextEditor_DirectionSizeCheck;
  static_assert(sizeof(TextEditor::Direction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
