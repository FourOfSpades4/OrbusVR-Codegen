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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMTextContainer
  class STMTextContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMTextContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMTextContainer*, "", "STMTextContainer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: STMTextContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class STMTextContainer : public ::Il2CppObject {
    public:
    public:
    // public System.String text
    // Size: 0x8
    // Offset: 0x10
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return text;
    }
    // Get instance field reference: public System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text();
    // public System.Void .ctor(System.String text)
    // Offset: 0xE302C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMTextContainer* New_ctor(::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMTextContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMTextContainer*, creationType>(text)));
    }
  }; // STMTextContainer
  #pragma pack(pop)
  static check_size<sizeof(STMTextContainer), 16 + sizeof(::StringW)> __GlobalNamespace_STMTextContainerSizeCheck;
  static_assert(sizeof(STMTextContainer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMTextContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
