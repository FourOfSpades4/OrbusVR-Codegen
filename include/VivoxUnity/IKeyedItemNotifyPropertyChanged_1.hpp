// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.INotifyPropertyChanged
#include "System/ComponentModel/INotifyPropertyChanged.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IKeyedItemNotifyPropertyChanged`1<TK>
  template<typename TK>
  class IKeyedItemNotifyPropertyChanged_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VivoxUnity::IKeyedItemNotifyPropertyChanged_1, "VivoxUnity", "IKeyedItemNotifyPropertyChanged`1");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: VivoxUnity.IKeyedItemNotifyPropertyChanged`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TK>
  class IKeyedItemNotifyPropertyChanged_1/*, public ::System::ComponentModel::INotifyPropertyChanged*/ {
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::INotifyPropertyChanged
    operator ::System::ComponentModel::INotifyPropertyChanged() noexcept {
      return *reinterpret_cast<::System::ComponentModel::INotifyPropertyChanged*>(this);
    }
    // public TK get_Key()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TK get_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::IKeyedItemNotifyPropertyChanged_1::get_Key");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VivoxUnity::IKeyedItemNotifyPropertyChanged_1<TK>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TK, false>(this, ___internal__method);
    }
  }; // VivoxUnity.IKeyedItemNotifyPropertyChanged`1
  // Could not write size check! Type: VivoxUnity.IKeyedItemNotifyPropertyChanged`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
