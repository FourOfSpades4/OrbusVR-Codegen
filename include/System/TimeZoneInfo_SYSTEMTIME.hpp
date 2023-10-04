// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo::SYSTEMTIME, "System", "TimeZoneInfo/SYSTEMTIME");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeZoneInfo/SYSTEMTIME
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeZoneInfo::SYSTEMTIME/*, public ::System::ValueType*/ {
    public:
    public:
    // System.UInt16 wYear
    // Size: 0x2
    // Offset: 0x0
    uint16_t wYear;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wMonth
    // Size: 0x2
    // Offset: 0x2
    uint16_t wMonth;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wDayOfWeek
    // Size: 0x2
    // Offset: 0x4
    uint16_t wDayOfWeek;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wDay
    // Size: 0x2
    // Offset: 0x6
    uint16_t wDay;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wHour
    // Size: 0x2
    // Offset: 0x8
    uint16_t wHour;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wMinute
    // Size: 0x2
    // Offset: 0xA
    uint16_t wMinute;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wSecond
    // Size: 0x2
    // Offset: 0xC
    uint16_t wSecond;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 wMilliseconds
    // Size: 0x2
    // Offset: 0xE
    uint16_t wMilliseconds;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: SYSTEMTIME
    constexpr SYSTEMTIME(uint16_t wYear_ = {}, uint16_t wMonth_ = {}, uint16_t wDayOfWeek_ = {}, uint16_t wDay_ = {}, uint16_t wHour_ = {}, uint16_t wMinute_ = {}, uint16_t wSecond_ = {}, uint16_t wMilliseconds_ = {}) noexcept : wYear{wYear_}, wMonth{wMonth_}, wDayOfWeek{wDayOfWeek_}, wDay{wDay_}, wHour{wHour_}, wMinute{wMinute_}, wSecond{wSecond_}, wMilliseconds{wMilliseconds_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.UInt16 wYear
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wYear();
    // Get instance field reference: System.UInt16 wMonth
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wMonth();
    // Get instance field reference: System.UInt16 wDayOfWeek
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wDayOfWeek();
    // Get instance field reference: System.UInt16 wDay
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wDay();
    // Get instance field reference: System.UInt16 wHour
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wHour();
    // Get instance field reference: System.UInt16 wMinute
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wMinute();
    // Get instance field reference: System.UInt16 wSecond
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wSecond();
    // Get instance field reference: System.UInt16 wMilliseconds
    [[deprecated("Use field access instead!")]] uint16_t& dyn_wMilliseconds();
  }; // System.TimeZoneInfo/SYSTEMTIME
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::SYSTEMTIME), 14 + sizeof(uint16_t)> __System_TimeZoneInfo_SYSTEMTIMESizeCheck;
  static_assert(sizeof(TimeZoneInfo::SYSTEMTIME) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"