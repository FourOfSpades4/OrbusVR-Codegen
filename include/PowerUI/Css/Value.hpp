// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.Css.ValueType
#include "PowerUI/Css/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI::Css
namespace PowerUI::Css {
  // Forward declaring type: Calculation
  class Calculation;
  // Forward declaring type: CssProperty
  class CssProperty;
  // Forward declaring type: ComputedStyle
  class ComputedStyle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
}
// Completed forward declares
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Forward declaring type: Value
  class Value;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::Css::Value);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::Value*, "PowerUI.Css", "Value");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.Value
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: AD1468
  class Value : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 PX
    // Size: 0x4
    // Offset: 0x10
    int PX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PX and: Text
    char __padding0[0x4] = {};
    // public System.String Text
    // Size: 0x8
    // Offset: 0x18
    ::StringW Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single Single
    // Size: 0x4
    // Offset: 0x20
    float Single;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean Boolean
    // Size: 0x1
    // Offset: 0x24
    bool Boolean;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean Important
    // Size: 0x1
    // Offset: 0x25
    bool Important;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Important and: InnerValues
    char __padding4[0x2] = {};
    // public PowerUI.Css.Value[] InnerValues
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::PowerUI::Css::Value*> InnerValues;
    // Field size check
    static_assert(sizeof(::ArrayW<::PowerUI::Css::Value*>) == 0x8);
    // public PowerUI.Css.Calculation Calculation
    // Size: 0x8
    // Offset: 0x30
    ::PowerUI::Css::Calculation* Calculation;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Calculation*) == 0x8);
    // public PowerUI.Css.ValueType Type
    // Size: 0x4
    // Offset: 0x38
    ::PowerUI::Css::ValueType Type;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::ValueType) == 0x4);
    public:
    // Get instance field reference: public System.Int32 PX
    [[deprecated("Use field access instead!")]] int& dyn_PX();
    // Get instance field reference: public System.String Text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Text();
    // Get instance field reference: public System.Single Single
    [[deprecated("Use field access instead!")]] float& dyn_Single();
    // Get instance field reference: public System.Boolean Boolean
    [[deprecated("Use field access instead!")]] bool& dyn_Boolean();
    // Get instance field reference: public System.Boolean Important
    [[deprecated("Use field access instead!")]] bool& dyn_Important();
    // Get instance field reference: public PowerUI.Css.Value[] InnerValues
    [[deprecated("Use field access instead!")]] ::ArrayW<::PowerUI::Css::Value*>& dyn_InnerValues();
    // Get instance field reference: public PowerUI.Css.Calculation Calculation
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Calculation*& dyn_Calculation();
    // Get instance field reference: public PowerUI.Css.ValueType Type
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::ValueType& dyn_Type();
    // static public UnityEngine.Color GetColour(System.String valueText)
    // Offset: 0x18522A0
    static ::UnityEngine::Color GetColour(::StringW valueText);
    // static public System.Void GetColour(System.String valueText, out System.Single r, out System.Single g, out System.Single b, out System.Single a)
    // Offset: 0x1852348
    static void GetColour(::StringW valueText, ByRef<float> r, ByRef<float> g, ByRef<float> b, ByRef<float> a);
    // static public System.Int32 GetInnerIndex(ref System.String property)
    // Offset: 0x184D75C
    static int GetInnerIndex(ByRef<::StringW> property);
    // static public PowerUI.Css.ValueType TypeOf(PowerUI.Css.CssProperty property, ref System.String value)
    // Offset: 0x184DFA0
    static ::PowerUI::Css::ValueType TypeOf(::PowerUI::Css::CssProperty* property, ByRef<::StringW> value);
    // static public System.Boolean IsSingle(System.String valueText)
    // Offset: 0x185269C
    static bool IsSingle(::StringW valueText);
    // static public PowerUI.Css.ValueType TypeOf(System.String valueText)
    // Offset: 0x184DA7C
    static ::PowerUI::Css::ValueType TypeOf(::StringW valueText);
    // public System.Void .ctor()
    // Offset: 0x184E348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Value* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::Css::Value::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Value*, creationType>()));
    }
    // public System.Void .ctor(System.String text)
    // Offset: 0x1852798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Value* New_ctor(::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::Css::Value::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Value*, creationType>(text)));
    }
    // public System.Void .ctor(System.String text, PowerUI.Css.ValueType type)
    // Offset: 0x1840FB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Value* New_ctor(::StringW text, ::PowerUI::Css::ValueType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::Css::Value::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Value*, creationType>(text, type)));
    }
    // public System.Boolean IsAuto()
    // Offset: 0x18454C8
    bool IsAuto();
    // public System.Boolean IsAbsolute()
    // Offset: 0x18527DC
    bool IsAbsolute();
    // public System.Boolean Equals(PowerUI.Css.Value value)
    // Offset: 0x18528AC
    bool Equals(::PowerUI::Css::Value* value);
    // public System.Void MakeAbsolute(PowerUI.Css.CssProperty property, PowerUI.Element element)
    // Offset: 0x1852AEC
    void MakeAbsolute(::PowerUI::Css::CssProperty* property, ::PowerUI::Element* element);
    // public System.Void InheritFrom(PowerUI.Css.Value parent)
    // Offset: 0x1852FF4
    void InheritFrom(::PowerUI::Css::Value* parent);
    // private System.Int32 ParentFontSize(PowerUI.Css.ComputedStyle style)
    // Offset: 0x1852F44
    int ParentFontSize(::PowerUI::Css::ComputedStyle* style);
    // public System.Void BakePX(System.Int32 size)
    // Offset: 0x1852FC8
    void BakePX(int size);
    // public PowerUI.Css.Value Copy()
    // Offset: 0x184C39C
    ::PowerUI::Css::Value* Copy();
    // public System.Void SetFloat(System.Single value)
    // Offset: 0x185303C
    void SetFloat(float value);
    // public System.Single ToFloat()
    // Offset: 0x18499D0
    float ToFloat();
    // public UnityEngine.Color ToColor()
    // Offset: 0x18402AC
    ::UnityEngine::Color ToColor();
    // private System.String InnerValueString()
    // Offset: 0x18534B0
    ::StringW InnerValueString();
    // public System.Void Reset()
    // Offset: 0x18535D4
    void Reset();
    // public System.Void Set(System.String valueText)
    // Offset: 0x184E3D8
    void Set(::StringW valueText);
    // public System.Void Set(System.String valueText, PowerUI.Css.ValueType type)
    // Offset: 0x1841D30
    void Set(::StringW valueText, ::PowerUI::Css::ValueType type);
    // public System.Int32 GetMixed(System.Int32 dimension)
    // Offset: 0x1853924
    int GetMixed(int dimension);
    // public System.Void SetPercent(System.Single percent)
    // Offset: 0x1840A04
    void SetPercent(float percent);
    // public System.Void Offset(PowerUI.Css.Value by)
    // Offset: 0x1840A14
    void Offset(::PowerUI::Css::Value* by);
    // public System.Boolean AllSameValues()
    // Offset: 0x185396C
    bool AllSameValues();
    // static private System.Int32 DoubleNibble(System.Int32 nibble)
    // Offset: 0x1852694
    static int DoubleNibble(int nibble);
    // public System.String GetText(System.Int32 index)
    // Offset: 0x1845CB8
    ::StringW GetText(int index);
    // public System.Single GetRadians(System.Int32 index)
    // Offset: 0x18475EC
    float GetRadians(int index);
    // public System.Single GetFloat(System.Int32 index)
    // Offset: 0x1846AC8
    float GetFloat(int index);
    // public System.Int32 GetPX(System.Int32 index)
    // Offset: 0x184155C
    int GetPX(int index);
    // public UnityEngine.Color GetColor(System.Int32 index)
    // Offset: 0x1853A34
    ::UnityEngine::Color GetColor(int index);
    // public System.String ToHex()
    // Offset: 0x1853414
    ::StringW ToHex();
    // public PowerUI.Css.Value get_Item(System.Int32 index)
    // Offset: 0x1840FF8
    ::PowerUI::Css::Value* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, PowerUI.Css.Value value)
    // Offset: 0x184E358
    void set_Item(int index, ::PowerUI::Css::Value* value);
    // public System.Void SetInnerValues(System.Int32 count)
    // Offset: 0x1853634
    void SetInnerValues(int count);
    // public System.Void SetInnerValues(System.String valueText, System.Int32 count)
    // Offset: 0x185376C
    void SetInnerValues(::StringW valueText, int count);
    // public override System.String ToString()
    // Offset: 0x1853090
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // PowerUI.Css.Value
  #pragma pack(pop)
  static check_size<sizeof(Value), 56 + sizeof(::PowerUI::Css::ValueType)> __PowerUI_Css_ValueSizeCheck;
  static_assert(sizeof(Value) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::Css::Value::GetColour
// Il2CppName: GetColour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::StringW)>(&PowerUI::Css::Value::GetColour)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetColour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetColour
// Il2CppName: GetColour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&PowerUI::Css::Value::GetColour)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetColour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText, r, g, b, a});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetInnerIndex
// Il2CppName: GetInnerIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::StringW>)>(&PowerUI::Css::Value::GetInnerIndex)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetInnerIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::TypeOf
// Il2CppName: TypeOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Css::ValueType (*)(::PowerUI::Css::CssProperty*, ByRef<::StringW>)>(&PowerUI::Css::Value::TypeOf)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "CssProperty")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "TypeOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, value});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::IsSingle
// Il2CppName: IsSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&PowerUI::Css::Value::IsSingle)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "IsSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::TypeOf
// Il2CppName: TypeOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Css::ValueType (*)(::StringW)>(&PowerUI::Css::Value::TypeOf)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "TypeOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::Css::Value::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::Css::Value::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::Css::Value::IsAuto
// Il2CppName: IsAuto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::IsAuto)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "IsAuto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::IsAbsolute
// Il2CppName: IsAbsolute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::IsAbsolute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "IsAbsolute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::Css::Value::*)(::PowerUI::Css::Value*)>(&PowerUI::Css::Value::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::MakeAbsolute
// Il2CppName: MakeAbsolute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(::PowerUI::Css::CssProperty*, ::PowerUI::Element*)>(&PowerUI::Css::Value::MakeAbsolute)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "CssProperty")->byval_arg;
    static auto* element = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "MakeAbsolute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, element});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::InheritFrom
// Il2CppName: InheritFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(::PowerUI::Css::Value*)>(&PowerUI::Css::Value::InheritFrom)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "InheritFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::ParentFontSize
// Il2CppName: ParentFontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::Css::Value::*)(::PowerUI::Css::ComputedStyle*)>(&PowerUI::Css::Value::ParentFontSize)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "ComputedStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "ParentFontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::BakePX
// Il2CppName: BakePX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::BakePX)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "BakePX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Css::Value* (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(float)>(&PowerUI::Css::Value::SetFloat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::ToFloat
// Il2CppName: ToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::ToFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "ToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::ToColor
// Il2CppName: ToColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::ToColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "ToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::InnerValueString
// Il2CppName: InnerValueString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::InnerValueString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "InnerValueString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(::StringW)>(&PowerUI::Css::Value::Set)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(::StringW, ::PowerUI::Css::ValueType)>(&PowerUI::Css::Value::Set)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "ValueType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText, type});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetMixed
// Il2CppName: GetMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::GetMixed)> {
  static const MethodInfo* get() {
    static auto* dimension = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dimension});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::SetPercent
