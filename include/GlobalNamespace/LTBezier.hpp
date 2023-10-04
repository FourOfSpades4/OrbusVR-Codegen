// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LTBezier
  class LTBezier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LTBezier);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LTBezier*, "", "LTBezier");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: LTBezier
  // [TokenAttribute] Offset: FFFFFFFF
  class LTBezier : public ::Il2CppObject {
    public:
    public:
    // public System.Single length
    // Size: 0x4
    // Offset: 0x10
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 a
    // Size: 0xC
    // Offset: 0x14
    ::UnityEngine::Vector3 a;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 aa
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 aa;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bb
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 bb;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 cc
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 cc;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single len
    // Size: 0x4
    // Offset: 0x44
    float len;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single[] arcLengths
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<float> arcLengths;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Get instance field reference: public System.Single length
    [[deprecated("Use field access instead!")]] float& dyn_length();
    // Get instance field reference: private UnityEngine.Vector3 a
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_a();
    // Get instance field reference: private UnityEngine.Vector3 aa
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_aa();
    // Get instance field reference: private UnityEngine.Vector3 bb
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bb();
    // Get instance field reference: private UnityEngine.Vector3 cc
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_cc();
    // Get instance field reference: private System.Single len
    [[deprecated("Use field access instead!")]] float& dyn_len();
    // Get instance field reference: private System.Single[] arcLengths
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_arcLengths();
    // public System.Void .ctor(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c, UnityEngine.Vector3 d, System.Single precision)
    // Offset: 0x1AB7024
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LTBezier* New_ctor(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Vector3 d, float precision) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LTBezier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LTBezier*, creationType>(a, b, c, d, precision)));
    }
    // private System.Single map(System.Single u)
    // Offset: 0x1AB749C
    float map(float u);
    // private UnityEngine.Vector3 bezierPoint(System.Single t)
    // Offset: 0x1AB73C4
    ::UnityEngine::Vector3 bezierPoint(float t);
    // public UnityEngine.Vector3 point(System.Single t)
    // Offset: 0x1AB76BC
    ::UnityEngine::Vector3 point(float t);
  }; // LTBezier
  #pragma pack(pop)
  static check_size<sizeof(LTBezier), 72 + sizeof(::ArrayW<float>)> __GlobalNamespace_LTBezierSizeCheck;
  static_assert(sizeof(LTBezier) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LTBezier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LTBezier::map
// Il2CppName: map
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LTBezier::*)(float)>(&GlobalNamespace::LTBezier::map)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LTBezier*), "map", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LTBezier::bezierPoint
// Il2CppName: bezierPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::LTBezier::*)(float)>(&GlobalNamespace::LTBezier::bezierPoint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LTBezier*), "bezierPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LTBezier::point
// Il2CppName: point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::LTBezier::*)(float)>(&GlobalNamespace::LTBezier::point)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LTBezier*), "point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};