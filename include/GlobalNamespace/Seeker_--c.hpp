// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Seeker
#include "GlobalNamespace/Seeker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IPathModifier
  class IPathModifier;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Seeker::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Seeker::$$c*, "", "Seeker/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Seeker/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACD008
  class Seeker::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Seeker/<>c <>9
    static ::GlobalNamespace::Seeker::$$c* _get_$$9();
    // Set static field: static public readonly Seeker/<>c <>9
    static void _set_$$9(::GlobalNamespace::Seeker::$$c* value);
    // Get static field: static public System.Comparison`1<Pathfinding.IPathModifier> <>9__23_0
    static ::System::Comparison_1<::Pathfinding::IPathModifier*>* _get_$$9__23_0();
    // Set static field: static public System.Comparison`1<Pathfinding.IPathModifier> <>9__23_0
    static void _set_$$9__23_0(::System::Comparison_1<::Pathfinding::IPathModifier*>* value);
    // static private System.Void .cctor()
    // Offset: 0xE35254
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xE352B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Seeker::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Seeker::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Seeker::$$c*, creationType>()));
    }
    // System.Int32 <RegisterModifier>b__23_0(Pathfinding.IPathModifier a, Pathfinding.IPathModifier b)
    // Offset: 0xE352C0
    int $RegisterModifier$b__23_0(::Pathfinding::IPathModifier* a, ::Pathfinding::IPathModifier* b);
  }; // Seeker/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Seeker::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Seeker::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Seeker::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Seeker::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Seeker::$$c::$RegisterModifier$b__23_0
// Il2CppName: <RegisterModifier>b__23_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Seeker::$$c::*)(::Pathfinding::IPathModifier*, ::Pathfinding::IPathModifier*)>(&GlobalNamespace::Seeker::$$c::$RegisterModifier$b__23_0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "IPathModifier")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "IPathModifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Seeker::$$c*), "<RegisterModifier>b__23_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};