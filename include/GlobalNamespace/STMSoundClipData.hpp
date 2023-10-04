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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMSoundClipData
  class STMSoundClipData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMSoundClipData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMSoundClipData*, "", "STMSoundClipData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: STMSoundClipData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: ACD9A4
  class STMSoundClipData : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::STMSoundClipData::AutoClip
    class AutoClip;
    public:
    // public System.Collections.Generic.List`1<STMSoundClipData/AutoClip> clips
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::STMSoundClipData::AutoClip*>* clips;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::STMSoundClipData::AutoClip*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<STMSoundClipData/AutoClip> clips
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::STMSoundClipData::AutoClip*>*& dyn_clips();
    // public System.Void .ctor()
    // Offset: 0xE30250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMSoundClipData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMSoundClipData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMSoundClipData*, creationType>()));
    }
  }; // STMSoundClipData
  #pragma pack(pop)
  static check_size<sizeof(STMSoundClipData), 24 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::STMSoundClipData::AutoClip*>*)> __GlobalNamespace_STMSoundClipDataSizeCheck;
  static_assert(sizeof(STMSoundClipData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMSoundClipData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
