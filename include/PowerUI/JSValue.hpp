// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.JSObject
#include "PowerUI/JSObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: JSValue
  class JSValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::JSValue);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::JSValue*, "PowerUI", "JSValue");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.JSValue
  // [TokenAttribute] Offset: FFFFFFFF
  class JSValue : public ::PowerUI::JSObject {
    public:
    public:
    // public System.String Value
    // Size: 0x8
    // Offset: 0x10
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.String Value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Value();
    // public System.Void .ctor(System.String value)
    // Offset: 0x1A53948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSValue* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::JSValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSValue*, creationType>(value)));
    }
    // public System.Void .ctor()
    // Offset: 0x1A53A64
    // Implemented from: PowerUI.JSObject
    // Base method: System.Void JSObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::JSValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSValue*, creationType>()));
    }
    // public override System.String ToJSONString()
    // Offset: 0x1A53A6C
    // Implemented from: PowerUI.JSObject
    // Base method: System.String JSObject::ToJSONString()
    ::StringW ToJSONString();
    // public override System.String ToString()
    // Offset: 0x1A53AF4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // PowerUI.JSValue
  #pragma pack(pop)
  static check_size<sizeof(JSValue), 16 + sizeof(::StringW)> __PowerUI_JSValueSizeCheck;
  static_assert(sizeof(JSValue) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::JSValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::JSValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::JSValue::ToJSONString
// Il2CppName: ToJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::JSValue::*)()>(&PowerUI::JSValue::ToJSONString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::JSValue*), "ToJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::JSValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::JSValue::*)()>(&PowerUI::JSValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::JSValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
