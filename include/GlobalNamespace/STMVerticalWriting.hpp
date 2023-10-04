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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMVerticalWriting
  class STMVerticalWriting;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMVerticalWriting);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMVerticalWriting*, "", "STMVerticalWriting");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: STMVerticalWriting
  // [TokenAttribute] Offset: FFFFFFFF
  class STMVerticalWriting : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 eulerRotation
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 eulerRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 eulerRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_eulerRotation();
    // public System.Void RotateLetters(UnityEngine.Vector3[] verts, UnityEngine.Vector3[] middles, UnityEngine.Vector3[] positions)
    // Offset: 0xE328E8
    void RotateLetters(::ArrayW<::UnityEngine::Vector3> verts, ::ArrayW<::UnityEngine::Vector3> middles, ::ArrayW<::UnityEngine::Vector3> positions);
    // public UnityEngine.Vector3 RotateVertAroundMiddle(UnityEngine.Vector3 vert, UnityEngine.Vector3 middle, UnityEngine.Vector3 euler)
    // Offset: 0xE32C70
    ::UnityEngine::Vector3 RotateVertAroundMiddle(::UnityEngine::Vector3 vert, ::UnityEngine::Vector3 middle, ::UnityEngine::Vector3 euler);
    // public System.Void .ctor()
    // Offset: 0xE32D9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMVerticalWriting* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMVerticalWriting::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMVerticalWriting*, creationType>()));
    }
  }; // STMVerticalWriting
  #pragma pack(pop)
  static check_size<sizeof(STMVerticalWriting), 24 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_STMVerticalWritingSizeCheck;
  static_assert(sizeof(STMVerticalWriting) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMVerticalWriting::RotateLetters
// Il2CppName: RotateLetters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMVerticalWriting::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&GlobalNamespace::STMVerticalWriting::RotateLetters)> {
  static const MethodInfo* get() {
    static auto* verts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* middles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMVerticalWriting*), "RotateLetters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, middles, positions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMVerticalWriting::RotateVertAroundMiddle
// Il2CppName: RotateVertAroundMiddle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::STMVerticalWriting::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::STMVerticalWriting::RotateVertAroundMiddle)> {
  static const MethodInfo* get() {
    static auto* vert = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* middle = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* euler = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMVerticalWriting*), "RotateVertAroundMiddle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vert, middle, euler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMVerticalWriting::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!