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
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: Opcode
  struct Opcode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::Opcode, "WebSocketSharp", "Opcode");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.Opcode
  // [TokenAttribute] Offset: FFFFFFFF
  struct Opcode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: Opcode
    constexpr Opcode(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public WebSocketSharp.Opcode Cont
    static constexpr const uint8_t Cont = 0u;
    // Get static field: static public WebSocketSharp.Opcode Cont
    static ::WebSocketSharp::Opcode _get_Cont();
    // Set static field: static public WebSocketSharp.Opcode Cont
    static void _set_Cont(::WebSocketSharp::Opcode value);
    // static field const value: static public WebSocketSharp.Opcode Text
    static constexpr const uint8_t Text = 1u;
    // Get static field: static public WebSocketSharp.Opcode Text
    static ::WebSocketSharp::Opcode _get_Text();
    // Set static field: static public WebSocketSharp.Opcode Text
    static void _set_Text(::WebSocketSharp::Opcode value);
    // static field const value: static public WebSocketSharp.Opcode Binary
    static constexpr const uint8_t Binary = 2u;
    // Get static field: static public WebSocketSharp.Opcode Binary
    static ::WebSocketSharp::Opcode _get_Binary();
    // Set static field: static public WebSocketSharp.Opcode Binary
    static void _set_Binary(::WebSocketSharp::Opcode value);
    // static field const value: static public WebSocketSharp.Opcode Close
    static constexpr const uint8_t Close = 8u;
    // Get static field: static public WebSocketSharp.Opcode Close
    static ::WebSocketSharp::Opcode _get_Close();
    // Set static field: static public WebSocketSharp.Opcode Close
    static void _set_Close(::WebSocketSharp::Opcode value);
    // static field const value: static public WebSocketSharp.Opcode Ping
    static constexpr const uint8_t Ping = 9u;
    // Get static field: static public WebSocketSharp.Opcode Ping
    static ::WebSocketSharp::Opcode _get_Ping();
    // Set static field: static public WebSocketSharp.Opcode Ping
    static void _set_Ping(::WebSocketSharp::Opcode value);
    // static field const value: static public WebSocketSharp.Opcode Pong
    static constexpr const uint8_t Pong = 10u;
    // Get static field: static public WebSocketSharp.Opcode Pong
    static ::WebSocketSharp::Opcode _get_Pong();
    // Set static field: static public WebSocketSharp.Opcode Pong
    static void _set_Pong(::WebSocketSharp::Opcode value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // WebSocketSharp.Opcode
  #pragma pack(pop)
  static check_size<sizeof(Opcode), 0 + sizeof(uint8_t)> __WebSocketSharp_OpcodeSizeCheck;
  static_assert(sizeof(Opcode) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
