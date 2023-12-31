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
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IAudioDevice
  class IAudioDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::IAudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::IAudioDevice*, "VivoxUnity", "IAudioDevice");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.IAudioDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class IAudioDevice/*, public ::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::StringW>*/ {
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::StringW>
    operator ::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::StringW>() noexcept {
      return *reinterpret_cast<::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<::StringW>*>(this);
    }
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
  }; // VivoxUnity.IAudioDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::IAudioDevice::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IAudioDevice::*)()>(&VivoxUnity::IAudioDevice::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IAudioDevice*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
