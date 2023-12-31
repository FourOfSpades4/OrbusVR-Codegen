// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: RefreshEventArgs
  class RefreshEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::RefreshEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventArgs*, "System.ComponentModel", "RefreshEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.RefreshEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class RefreshEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Object componentChanged
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* componentChanged;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type typeChanged
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* typeChanged;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Object componentChanged
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_componentChanged();
    // Get instance field reference: private System.Type typeChanged
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_typeChanged();
    // public System.Void .ctor(System.Object componentChanged)
    // Offset: 0x1BB5248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RefreshEventArgs* New_ctor(::Il2CppObject* componentChanged) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::RefreshEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RefreshEventArgs*, creationType>(componentChanged)));
    }
    // public System.Void .ctor(System.Type typeChanged)
    // Offset: 0x1BB52E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RefreshEventArgs* New_ctor(::System::Type* typeChanged) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::RefreshEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RefreshEventArgs*, creationType>(typeChanged)));
    }
  }; // System.ComponentModel.RefreshEventArgs
  #pragma pack(pop)
  static check_size<sizeof(RefreshEventArgs), 24 + sizeof(::System::Type*)> __System_ComponentModel_RefreshEventArgsSizeCheck;
  static_assert(sizeof(RefreshEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
