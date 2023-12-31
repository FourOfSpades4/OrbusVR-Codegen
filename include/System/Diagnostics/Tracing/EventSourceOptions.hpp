// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Including type: System.Diagnostics.Tracing.EventActivityOptions
#include "System/Diagnostics/Tracing/EventActivityOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventLevel
  struct EventLevel;
  // Forward declaring type: EventOpcode
  struct EventOpcode;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSourceOptions
  struct EventSourceOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceOptions, "System.Diagnostics.Tracing", "EventSourceOptions");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x13
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventSourceOptions/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Diagnostics.Tracing.EventKeywords keywords
    // Size: 0x8
    // Offset: 0x0
    ::System::Diagnostics::Tracing::EventKeywords keywords;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventKeywords) == 0x8);
    // System.Diagnostics.Tracing.EventTags tags
    // Size: 0x4
    // Offset: 0x8
    ::System::Diagnostics::Tracing::EventTags tags;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventTags) == 0x4);
    // System.Diagnostics.Tracing.EventActivityOptions activityOptions
    // Size: 0x4
    // Offset: 0xC
    ::System::Diagnostics::Tracing::EventActivityOptions activityOptions;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventActivityOptions) == 0x4);
    // System.Byte level
    // Size: 0x1
    // Offset: 0x10
    uint8_t level;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte opcode
    // Size: 0x1
    // Offset: 0x11
    uint8_t opcode;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte valuesSet
    // Size: 0x1
    // Offset: 0x12
    uint8_t valuesSet;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: EventSourceOptions
    constexpr EventSourceOptions(::System::Diagnostics::Tracing::EventKeywords keywords_ = {}, ::System::Diagnostics::Tracing::EventTags tags_ = {}, ::System::Diagnostics::Tracing::EventActivityOptions activityOptions_ = {}, uint8_t level_ = {}, uint8_t opcode_ = {}, uint8_t valuesSet_ = {}) noexcept : keywords{keywords_}, tags{tags_}, activityOptions{activityOptions_}, level{level_}, opcode{opcode_}, valuesSet{valuesSet_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Diagnostics.Tracing.EventKeywords keywords
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventKeywords& dyn_keywords();
    // Get instance field reference: System.Diagnostics.Tracing.EventTags tags
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventTags& dyn_tags();
    // Get instance field reference: System.Diagnostics.Tracing.EventActivityOptions activityOptions
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventActivityOptions& dyn_activityOptions();
    // Get instance field reference: System.Byte level
    [[deprecated("Use field access instead!")]] uint8_t& dyn_level();
    // Get instance field reference: System.Byte opcode
    [[deprecated("Use field access instead!")]] uint8_t& dyn_opcode();
    // Get instance field reference: System.Byte valuesSet
    [[deprecated("Use field access instead!")]] uint8_t& dyn_valuesSet();
    // public System.Void set_Level(System.Diagnostics.Tracing.EventLevel value)
    // Offset: 0xB96B9C
    void set_Level(::System::Diagnostics::Tracing::EventLevel value);
    // public System.Void set_Opcode(System.Diagnostics.Tracing.EventOpcode value)
    // Offset: 0xB96BA4
    void set_Opcode(::System::Diagnostics::Tracing::EventOpcode value);
    // public System.Void set_Keywords(System.Diagnostics.Tracing.EventKeywords value)
    // Offset: 0xB96BAC
    void set_Keywords(::System::Diagnostics::Tracing::EventKeywords value);
  }; // System.Diagnostics.Tracing.EventSourceOptions
  #pragma pack(pop)
  static check_size<sizeof(EventSourceOptions), 18 + sizeof(uint8_t)> __System_Diagnostics_Tracing_EventSourceOptionsSizeCheck;
  static_assert(sizeof(EventSourceOptions) == 0x13);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceOptions::set_Level
// Il2CppName: set_Level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSourceOptions::*)(::System::Diagnostics::Tracing::EventLevel)>(&System::Diagnostics::Tracing::EventSourceOptions::set_Level)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceOptions), "set_Level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceOptions::set_Opcode
// Il2CppName: set_Opcode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSourceOptions::*)(::System::Diagnostics::Tracing::EventOpcode)>(&System::Diagnostics::Tracing::EventSourceOptions::set_Opcode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventOpcode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceOptions), "set_Opcode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceOptions::set_Keywords
// Il2CppName: set_Keywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSourceOptions::*)(::System::Diagnostics::Tracing::EventKeywords)>(&System::Diagnostics::Tracing::EventSourceOptions::set_Keywords)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventKeywords")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceOptions), "set_Keywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
