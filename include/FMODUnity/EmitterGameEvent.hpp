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
// Type namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: EmitterGameEvent
  struct EmitterGameEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMODUnity::EmitterGameEvent, "FMODUnity", "EmitterGameEvent");
// Type namespace: FMODUnity
namespace FMODUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMODUnity.EmitterGameEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct EmitterGameEvent/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EmitterGameEvent
    constexpr EmitterGameEvent(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMODUnity.EmitterGameEvent None
    static constexpr const int None = 0;
    // Get static field: static public FMODUnity.EmitterGameEvent None
    static ::FMODUnity::EmitterGameEvent _get_None();
    // Set static field: static public FMODUnity.EmitterGameEvent None
    static void _set_None(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent ObjectStart
    static constexpr const int ObjectStart = 1;
    // Get static field: static public FMODUnity.EmitterGameEvent ObjectStart
    static ::FMODUnity::EmitterGameEvent _get_ObjectStart();
    // Set static field: static public FMODUnity.EmitterGameEvent ObjectStart
    static void _set_ObjectStart(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent ObjectDestroy
    static constexpr const int ObjectDestroy = 2;
    // Get static field: static public FMODUnity.EmitterGameEvent ObjectDestroy
    static ::FMODUnity::EmitterGameEvent _get_ObjectDestroy();
    // Set static field: static public FMODUnity.EmitterGameEvent ObjectDestroy
    static void _set_ObjectDestroy(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent TriggerEnter
    static constexpr const int TriggerEnter = 3;
    // Get static field: static public FMODUnity.EmitterGameEvent TriggerEnter
    static ::FMODUnity::EmitterGameEvent _get_TriggerEnter();
    // Set static field: static public FMODUnity.EmitterGameEvent TriggerEnter
    static void _set_TriggerEnter(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent TriggerExit
    static constexpr const int TriggerExit = 4;
    // Get static field: static public FMODUnity.EmitterGameEvent TriggerExit
    static ::FMODUnity::EmitterGameEvent _get_TriggerExit();
    // Set static field: static public FMODUnity.EmitterGameEvent TriggerExit
    static void _set_TriggerExit(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent TriggerEnter2D
    static constexpr const int TriggerEnter2D = 5;
    // Get static field: static public FMODUnity.EmitterGameEvent TriggerEnter2D
    static ::FMODUnity::EmitterGameEvent _get_TriggerEnter2D();
    // Set static field: static public FMODUnity.EmitterGameEvent TriggerEnter2D
    static void _set_TriggerEnter2D(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent TriggerExit2D
    static constexpr const int TriggerExit2D = 6;
    // Get static field: static public FMODUnity.EmitterGameEvent TriggerExit2D
    static ::FMODUnity::EmitterGameEvent _get_TriggerExit2D();
    // Set static field: static public FMODUnity.EmitterGameEvent TriggerExit2D
    static void _set_TriggerExit2D(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent CollisionEnter
    static constexpr const int CollisionEnter = 7;
    // Get static field: static public FMODUnity.EmitterGameEvent CollisionEnter
    static ::FMODUnity::EmitterGameEvent _get_CollisionEnter();
    // Set static field: static public FMODUnity.EmitterGameEvent CollisionEnter
    static void _set_CollisionEnter(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent CollisionExit
    static constexpr const int CollisionExit = 8;
    // Get static field: static public FMODUnity.EmitterGameEvent CollisionExit
    static ::FMODUnity::EmitterGameEvent _get_CollisionExit();
    // Set static field: static public FMODUnity.EmitterGameEvent CollisionExit
    static void _set_CollisionExit(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent CollisionEnter2D
    static constexpr const int CollisionEnter2D = 9;
    // Get static field: static public FMODUnity.EmitterGameEvent CollisionEnter2D
    static ::FMODUnity::EmitterGameEvent _get_CollisionEnter2D();
    // Set static field: static public FMODUnity.EmitterGameEvent CollisionEnter2D
    static void _set_CollisionEnter2D(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent CollisionExit2D
    static constexpr const int CollisionExit2D = 10;
    // Get static field: static public FMODUnity.EmitterGameEvent CollisionExit2D
    static ::FMODUnity::EmitterGameEvent _get_CollisionExit2D();
    // Set static field: static public FMODUnity.EmitterGameEvent CollisionExit2D
    static void _set_CollisionExit2D(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent ObjectEnable
    static constexpr const int ObjectEnable = 11;
    // Get static field: static public FMODUnity.EmitterGameEvent ObjectEnable
    static ::FMODUnity::EmitterGameEvent _get_ObjectEnable();
    // Set static field: static public FMODUnity.EmitterGameEvent ObjectEnable
    static void _set_ObjectEnable(::FMODUnity::EmitterGameEvent value);
    // static field const value: static public FMODUnity.EmitterGameEvent ObjectDisable
    static constexpr const int ObjectDisable = 12;
    // Get static field: static public FMODUnity.EmitterGameEvent ObjectDisable
    static ::FMODUnity::EmitterGameEvent _get_ObjectDisable();
    // Set static field: static public FMODUnity.EmitterGameEvent ObjectDisable
    static void _set_ObjectDisable(::FMODUnity::EmitterGameEvent value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMODUnity.EmitterGameEvent
  #pragma pack(pop)
  static check_size<sizeof(EmitterGameEvent), 0 + sizeof(int)> __FMODUnity_EmitterGameEventSizeCheck;
  static_assert(sizeof(EmitterGameEvent) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
