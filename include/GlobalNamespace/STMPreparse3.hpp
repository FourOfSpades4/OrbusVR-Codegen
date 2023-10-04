// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: STMTextContainer
  class STMTextContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMPreparse3
  class STMPreparse3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMPreparse3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMPreparse3*, "", "STMPreparse3");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: STMPreparse3
  // [TokenAttribute] Offset: FFFFFFFF
  class STMPreparse3 : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String textTag
    // Size: 0x8
    // Offset: 0x18
    ::StringW textTag;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String textTag
    [[deprecated("Use field access instead!")]] ::StringW& dyn_textTag();
    // public System.Void Parse(STMTextContainer x)
    // Offset: 0xE2EFA4
    void Parse(::GlobalNamespace::STMTextContainer* x);
    // private System.Void Replace(STMTextContainer x, System.Int32 startingPoint, System.Int32 endingPoint)
    // Offset: 0xE2F194
    void Replace(::GlobalNamespace::STMTextContainer* x, int startingPoint, int endingPoint);
    // public System.Void .ctor()
    // Offset: 0xE2F3B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMPreparse3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMPreparse3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMPreparse3*, creationType>()));
    }
  }; // STMPreparse3
  #pragma pack(pop)
  static check_size<sizeof(STMPreparse3), 24 + sizeof(::StringW)> __GlobalNamespace_STMPreparse3SizeCheck;
  static_assert(sizeof(STMPreparse3) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMPreparse3::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMPreparse3::*)(::GlobalNamespace::STMTextContainer*)>(&GlobalNamespace::STMPreparse3::Parse)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "STMTextContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMPreparse3*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMPreparse3::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMPreparse3::*)(::GlobalNamespace::STMTextContainer*, int, int)>(&GlobalNamespace::STMPreparse3::Replace)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "STMTextContainer")->byval_arg;
    static auto* startingPoint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* endingPoint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMPreparse3*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, startingPoint, endingPoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMPreparse3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!