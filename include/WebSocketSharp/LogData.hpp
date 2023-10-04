// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: WebSocketSharp.LogLevel
#include "WebSocketSharp/LogLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackFrame
  class StackFrame;
}
// Completed forward declares
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: LogData
  class LogData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::LogData);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::LogData*, "WebSocketSharp", "LogData");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.LogData
  // [TokenAttribute] Offset: FFFFFFFF
  class LogData : public ::Il2CppObject {
    public:
    public:
    // private System.Diagnostics.StackFrame _caller
    // Size: 0x8
    // Offset: 0x10
    ::System::Diagnostics::StackFrame* caller;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::StackFrame*) == 0x8);
    // private System.DateTime _date
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime date;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private WebSocketSharp.LogLevel _level
    // Size: 0x4
    // Offset: 0x20
    ::WebSocketSharp::LogLevel level;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::LogLevel) == 0x4);
    // Padding between fields: level and: message
    char __padding2[0x4] = {};
    // private System.String _message
    // Size: 0x8
    // Offset: 0x28
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Diagnostics.StackFrame _caller
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::StackFrame*& dyn__caller();
    // Get instance field reference: private System.DateTime _date
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn__date();
    // Get instance field reference: private WebSocketSharp.LogLevel _level
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::LogLevel& dyn__level();
    // Get instance field reference: private System.String _message
    [[deprecated("Use field access instead!")]] ::StringW& dyn__message();
    // System.Void .ctor(WebSocketSharp.LogLevel level, System.Diagnostics.StackFrame caller, System.String message)
    // Offset: 0x1F18414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogData* New_ctor(::WebSocketSharp::LogLevel level, ::System::Diagnostics::StackFrame* caller, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::LogData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogData*, creationType>(level, caller, message)));
    }
    // public override System.String ToString()
    // Offset: 0x1F184CC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // WebSocketSharp.LogData
  #pragma pack(pop)
  static check_size<sizeof(LogData), 40 + sizeof(::StringW)> __WebSocketSharp_LogDataSizeCheck;
  static_assert(sizeof(LogData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::LogData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::LogData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::LogData::*)()>(&WebSocketSharp::LogData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::LogData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
