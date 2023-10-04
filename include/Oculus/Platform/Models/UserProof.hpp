// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserProof
  class UserProof;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::UserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserProof*, "Oculus.Platform.Models", "UserProof");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.UserProof
  // [TokenAttribute] Offset: FFFFFFFF
  class UserProof : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String Value
    // Size: 0x8
    // Offset: 0x10
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Value;
    }
    // Get instance field reference: public readonly System.String Value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Value();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xF7F29C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserProof* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::UserProof::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserProof*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.UserProof
  #pragma pack(pop)
  static check_size<sizeof(UserProof), 16 + sizeof(::StringW)> __Oculus_Platform_Models_UserProofSizeCheck;
  static_assert(sizeof(UserProof) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::UserProof::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!