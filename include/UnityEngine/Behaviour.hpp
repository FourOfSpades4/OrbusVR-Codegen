// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Behaviour
  class Behaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Behaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Behaviour*, "UnityEngine", "Behaviour");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Behaviour
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A6DFCC
  // [UsedByNativeCodeAttribute] Offset: A6DFCC
  class Behaviour : public ::UnityEngine::Component {
    public:
    // public System.Boolean get_enabled()
    // Offset: 0x203D02C
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x203D098
    void set_enabled(bool value);
    // public System.Boolean get_isActiveAndEnabled()
    // Offset: 0x203D10C
    bool get_isActiveAndEnabled();
    // public System.Void .ctor()
    // Offset: 0x203CFC0
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Behaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Behaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Behaviour*, creationType>()));
    }
  }; // UnityEngine.Behaviour
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Behaviour::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Behaviour::*)()>(&UnityEngine::Behaviour::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Behaviour*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Behaviour::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Behaviour::*)(bool)>(&UnityEngine::Behaviour::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Behaviour*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Behaviour::get_isActiveAndEnabled
// Il2CppName: get_isActiveAndEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Behaviour::*)()>(&UnityEngine::Behaviour::get_isActiveAndEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Behaviour*), "get_isActiveAndEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Behaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!