// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facepunch.Steamworks.Friends
#include "Facepunch/Steamworks/Friends.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facepunch::Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: SteamFriend
  class SteamFriend;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facepunch::Steamworks::Friends::JoinRequestedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::Friends::JoinRequestedDelegate*, "Facepunch.Steamworks", "Friends/JoinRequestedDelegate");
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.Friends/JoinRequestedDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class Friends::JoinRequestedDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2844680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Friends::JoinRequestedDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facepunch::Steamworks::Friends::JoinRequestedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Friends::JoinRequestedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(Facepunch.Steamworks.SteamFriend friend, System.String connect)
    // Offset: 0x2842FB8
    void Invoke(::Facepunch::Steamworks::SteamFriend* _friend, ::StringW connect);
    // public System.IAsyncResult BeginInvoke(Facepunch.Steamworks.SteamFriend friend, System.String connect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2844690
    ::System::IAsyncResult* BeginInvoke(::Facepunch::Steamworks::SteamFriend* _friend, ::StringW connect, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x28446C0
    void EndInvoke(::System::IAsyncResult* result);
  }; // Facepunch.Steamworks.Friends/JoinRequestedDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::JoinRequestedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::JoinRequestedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::JoinRequestedDelegate::*)(::Facepunch::Steamworks::SteamFriend*, ::StringW)>(&Facepunch::Steamworks::Friends::JoinRequestedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* _friend = &::il2cpp_utils::GetClassFromName("Facepunch.Steamworks", "SteamFriend")->byval_arg;
    static auto* connect = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends::JoinRequestedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_friend, connect});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::JoinRequestedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Facepunch::Steamworks::Friends::JoinRequestedDelegate::*)(::Facepunch::Steamworks::SteamFriend*, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Facepunch::Steamworks::Friends::JoinRequestedDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* _friend = &::il2cpp_utils::GetClassFromName("Facepunch.Steamworks", "SteamFriend")->byval_arg;
    static auto* connect = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends::JoinRequestedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_friend, connect, callback, object});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::JoinRequestedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::JoinRequestedDelegate::*)(::System::IAsyncResult*)>(&Facepunch::Steamworks::Friends::JoinRequestedDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends::JoinRequestedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};