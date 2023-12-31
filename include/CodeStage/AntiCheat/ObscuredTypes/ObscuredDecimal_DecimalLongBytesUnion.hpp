// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CodeStage.AntiCheat.ObscuredTypes.ObscuredDecimal
#include "CodeStage/AntiCheat/ObscuredTypes/ObscuredDecimal.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Including type: CodeStage.AntiCheat.Common.ACTkByte16
#include "CodeStage/AntiCheat/Common/ACTkByte16.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::DecimalLongBytesUnion, "CodeStage.AntiCheat.ObscuredTypes", "ObscuredDecimal/DecimalLongBytesUnion");
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObscuredDecimal/DecimalLongBytesUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObscuredDecimal::DecimalLongBytesUnion/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Decimal d
    // Size: 0x10
    // Offset: 0x0
    ::System::Decimal d;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    // public System.Int64 l1
    // Size: 0x8
    // Offset: 0x0
    int64_t l1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 l2
    // Size: 0x8
    // Offset: 0x8
    int64_t l2;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public CodeStage.AntiCheat.Common.ACTkByte16 b16
    // Size: 0x10
    // Offset: 0x0
    ::CodeStage::AntiCheat::Common::ACTkByte16 b16;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::Common::ACTkByte16) == 0x10);
    public:
    // Creating value type constructor for type: DecimalLongBytesUnion
    constexpr DecimalLongBytesUnion(::System::Decimal d_ = {}, int64_t l1_ = {}, int64_t l2_ = {}, ::CodeStage::AntiCheat::Common::ACTkByte16 b16_ = {}) noexcept : d{d_}, l1{l1_}, l2{l2_}, b16{b16_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Decimal d
    [[deprecated("Use field access instead!")]] ::System::Decimal& dyn_d();
    // Get instance field reference: public System.Int64 l1
    [[deprecated("Use field access instead!")]] int64_t& dyn_l1();
    // Get instance field reference: public System.Int64 l2
    [[deprecated("Use field access instead!")]] int64_t& dyn_l2();
    // Get instance field reference: public CodeStage.AntiCheat.Common.ACTkByte16 b16
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::Common::ACTkByte16& dyn_b16();
  }; // CodeStage.AntiCheat.ObscuredTypes.ObscuredDecimal/DecimalLongBytesUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
