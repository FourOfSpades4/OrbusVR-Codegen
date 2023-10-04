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
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFProxyType
  struct CFProxyType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFProxyType, "Mono.Net", "CFProxyType");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFProxyType
  // [TokenAttribute] Offset: FFFFFFFF
  struct CFProxyType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CFProxyType
    constexpr CFProxyType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Net.CFProxyType None
    static constexpr const int None = 0;
    // Get static field: static public Mono.Net.CFProxyType None
    static ::Mono::Net::CFProxyType _get_None();
    // Set static field: static public Mono.Net.CFProxyType None
    static void _set_None(::Mono::Net::CFProxyType value);
    // static field const value: static public Mono.Net.CFProxyType AutoConfigurationUrl
    static constexpr const int AutoConfigurationUrl = 1;
    // Get static field: static public Mono.Net.CFProxyType AutoConfigurationUrl
    static ::Mono::Net::CFProxyType _get_AutoConfigurationUrl();
    // Set static field: static public Mono.Net.CFProxyType AutoConfigurationUrl
    static void _set_AutoConfigurationUrl(::Mono::Net::CFProxyType value);
    // static field const value: static public Mono.Net.CFProxyType AutoConfigurationJavaScript
    static constexpr const int AutoConfigurationJavaScript = 2;
    // Get static field: static public Mono.Net.CFProxyType AutoConfigurationJavaScript
    static ::Mono::Net::CFProxyType _get_AutoConfigurationJavaScript();
    // Set static field: static public Mono.Net.CFProxyType AutoConfigurationJavaScript
    static void _set_AutoConfigurationJavaScript(::Mono::Net::CFProxyType value);
    // static field const value: static public Mono.Net.CFProxyType FTP
    static constexpr const int FTP = 3;
    // Get static field: static public Mono.Net.CFProxyType FTP
    static ::Mono::Net::CFProxyType _get_FTP();
    // Set static field: static public Mono.Net.CFProxyType FTP
    static void _set_FTP(::Mono::Net::CFProxyType value);
    // static field const value: static public Mono.Net.CFProxyType HTTP
    static constexpr const int HTTP = 4;
    // Get static field: static public Mono.Net.CFProxyType HTTP
    static ::Mono::Net::CFProxyType _get_HTTP();
    // Set static field: static public Mono.Net.CFProxyType HTTP
    static void _set_HTTP(::Mono::Net::CFProxyType value);
    // static field const value: static public Mono.Net.CFProxyType HTTPS
    static constexpr const int HTTPS = 5;
    // Get static field: static public Mono.Net.CFProxyType HTTPS
    static ::Mono::Net::CFProxyType _get_HTTPS();
    // Set static field: static public Mono.Net.CFProxyType HTTPS
    static void _set_HTTPS(::Mono::Net::CFProxyType value);
    // static field const value: static public Mono.Net.CFProxyType SOCKS
    static constexpr const int SOCKS = 6;
    // Get static field: static public Mono.Net.CFProxyType SOCKS
    static ::Mono::Net::CFProxyType _get_SOCKS();
    // Set static field: static public Mono.Net.CFProxyType SOCKS
    static void _set_SOCKS(::Mono::Net::CFProxyType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Mono.Net.CFProxyType
  #pragma pack(pop)
  static check_size<sizeof(CFProxyType), 0 + sizeof(int)> __Mono_Net_CFProxyTypeSizeCheck;
  static_assert(sizeof(CFProxyType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"