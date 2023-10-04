// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackFrame
  class StackFrame;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackTrace
  class StackTrace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::StackTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTrace*, "System.Diagnostics", "StackTrace");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.StackTrace
  // [TokenAttribute] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: A5E3B0
  // [ComVisibleAttribute] Offset: A5E3B0
  class StackTrace : public ::Il2CppObject {
    public:
    // Nested type: ::System::Diagnostics::StackTrace::TraceFormat
    struct TraceFormat;
    public:
    // private System.Diagnostics.StackFrame[] frames
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Diagnostics::StackFrame*> frames;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Diagnostics::StackFrame*>) == 0x8);
    // private readonly System.Diagnostics.StackTrace[] captured_traces
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Diagnostics::StackTrace*> captured_traces;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Diagnostics::StackTrace*>) == 0x8);
    // private System.Boolean debug_info
    // Size: 0x1
    // Offset: 0x20
    bool debug_info;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static public System.Int32 METHODS_TO_SKIP
    static constexpr const int METHODS_TO_SKIP = 0;
    // Get static field: static public System.Int32 METHODS_TO_SKIP
    static int _get_METHODS_TO_SKIP();
    // Set static field: static public System.Int32 METHODS_TO_SKIP
    static void _set_METHODS_TO_SKIP(int value);
    // Get static field: static private System.Boolean isAotidSet
    static bool _get_isAotidSet();
    // Set static field: static private System.Boolean isAotidSet
    static void _set_isAotidSet(bool value);
    // Get static field: static private System.String aotid
    static ::StringW _get_aotid();
    // Set static field: static private System.String aotid
    static void _set_aotid(::StringW value);
    // Get instance field reference: private System.Diagnostics.StackFrame[] frames
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Diagnostics::StackFrame*>& dyn_frames();
    // Get instance field reference: private readonly System.Diagnostics.StackTrace[] captured_traces
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Diagnostics::StackTrace*>& dyn_captured_traces();
    // Get instance field reference: private System.Boolean debug_info
    [[deprecated("Use field access instead!")]] bool& dyn_debug_info();
    // public System.Void .ctor(System.Boolean fNeedFileInfo)
    // Offset: 0x15E62F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTrace* New_ctor(bool fNeedFileInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::StackTrace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTrace*, creationType>(fNeedFileInfo)));
    }
    // public System.Void .ctor(System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0x15E632C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTrace* New_ctor(int skipFrames, bool fNeedFileInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::StackTrace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTrace*, creationType>(skipFrames, fNeedFileInfo)));
    }
    // private System.Void init_frames(System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0x15E6164
    void init_frames(int skipFrames, bool fNeedFileInfo);
    // static private System.Diagnostics.StackFrame[] get_trace(System.Exception e, System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0x15E636C
    static ::ArrayW<::System::Diagnostics::StackFrame*> get_trace(::System::Exception* e, int skipFrames, bool fNeedFileInfo);
    // public System.Void .ctor(System.Exception e, System.Boolean fNeedFileInfo)
    // Offset: 0x15E6374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTrace* New_ctor(::System::Exception* e, bool fNeedFileInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::StackTrace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTrace*, creationType>(e, fNeedFileInfo)));
    }
    // public System.Void .ctor(System.Exception e, System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0x15E6380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTrace* New_ctor(::System::Exception* e, int skipFrames, bool fNeedFileInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::StackTrace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTrace*, creationType>(e, skipFrames, fNeedFileInfo)));
    }
    // public System.Int32 get_FrameCount()
    // Offset: 0x15E6488
    int get_FrameCount();
    // public System.Diagnostics.StackFrame GetFrame(System.Int32 index)
    // Offset: 0x15E64A0
    ::System::Diagnostics::StackFrame* GetFrame(int index);
    // static private System.String GetAotId()
    // Offset: 0x15E651C
    static ::StringW GetAotId();
    // private System.Boolean AddFrames(System.Text.StringBuilder sb)
    // Offset: 0x15E65F0
    bool AddFrames(::System::Text::StringBuilder* sb);
    // System.Void GetFullNameForStackTrace(System.Text.StringBuilder sb, System.Reflection.MethodBase mi)
    // Offset: 0x15E6B54
    void GetFullNameForStackTrace(::System::Text::StringBuilder* sb, ::System::Reflection::MethodBase* mi);
    // System.String ToString(System.Diagnostics.StackTrace/TraceFormat traceFormat)
    // Offset: 0x15E7274
    ::StringW ToString(::System::Diagnostics::StackTrace::TraceFormat traceFormat);
    // public System.Void .ctor()
    // Offset: 0x15E6134
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTrace* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::StackTrace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTrace*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x15E70F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Diagnostics.StackTrace
  #pragma pack(pop)
  static check_size<sizeof(StackTrace), 32 + sizeof(bool)> __System_Diagnostics_StackTraceSizeCheck;
  static_assert(sizeof(StackTrace) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::init_frames
// Il2CppName: init_frames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(int, bool)>(&System::Diagnostics::StackTrace::init_frames)> {
  static const MethodInfo* get() {
    static auto* skipFrames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fNeedFileInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "init_frames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skipFrames, fNeedFileInfo});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::get_trace
// Il2CppName: get_trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Diagnostics::StackFrame*> (*)(::System::Exception*, int, bool)>(&System::Diagnostics::StackTrace::get_trace)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* skipFrames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fNeedFileInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "get_trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, skipFrames, fNeedFileInfo});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::get_FrameCount
// Il2CppName: get_FrameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::StackTrace::*)()>(&System::Diagnostics::StackTrace::get_FrameCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "get_FrameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::GetFrame
// Il2CppName: GetFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::StackFrame* (System::Diagnostics::StackTrace::*)(int)>(&System::Diagnostics::StackTrace::GetFrame)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "GetFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::GetAotId
// Il2CppName: GetAotId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Diagnostics::StackTrace::GetAotId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "GetAotId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::AddFrames
// Il2CppName: AddFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::StackTrace::*)(::System::Text::StringBuilder*)>(&System::Diagnostics::StackTrace::AddFrames)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "AddFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::GetFullNameForStackTrace
// Il2CppName: GetFullNameForStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::StackTrace::*)(::System::Text::StringBuilder*, ::System::Reflection::MethodBase*)>(&System::Diagnostics::StackTrace::GetFullNameForStackTrace)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* mi = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "GetFullNameForStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, mi});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::StackTrace::*)(::System::Diagnostics::StackTrace::TraceFormat)>(&System::Diagnostics::StackTrace::ToString)> {
  static const MethodInfo* get() {
    static auto* traceFormat = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "StackTrace/TraceFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{traceFormat});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::StackTrace::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::StackTrace::*)()>(&System::Diagnostics::StackTrace::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::StackTrace*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
