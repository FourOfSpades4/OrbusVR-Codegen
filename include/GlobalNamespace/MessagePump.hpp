// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RunLoop
  class RunLoop;
  // Forward declaring type: LoopDone
  class LoopDone;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MessagePump
  class MessagePump;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MessagePump);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MessagePump*, "", "MessagePump");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MessagePump
  // [TokenAttribute] Offset: FFFFFFFF
  class MessagePump : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::MessagePump::DoneDelegate
    class DoneDelegate;
    // Nested type: ::GlobalNamespace::MessagePump::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDB68
    // private RunLoop MainLoopRun
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::RunLoop* MainLoopRun;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RunLoop*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::RunLoop*
    constexpr operator ::GlobalNamespace::RunLoop*() const noexcept {
      return MainLoopRun;
    }
    // Get static field: static private MessagePump _instance
    static ::GlobalNamespace::MessagePump* _get__instance();
    // Set static field: static private MessagePump _instance
    static void _set__instance(::GlobalNamespace::MessagePump* value);
    // Get instance field reference: private RunLoop MainLoopRun
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RunLoop*& dyn_MainLoopRun();
    // private System.Void .ctor()
    // Offset: 0x16013DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessagePump* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MessagePump::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessagePump*, creationType>()));
    }
    // public System.Void add_MainLoopRun(RunLoop value)
    // Offset: 0x16013E4
    void add_MainLoopRun(::GlobalNamespace::RunLoop* value);
    // public System.Void remove_MainLoopRun(RunLoop value)
    // Offset: 0x16014D0
    void remove_MainLoopRun(::GlobalNamespace::RunLoop* value);
    // static public MessagePump get_Instance()
    // Offset: 0x16015BC
    static ::GlobalNamespace::MessagePump* get_Instance();
    // public System.Void RunUntil(LoopDone done)
    // Offset: 0x160163C
    void RunUntil(::GlobalNamespace::LoopDone* done);
    // public System.Void RunOnce()
    // Offset: 0x160168C
    void RunOnce();
    // static public System.Boolean IsDone(System.Threading.WaitHandle handle, System.DateTime until)
    // Offset: 0x1601B30
    static bool IsDone(::System::Threading::WaitHandle* handle, ::System::DateTime until);
    // static public System.Boolean Run(System.Threading.WaitHandle handle, System.TimeSpan until)
    // Offset: 0x1601BDC
    static bool Run(::System::Threading::WaitHandle* handle, ::System::TimeSpan until);
  }; // MessagePump
  #pragma pack(pop)
  static check_size<sizeof(MessagePump), 16 + sizeof(::GlobalNamespace::RunLoop*)> __GlobalNamespace_MessagePumpSizeCheck;
  static_assert(sizeof(MessagePump) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::add_MainLoopRun
// Il2CppName: add_MainLoopRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MessagePump::*)(::GlobalNamespace::RunLoop*)>(&GlobalNamespace::MessagePump::add_MainLoopRun)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "RunLoop")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "add_MainLoopRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::remove_MainLoopRun
// Il2CppName: remove_MainLoopRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MessagePump::*)(::GlobalNamespace::RunLoop*)>(&GlobalNamespace::MessagePump::remove_MainLoopRun)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "RunLoop")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "remove_MainLoopRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MessagePump* (*)()>(&GlobalNamespace::MessagePump::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::RunUntil
// Il2CppName: RunUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MessagePump::*)(::GlobalNamespace::LoopDone*)>(&GlobalNamespace::MessagePump::RunUntil)> {
  static const MethodInfo* get() {
    static auto* done = &::il2cpp_utils::GetClassFromName("", "LoopDone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "RunUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{done});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::RunOnce
// Il2CppName: RunOnce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MessagePump::*)()>(&GlobalNamespace::MessagePump::RunOnce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "RunOnce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::IsDone
// Il2CppName: IsDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitHandle*, ::System::DateTime)>(&GlobalNamespace::MessagePump::IsDone)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle")->byval_arg;
    static auto* until = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "IsDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, until});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessagePump::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitHandle*, ::System::TimeSpan)>(&GlobalNamespace::MessagePump::Run)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle")->byval_arg;
    static auto* until = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessagePump*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, until});
  }
};
