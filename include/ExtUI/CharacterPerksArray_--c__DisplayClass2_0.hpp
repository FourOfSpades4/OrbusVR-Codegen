// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.CharacterPerksArray
#include "ExtUI/CharacterPerksArray.hpp"
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
NEED_NO_BOX(::ExtUI::CharacterPerksArray::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::CharacterPerksArray::$$c__DisplayClass2_0*, "ExtUI", "CharacterPerksArray/<>c__DisplayClass2_0");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.CharacterPerksArray/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1C28
  class CharacterPerksArray::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public ExtUI.CharacterPerksArray <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::ExtUI::CharacterPerksArray* $$4__this;
    // Field size check
    static_assert(sizeof(::ExtUI::CharacterPerksArray*) == 0x8);
    // public System.Action callback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* callback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public ExtUI.CharacterPerksArray <>4__this
    [[deprecated("Use field access instead!")]] ::ExtUI::CharacterPerksArray*& dyn_$$4__this();
    // Get instance field reference: public System.Action callback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0xF489F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterPerksArray::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::CharacterPerksArray::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterPerksArray::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Void <waitForPerks>b__0(System.String jsonResponse)
    // Offset: 0xF48B04
    void $waitForPerks$b__0(::StringW jsonResponse);
  }; // ExtUI.CharacterPerksArray/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(CharacterPerksArray::$$c__DisplayClass2_0), 24 + sizeof(::System::Action*)> __ExtUI_CharacterPerksArray_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(CharacterPerksArray::$$c__DisplayClass2_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::CharacterPerksArray::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::CharacterPerksArray::$$c__DisplayClass2_0::$waitForPerks$b__0
// Il2CppName: <waitForPerks>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::CharacterPerksArray::$$c__DisplayClass2_0::*)(::StringW)>(&ExtUI::CharacterPerksArray::$$c__DisplayClass2_0::$waitForPerks$b__0)> {
  static const MethodInfo* get() {
    static auto* jsonResponse = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::CharacterPerksArray::$$c__DisplayClass2_0*), "<waitForPerks>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonResponse});
  }
};