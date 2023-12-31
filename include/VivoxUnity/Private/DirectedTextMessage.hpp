// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.IDirectedTextMessage
#include "VivoxUnity/IDirectedTextMessage.hpp"
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
}
// Completed forward declares
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Forward declaring type: DirectedTextMessage
  class DirectedTextMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::DirectedTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::DirectedTextMessage*, "VivoxUnity.Private", "DirectedTextMessage");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.DirectedTextMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectedTextMessage : public ::Il2CppObject/*, public ::VivoxUnity::IDirectedTextMessage*/ {
    public:
    public:
    // private System.Exception _exception
    // Size: 0x8
    // Offset: 0x10
    ::System::Exception* exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE0C8
    // private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyChangedEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE0D8
    // private System.String <Key>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE0E8
    // private System.DateTime <ReceivedTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime ReceivedTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE0F8
    // private System.String <Message>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE108
    // private System.String <Language>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW Language;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE118
    // private VivoxUnity.ILoginSession <LoginSession>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::VivoxUnity::ILoginSession* LoginSession;
    // Field size check
    static_assert(sizeof(::VivoxUnity::ILoginSession*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE128
    // private VivoxUnity.AccountId <Sender>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::VivoxUnity::AccountId* Sender;
    // Field size check
    static_assert(sizeof(::VivoxUnity::AccountId*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE138
    // private System.String <ApplicationStanzaNamespace>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::StringW ApplicationStanzaNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE148
    // private System.String <ApplicationStanzaBody>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::StringW ApplicationStanzaBody;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IDirectedTextMessage
    operator ::VivoxUnity::IDirectedTextMessage() noexcept {
      return *reinterpret_cast<::VivoxUnity::IDirectedTextMessage*>(this);
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
    // Get instance field reference: private VivoxUnity.AccountId <Sender>k__BackingField
    [[deprecated("Use field access instead!")]] ::VivoxUnity::AccountId*& dyn_$Sender$k__BackingField();
    // Get instance field reference: private System.String <ApplicationStanzaNamespace>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ApplicationStanzaNamespace$k__BackingField();
    // Get instance field reference: private System.String <ApplicationStanzaBody>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ApplicationStanzaBody$k__BackingField();
    // public System.Void add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14C61D8
    void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Void remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14C62C4
    void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Exception get_Exception()
    // Offset: 0x14C63B0
    ::System::Exception* get_Exception();
    // public System.Void set_Exception(System.Exception value)
    // Offset: 0x14C63B8
    void set_Exception(::System::Exception* value);
    // public System.String get_Key()
    // Offset: 0x14C6464
    ::StringW get_Key();
    // public System.Void set_Key(System.String value)
    // Offset: 0x14C646C
    void set_Key(::StringW value);
    // public System.DateTime get_ReceivedTime()
    // Offset: 0x14C6474
    ::System::DateTime get_ReceivedTime();
    // public System.Void set_ReceivedTime(System.DateTime value)
    // Offset: 0x14C647C
    void set_ReceivedTime(::System::DateTime value);
    // public System.String get_Message()
    // Offset: 0x14C6484
    ::StringW get_Message();
    // public System.Void set_Message(System.String value)
    // Offset: 0x14C648C
    void set_Message(::StringW value);
    // public System.String get_Language()
    // Offset: 0x14C6494
    ::StringW get_Language();
    // public System.Void set_Language(System.String value)
    // Offset: 0x14C649C
    void set_Language(::StringW value);
    // public VivoxUnity.ILoginSession get_LoginSession()
    // Offset: 0x14C64A4
    ::VivoxUnity::ILoginSession* get_LoginSession();
    // public System.Void set_LoginSession(VivoxUnity.ILoginSession value)
    // Offset: 0x14C64AC
    void set_LoginSession(::VivoxUnity::ILoginSession* value);
    // public VivoxUnity.AccountId get_Sender()
    // Offset: 0x14C64B4
    ::VivoxUnity::AccountId* get_Sender();
    // public System.Void set_Sender(VivoxUnity.AccountId value)
    // Offset: 0x14C64BC
    void set_Sender(::VivoxUnity::AccountId* value);
    // public System.String get_ApplicationStanzaNamespace()
    // Offset: 0x14C64C4
    ::StringW get_ApplicationStanzaNamespace();
    // public System.Void set_ApplicationStanzaNamespace(System.String value)
    // Offset: 0x14C64CC
    void set_ApplicationStanzaNamespace(::StringW value);
    // public System.String get_ApplicationStanzaBody()
    // Offset: 0x14C64D4
    ::StringW get_ApplicationStanzaBody();
    // public System.Void set_ApplicationStanzaBody(System.String value)
    // Offset: 0x14C64DC
    void set_ApplicationStanzaBody(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x14C64E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectedTextMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::DirectedTextMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectedTextMessage*, creationType>()));
    }
  }; // VivoxUnity.Private.DirectedTextMessage
  #pragma pack(pop)
  static check_size<sizeof(DirectedTextMessage), 88 + sizeof(::StringW)> __VivoxUnity_Private_DirectedTextMessageSizeCheck;
  static_assert(sizeof(DirectedTextMessage) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::add_PropertyChanged
// Il2CppName: add_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::DirectedTextMessage::add_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "add_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::remove_PropertyChanged
// Il2CppName: remove_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::DirectedTextMessage::remove_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "remove_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_Exception
// Il2CppName: set_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::System::Exception*)>(&VivoxUnity::Private::DirectedTextMessage::set_Exception)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::StringW)>(&VivoxUnity::Private::DirectedTextMessage::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_ReceivedTime
// Il2CppName: get_ReceivedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_ReceivedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_ReceivedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_ReceivedTime
// Il2CppName: set_ReceivedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::System::DateTime)>(&VivoxUnity::Private::DirectedTextMessage::set_ReceivedTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_ReceivedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_Message
// Il2CppName: set_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::StringW)>(&VivoxUnity::Private::DirectedTextMessage::set_Message)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_Language
// Il2CppName: get_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_Language)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_Language
// Il2CppName: set_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::StringW)>(&VivoxUnity::Private::DirectedTextMessage::set_Language)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_LoginSession
// Il2CppName: get_LoginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::ILoginSession* (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_LoginSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_LoginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_LoginSession
// Il2CppName: set_LoginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::VivoxUnity::ILoginSession*)>(&VivoxUnity::Private::DirectedTextMessage::set_LoginSession)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "ILoginSession")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_LoginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_Sender
// Il2CppName: get_Sender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::AccountId* (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_Sender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_Sender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_Sender
// Il2CppName: set_Sender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::VivoxUnity::AccountId*)>(&VivoxUnity::Private::DirectedTextMessage::set_Sender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "AccountId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_Sender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_ApplicationStanzaNamespace
// Il2CppName: get_ApplicationStanzaNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_ApplicationStanzaNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_ApplicationStanzaNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_ApplicationStanzaNamespace
// Il2CppName: set_ApplicationStanzaNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::StringW)>(&VivoxUnity::Private::DirectedTextMessage::set_ApplicationStanzaNamespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_ApplicationStanzaNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::get_ApplicationStanzaBody
// Il2CppName: get_ApplicationStanzaBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::DirectedTextMessage::*)()>(&VivoxUnity::Private::DirectedTextMessage::get_ApplicationStanzaBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "get_ApplicationStanzaBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::set_ApplicationStanzaBody
// Il2CppName: set_ApplicationStanzaBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::DirectedTextMessage::*)(::StringW)>(&VivoxUnity::Private::DirectedTextMessage::set_ApplicationStanzaBody)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::DirectedTextMessage*), "set_ApplicationStanzaBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::DirectedTextMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
