// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.ErrorInfo
#include "PowerUI/ErrorInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: TextPackage
  class TextPackage;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: FileErrorInfo
  class FileErrorInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::FileErrorInfo);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::FileErrorInfo*, "PowerUI", "FileErrorInfo");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.FileErrorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class FileErrorInfo : public ::PowerUI::ErrorInfo {
    public:
    public:
    // public PowerUI.TextPackage Package
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::TextPackage* Package;
    // Field size check
    static_assert(sizeof(::PowerUI::TextPackage*) == 0x8);
    public:
    // Creating conversion operator: operator ::PowerUI::TextPackage*
    constexpr operator ::PowerUI::TextPackage*() const noexcept {
      return Package;
    }
    // Get instance field reference: public PowerUI.TextPackage Package
    [[deprecated("Use field access instead!")]] ::PowerUI::TextPackage*& dyn_Package();
    // public System.Void .ctor(PowerUI.TextPackage package)
    // Offset: 0x1A42FE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileErrorInfo* New_ctor(::PowerUI::TextPackage* package) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::FileErrorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileErrorInfo*, creationType>(package)));
    }
  }; // PowerUI.FileErrorInfo
  #pragma pack(pop)
  static check_size<sizeof(FileErrorInfo), 32 + sizeof(::PowerUI::TextPackage*)> __PowerUI_FileErrorInfoSizeCheck;
  static_assert(sizeof(FileErrorInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::FileErrorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!