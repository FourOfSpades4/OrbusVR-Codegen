// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AmplifyColor.VolumeEffectComponent
#include "AmplifyColor/VolumeEffectComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: AmplifyColor
namespace AmplifyColor {
  // Forward declaring type: VolumeEffectField
  class VolumeEffectField;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AmplifyColor::VolumeEffectComponent::$$c);
DEFINE_IL2CPP_ARG_TYPE(::AmplifyColor::VolumeEffectComponent::$$c*, "AmplifyColor", "VolumeEffectComponent/<>c");
// Type namespace: AmplifyColor
namespace AmplifyColor {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColor.VolumeEffectComponent/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD86E0
  class VolumeEffectComponent::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly AmplifyColor.VolumeEffectComponent/<>c <>9
    static ::AmplifyColor::VolumeEffectComponent::$$c* _get_$$9();
    // Set static field: static public readonly AmplifyColor.VolumeEffectComponent/<>c <>9
    static void _set_$$9(::AmplifyColor::VolumeEffectComponent::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__9_0
    static ::System::Func_2<::System::Reflection::FieldInfo*, bool>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__9_0
    static void _set_$$9__9_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);
    // Get static field: static public System.Func`2<AmplifyColor.VolumeEffectField,System.String> <>9__10_0
    static ::System::Func_2<::AmplifyColor::VolumeEffectField*, ::StringW>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<AmplifyColor.VolumeEffectField,System.String> <>9__10_0
    static void _set_$$9__10_0(::System::Func_2<::AmplifyColor::VolumeEffectField*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0xF03210
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xF03274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VolumeEffectComponent::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyColor::VolumeEffectComponent::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VolumeEffectComponent::$$c*, creationType>()));
    }
    // System.Boolean <ListAcceptableFields>b__9_0(System.Reflection.FieldInfo f)
    // Offset: 0xF0327C
    bool $ListAcceptableFields$b__9_0(::System::Reflection::FieldInfo* f);
    // System.String <GetFieldNames>b__10_0(AmplifyColor.VolumeEffectField r)
    // Offset: 0xF032D8
    ::StringW $GetFieldNames$b__10_0(::AmplifyColor::VolumeEffectField* r);
  }; // AmplifyColor.VolumeEffectComponent/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectComponent::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&AmplifyColor::VolumeEffectComponent::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VolumeEffectComponent::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectComponent::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectComponent::$$c::$ListAcceptableFields$b__9_0
// Il2CppName: <ListAcceptableFields>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AmplifyColor::VolumeEffectComponent::$$c::*)(::System::Reflection::FieldInfo*)>(&AmplifyColor::VolumeEffectComponent::$$c::$ListAcceptableFields$b__9_0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VolumeEffectComponent::$$c*), "<ListAcceptableFields>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectComponent::$$c::$GetFieldNames$b__10_0
// Il2CppName: <GetFieldNames>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AmplifyColor::VolumeEffectComponent::$$c::*)(::AmplifyColor::VolumeEffectField*)>(&AmplifyColor::VolumeEffectComponent::$$c::$GetFieldNames$b__10_0)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("AmplifyColor", "VolumeEffectField")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VolumeEffectComponent::$$c*), "<GetFieldNames>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};