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
// Type namespace: Blaze
namespace Blaze {
  // Forward declaring type: SubScanPixel
  struct SubScanPixel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Blaze::SubScanPixel, "Blaze", "SubScanPixel");
// Type namespace: Blaze
namespace Blaze {
  // Size: 0x3
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Blaze.SubScanPixel
  // [TokenAttribute] Offset: FFFFFFFF
  struct SubScanPixel/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt16 X
    // Size: 0x2
    // Offset: 0x0
    uint16_t X;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Byte Fill
    // Size: 0x1
    // Offset: 0x2
    uint8_t Fill;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: SubScanPixel
    constexpr SubScanPixel(uint16_t X_ = {}, uint8_t Fill_ = {}) noexcept : X{X_}, Fill{Fill_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt16 X
    [[deprecated("Use field access instead!")]] uint16_t& dyn_X();
    // Get instance field reference: public System.Byte Fill
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Fill();
    // public System.Void .ctor(System.UInt16 x, System.Byte fill)
    // Offset: 0xB9359C
    // ABORTED: conflicts with another method.  SubScanPixel(uint16_t x, uint8_t fill);
  }; // Blaze.SubScanPixel
  #pragma pack(pop)
  static check_size<sizeof(SubScanPixel), 2 + sizeof(uint8_t)> __Blaze_SubScanPixelSizeCheck;
  static_assert(sizeof(SubScanPixel) == 0x3);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Blaze::SubScanPixel::SubScanPixel
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
