// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: AmplifyColor
namespace AmplifyColor {
  // Forward declaring type: VolumeEffectField
  class VolumeEffectField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AmplifyColor::VolumeEffectField);
DEFINE_IL2CPP_ARG_TYPE(::AmplifyColor::VolumeEffectField*, "AmplifyColor", "VolumeEffectField");
// Type namespace: AmplifyColor
namespace AmplifyColor {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColor.VolumeEffectField
  // [TokenAttribute] Offset: FFFFFFFF
  class VolumeEffectField : public ::Il2CppObject {
    public:
    public:
    // public System.String fieldName
    // Size: 0x8
    // Offset: 0x10
    ::StringW fieldName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String fieldType
    // Size: 0x8
    // Offset: 0x18
    ::StringW fieldType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single valueSingle
    // Size: 0x4
    // Offset: 0x20
    float valueSingle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color valueColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color valueColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Boolean valueBoolean
    // Size: 0x1
    // Offset: 0x34
    bool valueBoolean;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: valueBoolean and: valueVector2
    char __padding4[0x3] = {};
    // public UnityEngine.Vector2 valueVector2
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Vector2 valueVector2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector3 valueVector3
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 valueVector3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector4 valueVector4
    // Size: 0x10
    // Offset: 0x4C
    ::UnityEngine::Vector4 valueVector4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Get instance field reference: public System.String fieldName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fieldName();
    // Get instance field reference: public System.String fieldType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fieldType();
    // Get instance field reference: public System.Single valueSingle
    [[deprecated("Use field access instead!")]] float& dyn_valueSingle();
    // Get instance field reference: public UnityEngine.Color valueColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_valueColor();
    // Get instance field reference: public System.Boolean valueBoolean
    [[deprecated("Use field access instead!")]] bool& dyn_valueBoolean();
    // Get instance field reference: public UnityEngine.Vector2 valueVector2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_valueVector2();
    // Get instance field reference: public UnityEngine.Vector3 valueVector3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_valueVector3();
    // Get instance field reference: public UnityEngine.Vector4 valueVector4
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_valueVector4();
    // public System.Void .ctor(System.String fieldName, System.String fieldType)
    // Offset: 0xF0116C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VolumeEffectField* New_ctor(::StringW fieldName, ::StringW fieldType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyColor::VolumeEffectField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VolumeEffectField*, creationType>(fieldName, fieldType)));
    }
    // public System.Void .ctor(System.Reflection.FieldInfo pi, UnityEngine.Component c)
    // Offset: 0xF02E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VolumeEffectField* New_ctor(::System::Reflection::FieldInfo* pi, ::UnityEngine::Component* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyColor::VolumeEffectField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VolumeEffectField*, creationType>(pi, c)));
    }
    // static public System.Boolean IsValidType(System.String type)
    // Offset: 0xF02D58
    static bool IsValidType(::StringW type);
    // public System.Void UpdateValue(System.Object val)
    // Offset: 0xF04594
    void UpdateValue(::Il2CppObject* val);
  }; // AmplifyColor.VolumeEffectField
  #pragma pack(pop)
  static check_size<sizeof(VolumeEffectField), 76 + sizeof(::UnityEngine::Vector4)> __AmplifyColor_VolumeEffectFieldSizeCheck;
  static_assert(sizeof(VolumeEffectField) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectField::IsValidType
// Il2CppName: IsValidType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&AmplifyColor::VolumeEffectField::IsValidType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VolumeEffectField*), "IsValidType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectField::UpdateValue
// Il2CppName: UpdateValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyColor::VolumeEffectField::*)(::Il2CppObject*)>(&AmplifyColor::VolumeEffectField::UpdateValue)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VolumeEffectField*), "UpdateValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
