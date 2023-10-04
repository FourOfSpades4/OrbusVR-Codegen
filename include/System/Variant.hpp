// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.BRECORD
#include "System/BRECORD.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: Variant
  struct Variant;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Variant, "System", "Variant");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Variant
  // [TokenAttribute] Offset: FFFFFFFF
  struct Variant/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int16 vt
    // Size: 0x2
    // Offset: 0x0
    int16_t vt;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.UInt16 wReserved1
    // Size: 0x2
    // Offset: 0x2
    uint16_t wReserved1;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 wReserved2
    // Size: 0x2
    // Offset: 0x4
    uint16_t wReserved2;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 wReserved3
    // Size: 0x2
    // Offset: 0x6
    uint16_t wReserved3;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating union for fields at offset: 0x8
    union {
      // public System.Int64 llVal
      // Size: 0x8
      // Offset: 0x8
      int64_t llVal;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // public System.Int32 lVal
      // Size: 0x4
      // Offset: 0x8
      int lVal;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Byte bVal
      // Size: 0x1
      // Offset: 0x8
      uint8_t bVal;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // public System.Int16 iVal
      // Size: 0x2
      // Offset: 0x8
      int16_t iVal;
      // Field size check
      static_assert(sizeof(int16_t) == 0x2);
      // public System.Single fltVal
      // Size: 0x4
      // Offset: 0x8
      float fltVal;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Double dblVal
      // Size: 0x8
      // Offset: 0x8
      double dblVal;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      // public System.Int16 boolVal
      // Size: 0x2
      // Offset: 0x8
      int16_t boolVal;
      // Field size check
      static_assert(sizeof(int16_t) == 0x2);
      // public System.IntPtr bstrVal
      // Size: 0x8
      // Offset: 0x8
      ::System::IntPtr bstrVal;
      // Field size check
      static_assert(sizeof(::System::IntPtr) == 0x8);
      // public System.SByte cVal
      // Size: 0x1
      // Offset: 0x8
      int8_t cVal;
      // Field size check
      static_assert(sizeof(int8_t) == 0x1);
      // public System.UInt16 uiVal
      // Size: 0x2
      // Offset: 0x8
      uint16_t uiVal;
      // Field size check
      static_assert(sizeof(uint16_t) == 0x2);
      // public System.UInt32 ulVal
      // Size: 0x4
      // Offset: 0x8
      uint ulVal;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // public System.UInt64 ullVal
      // Size: 0x8
      // Offset: 0x8
      uint64_t ullVal;
      // Field size check
      static_assert(sizeof(uint64_t) == 0x8);
      // public System.Int32 intVal
      // Size: 0x4
      // Offset: 0x8
      int intVal;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.UInt32 uintVal
      // Size: 0x4
      // Offset: 0x8
      uint uintVal;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // public System.IntPtr pdispVal
      // Size: 0x8
      // Offset: 0x8
      ::System::IntPtr pdispVal;
      // Field size check
      static_assert(sizeof(::System::IntPtr) == 0x8);
      // public System.BRECORD bRecord
      // Size: 0x10
      // Offset: 0x8
      ::System::BRECORD bRecord;
      // Field size check
      static_assert(sizeof(::System::BRECORD) == 0x10);
    };
    public:
    // Creating value type constructor for type: Variant
    constexpr Variant(int16_t vt_ = {}, uint16_t wReserved1_ = {}, uint16_t wReserved2_ = {}, uint16_t wReserved3_ = {}, int64_t llVal_ = {}) noexcept : vt{vt_}, wReserved1{wReserved1_}, wReserved2{wReserved2_}, wReserved3{wReserved3_}, llVal{llVal_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int16 vt
    [[deprecated("Use field access instead!")]] int16_t& dyn_vt();
    // Get instance field reference: public System.UInt16 wReserved1
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wReserved1();
    // Get instance field reference: public System.UInt16 wReserved2
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wReserved2();
    // Get instance field reference: public System.UInt16 wReserved3
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wReserved3();
    // Get instance field reference: public System.Int64 llVal
    [[deprecated("Use field access instead!")]] int64_t& dyn_llVal();
    // Get instance field reference: public System.Int32 lVal
    [[deprecated("Use field access instead!")]] int& dyn_lVal();
    // Get instance field reference: public System.Byte bVal
    [[deprecated("Use field access instead!")]] uint8_t& dyn_bVal();
    // Get instance field reference: public System.Int16 iVal
    [[deprecated("Use field access instead!")]] int16_t& dyn_iVal();
    // Get instance field reference: public System.Single fltVal
    [[deprecated("Use field access instead!")]] float& dyn_fltVal();
    // Get instance field reference: public System.Double dblVal
    [[deprecated("Use field access instead!")]] double& dyn_dblVal();
    // Get instance field reference: public System.Int16 boolVal
    [[deprecated("Use field access instead!")]] int16_t& dyn_boolVal();
    // Get instance field reference: public System.IntPtr bstrVal
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_bstrVal();
    // Get instance field reference: public System.SByte cVal
    [[deprecated("Use field access instead!")]] int8_t& dyn_cVal();
    // Get instance field reference: public System.UInt16 uiVal
    [[deprecated("Use field access instead!")]] uint16_t& dyn_uiVal();
    // Get instance field reference: public System.UInt32 ulVal
    [[deprecated("Use field access instead!")]] uint& dyn_ulVal();
    // Get instance field reference: public System.UInt64 ullVal
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ullVal();
    // Get instance field reference: public System.Int32 intVal
    [[deprecated("Use field access instead!")]] int& dyn_intVal();
    // Get instance field reference: public System.UInt32 uintVal
    [[deprecated("Use field access instead!")]] uint& dyn_uintVal();
    // Get instance field reference: public System.IntPtr pdispVal
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_pdispVal();
    // Get instance field reference: public System.BRECORD bRecord
    [[deprecated("Use field access instead!")]] ::System::BRECORD& dyn_bRecord();
    // public System.Void Clear()
    // Offset: 0xBB2A9C
    void Clear();
  }; // System.Variant
  #pragma pack(pop)
  static check_size<sizeof(Variant), 8 + sizeof(::System::BRECORD)> __System_VariantSizeCheck;
  static_assert(sizeof(Variant) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Variant::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Variant::*)()>(&System::Variant::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Variant), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
