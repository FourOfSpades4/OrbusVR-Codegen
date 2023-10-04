// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Avatar.CAPI
#include "Oculus/Avatar/CAPI.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Avatar::CAPI::Result, "Oculus.Avatar", "CAPI/Result");
// Type namespace: Oculus.Avatar
namespace Oculus::Avatar {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Avatar.CAPI/Result
  // [TokenAttribute] Offset: FFFFFFFF
  struct CAPI::Result/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Result
    constexpr Result(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Avatar.CAPI/Result Success
    static constexpr const int Success = 0;
    // Get static field: static public Oculus.Avatar.CAPI/Result Success
    static ::Oculus::Avatar::CAPI::Result _get_Success();
    // Set static field: static public Oculus.Avatar.CAPI/Result Success
    static void _set_Success(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure
    static constexpr const int Failure = -1000;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure
    static ::Oculus::Avatar::CAPI::Result _get_Failure();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure
    static void _set_Failure(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_InvalidParameter
    static constexpr const int Failure_InvalidParameter = -1001;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_InvalidParameter
    static ::Oculus::Avatar::CAPI::Result _get_Failure_InvalidParameter();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_InvalidParameter
    static void _set_Failure_InvalidParameter(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_NotInitialized
    static constexpr const int Failure_NotInitialized = -1002;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_NotInitialized
    static ::Oculus::Avatar::CAPI::Result _get_Failure_NotInitialized();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_NotInitialized
    static void _set_Failure_NotInitialized(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_InvalidOperation
    static constexpr const int Failure_InvalidOperation = -1003;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_InvalidOperation
    static ::Oculus::Avatar::CAPI::Result _get_Failure_InvalidOperation();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_InvalidOperation
    static void _set_Failure_InvalidOperation(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_Unsupported
    static constexpr const int Failure_Unsupported = -1004;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_Unsupported
    static ::Oculus::Avatar::CAPI::Result _get_Failure_Unsupported();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_Unsupported
    static void _set_Failure_Unsupported(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_NotYetImplemented
    static constexpr const int Failure_NotYetImplemented = -1005;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_NotYetImplemented
    static ::Oculus::Avatar::CAPI::Result _get_Failure_NotYetImplemented();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_NotYetImplemented
    static void _set_Failure_NotYetImplemented(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_OperationFailed
    static constexpr const int Failure_OperationFailed = -1006;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_OperationFailed
    static ::Oculus::Avatar::CAPI::Result _get_Failure_OperationFailed();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_OperationFailed
    static void _set_Failure_OperationFailed(::Oculus::Avatar::CAPI::Result value);
    // static field const value: static public Oculus.Avatar.CAPI/Result Failure_InsufficientSize
    static constexpr const int Failure_InsufficientSize = -1007;
    // Get static field: static public Oculus.Avatar.CAPI/Result Failure_InsufficientSize
    static ::Oculus::Avatar::CAPI::Result _get_Failure_InsufficientSize();
    // Set static field: static public Oculus.Avatar.CAPI/Result Failure_InsufficientSize
    static void _set_Failure_InsufficientSize(::Oculus::Avatar::CAPI::Result value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Avatar.CAPI/Result
  #pragma pack(pop)
  static check_size<sizeof(CAPI::Result), 0 + sizeof(int)> __Oculus_Avatar_CAPI_ResultSizeCheck;
  static_assert(sizeof(CAPI::Result) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"