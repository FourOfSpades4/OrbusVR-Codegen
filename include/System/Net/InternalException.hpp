// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: InternalException
  class InternalException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::InternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::InternalException*, "System.Net", "InternalException");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.InternalException
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalException : public ::System::SystemException {
    public:
    // System.Void .ctor()
    // Offset: 0x1621CC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::InternalException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalException*, creationType>()));
    }
  }; // System.Net.InternalException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::InternalException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!