// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AstarDebugger
#include "GlobalNamespace/AstarDebugger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AstarDebugger::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AstarDebugger::$$c*, "", "AstarDebugger/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AstarDebugger/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACD188
  class AstarDebugger::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly AstarDebugger/<>c <>9
    static ::GlobalNamespace::AstarDebugger::$$c* _get_$$9();
    // Set static field: static public readonly AstarDebugger/<>c <>9
    static void _set_$$9(::GlobalNamespace::AstarDebugger::$$c* value);
    // Get static field: static public System.Func`1<System.Int32> <>9__43_0
    static ::System::Func_1<int>* _get_$$9__43_0();
    // Set static field: static public System.Func`1<System.Int32> <>9__43_0
    static void _set_$$9__43_0(::System::Func_1<int>* value);
    // Get static field: static public System.Func`1<System.Int32> <>9__43_1
    static ::System::Func_1<int>* _get_$$9__43_1();
    // Set static field: static public System.Func`1<System.Int32> <>9__43_1
    static void _set_$$9__43_1(::System::Func_1<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x129C59C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x129C600
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarDebugger::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AstarDebugger::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarDebugger::$$c*, creationType>()));
    }
    // System.Int32 <.ctor>b__43_0()
    // Offset: 0x129C608
    int $_ctor$b__43_0();
    // System.Int32 <.ctor>b__43_1()
    // Offset: 0x129C6AC
    int $_ctor$b__43_1();
  }; // AstarDebugger/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AstarDebugger::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::AstarDebugger::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarDebugger::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarDebugger::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AstarDebugger::$$c::$_ctor$b__43_0
// Il2CppName: <.ctor>b__43_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AstarDebugger::$$c::*)()>(&GlobalNamespace::AstarDebugger::$$c::$_ctor$b__43_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarDebugger::$$c*), "<.ctor>b__43_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarDebugger::$$c::$_ctor$b__43_1
// Il2CppName: <.ctor>b__43_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AstarDebugger::$$c::*)()>(&GlobalNamespace::AstarDebugger::$$c::$_ctor$b__43_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarDebugger::$$c*), "<.ctor>b__43_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
