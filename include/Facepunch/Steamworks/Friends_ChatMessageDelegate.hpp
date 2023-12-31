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
NEED_NO_BOX(::Facepunch::Steamworks::Friends::ChatMessageDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::Friends::ChatMessageDelegate*, "Facepunch.Steamworks", "Friends/ChatMessageDelegate");
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.Friends/ChatMessageDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class Friends::ChatMessageDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2844634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Friends::ChatMessageDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facepunch::Steamworks::Friends::ChatMessageDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Friends::ChatMessageDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(Facepunch.Steamworks.SteamFriend friend, System.String type, System.String message)
    // Offset: 0x28427B8
    void Invoke(::Facepunch::Steamworks::SteamFriend* _friend, ::StringW type, ::StringW message);
    // public System.IAsyncResult BeginInvoke(Facepunch.Steamworks.SteamFriend friend, System.String type, System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2844644
    ::System::IAsyncResult* BeginInvoke(::Facepunch::Steamworks::SteamFriend* _friend, ::StringW type, ::StringW message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2844674
    void EndInvoke(::System::IAsyncResult* result);
  }; // Facepunch.Steamworks.Friends/ChatMessageDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::ChatMessageDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::ChatMessageDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::ChatMessageDelegate::*)(::Facepunch::Steamworks::SteamFriend*, ::StringW, ::StringW)>(&Facepunch::Steamworks::Friends::ChatMessageDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* _friend = &::il2cpp_utils::GetClassFromName("Facepunch.Steamworks", "SteamFriend")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends::ChatMessageDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_friend, type, message});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::ChatMessageDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Facepunch::Steamworks::Friends::ChatMessageDelegate::*)(::Facepunch::Steamworks::SteamFriend*, ::StringW, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Facepunch::Steamworks::Friends::ChatMessageDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* _friend = &::il2cpp_utils::GetClassFromName("Facepunch.Steamworks", "SteamFriend")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends::ChatMessageDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_friend, type, message, callback, object});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::ChatMessageDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::ChatMessageDelegate::*)(::System::IAsyncResult*)>(&Facepunch::Steamworks::Friends::ChatMessageDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends::ChatMessageDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
