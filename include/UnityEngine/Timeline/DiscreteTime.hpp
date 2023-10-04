// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: DiscreteTime
  struct DiscreteTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Timeline.DiscreteTime
  // [TokenAttribute] Offset: FFFFFFFF
  struct DiscreteTime/*, public ::System::ValueType, public ::System::IComparable*/ {
    public:
    public:
    // private readonly System.Int64 m_DiscreteTime
    // Size: 0x8
    // Offset: 0x0
    int64_t m_DiscreteTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: DiscreteTime
    constexpr DiscreteTime(int64_t m_DiscreteTime_ = {}) noexcept : m_DiscreteTime{m_DiscreteTime_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return m_DiscreteTime;
    }
    // static field const value: static private System.Double k_Tick
    static constexpr const double k_Tick = 1e-12;
    // Get static field: static private System.Double k_Tick
    static double _get_k_Tick();
    // Set static field: static private System.Double k_Tick
    static void _set_k_Tick(double value);
    // Get static field: static public readonly UnityEngine.Timeline.DiscreteTime kMaxTime
    static ::UnityEngine::Timeline::DiscreteTime _get_kMaxTime();
    // Set static field: static public readonly UnityEngine.Timeline.DiscreteTime kMaxTime
    static void _set_kMaxTime(::UnityEngine::Timeline::DiscreteTime value);
    // Get instance field reference: private readonly System.Int64 m_DiscreteTime
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_DiscreteTime();
    // private System.Void .ctor(System.Int64 time)
    // Offset: 0xBAFAF4
    // ABORTED: conflicts with another method.  DiscreteTime(int64_t time);
    // public System.Void .ctor(System.Double time)
    // Offset: 0xBAFAFC
    DiscreteTime(double time);
    // public System.Void .ctor(System.Int32 time)
    // Offset: 0xBAFB04
    DiscreteTime(int time);
    // static public System.Double get_tickValue()
    // Offset: 0x1D968A8
    static double get_tickValue();
    // public UnityEngine.Timeline.DiscreteTime OneTickBefore()
    // Offset: 0xBAFB0C
    ::UnityEngine::Timeline::DiscreteTime OneTickBefore();
    // public UnityEngine.Timeline.DiscreteTime OneTickAfter()
    // Offset: 0xBAFB18
    ::UnityEngine::Timeline::DiscreteTime OneTickAfter();
    // static public UnityEngine.Timeline.DiscreteTime FromTicks(System.Int64 ticks)
    // Offset: 0x1D96AE0
    static ::UnityEngine::Timeline::DiscreteTime FromTicks(int64_t ticks);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0xBAFB24
    int CompareTo(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.Timeline.DiscreteTime other)
    // Offset: 0xBAFB2C
    bool Equals(::UnityEngine::Timeline::DiscreteTime other);
    // static private System.Int64 DoubleToDiscreteTime(System.Double time)
    // Offset: 0x1D96934
    static int64_t DoubleToDiscreteTime(double time);
    // static private System.Int64 IntToDiscreteTime(System.Int32 time)
    // Offset: 0x1D96A70
    static int64_t IntToDiscreteTime(int time);
    // static private System.Double ToDouble(System.Int64 time)
    // Offset: 0x1D96C10
    static double ToDouble(int64_t time);
    // static public System.Double op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x1D9418C
    explicit operator double();
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Double time)
    // Offset: 0x1D94158
    explicit DiscreteTime(double& time);
    // static public UnityEngine.Timeline.DiscreteTime Max(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
    // Offset: 0x1D96CC0
    static ::UnityEngine::Timeline::DiscreteTime Max(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);
    // static public System.Int64 GetNearestTick(System.Double time)
    // Offset: 0x1D96D38
    static int64_t GetNearestTick(double time);
    // static private System.Void .cctor()
    // Offset: 0x1D96DA4
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xBAFB3C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0xBAFB44
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xBAFB70
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Timeline.DiscreteTime
  #pragma pack(pop)
  static check_size<sizeof(DiscreteTime), 0 + sizeof(int64_t)> __UnityEngine_Timeline_DiscreteTimeSizeCheck;
  static_assert(sizeof(DiscreteTime) == 0x8);
  // static public System.Boolean op_LessThanOrEqual(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1D96C54
  bool operator <=(const ::UnityEngine::Timeline::DiscreteTime& lhs, const ::UnityEngine::Timeline::DiscreteTime& rhs);
  // static public UnityEngine.Timeline.DiscreteTime op_Subtraction(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1D96C60
  ::UnityEngine::Timeline::DiscreteTime operator-(const ::UnityEngine::Timeline::DiscreteTime& lhs, const ::UnityEngine::Timeline::DiscreteTime& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::get_tickValue
// Il2CppName: get_tickValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&UnityEngine::Timeline::DiscreteTime::get_tickValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "get_tickValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::OneTickBefore
// Il2CppName: OneTickBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::DiscreteTime (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::OneTickBefore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "OneTickBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::OneTickAfter
// Il2CppName: OneTickAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::DiscreteTime (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::OneTickAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "OneTickAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::FromTicks
// Il2CppName: FromTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::DiscreteTime (*)(int64_t)>(&UnityEngine::Timeline::DiscreteTime::FromTicks)> {
  static const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "FromTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::DiscreteTime::*)(::Il2CppObject*)>(&UnityEngine::Timeline::DiscreteTime::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::DiscreteTime::*)(::UnityEngine::Timeline::DiscreteTime)>(&UnityEngine::Timeline::DiscreteTime::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DoubleToDiscreteTime
// Il2CppName: DoubleToDiscreteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&UnityEngine::Timeline::DiscreteTime::DoubleToDiscreteTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "DoubleToDiscreteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::IntToDiscreteTime
// Il2CppName: IntToDiscreteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int)>(&UnityEngine::Timeline::DiscreteTime::IntToDiscreteTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "IntToDiscreteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int64_t)>(&UnityEngine::Timeline::DiscreteTime::ToDouble)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator double
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::DiscreteTime (*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime)>(&UnityEngine::Timeline::DiscreteTime::Max)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::GetNearestTick
// Il2CppName: GetNearestTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&UnityEngine::Timeline::DiscreteTime::GetNearestTick)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "GetNearestTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::DiscreteTime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::DiscreteTime::*)(::Il2CppObject*)>(&UnityEngine::Timeline::DiscreteTime::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!