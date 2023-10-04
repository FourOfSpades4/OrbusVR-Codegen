// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.Css.CssProperty
#include "PowerUI/Css/CssProperty.hpp"
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
  // Forward declaring type: ComputedStyle
  class ComputedStyle;
  // Forward declaring type: Value
  class Value;
}
// Completed forward declares
// Type namespace: PowerUI.Css.Properties
namespace PowerUI::Css::Properties {
  // Forward declaring type: ColorProperty
  class ColorProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::Css::Properties::ColorProperty);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::Properties::ColorProperty*, "PowerUI.Css.Properties", "ColorProperty");
// Type namespace: PowerUI.Css.Properties
namespace PowerUI::Css::Properties {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.Properties.ColorProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorProperty : public ::PowerUI::Css::CssProperty {
    public:
    // public System.Void .ctor()
    // Offset: 0x184276C
    // Implemented from: PowerUI.Css.CssProperty
    // Base method: System.Void CssProperty::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::Css::Properties::ColorProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorProperty*, creationType>()));
    }
    // public override System.String[] GetProperties()
    // Offset: 0x18427A0
    // Implemented from: PowerUI.Css.CssProperty
    // Base method: System.String[] CssProperty::GetProperties()
    ::ArrayW<::StringW> GetProperties();
    // public override System.Void Apply(PowerUI.Css.ComputedStyle style, PowerUI.Css.Value value)
    // Offset: 0x1842850
    // Implemented from: PowerUI.Css.CssProperty
    // Base method: System.Void CssProperty::Apply(PowerUI.Css.ComputedStyle style, PowerUI.Css.Value value)
    void Apply(::PowerUI::Css::ComputedStyle* style, ::PowerUI::Css::Value* value);
  }; // PowerUI.Css.Properties.ColorProperty
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::Css::Properties::ColorProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::Css::Properties::ColorProperty::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::Css::Properties::ColorProperty::*)()>(&PowerUI::Css::Properties::ColorProperty::GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Properties::ColorProperty*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Css::Properties::ColorProperty::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::Css::Properties::ColorProperty::*)(::PowerUI::Css::ComputedStyle*, ::PowerUI::Css::Value*)>(&PowerUI::Css::Properties::ColorProperty::Apply)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "ComputedStyle")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Css::Properties::ColorProperty*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style, value});
  }
};
