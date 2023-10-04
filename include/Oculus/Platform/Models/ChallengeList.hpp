// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Challenge
  class Challenge;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ChallengeList
  class ChallengeList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::ChallengeList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ChallengeList*, "Oculus.Platform.Models", "ChallengeList");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.ChallengeList
  // [TokenAttribute] Offset: FFFFFFFF
  class ChallengeList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Challenge*> {
    public:
    public:
    // public readonly System.UInt64 TotalCount
    // Size: 0x8
    // Offset: 0x28
    uint64_t TotalCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return TotalCount;
    }
    // Get instance field reference: public readonly System.UInt64 TotalCount
    [[deprecated("Use field access instead!")]] uint64_t& dyn_TotalCount();
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xF77B4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChallengeList* New_ctor(::System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::ChallengeList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChallengeList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.ChallengeList
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::ChallengeList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
