// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: SecureName
  class SecureName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::SecureName);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::SecureName*, "Nitro", "SecureName");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.SecureName
  // [TokenAttribute] Offset: FFFFFFFF
  class SecureName : public ::Il2CppObject {
    public:
    public:
    // public System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Name;
    }
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // public System.Void .ctor(System.String name)
    // Offset: 0x16E8984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureName* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::SecureName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureName*, creationType>(name)));
    }
    // public System.Boolean Matches(System.Type type)
    // Offset: 0x16E89B0
    bool Matches(::System::Type* type);
  }; // Nitro.SecureName
  #pragma pack(pop)
  static check_size<sizeof(SecureName), 16 + sizeof(::StringW)> __Nitro_SecureNameSizeCheck;
  static_assert(sizeof(SecureName) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::SecureName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::SecureName::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::SecureName::*)(::System::Type*)>(&Nitro::SecureName::Matches)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::SecureName*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
