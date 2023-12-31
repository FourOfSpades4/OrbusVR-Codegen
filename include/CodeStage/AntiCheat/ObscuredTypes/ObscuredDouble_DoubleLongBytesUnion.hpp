// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble
#include "CodeStage/AntiCheat/ObscuredTypes/ObscuredDouble.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: CodeStage.AntiCheat.Common.ACTkByte8
#include "CodeStage/AntiCheat/Common/ACTkByte8.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::DoubleLongBytesUnion, "CodeStage.AntiCheat.ObscuredTypes", "ObscuredDouble/DoubleLongBytesUnion");
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble/DoubleLongBytesUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObscuredDouble::DoubleLongBytesUnion/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double d
    // Size: 0x8
    // Offset: 0x0
    double d;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int64 l
    // Size: 0x8
    // Offset: 0x0
    int64_t l;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public CodeStage.AntiCheat.Common.ACTkByte8 b8
    // Size: 0x8
    // Offset: 0x0
    ::CodeStage::AntiCheat::Common::ACTkByte8 b8;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::Common::ACTkByte8) == 0x8);
    public:
    // Creating value type constructor for type: DoubleLongBytesUnion
    constexpr DoubleLongBytesUnion(double d_ = {}, int64_t l_ = {}, ::CodeStage::AntiCheat::Common::ACTkByte8 b8_ = {}) noexcept : d{d_}, l{l_}, b8{b8_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double d
    [[deprecated("Use field access instead!")]] double& dyn_d();
    // Get instance field reference: public System.Int64 l
    [[deprecated("Use field access instead!")]] int64_t& dyn_l();
    // Get instance field reference: public CodeStage.AntiCheat.Common.ACTkByte8 b8
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::Common::ACTkByte8& dyn_b8();
  }; // CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble/DoubleLongBytesUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
