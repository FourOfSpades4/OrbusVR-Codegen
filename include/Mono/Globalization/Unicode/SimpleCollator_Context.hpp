// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Globalization.Unicode.SimpleCollator
#include "Mono/Globalization/Unicode/SimpleCollator.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator::Context, "Mono.Globalization.Unicode", "SimpleCollator/Context");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator/Context
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimpleCollator::Context/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Globalization.CompareOptions Option
    // Size: 0x4
    // Offset: 0x0
    ::System::Globalization::CompareOptions Option;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareOptions) == 0x4);
    // Padding between fields: Option and: NeverMatchFlags
    char __padding0[0x4] = {};
    // public readonly System.Byte* NeverMatchFlags
    // Size: 0x8
    // Offset: 0x8
    uint8_t* NeverMatchFlags;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // public readonly System.Byte* AlwaysMatchFlags
    // Size: 0x8
    // Offset: 0x10
    uint8_t* AlwaysMatchFlags;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // public System.Byte* Buffer1
    // Size: 0x8
    // Offset: 0x18
    uint8_t* Buffer1;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // public System.Byte* Buffer2
    // Size: 0x8
    // Offset: 0x20
    uint8_t* Buffer2;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // public System.Int32 PrevCode
    // Size: 0x4
    // Offset: 0x28
    int PrevCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PrevCode and: PrevSortKey
    char __padding5[0x4] = {};
    // public System.Byte* PrevSortKey
    // Size: 0x8
    // Offset: 0x30
    uint8_t* PrevSortKey;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    public:
    // Creating value type constructor for type: Context
    constexpr Context(::System::Globalization::CompareOptions Option_ = {}, uint8_t* NeverMatchFlags_ = {}, uint8_t* AlwaysMatchFlags_ = {}, uint8_t* Buffer1_ = {}, uint8_t* Buffer2_ = {}, int PrevCode_ = {}, uint8_t* PrevSortKey_ = {}) noexcept : Option{Option_}, NeverMatchFlags{NeverMatchFlags_}, AlwaysMatchFlags{AlwaysMatchFlags_}, Buffer1{Buffer1_}, Buffer2{Buffer2_}, PrevCode{PrevCode_}, PrevSortKey{PrevSortKey_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Globalization.CompareOptions Option
    [[deprecated("Use field access instead!")]] ::System::Globalization::CompareOptions& dyn_Option();
    // Get instance field reference: public readonly System.Byte* NeverMatchFlags
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_NeverMatchFlags();
    // Get instance field reference: public readonly System.Byte* AlwaysMatchFlags
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_AlwaysMatchFlags();
    // Get instance field reference: public System.Byte* Buffer1
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_Buffer1();
    // Get instance field reference: public System.Byte* Buffer2
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_Buffer2();
    // Get instance field reference: public System.Int32 PrevCode
    [[deprecated("Use field access instead!")]] int& dyn_PrevCode();
    // Get instance field reference: public System.Byte* PrevSortKey
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_PrevSortKey();
    // public System.Void .ctor(System.Globalization.CompareOptions opt, System.Byte* alwaysMatchFlags, System.Byte* neverMatchFlags, System.Byte* buffer1, System.Byte* buffer2, System.Byte* prev1)
    // Offset: 0xBAC384
    Context(::System::Globalization::CompareOptions opt, uint8_t* alwaysMatchFlags, uint8_t* neverMatchFlags, uint8_t* buffer1, uint8_t* buffer2, uint8_t* prev1);
  }; // Mono.Globalization.Unicode.SimpleCollator/Context
  #pragma pack(pop)
  static check_size<sizeof(SimpleCollator::Context), 48 + sizeof(uint8_t*)> __Mono_Globalization_Unicode_SimpleCollator_ContextSizeCheck;
  static_assert(sizeof(SimpleCollator::Context) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SimpleCollator::Context::Context
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
