// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Boolean
#include "System/Boolean.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Profile
  class Profile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Profile);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Profile*, "Pathfinding", "Profile");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Profile
  // [TokenAttribute] Offset: FFFFFFFF
  class Profile : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Diagnostics.Stopwatch watch
    // Size: 0x8
    // Offset: 0x18
    ::System::Diagnostics::Stopwatch* watch;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // private System.Int32 counter
    // Size: 0x4
    // Offset: 0x20
    int counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: counter and: mem
    char __padding2[0x4] = {};
    // private System.Int64 mem
    // Size: 0x8
    // Offset: 0x28
    int64_t mem;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 smem
    // Size: 0x8
    // Offset: 0x30
    int64_t smem;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32 control
    // Size: 0x4
    // Offset: 0x38
    int control;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Boolean PROFILE_MEM
    static constexpr const bool PROFILE_MEM = false;
    // Get static field: static private System.Boolean PROFILE_MEM
    static bool _get_PROFILE_MEM();
    // Set static field: static private System.Boolean PROFILE_MEM
    static void _set_PROFILE_MEM(bool value);
    // static field const value: static private System.Boolean dontCountFirst
    static constexpr const bool dontCountFirst = false;
    // Get static field: static private System.Boolean dontCountFirst
    static bool _get_dontCountFirst();
    // Set static field: static private System.Boolean dontCountFirst
    static void _set_dontCountFirst(bool value);
    // Get instance field reference: public readonly System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private readonly System.Diagnostics.Stopwatch watch
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_watch();
    // Get instance field reference: private System.Int32 counter
    [[deprecated("Use field access instead!")]] int& dyn_counter();
    // Get instance field reference: private System.Int64 mem
    [[deprecated("Use field access instead!")]] int64_t& dyn_mem();
    // Get instance field reference: private System.Int64 smem
    [[deprecated("Use field access instead!")]] int64_t& dyn_smem();
    // Get instance field reference: private System.Int32 control
    [[deprecated("Use field access instead!")]] int& dyn_control();
    // public System.Int32 ControlValue()
    // Offset: 0x16B5060
    int ControlValue();
    // public System.Void .ctor(System.String name)
    // Offset: 0x16B5068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Profile* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Profile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Profile*, creationType>(name)));
    }
    // public System.Void Start()
    // Offset: 0x16B50EC
    void Start();
    // public System.Void Stop()
    // Offset: 0x16B511C
    void Stop();
    // public System.Void Log()
    // Offset: 0x16B5158
    void Log();
    // public System.Void ConsoleLog()
    // Offset: 0x16B51D8
    void ConsoleLog();
    // public System.Void Stop(System.Int32 control)
    // Offset: 0x16B5258
    void Stop(int control);
    // public System.Void Control(Pathfinding.Profile other)
    // Offset: 0x16B5440
    void Control(::Pathfinding::Profile* other);
    // public override System.String ToString()
    // Offset: 0x16B56D0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Pathfinding.Profile
  #pragma pack(pop)
  static check_size<sizeof(Profile), 56 + sizeof(int)> __Pathfinding_ProfileSizeCheck;
  static_assert(sizeof(Profile) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Profile::ControlValue
// Il2CppName: ControlValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Profile::*)()>(&Pathfinding::Profile::ControlValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "ControlValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Profile::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Profile::*)()>(&Pathfinding::Profile::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Profile::*)()>(&Pathfinding::Profile::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Profile::*)()>(&Pathfinding::Profile::Log)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::ConsoleLog
// Il2CppName: ConsoleLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Profile::*)()>(&Pathfinding::Profile::ConsoleLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "ConsoleLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Profile::*)(int)>(&Pathfinding::Profile::Stop)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::Control
// Il2CppName: Control
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Profile::*)(::Pathfinding::Profile*)>(&Pathfinding::Profile::Control)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "Profile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "Control", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Pathfinding::Profile::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::Profile::*)()>(&Pathfinding::Profile::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Profile*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
