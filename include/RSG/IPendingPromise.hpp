// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RSG.IRejectable
#include "RSG/IRejectable.hpp"
// Completed includes
// Type namespace: RSG
namespace RSG {
  // Forward declaring type: IPendingPromise
  class IPendingPromise;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::IPendingPromise);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IPendingPromise*, "RSG", "IPendingPromise");
// Type namespace: RSG
namespace RSG {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: RSG.IPendingPromise
  // [TokenAttribute] Offset: FFFFFFFF
  class IPendingPromise/*, public ::RSG::IRejectable*/ {
    public:
    // Creating interface conversion operator: operator ::RSG::IRejectable
    operator ::RSG::IRejectable() noexcept {
      return *reinterpret_cast<::RSG::IRejectable*>(this);
    }
  }; // RSG.IPendingPromise
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
