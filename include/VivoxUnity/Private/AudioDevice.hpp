// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.IAudioDevice
#include "VivoxUnity/IAudioDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyChangedEventHandler
  class PropertyChangedEventHandler;
}
// Completed forward declares
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Forward declaring type: AudioDevice
  class AudioDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::AudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::AudioDevice*, "VivoxUnity.Private", "AudioDevice");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.AudioDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioDevice : public ::Il2CppObject/*, public ::VivoxUnity::IAudioDevice*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDF88
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDF98
    // private System.String <Key>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDFA8
    // private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyChangedEventHandler*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IAudioDevice
    operator ::VivoxUnity::IAudioDevice() noexcept {
      return *reinterpret_cast<::VivoxUnity::IAudioDevice*>(this);
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.String <Key>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Key$k__BackingField();
    // Get instance field reference: private System.ComponentModel.PropertyChangedEventHandler PropertyChanged
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyChangedEventHandler*& dyn_PropertyChanged();
    // public System.String get_Name()
    // Offset: 0x14BA15C
    ::StringW get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x14BA164
    void set_Name(::StringW value);
    // public System.String get_Key()
    // Offset: 0x14BA16C
    ::StringW get_Key();
    // public System.Void set_Key(System.String value)
    // Offset: 0x14BA174
    void set_Key(::StringW value);
    // protected System.Boolean Equals(VivoxUnity.Private.AudioDevice other)
    // Offset: 0x14BA2C0
    bool Equals(::VivoxUnity::Private::AudioDevice* other);
    // public System.Void add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14BA384
    void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // public System.Void remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler value)
    // Offset: 0x14BA470
    void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);
    // protected System.Void OnPropertyChanged(System.String propertyName)
    // Offset: 0x14BA55C
    void OnPropertyChanged(::StringW propertyName);
    // public System.Void .ctor()
    // Offset: 0x14BA5F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioDevice* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::AudioDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioDevice*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x14BA17C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14BA32C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // VivoxUnity.Private.AudioDevice
  #pragma pack(pop)
  static check_size<sizeof(AudioDevice), 32 + sizeof(::System::ComponentModel::PropertyChangedEventHandler*)> __VivoxUnity_Private_AudioDeviceSizeCheck;
  static_assert(sizeof(AudioDevice) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AudioDevice::*)()>(&VivoxUnity::Private::AudioDevice::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AudioDevice::*)(::StringW)>(&VivoxUnity::Private::AudioDevice::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::AudioDevice::*)()>(&VivoxUnity::Private::AudioDevice::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AudioDevice::*)(::StringW)>(&VivoxUnity::Private::AudioDevice::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::Private::AudioDevice::*)(::VivoxUnity::Private::AudioDevice*)>(&VivoxUnity::Private::AudioDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("VivoxUnity.Private", "AudioDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::add_PropertyChanged
// Il2CppName: add_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AudioDevice::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::AudioDevice::add_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "add_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::remove_PropertyChanged
// Il2CppName: remove_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AudioDevice::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&VivoxUnity::Private::AudioDevice::remove_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "remove_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::OnPropertyChanged
// Il2CppName: OnPropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::AudioDevice::*)(::StringW)>(&VivoxUnity::Private::AudioDevice::OnPropertyChanged)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "OnPropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::Private::AudioDevice::*)(::Il2CppObject*)>(&VivoxUnity::Private::AudioDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::AudioDevice::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::Private::AudioDevice::*)()>(&VivoxUnity::Private::AudioDevice::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::AudioDevice*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
