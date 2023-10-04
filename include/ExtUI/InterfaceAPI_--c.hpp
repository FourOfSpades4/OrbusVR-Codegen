// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.InterfaceAPI
#include "ExtUI/InterfaceAPI.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: FellowshipListEntry
  class FellowshipListEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::InterfaceAPI::$$c);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::InterfaceAPI::$$c*, "ExtUI", "InterfaceAPI/<>c");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.InterfaceAPI/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1A18
  class InterfaceAPI::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly ExtUI.InterfaceAPI/<>c <>9
    static ::ExtUI::InterfaceAPI::$$c* _get_$$9();
    // Set static field: static public readonly ExtUI.InterfaceAPI/<>c <>9
    static void _set_$$9(::ExtUI::InterfaceAPI::$$c* value);
    // Get static field: static public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User> <>9__93_2
    static typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>::Callback* _get_$$9__93_2();
    // Set static field: static public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User> <>9__93_2
    static void _set_$$9__93_2(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>::Callback* value);
    // Get static field: static public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SdkAccountList> <>9__93_1
    static typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*>::Callback* _get_$$9__93_1();
    // Set static field: static public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SdkAccountList> <>9__93_1
    static void _set_$$9__93_1(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*>::Callback* value);
    // Get static field: static public Oculus.Platform.Message/Callback <>9__93_0
    static ::Oculus::Platform::Message::Callback* _get_$$9__93_0();
    // Set static field: static public Oculus.Platform.Message/Callback <>9__93_0
    static void _set_$$9__93_0(::Oculus::Platform::Message::Callback* value);
    // Get static field: static public System.Action`1<System.String> <>9__100_0
    static ::System::Action_1<::StringW>* _get_$$9__100_0();
    // Set static field: static public System.Action`1<System.String> <>9__100_0
    static void _set_$$9__100_0(::System::Action_1<::StringW>* value);
    // Get static field: static public System.Comparison`1<ExtUI.FellowshipListEntry> <>9__159_0
    static ::System::Comparison_1<::ExtUI::FellowshipListEntry*>* _get_$$9__159_0();
    // Set static field: static public System.Comparison`1<ExtUI.FellowshipListEntry> <>9__159_0
    static void _set_$$9__159_0(::System::Comparison_1<::ExtUI::FellowshipListEntry*>* value);
    // Get static field: static public System.Comparison`1<ExtUI.FellowshipListEntry> <>9__159_1
    static ::System::Comparison_1<::ExtUI::FellowshipListEntry*>* _get_$$9__159_1();
    // Set static field: static public System.Comparison`1<ExtUI.FellowshipListEntry> <>9__159_1
    static void _set_$$9__159_1(::System::Comparison_1<::ExtUI::FellowshipListEntry*>* value);
    // Get static field: static public System.Action <>9__198_0
    static ::System::Action* _get_$$9__198_0();
    // Set static field: static public System.Action <>9__198_0
    static void _set_$$9__198_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x28DEA3C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x28DEAA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterfaceAPI::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::InterfaceAPI::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterfaceAPI::$$c*, creationType>()));
    }
    // System.Void <DoLoginFlow>b__93_0(Oculus.Platform.Message msg)
    // Offset: 0x28DEAA8
    void $DoLoginFlow$b__93_0(::Oculus::Platform::Message* msg);
    // System.Void <DoLoginFlow>b__93_1(Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList> acctmsg)
    // Offset: 0x28DEC4C
    void $DoLoginFlow$b__93_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*>* acctmsg);
    // System.Void <DoLoginFlow>b__93_2(Oculus.Platform.Message`1<Oculus.Platform.Models.User> usermsg)
    // Offset: 0x28DF13C
    void $DoLoginFlow$b__93_2(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* usermsg);
    // System.Void <LoginCharacter>b__100_0(System.String thisToken)
    // Offset: 0x28DF328
    void $LoginCharacter$b__100_0(::StringW thisToken);
    // System.Int32 <UpdateFellowshipListFromString>b__159_0(ExtUI.FellowshipListEntry x, ExtUI.FellowshipListEntry y)
    // Offset: 0x28DF414
    int $UpdateFellowshipListFromString$b__159_0(::ExtUI::FellowshipListEntry* x, ::ExtUI::FellowshipListEntry* y);
    // System.Int32 <UpdateFellowshipListFromString>b__159_1(ExtUI.FellowshipListEntry x, ExtUI.FellowshipListEntry y)
    // Offset: 0x28DF45C
    int $UpdateFellowshipListFromString$b__159_1(::ExtUI::FellowshipListEntry* x, ::ExtUI::FellowshipListEntry* y);
    // System.Void <UpdateTradeOffer>b__198_0()
    // Offset: 0x28DF4A4
    void $UpdateTradeOffer$b__198_0();
  }; // ExtUI.InterfaceAPI/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExtUI::InterfaceAPI::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$DoLoginFlow$b__93_0
// Il2CppName: <DoLoginFlow>b__93_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c::*)(::Oculus::Platform::Message*)>(&ExtUI::InterfaceAPI::$$c::$DoLoginFlow$b__93_0)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<DoLoginFlow>b__93_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$DoLoginFlow$b__93_1
// Il2CppName: <DoLoginFlow>b__93_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*>*)>(&ExtUI::InterfaceAPI::$$c::$DoLoginFlow$b__93_1)> {
  static const MethodInfo* get() {
    static auto* acctmsg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "SdkAccountList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<DoLoginFlow>b__93_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{acctmsg});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$DoLoginFlow$b__93_2
// Il2CppName: <DoLoginFlow>b__93_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&ExtUI::InterfaceAPI::$$c::$DoLoginFlow$b__93_2)> {
  static const MethodInfo* get() {
    static auto* usermsg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<DoLoginFlow>b__93_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usermsg});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$LoginCharacter$b__100_0
// Il2CppName: <LoginCharacter>b__100_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c::*)(::StringW)>(&ExtUI::InterfaceAPI::$$c::$LoginCharacter$b__100_0)> {
  static const MethodInfo* get() {
    static auto* thisToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<LoginCharacter>b__100_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisToken});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$UpdateFellowshipListFromString$b__159_0
// Il2CppName: <UpdateFellowshipListFromString>b__159_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExtUI::InterfaceAPI::$$c::*)(::ExtUI::FellowshipListEntry*, ::ExtUI::FellowshipListEntry*)>(&ExtUI::InterfaceAPI::$$c::$UpdateFellowshipListFromString$b__159_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("ExtUI", "FellowshipListEntry")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("ExtUI", "FellowshipListEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<UpdateFellowshipListFromString>b__159_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$UpdateFellowshipListFromString$b__159_1
// Il2CppName: <UpdateFellowshipListFromString>b__159_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExtUI::InterfaceAPI::$$c::*)(::ExtUI::FellowshipListEntry*, ::ExtUI::FellowshipListEntry*)>(&ExtUI::InterfaceAPI::$$c::$UpdateFellowshipListFromString$b__159_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("ExtUI", "FellowshipListEntry")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("ExtUI", "FellowshipListEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<UpdateFellowshipListFromString>b__159_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$$c::$UpdateTradeOffer$b__198_0
// Il2CppName: <UpdateTradeOffer>b__198_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$$c::*)()>(&ExtUI::InterfaceAPI::$$c::$UpdateTradeOffer$b__198_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$$c*), "<UpdateTradeOffer>b__198_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
