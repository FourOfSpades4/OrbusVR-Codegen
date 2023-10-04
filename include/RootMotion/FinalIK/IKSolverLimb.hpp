// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverTrigonometric
#include "RootMotion/FinalIK/IKSolverTrigonometric.hpp"
// Including type: UnityEngine.AvatarIKGoal
#include "UnityEngine/AvatarIKGoal.hpp"
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
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLimb);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLimb*, "RootMotion.FinalIK", "IKSolverLimb");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x140
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLimb
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverLimb : public ::RootMotion::FinalIK::IKSolverTrigonometric {
    public:
    // Writing base type padding for base size: 0xA5 to desired offset: 0xA8
    char ___base_padding[0x3] = {};
    // Nested type: ::RootMotion::FinalIK::IKSolverLimb::BendModifier
    struct BendModifier;
    // Nested type: ::RootMotion::FinalIK::IKSolverLimb::AxisDirection
    struct AxisDirection;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.IKSolverLimb/BendModifier
    // [TokenAttribute] Offset: FFFFFFFF
    struct BendModifier/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BendModifier
      constexpr BendModifier(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Animation
      static constexpr const int Animation = 0;
      // Get static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Animation
      static ::RootMotion::FinalIK::IKSolverLimb::BendModifier _get_Animation();
      // Set static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Animation
      static void _set_Animation(::RootMotion::FinalIK::IKSolverLimb::BendModifier value);
      // static field const value: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Target
      static constexpr const int Target = 1;
      // Get static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Target
      static ::RootMotion::FinalIK::IKSolverLimb::BendModifier _get_Target();
      // Set static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Target
      static void _set_Target(::RootMotion::FinalIK::IKSolverLimb::BendModifier value);
      // static field const value: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Parent
      static constexpr const int Parent = 2;
      // Get static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Parent
      static ::RootMotion::FinalIK::IKSolverLimb::BendModifier _get_Parent();
      // Set static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Parent
      static void _set_Parent(::RootMotion::FinalIK::IKSolverLimb::BendModifier value);
      // static field const value: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Arm
      static constexpr const int Arm = 3;
      // Get static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Arm
      static ::RootMotion::FinalIK::IKSolverLimb::BendModifier _get_Arm();
      // Set static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Arm
      static void _set_Arm(::RootMotion::FinalIK::IKSolverLimb::BendModifier value);
      // static field const value: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Goal
      static constexpr const int Goal = 4;
      // Get static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Goal
      static ::RootMotion::FinalIK::IKSolverLimb::BendModifier _get_Goal();
      // Set static field: static public RootMotion.FinalIK.IKSolverLimb/BendModifier Goal
      static void _set_Goal(::RootMotion::FinalIK::IKSolverLimb::BendModifier value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // RootMotion.FinalIK.IKSolverLimb/BendModifier
    #pragma pack(pop)
    static check_size<sizeof(IKSolverLimb::BendModifier), 0 + sizeof(int)> __RootMotion_FinalIK_IKSolverLimb_BendModifierSizeCheck;
    static_assert(sizeof(IKSolverLimb::BendModifier) == 0x4);
    // Size: 0x1C
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: RootMotion.FinalIK.IKSolverLimb/AxisDirection
    // [TokenAttribute] Offset: FFFFFFFF
    struct AxisDirection/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Vector3 direction
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3 direction;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Vector3 axis
      // Size: 0xC
      // Offset: 0xC
      ::UnityEngine::Vector3 axis;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public System.Single dot
      // Size: 0x4
      // Offset: 0x18
      float dot;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: AxisDirection
      constexpr AxisDirection(::UnityEngine::Vector3 direction_ = {}, ::UnityEngine::Vector3 axis_ = {}, float dot_ = {}) noexcept : direction{direction_}, axis{axis_}, dot{dot_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Vector3 direction
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_direction();
      // Get instance field reference: public UnityEngine.Vector3 axis
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_axis();
      // Get instance field reference: public System.Single dot
      [[deprecated("Use field access instead!")]] float& dyn_dot();
      // public System.Void .ctor(UnityEngine.Vector3 direction, UnityEngine.Vector3 axis)
      // Offset: 0xBB9A10
      AxisDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis);
    }; // RootMotion.FinalIK.IKSolverLimb/AxisDirection
    #pragma pack(pop)
    static check_size<sizeof(IKSolverLimb::AxisDirection), 24 + sizeof(float)> __RootMotion_FinalIK_IKSolverLimb_AxisDirectionSizeCheck;
    static_assert(sizeof(IKSolverLimb::AxisDirection) == 0x1C);
    public:
    // public UnityEngine.AvatarIKGoal goal
    // Size: 0x4
    // Offset: 0xA8
    ::UnityEngine::AvatarIKGoal goal;
    // Field size check
    static_assert(sizeof(::UnityEngine::AvatarIKGoal) == 0x4);
    // public RootMotion.FinalIK.IKSolverLimb/BendModifier bendModifier
    // Size: 0x4
    // Offset: 0xAC
    ::RootMotion::FinalIK::IKSolverLimb::BendModifier bendModifier;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLimb::BendModifier) == 0x4);
    // [RangeAttribute] Offset: 0xAC468C
    // public System.Single maintainRotationWeight
    // Size: 0x4
    // Offset: 0xB0
    float maintainRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAC46A4
    // public System.Single bendModifierWeight
    // Size: 0x4
    // Offset: 0xB4
    float bendModifierWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform bendGoal
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Transform* bendGoal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean maintainBendFor1Frame
    // Size: 0x1
    // Offset: 0xC0
    bool maintainBendFor1Frame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean maintainRotationFor1Frame
    // Size: 0x1
    // Offset: 0xC1
    bool maintainRotationFor1Frame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: maintainRotationFor1Frame and: defaultRootRotation
    char __padding6[0x2] = {};
    // private UnityEngine.Quaternion defaultRootRotation
    // Size: 0x10
    // Offset: 0xC4
    ::UnityEngine::Quaternion defaultRootRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion parentDefaultRotation
    // Size: 0x10
    // Offset: 0xD4
    ::UnityEngine::Quaternion parentDefaultRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion bone3RotationBeforeSolve
    // Size: 0x10
    // Offset: 0xE4
    ::UnityEngine::Quaternion bone3RotationBeforeSolve;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion maintainRotation
    // Size: 0x10
    // Offset: 0xF4
    ::UnityEngine::Quaternion maintainRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion bone3DefaultRotation
    // Size: 0x10
    // Offset: 0x104
    ::UnityEngine::Quaternion bone3DefaultRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _bendNormal
    // Size: 0xC
    // Offset: 0x114
    ::UnityEngine::Vector3 bendNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 animationNormal
    // Size: 0xC
    // Offset: 0x120
    ::UnityEngine::Vector3 animationNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: animationNormal and: axisDirectionsLeft
    char __padding13[0x4] = {};
    // private RootMotion.FinalIK.IKSolverLimb/AxisDirection[] axisDirectionsLeft
    // Size: 0x8
    // Offset: 0x130
    ::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection> axisDirectionsLeft;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>) == 0x8);
    // private RootMotion.FinalIK.IKSolverLimb/AxisDirection[] axisDirectionsRight
    // Size: 0x8
    // Offset: 0x138
    ::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection> axisDirectionsRight;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AvatarIKGoal goal
    [[deprecated("Use field access instead!")]] ::UnityEngine::AvatarIKGoal& dyn_goal();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLimb/BendModifier bendModifier
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLimb::BendModifier& dyn_bendModifier();
    // Get instance field reference: public System.Single maintainRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_maintainRotationWeight();
    // Get instance field reference: public System.Single bendModifierWeight
    [[deprecated("Use field access instead!")]] float& dyn_bendModifierWeight();
    // Get instance field reference: public UnityEngine.Transform bendGoal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bendGoal();
    // Get instance field reference: private System.Boolean maintainBendFor1Frame
    [[deprecated("Use field access instead!")]] bool& dyn_maintainBendFor1Frame();
    // Get instance field reference: private System.Boolean maintainRotationFor1Frame
    [[deprecated("Use field access instead!")]] bool& dyn_maintainRotationFor1Frame();
    // Get instance field reference: private UnityEngine.Quaternion defaultRootRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultRootRotation();
    // Get instance field reference: private UnityEngine.Quaternion parentDefaultRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_parentDefaultRotation();
    // Get instance field reference: private UnityEngine.Quaternion bone3RotationBeforeSolve
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_bone3RotationBeforeSolve();
    // Get instance field reference: private UnityEngine.Quaternion maintainRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_maintainRotation();
    // Get instance field reference: private UnityEngine.Quaternion bone3DefaultRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_bone3DefaultRotation();
    // Get instance field reference: private UnityEngine.Vector3 _bendNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__bendNormal();
    // Get instance field reference: private UnityEngine.Vector3 animationNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_animationNormal();
    // Get instance field reference: private RootMotion.FinalIK.IKSolverLimb/AxisDirection[] axisDirectionsLeft
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>& dyn_axisDirectionsLeft();
    // Get instance field reference: private RootMotion.FinalIK.IKSolverLimb/AxisDirection[] axisDirectionsRight
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>& dyn_axisDirectionsRight();
    // public System.Void MaintainRotation()
    // Offset: 0x20913C8
    void MaintainRotation();
    // public System.Void MaintainBend()
    // Offset: 0x209142C
    void MaintainBend();
    // public System.Void .ctor(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x2092D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLimb* New_ctor(::UnityEngine::AvatarIKGoal goal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverLimb::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLimb*, creationType>(goal)));
    }
    // private RootMotion.FinalIK.IKSolverLimb/AxisDirection[] get_axisDirections()
    // Offset: 0x2092DEC
    ::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection> get_axisDirections();
    // private System.Void StoreAxisDirections(ref RootMotion.FinalIK.IKSolverLimb/AxisDirection[] axisDirections)
    // Offset: 0x2091994
    void StoreAxisDirections(ByRef<::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>> axisDirections);
    // private UnityEngine.Vector3 GetModifiedBendNormal()
    // Offset: 0x2091E14
    ::UnityEngine::Vector3 GetModifiedBendNormal();
    // protected override System.Void OnInitiateVirtual()
    // Offset: 0x2091554
    // Implemented from: RootMotion.FinalIK.IKSolverTrigonometric
    // Base method: System.Void IKSolverTrigonometric::OnInitiateVirtual()
    void OnInitiateVirtual();
    // protected override System.Void OnUpdateVirtual()
    // Offset: 0x2091CD8
    // Implemented from: RootMotion.FinalIK.IKSolverTrigonometric
    // Base method: System.Void IKSolverTrigonometric::OnUpdateVirtual()
    void OnUpdateVirtual();
    // protected override System.Void OnPostSolveVirtual()
    // Offset: 0x2092A3C
    // Implemented from: RootMotion.FinalIK.IKSolverTrigonometric
    // Base method: System.Void IKSolverTrigonometric::OnPostSolveVirtual()
    void OnPostSolveVirtual();
    // public System.Void .ctor()
    // Offset: 0x2092BE0
    // Implemented from: RootMotion.FinalIK.IKSolverTrigonometric
    // Base method: System.Void IKSolverTrigonometric::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLimb* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverLimb::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLimb*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverLimb
  #pragma pack(pop)
  static check_size<sizeof(IKSolverLimb), 312 + sizeof(::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>)> __RootMotion_FinalIK_IKSolverLimbSizeCheck;
  static_assert(sizeof(IKSolverLimb) == 0x140);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLimb::AxisDirection, "RootMotion.FinalIK", "IKSolverLimb/AxisDirection");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLimb::BendModifier, "RootMotion.FinalIK", "IKSolverLimb/BendModifier");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::MaintainRotation
// Il2CppName: MaintainRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::MaintainRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "MaintainRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::MaintainBend
// Il2CppName: MaintainBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::MaintainBend)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "MaintainBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::get_axisDirections
// Il2CppName: get_axisDirections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection> (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::get_axisDirections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "get_axisDirections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections
// Il2CppName: StoreAxisDirections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)(ByRef<::ArrayW<::RootMotion::FinalIK::IKSolverLimb::AxisDirection>>)>(&RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections)> {
  static const MethodInfo* get() {
    static auto* axisDirections = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverLimb/AxisDirection"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "StoreAxisDirections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axisDirections});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal
// Il2CppName: GetModifiedBendNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "GetModifiedBendNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual
// Il2CppName: OnInitiateVirtual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "OnInitiateVirtual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual
// Il2CppName: OnUpdateVirtual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "OnUpdateVirtual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual
// Il2CppName: OnPostSolveVirtual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLimb*), "OnPostSolveVirtual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLimb::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
