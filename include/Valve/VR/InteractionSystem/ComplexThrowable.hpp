// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.InteractionSystem.Hand/AttachmentFlags
#include "Valve/VR/InteractionSystem/Hand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Skipping declaration: Hand because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: ComplexThrowable
  class ComplexThrowable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::ComplexThrowable);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::ComplexThrowable*, "Valve.VR.InteractionSystem", "ComplexThrowable");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.ComplexThrowable
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD06EC
  class ComplexThrowable : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode
    struct AttachMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Valve.VR.InteractionSystem.ComplexThrowable/AttachMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct AttachMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AttachMode
      constexpr AttachMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode FixedJoint
      static constexpr const int FixedJoint = 0;
      // Get static field: static public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode FixedJoint
      static ::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode _get_FixedJoint();
      // Set static field: static public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode FixedJoint
      static void _set_FixedJoint(::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode value);
      // static field const value: static public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode Force
      static constexpr const int Force = 1;
      // Get static field: static public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode Force
      static ::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode _get_Force();
      // Set static field: static public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode Force
      static void _set_Force(::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Valve.VR.InteractionSystem.ComplexThrowable/AttachMode
    #pragma pack(pop)
    static check_size<sizeof(ComplexThrowable::AttachMode), 0 + sizeof(int)> __Valve_VR_InteractionSystem_ComplexThrowable_AttachModeSizeCheck;
    static_assert(sizeof(ComplexThrowable::AttachMode) == 0x4);
    public:
    // public System.Single attachForce
    // Size: 0x4
    // Offset: 0x18
    float attachForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single attachForceDamper
    // Size: 0x4
    // Offset: 0x1C
    float attachForceDamper;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode attachMode
    // Size: 0x4
    // Offset: 0x20
    ::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode attachMode;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode) == 0x4);
    // public Valve.VR.InteractionSystem.Hand/AttachmentFlags attachmentFlags
    // Size: 0x4
    // Offset: 0x24
    ::Valve::VR::InteractionSystem::Hand::AttachmentFlags attachmentFlags;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Hand::AttachmentFlags) == 0x4);
    // private System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand> holdingHands
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Valve::VR::InteractionSystem::Hand*>* holdingHands;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Valve::VR::InteractionSystem::Hand*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Rigidbody> holdingBodies
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* holdingBodies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> holdingPoints
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* holdingPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Rigidbody> rigidBodies
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* rigidBodies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single attachForce
    [[deprecated("Use field access instead!")]] float& dyn_attachForce();
    // Get instance field reference: public System.Single attachForceDamper
    [[deprecated("Use field access instead!")]] float& dyn_attachForceDamper();
    // Get instance field reference: public Valve.VR.InteractionSystem.ComplexThrowable/AttachMode attachMode
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode& dyn_attachMode();
    // Get instance field reference: public Valve.VR.InteractionSystem.Hand/AttachmentFlags attachmentFlags
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Hand::AttachmentFlags& dyn_attachmentFlags();
    // Get instance field reference: private System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand> holdingHands
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Valve::VR::InteractionSystem::Hand*>*& dyn_holdingHands();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Rigidbody> holdingBodies
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*& dyn_holdingBodies();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> holdingPoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn_holdingPoints();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Rigidbody> rigidBodies
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*& dyn_rigidBodies();
    // private System.Void Awake()
    // Offset: 0x115DF74
    void Awake();
    // private System.Void Update()
    // Offset: 0x115DFC8
    void Update();
    // private System.Void OnHandHoverBegin(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x115E2A4
    void OnHandHoverBegin(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnHandHoverEnd(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x115E350
    void OnHandHoverEnd(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void HandHoverUpdate(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x115E3FC
    void HandHoverUpdate(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void PhysicsAttach(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x115E448
    void PhysicsAttach(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Boolean PhysicsDetach(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x115E0BC
    bool PhysicsDetach(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void FixedUpdate()
    // Offset: 0x115F234
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x115F594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComplexThrowable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::ComplexThrowable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComplexThrowable*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.ComplexThrowable
  #pragma pack(pop)
  static check_size<sizeof(ComplexThrowable), 64 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*)> __Valve_VR_InteractionSystem_ComplexThrowableSizeCheck;
  static_assert(sizeof(ComplexThrowable) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::ComplexThrowable::AttachMode, "Valve.VR.InteractionSystem", "ComplexThrowable/AttachMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)()>(&Valve::VR::InteractionSystem::ComplexThrowable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)()>(&Valve::VR::InteractionSystem::ComplexThrowable::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::OnHandHoverBegin
// Il2CppName: OnHandHoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::ComplexThrowable::OnHandHoverBegin)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "OnHandHoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::OnHandHoverEnd
// Il2CppName: OnHandHoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::ComplexThrowable::OnHandHoverEnd)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "OnHandHoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::HandHoverUpdate
// Il2CppName: HandHoverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::ComplexThrowable::HandHoverUpdate)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "HandHoverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::PhysicsAttach
// Il2CppName: PhysicsAttach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::ComplexThrowable::PhysicsAttach)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "PhysicsAttach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::PhysicsDetach
// Il2CppName: PhysicsDetach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::ComplexThrowable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::ComplexThrowable::PhysicsDetach)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "PhysicsDetach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ComplexThrowable::*)()>(&Valve::VR::InteractionSystem::ComplexThrowable::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ComplexThrowable*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ComplexThrowable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!