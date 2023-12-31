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
  // Forward declaring type: ILoginSession
  class ILoginSession;
  // Forward declaring type: AccountId
  class AccountId;
}
// Completed forward declares
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IDirectedTextMessage
  class IDirectedTextMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::IDirectedTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::IDirectedTextMessage*, "VivoxUnity", "IDirectedTextMessage");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.IDirectedTextMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IDirectedTextMessage/*, public ::VivoxUnity::ITextMessage*/ {
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::ITextMessage
    operator ::VivoxUnity::ITextMessage() noexcept {
      return *reinterpret_cast<::VivoxUnity::ITextMessage*>(this);
    }
    // public VivoxUnity.ILoginSession get_LoginSession()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VivoxUnity::ILoginSession* get_LoginSession();
    // public VivoxUnity.AccountId get_Sender()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VivoxUnity::AccountId* get_Sender();
    // public System.String get_ApplicationStanzaNamespace()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ApplicationStanzaNamespace();
    // public System.String get_ApplicationStanzaBody()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ApplicationStanzaBody();
  }; // VivoxUnity.IDirectedTextMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::IDirectedTextMessage::get_LoginSession
// Il2CppName: get_LoginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::ILoginSession* (VivoxUnity::IDirectedTextMessage::*)()>(&VivoxUnity::IDirectedTextMessage::get_LoginSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IDirectedTextMessage*), "get_LoginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IDirectedTextMessage::get_Sender
// Il2CppName: get_Sender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::AccountId* (VivoxUnity::IDirectedTextMessage::*)()>(&VivoxUnity::IDirectedTextMessage::get_Sender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IDirectedTextMessage*), "get_Sender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IDirectedTextMessage::get_ApplicationStanzaNamespace
// Il2CppName: get_ApplicationStanzaNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IDirectedTextMessage::*)()>(&VivoxUnity::IDirectedTextMessage::get_ApplicationStanzaNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IDirectedTextMessage*), "get_ApplicationStanzaNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IDirectedTextMessage::get_ApplicationStanzaBody
// Il2CppName: get_ApplicationStanzaBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IDirectedTextMessage::*)()>(&VivoxUnity::IDirectedTextMessage::get_ApplicationStanzaBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IDirectedTextMessage*), "get_ApplicationStanzaBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
