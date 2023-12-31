// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.IAccountArchiveMessage
#include "VivoxUnity/IAccountArchiveMessage.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyChangedEventHandler
  class PropertyChangedEventHandler;
}
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: ILoginSession
  class ILoginSession;
  // Forward declaring type: AccountId
  class AccountId;
  // Forward declaring type: ChannelId
  class ChannelId;
}
// Completed forward declares
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Forward declaring type: AccountArchiveMessage
  class AccountArchiveMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::AccountArchiveMessage);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::AccountArchiveMessage*, "VivoxUnity.Private", "AccountArchiveMessage");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.AccountArchiveMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class AccountArchiveMessage : public ::Il2CppObject/*, public ::VivoxUnity::IAccountArchiveMessage*/ {
    public:
    public:
    // private System.Exception _exception
    // Size: 0x8
    // Offset: 0x10
    ::System::Exception* exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE2D8
    // private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyChangedEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE2E8
    // private System.String <Key>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE2F8
    // private System.DateTime <ReceivedTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime ReceivedTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE308
    // private System.String <Message>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE318
    // private System.String <Language>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW Language;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE328
    // private VivoxUnity.ILoginSession <LoginSession>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::VivoxUnity::ILoginSession* LoginSession;
    // Field size check
    static_assert(sizeof(::VivoxUnity::ILoginSession*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE338
    // private System.String <QueryId>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::StringW QueryId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE348
    // private VivoxUnity.AccountId <RemoteParticipant>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::VivoxUnity::AccountId* RemoteParticipant;
    // Field size check
    static_assert(sizeof(::VivoxUnity::AccountId*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE358
    // private VivoxUnity.ChannelId <Channel>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::VivoxUnity::ChannelId* Channel;
    // Field size check
    static_assert(sizeof(::VivoxUnity::ChannelId*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE368
    // private System.Boolean <Inbound>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool Inbound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Inbound and: MessageId
    char __padding10[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xABE378
    // private System.String <MessageId>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::StringW MessageId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IAccountArchiveMessage
    operator ::VivoxUnity::IAccountArchiveMessage() noexcept {
      return *reinterpret_cast<::VivoxUnity::IAccountArchiveMessage*>(this);
    }
    // Get instance field reference: private System.Exception _exception
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn__exception();
    // Get instance field reference: private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyChangedEventHandler*& dyn_PropertyChanged();
    // Get instance field reference: private System.String <Key>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Key$k__BackingField();
    // Get instance field reference: private System.DateTime <ReceivedTime>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_$ReceivedTime$k__BackingField();
    // Get instance field reference: private System.String <Message>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Message$k__BackingField();
    // Get instance field reference: private System.String <Language>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Language$k__BackingField();
    // Get instance field reference: private VivoxUnity.ILoginSession <LoginSession>k__BackingField
    [[deprecated("Use field access instead!")]] ::VivoxUnity::ILoginSession*& dyn_$LoginSession$k__BackingField();
    // Get instance field reference: private System.String <QueryId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$QueryId$k__BackingField();
    // Get instance field reference: private VivoxUnity.AccountId <RemoteParticipant>k__BackingField
    [[deprecated("Use field access instead!")]] ::VivoxUnity::AccountId*& dyn_$RemoteParticipant$k__BackingField();
    // Get instance field reference: private VivoxUnity.ChannelId <Channel>k__BackingField
    [[deprecated("Use field access instead!")]] ::VivoxUnity::ChannelId*& dyn_$Channel$k__BackingField();
    // Get instance field reference: private System.Boolean <Inbound>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Inbound$k__BackingField();
    // Get instance field reference: private System.String <MessageId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$MessageId$k__BackingField();
    // public System.Void add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14B9A40
    void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Void remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14B9B2C
    void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Exception get_Exception()
    // Offset: 0x14B9C18
    ::System::Exception* get_Exception();
    // public System.Void set_Exception(System.Exception value)
    // Offset: 0x14B9C20
    void set_Exception(::System::Exception* value);
    // public System.String get_Key()
    // Offset: 0x14B9CCC
    ::StringW get_Key();
    // public System.Void set_Key(System.String value)
    // Offset: 0x14B9CD4
    void set_Key(::StringW value);
    // public System.DateTime get_ReceivedTime()
    // Offset: 0x14B9CDC
    ::System::DateTime get_ReceivedTime();
    // public System.Void set_ReceivedTime(System.DateTime value)
    // Offset: 0x14B9CE4
    void set_ReceivedTime(::System::DateTime value);
    // public System.String get_Message()
    // Offset: 0x14B9CEC
    ::StringW get_Message();
    // public System.Void set_Message(System.String value)
    // Offset: 0x14B9CF4
    void set_Message(::StringW value);
    // public System.String get_Language()
    // Offset: 0x14B9CFC
    ::StringW get_Language();
    // public System.Void set_Language(System.String value)
    // Offset: 0x14B9D04
    void set_Language(::StringW value);
    // public VivoxUnity.ILoginSession get_LoginSession()
    // Offset: 0x14B9D0C
    ::VivoxUnity::ILoginSession* get_LoginSession();
    // public System.Void set_LoginSession(VivoxUnity.ILoginSession value)
    // Offset: 0x14B9D14
    void set_LoginSession(::VivoxUnity::ILoginSession* value);
    // public System.String get_QueryId()
    // Offset: 0x14B9D1C
    ::StringW get_QueryId();
    // public System.Void set_QueryId(System.String value)
    // Offset: 0x14B9D24
    void set_QueryId(::StringW value);
    // public VivoxUnity.AccountId get_RemoteParticipant()
    // Offset: 0x14B9D2C
    ::VivoxUnity::AccountId* get_RemoteParticipant();
    // public System.Void set_RemoteParticipant(VivoxUnity.AccountId value)
    // Offset: 0x14B9D34
    void set_RemoteParticipant(::VivoxUnity::AccountId* value);
    // public VivoxUnity.ChannelId get_Channel()
    // Offset: 0x14B9D3C
    ::VivoxUnity::ChannelId* get_Channel();
    // public System.Void set_Channel(VivoxUnity.ChannelId value)
    // Offset: 0x14B9D44
    void set_Channel(::VivoxUnity::ChannelId* value);
    // public System.Boolean get_Inbound()
    // Offset: 0x14B9D4C
    bool get_Inbound();
    // public System.Void set_Inbound(System.Boolean value)
    // Offset: 0x14B9D54
    void set_Inbound(bool value);
    // public System.String get_MessageId()
    // Offset: 0x14B9D60
    ::StringW get_MessageId();
    // public System.Void set_MessageId(System.String value)
    // Offset: 0x14B9D68
    void set_MessageId(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x14B9D70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccountArchiveMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::AccountArchiveMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccountArchiveMessage*, creationType>()));
    }
  }; // VivoxUnity.Private.AccountArchiveMessage
  #pragma pack(pop)
  static check_size<sizeof(AccountArchiveMessage), 104 + sizeof(::StringW)> __VivoxUnity_Private_AccountArchiveMessageSizeCheck;
  static_assert(sizeof(AccountArchiveMessage) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::add_PropertyChanged
// Il2CppName: add_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::AccountArchiveMessage::add_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "add_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::remove_PropertyChanged
// Il2CppName: remove_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::AccountArchiveMessage::remove_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "remove_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_Exception
// Il2CppName: set_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::System::Exception*)>(&VivoxUnity::Private::AccountArchiveMessage::set_Exception)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::StringW)>(&VivoxUnity::Private::AccountArchiveMessage::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_ReceivedTime
// Il2CppName: get_ReceivedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_ReceivedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_ReceivedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_ReceivedTime
// Il2CppName: set_ReceivedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::System::DateTime)>(&VivoxUnity::Private::AccountArchiveMessage::set_ReceivedTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_ReceivedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_Message
// Il2CppName: set_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::StringW)>(&VivoxUnity::Private::AccountArchiveMessage::set_Message)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_Language
// Il2CppName: get_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_Language)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_Language
// Il2CppName: set_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::StringW)>(&VivoxUnity::Private::AccountArchiveMessage::set_Language)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_LoginSession
// Il2CppName: get_LoginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::ILoginSession* (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_LoginSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_LoginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_LoginSession
// Il2CppName: set_LoginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::VivoxUnity::ILoginSession*)>(&VivoxUnity::Private::AccountArchiveMessage::set_LoginSession)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "ILoginSession")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_LoginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_QueryId
// Il2CppName: get_QueryId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_QueryId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_QueryId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_QueryId
// Il2CppName: set_QueryId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::StringW)>(&VivoxUnity::Private::AccountArchiveMessage::set_QueryId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_QueryId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_RemoteParticipant
// Il2CppName: get_RemoteParticipant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::AccountId* (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_RemoteParticipant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_RemoteParticipant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_RemoteParticipant
// Il2CppName: set_RemoteParticipant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::VivoxUnity::AccountId*)>(&VivoxUnity::Private::AccountArchiveMessage::set_RemoteParticipant)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "AccountId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_RemoteParticipant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_Channel
// Il2CppName: get_Channel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::ChannelId* (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_Channel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_Channel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_Channel
// Il2CppName: set_Channel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::VivoxUnity::ChannelId*)>(&VivoxUnity::Private::AccountArchiveMessage::set_Channel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "ChannelId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_Channel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_Inbound
// Il2CppName: get_Inbound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_Inbound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_Inbound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_Inbound
// Il2CppName: set_Inbound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(bool)>(&VivoxUnity::Private::AccountArchiveMessage::set_Inbound)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_Inbound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::get_MessageId
// Il2CppName: get_MessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AccountArchiveMessage::*)()>(&VivoxUnity::Private::AccountArchiveMessage::get_MessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "get_MessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::set_MessageId
// Il2CppName: set_MessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AccountArchiveMessage::*)(::StringW)>(&VivoxUnity::Private::AccountArchiveMessage::set_MessageId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AccountArchiveMessage*), "set_MessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AccountArchiveMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
