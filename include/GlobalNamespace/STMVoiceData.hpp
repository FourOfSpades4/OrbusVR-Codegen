// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMVoiceData
  class STMVoiceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMVoiceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMVoiceData*, "", "STMVoiceData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: STMVoiceData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: ACDA84
  class STMVoiceData : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // [TextAreaAttribute] Offset: 0xAD8DF4
    // public System.String text
    // Size: 0x8
    // Offset: 0x18
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text();
    // public System.Void .ctor()
    // Offset: 0xE32DA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMVoiceData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMVoiceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMVoiceData*, creationType>()));
    }
  }; // STMVoiceData
  #pragma pack(pop)
  static check_size<sizeof(STMVoiceData), 24 + sizeof(::StringW)> __GlobalNamespace_STMVoiceDataSizeCheck;
  static_assert(sizeof(STMVoiceData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMVoiceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
