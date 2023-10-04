// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSourceAttribute
  class EventSourceAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSourceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceAttribute*, "System.Diagnostics.Tracing", "EventSourceAttribute");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5E554
  class EventSourceAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA60458
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA60468
    // private System.String <Guid>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Guid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA60478
    // private System.String <LocalizationResources>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW LocalizationResources;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.String <Guid>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Guid$k__BackingField();
    // Get instance field reference: private System.String <LocalizationResources>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$LocalizationResources$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x11B8178
    ::StringW get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x11B8180
    void set_Name(::StringW value);
    // public System.String get_Guid()
    // Offset: 0x11B8188
    ::StringW get_Guid();
    // public System.Void set_Guid(System.String value)
    // Offset: 0x11B8190
    void set_Guid(::StringW value);
    // public System.String get_LocalizationResources()
    // Offset: 0x11B8198
    ::StringW get_LocalizationResources();
    // public System.Void .ctor()
    // Offset: 0x11B81A0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSourceAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSourceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSourceAttribute*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.EventSourceAttribute
  #pragma pack(pop)
  static check_size<sizeof(EventSourceAttribute), 32 + sizeof(::StringW)> __System_Diagnostics_Tracing_EventSourceAttributeSizeCheck;
  static_assert(sizeof(EventSourceAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::EventSourceAttribute::*)()>(&System::Diagnostics::Tracing::EventSourceAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSourceAttribute::*)(::StringW)>(&System::Diagnostics::Tracing::EventSourceAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceAttribute::get_Guid
// Il2CppName: get_Guid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::EventSourceAttribute::*)()>(&System::Diagnostics::Tracing::EventSourceAttribute::get_Guid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceAttribute*), "get_Guid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceAttribute::set_Guid
// Il2CppName: set_Guid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSourceAttribute::*)(::StringW)>(&System::Diagnostics::Tracing::EventSourceAttribute::set_Guid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceAttribute*), "set_Guid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceAttribute::get_LocalizationResources
// Il2CppName: get_LocalizationResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::EventSourceAttribute::*)()>(&System::Diagnostics::Tracing::EventSourceAttribute::get_LocalizationResources)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSourceAttribute*), "get_LocalizationResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
