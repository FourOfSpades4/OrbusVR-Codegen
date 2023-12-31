// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: SByteArrayTypeInfo
  class SByteArrayTypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::SByteArrayTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::SByteArrayTypeInfo*, "System.Diagnostics.Tracing", "SByteArrayTypeInfo");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.SByteArrayTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SByteArrayTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::ArrayW<int8_t>> {
    public:
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref System.SByte[] value)
    // Offset: 0x11C0964
    void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ByRef<::ArrayW<int8_t>> value);
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x11C081C
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::StringW name, ::System::Diagnostics::Tracing::EventFieldFormat format);
    // public System.Void .ctor()
    // Offset: 0x11C0A0C
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SByteArrayTypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::SByteArrayTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SByteArrayTypeInfo*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.SByteArrayTypeInfo
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SByteArrayTypeInfo::WriteData
// Il2CppName: WriteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::SByteArrayTypeInfo::*)(::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ByRef<::ArrayW<int8_t>>)>(&System::Diagnostics::Tracing::SByteArrayTypeInfo::WriteData)> {
  static const MethodInfo* get() {
    static auto* collector = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataCollector")->byval_arg;
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "SByte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SByteArrayTypeInfo*), "WriteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collector, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SByteArrayTypeInfo::WriteMetadata
// Il2CppName: WriteMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::SByteArrayTypeInfo::*)(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::StringW, ::System::Diagnostics::Tracing::EventFieldFormat)>(&System::Diagnostics::Tracing::SByteArrayTypeInfo::WriteMetadata)> {
  static const MethodInfo* get() {
    static auto* collector = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingMetadataCollector")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SByteArrayTypeInfo*), "WriteMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collector, name, format});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SByteArrayTypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
