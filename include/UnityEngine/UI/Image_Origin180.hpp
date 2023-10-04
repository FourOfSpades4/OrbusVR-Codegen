// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image::Origin180, "UnityEngine.UI", "Image/Origin180");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Image/Origin180
  // [TokenAttribute] Offset: FFFFFFFF
  struct Image::Origin180/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Origin180
    constexpr Origin180(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.Image/Origin180 Bottom
    static constexpr const int Bottom = 0;
    // Get static field: static public UnityEngine.UI.Image/Origin180 Bottom
    static ::UnityEngine::UI::Image::Origin180 _get_Bottom();
    // Set static field: static public UnityEngine.UI.Image/Origin180 Bottom
    static void _set_Bottom(::UnityEngine::UI::Image::Origin180 value);
    // static field const value: static public UnityEngine.UI.Image/Origin180 Left
    static constexpr const int Left = 1;
    // Get static field: static public UnityEngine.UI.Image/Origin180 Left
    static ::UnityEngine::UI::Image::Origin180 _get_Left();
    // Set static field: static public UnityEngine.UI.Image/Origin180 Left
    static void _set_Left(::UnityEngine::UI::Image::Origin180 value);
    // static field const value: static public UnityEngine.UI.Image/Origin180 Top
    static constexpr const int Top = 2;
    // Get static field: static public UnityEngine.UI.Image/Origin180 Top
    static ::UnityEngine::UI::Image::Origin180 _get_Top();
    // Set static field: static public UnityEngine.UI.Image/Origin180 Top
    static void _set_Top(::UnityEngine::UI::Image::Origin180 value);
    // static field const value: static public UnityEngine.UI.Image/Origin180 Right
    static constexpr const int Right = 3;
    // Get static field: static public UnityEngine.UI.Image/Origin180 Right
    static ::UnityEngine::UI::Image::Origin180 _get_Right();
    // Set static field: static public UnityEngine.UI.Image/Origin180 Right
    static void _set_Right(::UnityEngine::UI::Image::Origin180 value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UI.Image/Origin180
  #pragma pack(pop)
  static check_size<sizeof(Image::Origin180), 0 + sizeof(int)> __UnityEngine_UI_Image_Origin180SizeCheck;
  static_assert(sizeof(Image::Origin180) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
