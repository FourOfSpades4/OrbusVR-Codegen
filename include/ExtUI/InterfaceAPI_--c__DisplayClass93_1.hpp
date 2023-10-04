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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserProof
  class UserProof;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::InterfaceAPI::$$c__DisplayClass93_1);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::InterfaceAPI::$$c__DisplayClass93_1*, "ExtUI", "InterfaceAPI/<>c__DisplayClass93_1");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.InterfaceAPI/<>c__DisplayClass93_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1A08
  class InterfaceAPI::$$c__DisplayClass93_1 : public ::Il2CppObject {
    public:
    public:
    // public System.String userid
    // Size: 0x8
    // Offset: 0x10
    ::StringW userid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return userid;
    }
    // Get instance field reference: public System.String userid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userid();
    // public System.Void .ctor()
    // Offset: 0x28DF134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterfaceAPI::$$c__DisplayClass93_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::InterfaceAPI::$$c__DisplayClass93_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterfaceAPI::$$c__DisplayClass93_1*, creationType>()));
    }
    // System.Void <DoLoginFlow>b__4(Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof> noncemsg)
    // Offset: 0x28DFB90
    void $DoLoginFlow$b__4(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>* noncemsg);
  }; // ExtUI.InterfaceAPI/<>c__DisplayClass93_1
  #pragma pack(pop)
  static check_size<sizeof(InterfaceAPI::$$c__DisplayClass93_1), 16 + sizeof(::StringW)> __ExtUI_InterfaceAPI_$$c__DisplayClass93_1SizeCheck;
  static_assert(sizeof(InterfaceAPI::$$c__DisplayClass93_1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c__DisplayClass93_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c__DisplayClass93_1::$DoLoginFlow$b__4
// Il2CppName: <DoLoginFlow>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c__DisplayClass93_1::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*)>(&ExtUI::InterfaceAPI::$$c__DisplayClass93_1::$DoLoginFlow$b__4)> {
  static const MethodInfo* get() {
    static auto* noncemsg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserProof")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c__DisplayClass93_1*), "<DoLoginFlow>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noncemsg});
  }
};