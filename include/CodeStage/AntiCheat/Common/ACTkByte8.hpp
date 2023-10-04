// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: CodeStage.AntiCheat.Common
namespace CodeStage::AntiCheat::Common {
  // Forward declaring type: ACTkByte8
  struct ACTkByte8;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::Common::ACTkByte8, "CodeStage.AntiCheat.Common", "ACTkByte8");
// Type namespace: CodeStage.AntiCheat.Common
namespace CodeStage::AntiCheat::Common {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.Common.ACTkByte8
  // [TokenAttribute] Offset: FFFFFFFF
  struct ACTkByte8/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte b1
    // Size: 0x1
    // Offset: 0x0
    uint8_t b1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b2
    // Size: 0x1
    // Offset: 0x1
    uint8_t b2;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b3
    // Size: 0x1
    // Offset: 0x2
    uint8_t b3;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b4
    // Size: 0x1
    // Offset: 0x3
    uint8_t b4;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b5
    // Size: 0x1
    // Offset: 0x4
    uint8_t b5;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b6
    // Size: 0x1
    // Offset: 0x5
    uint8_t b6;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b7
    // Size: 0x1
    // Offset: 0x6
    uint8_t b7;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b8
    // Size: 0x1
    // Offset: 0x7
    uint8_t b8;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ACTkByte8
    constexpr ACTkByte8(uint8_t b1_ = {}, uint8_t b2_ = {}, uint8_t b3_ = {}, uint8_t b4_ = {}, uint8_t b5_ = {}, uint8_t b6_ = {}, uint8_t b7_ = {}, uint8_t b8_ = {}) noexcept : b1{b1_}, b2{b2_}, b3{b3_}, b4{b4_}, b5{b5_}, b6{b6_}, b7{b7_}, b8{b8_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte b1
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b1();
    // Get instance field reference: public System.Byte b2
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b2();
    // Get instance field reference: public System.Byte b3
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b3();
    // Get instance field reference: public System.Byte b4
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b4();
    // Get instance field reference: public System.Byte b5
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b5();
    // Get instance field reference: public System.Byte b6
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b6();
    // Get instance field reference: public System.Byte b7
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b7();
    // Get instance field reference: public System.Byte b8
    [[deprecated("Use field access instead!")]] uint8_t& dyn_b8();
  }; // CodeStage.AntiCheat.Common.ACTkByte8
  #pragma pack(pop)
  static check_size<sizeof(ACTkByte8), 7 + sizeof(uint8_t)> __CodeStage_AntiCheat_Common_ACTkByte8SizeCheck;
  static_assert(sizeof(ACTkByte8) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
