// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.ManifestBuilder
#include "System/Diagnostics/Tracing/ManifestBuilder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1*, "System.Diagnostics.Tracing", "ManifestBuilder/<>c__DisplayClass22_1");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5E638
  class ManifestBuilder::$$c__DisplayClass22_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x10
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: i and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // Get instance field reference: public System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0*& dyn_CS$$$8__locals1();
    // System.Void <TranslateToManifestConvention>b__0(System.Char ch, System.String escape)
    // Offset: 0x11C0124
    void $TranslateToManifestConvention$b__0(::Il2CppChar ch, ::StringW escape);
    // public System.Void .ctor()
    // Offset: 0x11BFFB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBuilder::$$c__DisplayClass22_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBuilder::$$c__DisplayClass22_1*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_1
  #pragma pack(pop)
  static check_size<sizeof(ManifestBuilder::$$c__DisplayClass22_1), 24 + sizeof(::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0*)> __System_Diagnostics_Tracing_ManifestBuilder_$$c__DisplayClass22_1SizeCheck;
  static_assert(sizeof(ManifestBuilder::$$c__DisplayClass22_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1::$TranslateToManifestConvention$b__0
// Il2CppName: <TranslateToManifestConvention>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1::*)(::Il2CppChar, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1::$TranslateToManifestConvention$b__0)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* escape = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1*), "<TranslateToManifestConvention>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, escape});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!