// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: PlayfulSystems.ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Forward declaring type: Utils
  class Utils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayfulSystems::ProgressBar::Utils);
DEFINE_IL2CPP_ARG_TYPE(::PlayfulSystems::ProgressBar::Utils*, "PlayfulSystems.ProgressBar", "Utils");
// Type namespace: PlayfulSystems.ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayfulSystems.ProgressBar.Utils
  // [TokenAttribute] Offset: FFFFFFFF
  class Utils : public ::Il2CppObject {
    public:
    // static public System.Single EaseSinInOut(System.Single lerp, System.Single start, System.Single change)
    // Offset: 0xEB3988
    static float EaseSinInOut(float lerp, float start, float change);
  }; // PlayfulSystems.ProgressBar.Utils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::Utils::EaseSinInOut
// Il2CppName: EaseSinInOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&PlayfulSystems::ProgressBar::Utils::EaseSinInOut)> {
  static const MethodInfo* get() {
    static auto* lerp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* change = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::Utils*), "EaseSinInOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lerp, start, change});
  }
};
