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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0*, "", "CharacterSelect/<>c__DisplayClass82_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CharacterSelect/<>c__DisplayClass82_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACDF68
  class CharacterSelect::$$c__DisplayClass82_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String newmsg
    // Size: 0x8
    // Offset: 0x10
    ::StringW newmsg;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public CharacterSelect <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CharacterSelect* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CharacterSelect*) == 0x8);
    public:
    // Get instance field reference: public System.String newmsg
    [[deprecated("Use field access instead!")]] ::StringW& dyn_newmsg();
    // Get instance field reference: public CharacterSelect <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CharacterSelect*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0xDE2998
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterSelect::$$c__DisplayClass82_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterSelect::$$c__DisplayClass82_0*, creationType>()));
    }
    // System.Void <ShowError>b__0()
    // Offset: 0xDEC178
    void $ShowError$b__0();
  }; // CharacterSelect/<>c__DisplayClass82_0
  #pragma pack(pop)
  static check_size<sizeof(CharacterSelect::$$c__DisplayClass82_0), 24 + sizeof(::GlobalNamespace::CharacterSelect*)> __GlobalNamespace_CharacterSelect_$$c__DisplayClass82_0SizeCheck;
  static_assert(sizeof(CharacterSelect::$$c__DisplayClass82_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0::$ShowError$b__0
// Il2CppName: <ShowError>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0::*)()>(&GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0::$ShowError$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterSelect::$$c__DisplayClass82_0*), "<ShowError>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};