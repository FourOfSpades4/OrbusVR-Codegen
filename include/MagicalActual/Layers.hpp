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
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Layers
  struct Layers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::Layers, "MagicalActual", "Layers");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.Layers
  // [TokenAttribute] Offset: FFFFFFFF
  struct Layers/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Layers
    constexpr Layers(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MagicalActual.Layers DEFAULT
    static constexpr const int DEFAULT = 0;
    // Get static field: static public MagicalActual.Layers DEFAULT
    static ::MagicalActual::Layers _get_DEFAULT();
    // Set static field: static public MagicalActual.Layers DEFAULT
    static void _set_DEFAULT(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers PHYSICSINTERACTABLE
    static constexpr const int PHYSICSINTERACTABLE = 10;
    // Get static field: static public MagicalActual.Layers PHYSICSINTERACTABLE
    static ::MagicalActual::Layers _get_PHYSICSINTERACTABLE();
    // Set static field: static public MagicalActual.Layers PHYSICSINTERACTABLE
    static void _set_PHYSICSINTERACTABLE(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers ENEMY
    static constexpr const int ENEMY = 11;
    // Get static field: static public MagicalActual.Layers ENEMY
    static ::MagicalActual::Layers _get_ENEMY();
    // Set static field: static public MagicalActual.Layers ENEMY
    static void _set_ENEMY(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers ACTIONPOINT
    static constexpr const int ACTIONPOINT = 12;
    // Get static field: static public MagicalActual.Layers ACTIONPOINT
    static ::MagicalActual::Layers _get_ACTIONPOINT();
    // Set static field: static public MagicalActual.Layers ACTIONPOINT
    static void _set_ACTIONPOINT(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers GROUND
    static constexpr const int GROUND = 13;
    // Get static field: static public MagicalActual.Layers GROUND
    static ::MagicalActual::Layers _get_GROUND();
    // Set static field: static public MagicalActual.Layers GROUND
    static void _set_GROUND(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers NAVIGATIONGRID
    static constexpr const int NAVIGATIONGRID = 14;
    // Get static field: static public MagicalActual.Layers NAVIGATIONGRID
    static ::MagicalActual::Layers _get_NAVIGATIONGRID();
    // Set static field: static public MagicalActual.Layers NAVIGATIONGRID
    static void _set_NAVIGATIONGRID(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers PLAYER
    static constexpr const int PLAYER = 15;
    // Get static field: static public MagicalActual.Layers PLAYER
    static ::MagicalActual::Layers _get_PLAYER();
    // Set static field: static public MagicalActual.Layers PLAYER
    static void _set_PLAYER(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers ENEMYPLAYERONLY
    static constexpr const int ENEMYPLAYERONLY = 16;
    // Get static field: static public MagicalActual.Layers ENEMYPLAYERONLY
    static ::MagicalActual::Layers _get_ENEMYPLAYERONLY();
    // Set static field: static public MagicalActual.Layers ENEMYPLAYERONLY
    static void _set_ENEMYPLAYERONLY(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers WATER
    static constexpr const int WATER = 4;
    // Get static field: static public MagicalActual.Layers WATER
    static ::MagicalActual::Layers _get_WATER();
    // Set static field: static public MagicalActual.Layers WATER
    static void _set_WATER(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers UIINTERACTABLE
    static constexpr const int UIINTERACTABLE = 19;
    // Get static field: static public MagicalActual.Layers UIINTERACTABLE
    static ::MagicalActual::Layers _get_UIINTERACTABLE();
    // Set static field: static public MagicalActual.Layers UIINTERACTABLE
    static void _set_UIINTERACTABLE(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers NOINTERACT
    static constexpr const int NOINTERACT = 18;
    // Get static field: static public MagicalActual.Layers NOINTERACT
    static ::MagicalActual::Layers _get_NOINTERACT();
    // Set static field: static public MagicalActual.Layers NOINTERACT
    static void _set_NOINTERACT(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers SERVERINFO
    static constexpr const int SERVERINFO = 17;
    // Get static field: static public MagicalActual.Layers SERVERINFO
    static ::MagicalActual::Layers _get_SERVERINFO();
    // Set static field: static public MagicalActual.Layers SERVERINFO
    static void _set_SERVERINFO(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers IMPASSABLEWALL
    static constexpr const int IMPASSABLEWALL = 24;
    // Get static field: static public MagicalActual.Layers IMPASSABLEWALL
    static ::MagicalActual::Layers _get_IMPASSABLEWALL();
    // Set static field: static public MagicalActual.Layers IMPASSABLEWALL
    static void _set_IMPASSABLEWALL(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers SMALLDETAILS
    static constexpr const int SMALLDETAILS = 25;
    // Get static field: static public MagicalActual.Layers SMALLDETAILS
    static ::MagicalActual::Layers _get_SMALLDETAILS();
    // Set static field: static public MagicalActual.Layers SMALLDETAILS
    static void _set_SMALLDETAILS(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers LARGEDETAILS
    static constexpr const int LARGEDETAILS = 26;
    // Get static field: static public MagicalActual.Layers LARGEDETAILS
    static ::MagicalActual::Layers _get_LARGEDETAILS();
    // Set static field: static public MagicalActual.Layers LARGEDETAILS
    static void _set_LARGEDETAILS(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers WARRIORCOLLIDER
    static constexpr const int WARRIORCOLLIDER = 28;
    // Get static field: static public MagicalActual.Layers WARRIORCOLLIDER
    static ::MagicalActual::Layers _get_WARRIORCOLLIDER();
    // Set static field: static public MagicalActual.Layers WARRIORCOLLIDER
    static void _set_WARRIORCOLLIDER(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers TERRAIN
    static constexpr const int TERRAIN = 29;
    // Get static field: static public MagicalActual.Layers TERRAIN
    static ::MagicalActual::Layers _get_TERRAIN();
    // Set static field: static public MagicalActual.Layers TERRAIN
    static void _set_TERRAIN(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers UIONTOP
    static constexpr const int UIONTOP = 23;
    // Get static field: static public MagicalActual.Layers UIONTOP
    static ::MagicalActual::Layers _get_UIONTOP();
    // Set static field: static public MagicalActual.Layers UIONTOP
    static void _set_UIONTOP(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers PET
    static constexpr const int PET = 30;
    // Get static field: static public MagicalActual.Layers PET
    static ::MagicalActual::Layers _get_PET();
    // Set static field: static public MagicalActual.Layers PET
    static void _set_PET(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers UI
    static constexpr const int UI = 5;
    // Get static field: static public MagicalActual.Layers UI
    static ::MagicalActual::Layers _get_UI();
    // Set static field: static public MagicalActual.Layers UI
    static void _set_UI(::MagicalActual::Layers value);
    // static field const value: static public MagicalActual.Layers AMBIENTLIGHT
    static constexpr const int AMBIENTLIGHT = 31;
    // Get static field: static public MagicalActual.Layers AMBIENTLIGHT
    static ::MagicalActual::Layers _get_AMBIENTLIGHT();
    // Set static field: static public MagicalActual.Layers AMBIENTLIGHT
    static void _set_AMBIENTLIGHT(::MagicalActual::Layers value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MagicalActual.Layers
  #pragma pack(pop)
  static check_size<sizeof(Layers), 0 + sizeof(int)> __MagicalActual_LayersSizeCheck;
  static_assert(sizeof(Layers) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
