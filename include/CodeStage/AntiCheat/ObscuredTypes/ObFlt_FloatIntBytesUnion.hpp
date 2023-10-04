// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CodeStage.AntiCheat.ObscuredTypes.ObFlt
#include "CodeStage/AntiCheat/ObscuredTypes/ObFlt.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: CodeStage.AntiCheat.Common.ACTkByte4
#include "CodeStage/AntiCheat/Common/ACTkByte4.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObFlt::FloatIntBytesUnion, "CodeStage.AntiCheat.ObscuredTypes", "ObFlt/FloatIntBytesUnion");
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObFlt/FloatIntBytesUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObFlt::FloatIntBytesUnion/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single f
    // Size: 0x4
    // Offset: 0x0
    float f;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x0
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public CodeStage.AntiCheat.Common.ACTkByte4 b4
    // Size: 0x4
    // Offset: 0x0
    ::CodeStage::AntiCheat::Common::ACTkByte4 b4;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::Common::ACTkByte4) == 0x4);
    public:
    // Creating value type constructor for type: FloatIntBytesUnion
    constexpr FloatIntBytesUnion(float f_ = {}, int i_ = {}, ::CodeStage::AntiCheat::Common::ACTkByte4 b4_ = {}) noexcept : f{f_}, i{i_}, b4{b4_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single f
    [[deprecated("Use field access instead!")]] float& dyn_f();
    // Get instance field reference: public System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // Get instance field reference: public CodeStage.AntiCheat.Common.ACTkByte4 b4
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::Common::ACTkByte4& dyn_b4();
  }; // CodeStage.AntiCheat.ObscuredTypes.ObFlt/FloatIntBytesUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
