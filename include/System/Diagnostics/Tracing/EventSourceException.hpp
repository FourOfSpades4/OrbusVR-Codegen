// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSourceException
  class EventSourceException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSourceException);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceException*, "System.Diagnostics.Tracing", "EventSourceException");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceException
  // [TokenAttribute] Offset: FFFFFFFF
  class EventSourceException : public ::System::Exception {
    public:
    // System.Void .ctor(System.Exception innerException)
    // Offset: 0x11B8808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSourceException* New_ctor(::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSourceException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSourceException*, creationType>(innerException)));
    }
    // public System.Void .ctor()
    // Offset: 0x11B8220
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSourceException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSourceException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSourceException*, creationType>()));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x11B82DC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSourceException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSourceException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSourceException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x11B83AC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSourceException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSourceException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSourceException*, creationType>(info, context)));
    }
  }; // System.Diagnostics.Tracing.EventSourceException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSourceException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
