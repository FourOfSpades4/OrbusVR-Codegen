// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FMODUnity.OneshotList
#include "FMODUnity/OneshotList.hpp"
// Including type: FMOD.Studio.PLAYBACK_STATE
#include "FMOD/Studio/PLAYBACK_STATE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMOD::Studio
namespace FMOD::Studio {
  // Forward declaring type: EventInstance
  struct EventInstance;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMODUnity::OneshotList::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::FMODUnity::OneshotList::$$c__DisplayClass2_0*, "FMODUnity", "OneshotList/<>c__DisplayClass2_0");
// Type namespace: FMODUnity
namespace FMODUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: FMODUnity.OneshotList/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC2844
  class OneshotList::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public FMOD.Studio.PLAYBACK_STATE state
    // Size: 0x4
    // Offset: 0x10
    ::FMOD::Studio::PLAYBACK_STATE state;
    // Field size check
    static_assert(sizeof(::FMOD::Studio::PLAYBACK_STATE) == 0x4);
    public:
    // Creating conversion operator: operator ::FMOD::Studio::PLAYBACK_STATE
    constexpr operator ::FMOD::Studio::PLAYBACK_STATE() const noexcept {
      return state;
    }
    // Get instance field reference: public FMOD.Studio.PLAYBACK_STATE state
    [[deprecated("Use field access instead!")]] ::FMOD::Studio::PLAYBACK_STATE& dyn_state();
    // public System.Void .ctor()
    // Offset: 0x15D4F48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneshotList::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::OneshotList::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneshotList::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Boolean <Update>b__0(FMOD.Studio.EventInstance x)
    // Offset: 0x15D5304
    bool $Update$b__0(::FMOD::Studio::EventInstance x);
  }; // FMODUnity.OneshotList/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(OneshotList::$$c__DisplayClass2_0), 16 + sizeof(::FMOD::Studio::PLAYBACK_STATE)> __FMODUnity_OneshotList_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(OneshotList::$$c__DisplayClass2_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMODUnity::OneshotList::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: FMODUnity::OneshotList::$$c__DisplayClass2_0::$Update$b__0
// Il2CppName: <Update>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMODUnity::OneshotList::$$c__DisplayClass2_0::*)(::FMOD::Studio::EventInstance)>(&FMODUnity::OneshotList::$$c__DisplayClass2_0::$Update$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "EventInstance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMODUnity::OneshotList::$$c__DisplayClass2_0*), "<Update>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
