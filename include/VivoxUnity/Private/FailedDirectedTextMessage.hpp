// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.IFailedDirectedTextMessage
#include "VivoxUnity/IFailedDirectedTextMessage.hpp"
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
  // Forward declaring type: AccountId
  class AccountId;
}
// Completed forward declares
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Forward declaring type: FailedDirectedTextMessage
  class FailedDirectedTextMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::FailedDirectedTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::FailedDirectedTextMessage*, "VivoxUnity.Private", "FailedDirectedTextMessage");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.FailedDirectedTextMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class FailedDirectedTextMessage : public ::Il2CppObject/*, public ::VivoxUnity::IFailedDirectedTextMessage*/ {
    public:
    public:
    // private System.Exception _exception
    // Size: 0x8
    // Offset: 0x10
    ::System::Exception* exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE158
    // private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyChangedEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE168
    // private VivoxUnity.AccountId <Sender>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::VivoxUnity::AccountId* Sender;
    // Field size check
    static_assert(sizeof(::VivoxUnity::AccountId*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE178
    // private System.String <RequestId>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW RequestId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE188
    // private System.Int32 <StatusCode>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int StatusCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IFailedDirectedTextMessage
    operator ::VivoxUnity::IFailedDirectedTextMessage() noexcept {
      return *reinterpret_cast<::VivoxUnity::IFailedDirectedTextMessage*>(this);
    }
    // Get instance field reference: private System.Exception _exception
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn__exception();
    // Get instance field reference: private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyChangedEventHandler*& dyn_PropertyChanged();
    // Get instance field reference: private VivoxUnity.AccountId <Sender>k__BackingField
    [[deprecated("Use field access instead!")]] ::VivoxUnity::AccountId*& dyn_$Sender$k__BackingField();
    // Get instance field reference: private System.String <RequestId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$RequestId$k__BackingField();
    // Get instance field reference: private System.Int32 <StatusCode>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$StatusCode$k__BackingField();
    // public System.Void add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14C64EC
    void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Void remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14C65D8
    void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Exception get_Exception()
    // Offset: 0x14C66C4
    ::System::Exception* get_Exception();
    // public System.Void set_Exception(System.Exception value)
    // Offset: 0x14C66CC
    void set_Exception(::System::Exception* value);
    // public VivoxUnity.AccountId get_Sender()
    // Offset: 0x14C6778
    ::VivoxUnity::AccountId* get_Sender();
    // public System.Void set_Sender(VivoxUnity.AccountId value)
    // Offset: 0x14C6780
    void set_Sender(::VivoxUnity::AccountId* value);
    // public System.String get_RequestId()
    // Offset: 0x14C6788
    ::StringW get_RequestId();
    // public System.Void set_RequestId(System.String value)
    // Offset: 0x14C6790
    void set_RequestId(::StringW value);
    // public System.Int32 get_StatusCode()
    // Offset: 0x14C6798
    int get_StatusCode();
    // public System.Void set_StatusCode(System.Int32 value)
    // Offset: 0x14C67A0
    void set_StatusCode(int value);
    // public System.Void .ctor()
    // Offset: 0x14C67A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FailedDirectedTextMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::FailedDirectedTextMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FailedDirectedTextMessage*, creationType>()));
    }
  }; // VivoxUnity.Private.FailedDirectedTextMessage
  #pragma pack(pop)
  static check_size<sizeof(FailedDirectedTextMessage), 48 + sizeof(int)> __VivoxUnity_Private_FailedDirectedTextMessageSizeCheck;
  static_assert(sizeof(FailedDirectedTextMessage) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::add_PropertyChanged
// Il2CppName: add_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::FailedDirectedTextMessage::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::FailedDirectedTextMessage::add_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "add_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::remove_PropertyChanged
// Il2CppName: remove_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::FailedDirectedTextMessage::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::FailedDirectedTextMessage::remove_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "remove_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (VivoxUnity::Private::FailedDirectedTextMessage::*)()>(&VivoxUnity::Private::FailedDirectedTextMessage::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::set_Exception
// Il2CppName: set_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::FailedDirectedTextMessage::*)(::System::Exception*)>(&VivoxUnity::Private::FailedDirectedTextMessage::set_Exception)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "set_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::get_Sender
// Il2CppName: get_Sender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::AccountId* (VivoxUnity::Private::FailedDirectedTextMessage::*)()>(&VivoxUnity::Private::FailedDirectedTextMessage::get_Sender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "get_Sender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::set_Sender
// Il2CppName: set_Sender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::FailedDirectedTextMessage::*)(::VivoxUnity::AccountId*)>(&VivoxUnity::Private::FailedDirectedTextMessage::set_Sender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "AccountId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "set_Sender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::get_RequestId
// Il2CppName: get_RequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::FailedDirectedTextMessage::*)()>(&VivoxUnity::Private::FailedDirectedTextMessage::get_RequestId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "get_RequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::set_RequestId
// Il2CppName: set_RequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::FailedDirectedTextMessage::*)(::StringW)>(&VivoxUnity::Private::FailedDirectedTextMessage::set_RequestId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "set_RequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::Private::FailedDirectedTextMessage::*)()>(&VivoxUnity::Private::FailedDirectedTextMessage::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::FailedDirectedTextMessage::*)(int)>(&VivoxUnity::Private::FailedDirectedTextMessage::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::FailedDirectedTextMessage*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::FailedDirectedTextMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
