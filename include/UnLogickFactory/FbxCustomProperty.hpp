// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Forward declaring type: FbxCustomProperty
  class FbxCustomProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnLogickFactory::FbxCustomProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxCustomProperty*, "UnLogickFactory", "FbxCustomProperty");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.FbxCustomProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class FbxCustomProperty : public ::Il2CppObject {
    public:
    // Nested type: ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType
    struct FbxCustomPropertyType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType
    // [TokenAttribute] Offset: FFFFFFFF
    struct FbxCustomPropertyType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FbxCustomPropertyType
      constexpr FbxCustomPropertyType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Color
      static constexpr const int Color = 0;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Color
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Color();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Color
      static void _set_Color(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double4
      static constexpr const int Double4 = 1;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double4
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Double4();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double4
      static void _set_Double4(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double3
      static constexpr const int Double3 = 2;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double3
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Double3();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double3
      static void _set_Double3(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double2
      static constexpr const int Double2 = 3;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double2
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Double2();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double2
      static void _set_Double2(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Matrix
      static constexpr const int Matrix = 4;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Matrix
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Matrix();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Matrix
      static void _set_Matrix(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double
      static constexpr const int Double = 5;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Double();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Double
      static void _set_Double(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Bool
      static constexpr const int Bool = 6;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Bool
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Bool();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Bool
      static void _set_Bool(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Long
      static constexpr const int Long = 7;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Long
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_Long();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType Long
      static void _set_Long(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // static field const value: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType String
      static constexpr const int String = 8;
      // Get static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType String
      static ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType _get_String();
      // Set static field: static public UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType String
      static void _set_String(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType
    #pragma pack(pop)
    static check_size<sizeof(FbxCustomProperty::FbxCustomPropertyType), 0 + sizeof(int)> __UnLogickFactory_FbxCustomProperty_FbxCustomPropertyTypeSizeCheck;
    static_assert(sizeof(FbxCustomProperty::FbxCustomPropertyType) == 0x4);
    public:
    // private UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType type
    // Size: 0x4
    // Offset: 0x10
    ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType type;
    // Field size check
    static_assert(sizeof(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType) == 0x4);
    // Padding between fields: type and: m11
    char __padding0[0x4] = {};
    // private System.Double m11
    // Size: 0x8
    // Offset: 0x18
    double m11;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m12
    // Size: 0x8
    // Offset: 0x20
    double m12;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m13
    // Size: 0x8
    // Offset: 0x28
    double m13;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m14
    // Size: 0x8
    // Offset: 0x30
    double m14;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m21
    // Size: 0x8
    // Offset: 0x38
    double m21;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m22
    // Size: 0x8
    // Offset: 0x40
    double m22;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m23
    // Size: 0x8
    // Offset: 0x48
    double m23;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m24
    // Size: 0x8
    // Offset: 0x50
    double m24;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m31
    // Size: 0x8
    // Offset: 0x58
    double m31;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m32
    // Size: 0x8
    // Offset: 0x60
    double m32;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m33
    // Size: 0x8
    // Offset: 0x68
    double m33;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m34
    // Size: 0x8
    // Offset: 0x70
    double m34;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m41
    // Size: 0x8
    // Offset: 0x78
    double m41;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m42
    // Size: 0x8
    // Offset: 0x80
    double m42;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m43
    // Size: 0x8
    // Offset: 0x88
    double m43;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m44
    // Size: 0x8
    // Offset: 0x90
    double m44;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean boolValue
    // Size: 0x1
    // Offset: 0x98
    bool boolValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: boolValue and: stringValue
    char __padding17[0x7] = {};
    // private System.String stringValue
    // Size: 0x8
    // Offset: 0xA0
    ::StringW stringValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 longValue
    // Size: 0x8
    // Offset: 0xA8
    int64_t longValue;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String propertyName
    // Size: 0x8
    // Offset: 0xB0
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnLogickFactory.FbxCustomProperty/FbxCustomPropertyType type
    [[deprecated("Use field access instead!")]] ::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType& dyn_type();
    // Get instance field reference: private System.Double m11
    [[deprecated("Use field access instead!")]] double& dyn_m11();
    // Get instance field reference: private System.Double m12
    [[deprecated("Use field access instead!")]] double& dyn_m12();
    // Get instance field reference: private System.Double m13
    [[deprecated("Use field access instead!")]] double& dyn_m13();
    // Get instance field reference: private System.Double m14
    [[deprecated("Use field access instead!")]] double& dyn_m14();
    // Get instance field reference: private System.Double m21
    [[deprecated("Use field access instead!")]] double& dyn_m21();
    // Get instance field reference: private System.Double m22
    [[deprecated("Use field access instead!")]] double& dyn_m22();
    // Get instance field reference: private System.Double m23
    [[deprecated("Use field access instead!")]] double& dyn_m23();
    // Get instance field reference: private System.Double m24
    [[deprecated("Use field access instead!")]] double& dyn_m24();
    // Get instance field reference: private System.Double m31
    [[deprecated("Use field access instead!")]] double& dyn_m31();
    // Get instance field reference: private System.Double m32
    [[deprecated("Use field access instead!")]] double& dyn_m32();
    // Get instance field reference: private System.Double m33
    [[deprecated("Use field access instead!")]] double& dyn_m33();
    // Get instance field reference: private System.Double m34
    [[deprecated("Use field access instead!")]] double& dyn_m34();
    // Get instance field reference: private System.Double m41
    [[deprecated("Use field access instead!")]] double& dyn_m41();
    // Get instance field reference: private System.Double m42
    [[deprecated("Use field access instead!")]] double& dyn_m42();
    // Get instance field reference: private System.Double m43
    [[deprecated("Use field access instead!")]] double& dyn_m43();
    // Get instance field reference: private System.Double m44
    [[deprecated("Use field access instead!")]] double& dyn_m44();
    // Get instance field reference: private System.Boolean boolValue
    [[deprecated("Use field access instead!")]] bool& dyn_boolValue();
    // Get instance field reference: private System.String stringValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stringValue();
    // Get instance field reference: private System.Int64 longValue
    [[deprecated("Use field access instead!")]] int64_t& dyn_longValue();
    // Get instance field reference: private System.String propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_propertyName();
    // public System.Void SetValue(System.Single value)
    // Offset: 0x118CFD4
    void SetValue(float value);
    // public System.Void SetValue(UnityEngine.Vector2 value)
    // Offset: 0x118CFE8
    void SetValue(::UnityEngine::Vector2 value);
    // public System.Void SetValue(UnityEngine.Vector3 value)
    // Offset: 0x118D000
    void SetValue(::UnityEngine::Vector3 value);
    // public System.Void SetValue(UnityEngine.Vector4 value)
    // Offset: 0x118D020
    void SetValue(::UnityEngine::Vector4 value);
    // public System.Void SetValue(UnityEngine.Color value)
    // Offset: 0x118D040
    void SetValue(::UnityEngine::Color value);
    // public System.Void SetValue(UnityEngine.Matrix4x4 value)
    // Offset: 0x118D05C
    void SetValue(::UnityEngine::Matrix4x4 value);
    // public System.Void SetValue(System.Boolean value)
    // Offset: 0x118D128
    void SetValue(bool value);
    // public System.Void SetValue(System.String value)
    // Offset: 0x118D13C
    void SetValue(::StringW value);
    // public System.Void SetValue(System.Int64 value)
    // Offset: 0x118D14C
    void SetValue(int64_t value);
    // public System.Void Apply(System.IntPtr target)
    // Offset: 0x118D15C
    void Apply(::System::IntPtr target);
    // public System.Void .ctor()
    // Offset: 0x118D6CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FbxCustomProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::FbxCustomProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FbxCustomProperty*, creationType>()));
    }
  }; // UnLogickFactory.FbxCustomProperty
  #pragma pack(pop)
  static check_size<sizeof(FbxCustomProperty), 176 + sizeof(::StringW)> __UnLogickFactory_FbxCustomPropertySizeCheck;
  static_assert(sizeof(FbxCustomProperty) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxCustomProperty::FbxCustomPropertyType, "UnLogickFactory", "FbxCustomProperty/FbxCustomPropertyType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(float)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::UnityEngine::Vector2)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::UnityEngine::Vector3)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::UnityEngine::Vector4)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::UnityEngine::Color)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::UnityEngine::Matrix4x4)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(bool)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::StringW)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(int64_t)>(&UnLogickFactory::FbxCustomProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxCustomProperty::*)(::System::IntPtr)>(&UnLogickFactory::FbxCustomProperty::Apply)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxCustomProperty*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxCustomProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
