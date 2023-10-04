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
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Forward declaring type: LogType
  struct LogType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AmplifyBloom::LogType, "AmplifyBloom", "LogType");
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyBloom.LogType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LogType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LogType
    constexpr LogType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AmplifyBloom.LogType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public AmplifyBloom.LogType Normal
    static ::AmplifyBloom::LogType _get_Normal();
    // Set static field: static public AmplifyBloom.LogType Normal
    static void _set_Normal(::AmplifyBloom::LogType value);
    // static field const value: static public AmplifyBloom.LogType Warning
    static constexpr const int Warning = 1;
    // Get static field: static public AmplifyBloom.LogType Warning
    static ::AmplifyBloom::LogType _get_Warning();
    // Set static field: static public AmplifyBloom.LogType Warning
    static void _set_Warning(::AmplifyBloom::LogType value);
    // static field const value: static public AmplifyBloom.LogType Error
    static constexpr const int Error = 2;
    // Get static field: static public AmplifyBloom.LogType Error
    static ::AmplifyBloom::LogType _get_Error();
    // Set static field: static public AmplifyBloom.LogType Error
    static void _set_Error(::AmplifyBloom::LogType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AmplifyBloom.LogType
  #pragma pack(pop)
  static check_size<sizeof(LogType), 0 + sizeof(int)> __AmplifyBloom_LogTypeSizeCheck;
  static_assert(sizeof(LogType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"