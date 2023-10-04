// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IInterval
#include "UnityEngine/IInterval.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: RuntimeElement
  class RuntimeElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeElement*, "UnityEngine.Timeline", "RuntimeElement");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.RuntimeElement
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeElement : public ::Il2CppObject/*, public ::UnityEngine::IInterval*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAADB94
    // [DebuggerBrowsableAttribute] Offset: 0xAADB94
    // private System.Int32 <intervalBit>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int intervalBit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::IInterval
    operator ::UnityEngine::IInterval() noexcept {
      return *reinterpret_cast<::UnityEngine::IInterval*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return intervalBit;
    }
    // Get instance field reference: private System.Int32 <intervalBit>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$intervalBit$k__BackingField();
    // protected System.Void .ctor()
    // Offset: 0x1D978B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::RuntimeElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeElement*, creationType>()));
    }
    // public System.Int64 get_intervalStart()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_intervalStart();
    // public System.Int64 get_intervalEnd()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_intervalEnd();
    // public System.Int32 get_intervalBit()
    // Offset: 0x1D99594
    int get_intervalBit();
    // public System.Void set_intervalBit(System.Int32 value)
    // Offset: 0x1D9959C
    void set_intervalBit(int value);
    // public System.Void set_enable(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_enable(bool value);
    // public System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EvaluateAt(double localTime, ::UnityEngine::Playables::FrameData frameData);
    // public System.Void Reset()
    // Offset: 0x1D995A4
    void Reset();
  }; // UnityEngine.Timeline.RuntimeElement
  #pragma pack(pop)
  static check_size<sizeof(RuntimeElement), 16 + sizeof(int)> __UnityEngine_Timeline_RuntimeElementSizeCheck;
  static_assert(sizeof(RuntimeElement) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::get_intervalStart
// Il2CppName: get_intervalStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::RuntimeElement::*)()>(&UnityEngine::Timeline::RuntimeElement::get_intervalStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "get_intervalStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::get_intervalEnd
// Il2CppName: get_intervalEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::RuntimeElement::*)()>(&UnityEngine::Timeline::RuntimeElement::get_intervalEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "get_intervalEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::get_intervalBit
// Il2CppName: get_intervalBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::RuntimeElement::*)()>(&UnityEngine::Timeline::RuntimeElement::get_intervalBit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "get_intervalBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::set_intervalBit
// Il2CppName: set_intervalBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeElement::*)(int)>(&UnityEngine::Timeline::RuntimeElement::set_intervalBit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "set_intervalBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::set_enable
// Il2CppName: set_enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeElement::*)(bool)>(&UnityEngine::Timeline::RuntimeElement::set_enable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "set_enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::EvaluateAt
// Il2CppName: EvaluateAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeElement::*)(double, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::RuntimeElement::EvaluateAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "EvaluateAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, frameData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeElement::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeElement::*)()>(&UnityEngine::Timeline::RuntimeElement::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeElement*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