// Il2CppName: SetPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(float)>(&PowerUI::Css::Value::SetPercent)> {
  static const MethodInfo* get() {
    static auto* percent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "SetPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{percent});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::Offset
// Il2CppName: Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(::PowerUI::Css::Value*)>(&PowerUI::Css::Value::Offset)> {
  static const MethodInfo* get() {
    static auto* by = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{by});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::AllSameValues
// Il2CppName: AllSameValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::AllSameValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "AllSameValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::DoubleNibble
// Il2CppName: DoubleNibble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&PowerUI::Css::Value::DoubleNibble)> {
  static const MethodInfo* get() {
    static auto* nibble = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "DoubleNibble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nibble});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::GetText)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetRadians
// Il2CppName: GetRadians
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::GetRadians)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetRadians", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::GetFloat)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetPX
// Il2CppName: GetPX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::GetPX)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetPX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::GetColor)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::ToHex
// Il2CppName: ToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::ToHex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "ToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Css::Value* (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(int, ::PowerUI::Css::Value*)>(&PowerUI::Css::Value::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::SetInnerValues
// Il2CppName: SetInnerValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(int)>(&PowerUI::Css::Value::SetInnerValues)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "SetInnerValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::SetInnerValues
// Il2CppName: SetInnerValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Value::*)(::StringW, int)>(&PowerUI::Css::Value::SetInnerValues)> {
  static const MethodInfo* get() {
    static auto* valueText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "SetInnerValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueText, count});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Value::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::Css::Value::*)()>(&PowerUI::Css::Value::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Value*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
