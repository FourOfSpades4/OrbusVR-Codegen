// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.IKeyedItemNotifyPropertyChanged`1
#include "VivoxUnity/IKeyedItemNotifyPropertyChanged_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: AccountId
  class AccountId;
  // Forward declaring type: IReadOnlyDictionary`2<TK, T>
  template<typename TK, typename T>
  class IReadOnlyDictionary_2;
  // Forward declaring type: IPresenceLocation
  class IPresenceLocation;
}
// Completed forward declares
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IPresenceSubscription
  class IPresenceSubscription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::IPresenceSubscription);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::IPresenceSubscription*, "VivoxUnity", "IPresenceSubscription");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.IPresenceSubscription
  // [TokenAttribute] Offset: FFFFFFFF
  class IPresenceSubscription/*, public ::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::VivoxUnity::AccountId*>*/ {
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::VivoxUnity::AccountId*>
    operator ::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::VivoxUnity::AccountId*>() noexcept {
      return *reinterpret_cast<::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::VivoxUnity::AccountId*>*>(this);
    }
    // public VivoxUnity.AccountId get_SubscribedAccount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VivoxUnity::AccountId* get_SubscribedAccount();
    // public VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IPresenceLocation> get_Locations()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::VivoxUnity::IReadOnlyDictionary_2<::StringW, ::VivoxUnity::IPresenceLocation*>* get_Locations();
  }; // VivoxUnity.IPresenceSubscription
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::IPresenceSubscription::get_SubscribedAccount
// Il2CppName: get_SubscribedAccount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::AccountId* (VivoxUnity::IPresenceSubscription::*)()>(&VivoxUnity::IPresenceSubscription::get_SubscribedAccount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IPresenceSubscription*), "get_SubscribedAccount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IPresenceSubscription::get_Locations
// Il2CppName: get_Locations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::IReadOnlyDictionary_2<::StringW, ::VivoxUnity::IPresenceLocation*>* (VivoxUnity::IPresenceSubscription::*)()>(&VivoxUnity::IPresenceSubscription::get_Locations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IPresenceSubscription*), "get_Locations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};