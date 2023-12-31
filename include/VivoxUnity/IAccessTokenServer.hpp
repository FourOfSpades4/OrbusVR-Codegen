// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IAccessTokenServer
  class IAccessTokenServer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::IAccessTokenServer);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::IAccessTokenServer*, "VivoxUnity", "IAccessTokenServer");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.IAccessTokenServer
  // [TokenAttribute] Offset: FFFFFFFF
  class IAccessTokenServer {
    public:
    // public System.String get_Issuer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Issuer();
    // public System.String get_Key()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Key();
    // public System.TimeSpan get_ExpirationTimeSpan()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::TimeSpan get_ExpirationTimeSpan();
  }; // VivoxUnity.IAccessTokenServer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::IAccessTokenServer::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IAccessTokenServer::*)()>(&VivoxUnity::IAccessTokenServer::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IAccessTokenServer*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IAccessTokenServer::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IAccessTokenServer::*)()>(&VivoxUnity::IAccessTokenServer::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IAccessTokenServer*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IAccessTokenServer::get_ExpirationTimeSpan
// Il2CppName: get_ExpirationTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (VivoxUnity::IAccessTokenServer::*)()>(&VivoxUnity::IAccessTokenServer::get_ExpirationTimeSpan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IAccessTokenServer*), "get_ExpirationTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
