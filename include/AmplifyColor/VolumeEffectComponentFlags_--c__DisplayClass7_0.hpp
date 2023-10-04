// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AmplifyColor.VolumeEffectComponentFlags
#include "AmplifyColor/VolumeEffectComponentFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: AmplifyColor
namespace AmplifyColor {
  // Forward declaring type: VolumeEffectFieldFlags
  class VolumeEffectFieldFlags;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0*, "AmplifyColor", "VolumeEffectComponentFlags/<>c__DisplayClass7_0");
// Type namespace: AmplifyColor
namespace AmplifyColor {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColor.VolumeEffectComponentFlags/<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD8720
  class VolumeEffectComponentFlags::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.FieldInfo pi
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::FieldInfo* pi;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::FieldInfo*
    constexpr operator ::System::Reflection::FieldInfo*() const noexcept {
      return pi;
    }
    // Get instance field reference: public System.Reflection.FieldInfo pi
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn_pi();
    // public System.Void .ctor()
    // Offset: 0xF03C98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VolumeEffectComponentFlags::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VolumeEffectComponentFlags::$$c__DisplayClass7_0*, creationType>()));
    }
    // System.Boolean <UpdateComponentFlags>b__0(AmplifyColor.VolumeEffectFieldFlags s)
    // Offset: 0xF03F5C
    bool $UpdateComponentFlags$b__0(::AmplifyColor::VolumeEffectFieldFlags* s);
  }; // AmplifyColor.VolumeEffectComponentFlags/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(VolumeEffectComponentFlags::$$c__DisplayClass7_0), 16 + sizeof(::System::Reflection::FieldInfo*)> __AmplifyColor_VolumeEffectComponentFlags_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(VolumeEffectComponentFlags::$$c__DisplayClass7_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0::$UpdateComponentFlags$b__0
// Il2CppName: <UpdateComponentFlags>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0::*)(::AmplifyColor::VolumeEffectFieldFlags*)>(&AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0::$UpdateComponentFlags$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("AmplifyColor", "VolumeEffectFieldFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyColor::VolumeEffectComponentFlags::$$c__DisplayClass7_0*), "<UpdateComponentFlags>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};