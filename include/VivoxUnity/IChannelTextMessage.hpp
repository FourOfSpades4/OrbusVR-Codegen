// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.ITextMessage
#include "VivoxUnity/ITextMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IChannelSession
  class IChannelSession;
  // Forward declaring type: AccountId
  class AccountId;
}
// Completed forward declares
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IChannelTextMessage
  class IChannelTextMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::IChannelTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::IChannelTextMessage*, "VivoxUnity", "IChannelTextMessage");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.IChannelTextMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IChannelTextMessage/*, public ::VivoxUnity::ITextMessage*/ {
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::ITextMessage
    operator ::VivoxUnity::ITextMessage() noexcept {
      return *reinterpret_cast<::VivoxUnity::ITextMessage*>(this);
    }
    // public VivoxUnity.IChannelSession get_ChannelSession()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VivoxUnity::IChannelSession* get_ChannelSession();
    // public VivoxUnity.AccountId get_Sender()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VivoxUnity::AccountId* get_Sender();
    // public System.Boolean get_FromSelf()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_FromSelf();
    // public System.String get_ApplicationStanzaNamespace()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ApplicationStanzaNamespace();
    // public System.String get_ApplicationStanzaBody()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ApplicationStanzaBody();
  }; // VivoxUnity.IChannelTextMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::IChannelTextMessage::get_ChannelSession
// Il2CppName: get_ChannelSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::IChannelSession* (VivoxUnity::IChannelTextMessage::*)()>(&VivoxUnity::IChannelTextMessage::get_ChannelSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IChannelTextMessage*), "get_ChannelSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IChannelTextMessage::get_Sender
// Il2CppName: get_Sender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::AccountId* (VivoxUnity::IChannelTextMessage::*)()>(&VivoxUnity::IChannelTextMessage::get_Sender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IChannelTextMessage*), "get_Sender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IChannelTextMessage::get_FromSelf
// Il2CppName: get_FromSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::IChannelTextMessage::*)()>(&VivoxUnity::IChannelTextMessage::get_FromSelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IChannelTextMessage*), "get_FromSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IChannelTextMessage::get_ApplicationStanzaNamespace
// Il2CppName: get_ApplicationStanzaNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IChannelTextMessage::*)()>(&VivoxUnity::IChannelTextMessage::get_ApplicationStanzaNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IChannelTextMessage*), "get_ApplicationStanzaNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IChannelTextMessage::get_ApplicationStanzaBody
// Il2CppName: get_ApplicationStanzaBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IChannelTextMessage::*)()>(&VivoxUnity::IChannelTextMessage::get_ApplicationStanzaBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IChannelTextMessage*), "get_ApplicationStanzaBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
