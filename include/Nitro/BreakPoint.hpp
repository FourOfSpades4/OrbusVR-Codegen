// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.Emit.Label
#include "System/Reflection/Emit/Label.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroIL
  class NitroIL;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: BreakPoint
  class BreakPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::BreakPoint);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::BreakPoint*, "Nitro", "BreakPoint");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.BreakPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class BreakPoint : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.Emit.Label End
    // Size: 0x4
    // Offset: 0x10
    ::System::Reflection::Emit::Label End;
    // Field size check
    static_assert(sizeof(::System::Reflection::Emit::Label) == 0x4);
    // public System.Reflection.Emit.Label ContinuePoint
    // Size: 0x4
    // Offset: 0x14
    ::System::Reflection::Emit::Label ContinuePoint;
    // Field size check
    static_assert(sizeof(::System::Reflection::Emit::Label) == 0x4);
    public:
    // Get instance field reference: public System.Reflection.Emit.Label End
    [[deprecated("Use field access instead!")]] ::System::Reflection::Emit::Label& dyn_End();
    // Get instance field reference: public System.Reflection.Emit.Label ContinuePoint
    [[deprecated("Use field access instead!")]] ::System::Reflection::Emit::Label& dyn_ContinuePoint();
    // public System.Void .ctor(System.Reflection.Emit.Label continuePoint, System.Reflection.Emit.Label end)
    // Offset: 0xF59398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BreakPoint* New_ctor(::System::Reflection::Emit::Label continuePoint, ::System::Reflection::Emit::Label end) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::BreakPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BreakPoint*, creationType>(continuePoint, end)));
    }
    // public System.Void Break(Nitro.NitroIL into)
    // Offset: 0xF593D0
    void Break(::Nitro::NitroIL* into);
    // public System.Void Continue(Nitro.NitroIL into)
    // Offset: 0xF594C8
    void Continue(::Nitro::NitroIL* into);
  }; // Nitro.BreakPoint
  #pragma pack(pop)
  static check_size<sizeof(BreakPoint), 20 + sizeof(::System::Reflection::Emit::Label)> __Nitro_BreakPointSizeCheck;
  static_assert(sizeof(BreakPoint) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::BreakPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::BreakPoint::Break
// Il2CppName: Break
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::BreakPoint::*)(::Nitro::NitroIL*)>(&Nitro::BreakPoint::Break)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::BreakPoint*), "Break", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};
// Writing MetadataGetter for method: Nitro::BreakPoint::Continue
// Il2CppName: Continue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::BreakPoint::*)(::Nitro::NitroIL*)>(&Nitro::BreakPoint::Continue)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::BreakPoint*), "Continue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};