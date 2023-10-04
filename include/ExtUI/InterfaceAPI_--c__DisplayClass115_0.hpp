// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.InterfaceAPI
#include "ExtUI/InterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: CharacterStatsArray
  class CharacterStatsArray;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::InterfaceAPI::$$c__DisplayClass115_0);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::InterfaceAPI::$$c__DisplayClass115_0*, "ExtUI", "InterfaceAPI/<>c__DisplayClass115_0");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.InterfaceAPI/<>c__DisplayClass115_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1A68
  class InterfaceAPI::$$c__DisplayClass115_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<ExtUI.CharacterStatsArray> statsCallback
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::ExtUI::CharacterStatsArray*>* statsCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::ExtUI::CharacterStatsArray*>*) == 0x8);
    // public ExtUI.CharacterStatsArray thisArray
    // Size: 0x8
    // Offset: 0x18
    ::ExtUI::CharacterStatsArray* thisArray;
    // Field size check
    static_assert(sizeof(::ExtUI::CharacterStatsArray*) == 0x8);
    public:
    // Get instance field reference: public System.Action`1<ExtUI.CharacterStatsArray> statsCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::ExtUI::CharacterStatsArray*>*& dyn_statsCallback();
    // Get instance field reference: public ExtUI.CharacterStatsArray thisArray
    [[deprecated("Use field access instead!")]] ::ExtUI::CharacterStatsArray*& dyn_thisArray();
    // public System.Void .ctor()
    // Offset: 0x28D1378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterfaceAPI::$$c__DisplayClass115_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::InterfaceAPI::$$c__DisplayClass115_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterfaceAPI::$$c__DisplayClass115_0*, creationType>()));
    }
    // System.Void <GetCurrentStats>b__0()
    // Offset: 0x28DF544
    void $GetCurrentStats$b__0();
  }; // ExtUI.InterfaceAPI/<>c__DisplayClass115_0
  #pragma pack(pop)
  static check_size<sizeof(InterfaceAPI::$$c__DisplayClass115_0), 24 + sizeof(::ExtUI::CharacterStatsArray*)> __ExtUI_InterfaceAPI_$$c__DisplayClass115_0SizeCheck;
  static_assert(sizeof(InterfaceAPI::$$c__DisplayClass115_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c__DisplayClass115_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c__DisplayClass115_0::$GetCurrentStats$b__0
// Il2CppName: <GetCurrentStats>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c__DisplayClass115_0::*)()>(&ExtUI::InterfaceAPI::$$c__DisplayClass115_0::$GetCurrentStats$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c__DisplayClass115_0*), "<GetCurrentStats>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
