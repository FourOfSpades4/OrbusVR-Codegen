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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LineRendererRope
  class LineRendererRope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LineRendererRope);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineRendererRope*, "", "LineRendererRope");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: LineRendererRope
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACDE3C
  // [RequireComponent] Offset: ACDE3C
  class LineRendererRope : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single resolution
    // Size: 0x4
    // Offset: 0x20
    float resolution;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ropeDrag
    // Size: 0x4
    // Offset: 0x24
    float ropeDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ropeMass
    // Size: 0x4
    // Offset: 0x28
    float ropeMass;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ropeColRadius
    // Size: 0x4
    // Offset: 0x2C
    float ropeColRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] segmentPos
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector3> segmentPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.GameObject[] joints
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::GameObject*> joints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private UnityEngine.LineRenderer line
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::LineRenderer* line;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private System.Int32 segments
    // Size: 0x4
    // Offset: 0x48
    int segments;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean rope
    // Size: 0x1
    // Offset: 0x4C
    bool rope;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rope and: swingAxis
    char __padding9[0x3] = {};
    // public UnityEngine.Vector3 swingAxis
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 swingAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single lowTwistLimit
    // Size: 0x4
    // Offset: 0x5C
    float lowTwistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single highTwistLimit
    // Size: 0x4
    // Offset: 0x60
    float highTwistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single swing1Limit
    // Size: 0x4
    // Offset: 0x64
    float swing1Limit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single resolution
    [[deprecated("Use field access instead!")]] float& dyn_resolution();
    // Get instance field reference: public System.Single ropeDrag
    [[deprecated("Use field access instead!")]] float& dyn_ropeDrag();
    // Get instance field reference: public System.Single ropeMass
    [[deprecated("Use field access instead!")]] float& dyn_ropeMass();
    // Get instance field reference: public System.Single ropeColRadius
    [[deprecated("Use field access instead!")]] float& dyn_ropeColRadius();
    // Get instance field reference: private UnityEngine.Vector3[] segmentPos
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_segmentPos();
    // Get instance field reference: private UnityEngine.GameObject[] joints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_joints();
    // Get instance field reference: private UnityEngine.LineRenderer line
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_line();
    // Get instance field reference: private System.Int32 segments
    [[deprecated("Use field access instead!")]] int& dyn_segments();
    // Get instance field reference: private System.Boolean rope
    [[deprecated("Use field access instead!")]] bool& dyn_rope();
    // Get instance field reference: public UnityEngine.Vector3 swingAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_swingAxis();
    // Get instance field reference: public System.Single lowTwistLimit
    [[deprecated("Use field access instead!")]] float& dyn_lowTwistLimit();
    // Get instance field reference: public System.Single highTwistLimit
    [[deprecated("Use field access instead!")]] float& dyn_highTwistLimit();
    // Get instance field reference: public System.Single swing1Limit
    [[deprecated("Use field access instead!")]] float& dyn_swing1Limit();
    // private System.Void Awake()
    // Offset: 0x106CB08
    void Awake();
    // private System.Void Update()
    // Offset: 0x106CB0C
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x106CB10
    void LateUpdate();
    // public System.Void BuildRope()
    // Offset: 0x106CCC8
    void BuildRope();
    // private System.Void AddJointPhysics(System.Int32 n)
    // Offset: 0x106D358
    void AddJointPhysics(int n);
    // public System.Void DestroyRope()
    // Offset: 0x106D974
    void DestroyRope();
    // public System.Void .ctor()
    // Offset: 0x106DA8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineRendererRope* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LineRendererRope::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineRendererRope*, creationType>()));
    }
  }; // LineRendererRope
  #pragma pack(pop)
  static check_size<sizeof(LineRendererRope), 100 + sizeof(float)> __GlobalNamespace_LineRendererRopeSizeCheck;
  static_assert(sizeof(LineRendererRope) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineRendererRope::*)()>(&GlobalNamespace::LineRendererRope::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineRendererRope*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineRendererRope::*)()>(&GlobalNamespace::LineRendererRope::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineRendererRope*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineRendererRope::*)()>(&GlobalNamespace::LineRendererRope::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineRendererRope*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::BuildRope
// Il2CppName: BuildRope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineRendererRope::*)()>(&GlobalNamespace::LineRendererRope::BuildRope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineRendererRope*), "BuildRope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::AddJointPhysics
// Il2CppName: AddJointPhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineRendererRope::*)(int)>(&GlobalNamespace::LineRendererRope::AddJointPhysics)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineRendererRope*), "AddJointPhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::DestroyRope
// Il2CppName: DestroyRope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineRendererRope::*)()>(&GlobalNamespace::LineRendererRope::DestroyRope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineRendererRope*), "DestroyRope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineRendererRope::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
