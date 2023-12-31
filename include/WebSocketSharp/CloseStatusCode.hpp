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
  // Forward declaring type: CloseStatusCode
  struct CloseStatusCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::CloseStatusCode, "WebSocketSharp", "CloseStatusCode");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.CloseStatusCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct CloseStatusCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt16 value__
    // Size: 0x2
    // Offset: 0x0
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: CloseStatusCode
    constexpr CloseStatusCode(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // static field const value: static public WebSocketSharp.CloseStatusCode Normal
    static constexpr const uint16_t Normal = 1000u;
    // Get static field: static public WebSocketSharp.CloseStatusCode Normal
    static ::WebSocketSharp::CloseStatusCode _get_Normal();
    // Set static field: static public WebSocketSharp.CloseStatusCode Normal
    static void _set_Normal(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode Away
    static constexpr const uint16_t Away = 1001u;
    // Get static field: static public WebSocketSharp.CloseStatusCode Away
    static ::WebSocketSharp::CloseStatusCode _get_Away();
    // Set static field: static public WebSocketSharp.CloseStatusCode Away
    static void _set_Away(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode ProtocolError
    static constexpr const uint16_t ProtocolError = 1002u;
    // Get static field: static public WebSocketSharp.CloseStatusCode ProtocolError
    static ::WebSocketSharp::CloseStatusCode _get_ProtocolError();
    // Set static field: static public WebSocketSharp.CloseStatusCode ProtocolError
    static void _set_ProtocolError(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode UnsupportedData
    static constexpr const uint16_t UnsupportedData = 1003u;
    // Get static field: static public WebSocketSharp.CloseStatusCode UnsupportedData
    static ::WebSocketSharp::CloseStatusCode _get_UnsupportedData();
    // Set static field: static public WebSocketSharp.CloseStatusCode UnsupportedData
    static void _set_UnsupportedData(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode Undefined
    static constexpr const uint16_t Undefined = 1004u;
    // Get static field: static public WebSocketSharp.CloseStatusCode Undefined
    static ::WebSocketSharp::CloseStatusCode _get_Undefined();
    // Set static field: static public WebSocketSharp.CloseStatusCode Undefined
    static void _set_Undefined(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode NoStatus
    static constexpr const uint16_t NoStatus = 1005u;
    // Get static field: static public WebSocketSharp.CloseStatusCode NoStatus
    static ::WebSocketSharp::CloseStatusCode _get_NoStatus();
    // Set static field: static public WebSocketSharp.CloseStatusCode NoStatus
    static void _set_NoStatus(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode Abnormal
    static constexpr const uint16_t Abnormal = 1006u;
    // Get static field: static public WebSocketSharp.CloseStatusCode Abnormal
    static ::WebSocketSharp::CloseStatusCode _get_Abnormal();
    // Set static field: static public WebSocketSharp.CloseStatusCode Abnormal
    static void _set_Abnormal(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode InvalidData
    static constexpr const uint16_t InvalidData = 1007u;
    // Get static field: static public WebSocketSharp.CloseStatusCode InvalidData
    static ::WebSocketSharp::CloseStatusCode _get_InvalidData();
    // Set static field: static public WebSocketSharp.CloseStatusCode InvalidData
    static void _set_InvalidData(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode PolicyViolation
    static constexpr const uint16_t PolicyViolation = 1008u;
    // Get static field: static public WebSocketSharp.CloseStatusCode PolicyViolation
    static ::WebSocketSharp::CloseStatusCode _get_PolicyViolation();
    // Set static field: static public WebSocketSharp.CloseStatusCode PolicyViolation
    static void _set_PolicyViolation(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode TooBig
    static constexpr const uint16_t TooBig = 1009u;
    // Get static field: static public WebSocketSharp.CloseStatusCode TooBig
    static ::WebSocketSharp::CloseStatusCode _get_TooBig();
    // Set static field: static public WebSocketSharp.CloseStatusCode TooBig
    static void _set_TooBig(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode MandatoryExtension
    static constexpr const uint16_t MandatoryExtension = 1010u;
    // Get static field: static public WebSocketSharp.CloseStatusCode MandatoryExtension
    static ::WebSocketSharp::CloseStatusCode _get_MandatoryExtension();
    // Set static field: static public WebSocketSharp.CloseStatusCode MandatoryExtension
    static void _set_MandatoryExtension(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode ServerError
    static constexpr const uint16_t ServerError = 1011u;
    // Get static field: static public WebSocketSharp.CloseStatusCode ServerError
    static ::WebSocketSharp::CloseStatusCode _get_ServerError();
    // Set static field: static public WebSocketSharp.CloseStatusCode ServerError
    static void _set_ServerError(::WebSocketSharp::CloseStatusCode value);
    // static field const value: static public WebSocketSharp.CloseStatusCode TlsHandshakeFailure
    static constexpr const uint16_t TlsHandshakeFailure = 1015u;
    // Get static field: static public WebSocketSharp.CloseStatusCode TlsHandshakeFailure
    static ::WebSocketSharp::CloseStatusCode _get_TlsHandshakeFailure();
    // Set static field: static public WebSocketSharp.CloseStatusCode TlsHandshakeFailure
    static void _set_TlsHandshakeFailure(::WebSocketSharp::CloseStatusCode value);
    // Get instance field reference: public System.UInt16 value__
    [[deprecated("Use field access instead!")]] uint16_t& dyn_value__();
  }; // WebSocketSharp.CloseStatusCode
  #pragma pack(pop)
  static check_size<sizeof(CloseStatusCode), 0 + sizeof(uint16_t)> __WebSocketSharp_CloseStatusCodeSizeCheck;
  static_assert(sizeof(CloseStatusCode) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
