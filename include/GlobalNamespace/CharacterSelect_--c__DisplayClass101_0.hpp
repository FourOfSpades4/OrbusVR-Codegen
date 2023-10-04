// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CharacterSelect
#include "GlobalNamespace/CharacterSelect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0*, "", "CharacterSelect/<>c__DisplayClass101_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: CharacterSelect/<>c__DisplayClass101_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACDF88
  class CharacterSelect::$$c__DisplayClass101_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<System.String> callback
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::StringW>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::StringW>*
    constexpr operator ::System::Action_1<::StringW>*() const noexcept {
      return callback;
    }
    // Get instance field reference: public System.Action`1<System.String> callback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0xDE5924
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterSelect::$$c__DisplayClass101_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterSelect::$$c__DisplayClass101_0*, creationType>()));
    }
    // System.Void <doCreateCharacter>b__0(System.String result)
    // Offset: 0xDEC02C
    void $doCreateCharacter$b__0(::StringW result);
  }; // CharacterSelect/<>c__DisplayClass101_0
  #pragma pack(pop)
  static check_size<sizeof(CharacterSelect::$$c__DisplayClass101_0), 16 + sizeof(::System::Action_1<::StringW>*)> __GlobalNamespace_CharacterSelect_$$c__DisplayClass101_0SizeCheck;
  static_assert(sizeof(CharacterSelect::$$c__DisplayClass101_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0::$doCreateCharacter$b__0
// Il2CppName: <doCreateCharacter>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0::*)(::StringW)>(&GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0::$doCreateCharacter$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterSelect::$$c__DisplayClass101_0*), "<doCreateCharacter>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
