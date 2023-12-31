// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExtUI
namespace ExtUI {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: TeleportDestinationsArray
  class TeleportDestinationsArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::TeleportDestinationsArray);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::TeleportDestinationsArray*, "ExtUI", "TeleportDestinationsArray");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.TeleportDestinationsArray
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportDestinationsArray : public ::Il2CppObject {
    public:
    // Nested type: ::ExtUI::TeleportDestinationsArray::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    public:
    // public System.String characterid
    // Size: 0x8
    // Offset: 0x10
    ::StringW characterid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String pillarkey
    // Size: 0x8
    // Offset: 0x18
    ::StringW pillarkey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] destinations
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> destinations;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public System.String characterid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_characterid();
    // Get instance field reference: public System.String pillarkey
    [[deprecated("Use field access instead!")]] ::StringW& dyn_pillarkey();
    // Get instance field reference: public System.String[] destinations
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_destinations();
    // public System.Void waitForDestinations(System.String pillarKey, System.Action callback)
    // Offset: 0x28D180C
    void waitForDestinations(::StringW pillarKey, ::System::Action* callback);
    // public System.Void .ctor()
    // Offset: 0x28D17A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportDestinationsArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::TeleportDestinationsArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportDestinationsArray*, creationType>()));
    }
  }; // ExtUI.TeleportDestinationsArray
  #pragma pack(pop)
  static check_size<sizeof(TeleportDestinationsArray), 32 + sizeof(::ArrayW<::StringW>)> __ExtUI_TeleportDestinationsArraySizeCheck;
  static_assert(sizeof(TeleportDestinationsArray) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::TeleportDestinationsArray::waitForDestinations
// Il2CppName: waitForDestinations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::TeleportDestinationsArray::*)(::StringW, ::System::Action*)>(&ExtUI::TeleportDestinationsArray::waitForDestinations)> {
  static const MethodInfo* get() {
    static auto* pillarKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::TeleportDestinationsArray*), "waitForDestinations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pillarKey, callback});
  }
};
// Writing MetadataGetter for method: ExtUI::TeleportDestinationsArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
