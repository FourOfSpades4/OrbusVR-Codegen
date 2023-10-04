// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: TypeLibImportClassAttribute
  class TypeLibImportClassAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::TypeLibImportClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::TypeLibImportClassAttribute*, "System.Runtime.InteropServices", "TypeLibImportClassAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.TypeLibImportClassAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5C4F4
  // [ComVisibleAttribute] Offset: A5C4F4
  class TypeLibImportClassAttribute : public ::System::Attribute {
    public:
    public:
    // System.String _importClassName
    // Size: 0x8
    // Offset: 0x10
    ::StringW importClassName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return importClassName;
    }
    // Get instance field reference: System.String _importClassName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__importClassName();
    // public System.Void .ctor(System.Type importClass)
    // Offset: 0x14274E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLibImportClassAttribute* New_ctor(::System::Type* importClass) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::TypeLibImportClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLibImportClassAttribute*, creationType>(importClass)));
    }
  }; // System.Runtime.InteropServices.TypeLibImportClassAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeLibImportClassAttribute), 16 + sizeof(::StringW)> __System_Runtime_InteropServices_TypeLibImportClassAttributeSizeCheck;
  static_assert(sizeof(TypeLibImportClassAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::TypeLibImportClassAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!