// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.InfusionCalculationArray
#include "ExtUI/InfusionCalculationArray.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0*, "ExtUI", "InfusionCalculationArray/<>c__DisplayClass4_0");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.InfusionCalculationArray/<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1C08
  class InfusionCalculationArray::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public ExtUI.InfusionCalculationArray <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::ExtUI::InfusionCalculationArray* $$4__this;
    // Field size check
    static_assert(sizeof(::ExtUI::InfusionCalculationArray*) == 0x8);
    // public System.Action callback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* callback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public ExtUI.InfusionCalculationArray <>4__this
    [[deprecated("Use field access instead!")]] ::ExtUI::InfusionCalculationArray*& dyn_$$4__this();
    // Get instance field reference: public System.Action callback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0x28CC048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InfusionCalculationArray::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InfusionCalculationArray::$$c__DisplayClass4_0*, creationType>()));
    }
    // System.Void <waitForCalculation>b__0(System.String jsonResponse)
    // Offset: 0x28CC068
    void $waitForCalculation$b__0(::StringW jsonResponse);
  }; // ExtUI.InfusionCalculationArray/<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(InfusionCalculationArray::$$c__DisplayClass4_0), 24 + sizeof(::System::Action*)> __ExtUI_InfusionCalculationArray_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(InfusionCalculationArray::$$c__DisplayClass4_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0::$waitForCalculation$b__0
// Il2CppName: <waitForCalculation>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0::*)(::StringW)>(&ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0::$waitForCalculation$b__0)> {
  static const MethodInfo* get() {
    static auto* jsonResponse = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InfusionCalculationArray::$$c__DisplayClass4_0*), "<waitForCalculation>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonResponse});
  }
};
