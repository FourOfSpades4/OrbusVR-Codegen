// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: FieldMetadata
  class FieldMetadata;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector/Impl");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
  // [TokenAttribute] Offset: FFFFFFFF
  class TraceLoggingMetadataCollector::Impl : public ::Il2CppObject {
    public:
    public:
    // readonly System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata> fields
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::FieldMetadata*>* fields;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::FieldMetadata*>*) == 0x8);
    // System.Int16 scratchSize
    // Size: 0x2
    // Offset: 0x18
    int16_t scratchSize;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // System.SByte dataCount
    // Size: 0x1
    // Offset: 0x1A
    int8_t dataCount;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // System.SByte pinCount
    // Size: 0x1
    // Offset: 0x1B
    int8_t pinCount;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // private System.Int32 bufferNesting
    // Size: 0x4
    // Offset: 0x1C
    int bufferNesting;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean scalar
    // Size: 0x1
    // Offset: 0x20
    bool scalar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: readonly System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata> fields
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::FieldMetadata*>*& dyn_fields();
    // Get instance field reference: System.Int16 scratchSize
    [[deprecated("Use field access instead!")]] int16_t& dyn_scratchSize();
    // Get instance field reference: System.SByte dataCount
    [[deprecated("Use field access instead!")]] int8_t& dyn_dataCount();
    // Get instance field reference: System.SByte pinCount
    [[deprecated("Use field access instead!")]] int8_t& dyn_pinCount();
    // Get instance field reference: private System.Int32 bufferNesting
    [[deprecated("Use field access instead!")]] int& dyn_bufferNesting();
    // Get instance field reference: private System.Boolean scalar
    [[deprecated("Use field access instead!")]] bool& dyn_scalar();
    // public System.Void AddScalar(System.Int32 size)
    // Offset: 0x11C3600
    void AddScalar(int size);
    // public System.Void AddNonscalar()
    // Offset: 0x11C36B0
    void AddNonscalar();
    // public System.Void BeginBuffered()
    // Offset: 0x11C3800
    void BeginBuffered();
    // public System.Void EndBuffered()
    // Offset: 0x11C38F0
    void EndBuffered();
    // public System.Int32 Encode(System.Byte[] metadata)
    // Offset: 0x11C3900
    int Encode(::ArrayW<uint8_t> metadata);
    // public System.Void .ctor()
    // Offset: 0x11C33A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingMetadataCollector::Impl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingMetadataCollector::Impl*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
  #pragma pack(pop)
  static check_size<sizeof(TraceLoggingMetadataCollector::Impl), 32 + sizeof(bool)> __System_Diagnostics_Tracing_TraceLoggingMetadataCollector_ImplSizeCheck;
  static_assert(sizeof(TraceLoggingMetadataCollector::Impl) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::AddScalar
// Il2CppName: AddScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::*)(int)>(&System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::AddScalar)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*), "AddScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::AddNonscalar
// Il2CppName: AddNonscalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::*)()>(&System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::AddNonscalar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*), "AddNonscalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::BeginBuffered
// Il2CppName: BeginBuffered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::*)()>(&System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::BeginBuffered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*), "BeginBuffered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::EndBuffered
// Il2CppName: EndBuffered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::*)()>(&System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::EndBuffered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*), "EndBuffered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::*)(::ArrayW<uint8_t>)>(&System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::Encode)> {
  static const MethodInfo* get() {
    static auto* metadata = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{metadata});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
