// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Jacovone
namespace Jacovone {
  // Skipping declaration: VelocityVariation because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Jacovone
namespace Jacovone {
  // Forward declaring type: Waypoint
  class Waypoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Jacovone::Waypoint);
DEFINE_IL2CPP_ARG_TYPE(::Jacovone::Waypoint*, "Jacovone", "Waypoint");
// Type namespace: Jacovone
namespace Jacovone {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Jacovone.Waypoint
  // [TokenAttribute] Offset: FFFFFFFF
  class Waypoint : public ::Il2CppObject {
    public:
    // Nested type: ::Jacovone::Waypoint::ReachedEvent
    class ReachedEvent;
    // Nested type: ::Jacovone::Waypoint::VelocityVariation
    struct VelocityVariation;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Jacovone.Waypoint/VelocityVariation
    // [TokenAttribute] Offset: FFFFFFFF
    struct VelocityVariation/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: VelocityVariation
      constexpr VelocityVariation(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Jacovone.Waypoint/VelocityVariation Slow
      static constexpr const int Slow = 0;
      // Get static field: static public Jacovone.Waypoint/VelocityVariation Slow
      static ::Jacovone::Waypoint::VelocityVariation _get_Slow();
      // Set static field: static public Jacovone.Waypoint/VelocityVariation Slow
      static void _set_Slow(::Jacovone::Waypoint::VelocityVariation value);
      // static field const value: static public Jacovone.Waypoint/VelocityVariation Medium
      static constexpr const int Medium = 1;
      // Get static field: static public Jacovone.Waypoint/VelocityVariation Medium
      static ::Jacovone::Waypoint::VelocityVariation _get_Medium();
      // Set static field: static public Jacovone.Waypoint/VelocityVariation Medium
      static void _set_Medium(::Jacovone::Waypoint::VelocityVariation value);
      // static field const value: static public Jacovone.Waypoint/VelocityVariation Fast
      static constexpr const int Fast = 2;
      // Get static field: static public Jacovone.Waypoint/VelocityVariation Fast
      static ::Jacovone::Waypoint::VelocityVariation _get_Fast();
      // Set static field: static public Jacovone.Waypoint/VelocityVariation Fast
      static void _set_Fast(::Jacovone::Waypoint::VelocityVariation value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Jacovone.Waypoint/VelocityVariation
    #pragma pack(pop)
    static check_size<sizeof(Waypoint::VelocityVariation), 0 + sizeof(int)> __Jacovone_Waypoint_VelocityVariationSizeCheck;
    static_assert(sizeof(Waypoint::VelocityVariation) == 0x4);
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 rotation
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Transform lookAt
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* lookAt;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 inTangent
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 inTangent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 outTangent
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 outTangent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean symmetricTangents
    // Size: 0x1
    // Offset: 0x48
    bool symmetricTangents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: symmetricTangents and: velocity
    char __padding5[0x3] = {};
    // public System.Single velocity
    // Size: 0x4
    // Offset: 0x4C
    float velocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Jacovone.Waypoint/VelocityVariation inVariation
    // Size: 0x4
    // Offset: 0x50
    ::Jacovone::Waypoint::VelocityVariation inVariation;
    // Field size check
    static_assert(sizeof(::Jacovone::Waypoint::VelocityVariation) == 0x4);
    // public Jacovone.Waypoint/VelocityVariation outVariation
    // Size: 0x4
    // Offset: 0x54
    ::Jacovone::Waypoint::VelocityVariation outVariation;
    // Field size check
    static_assert(sizeof(::Jacovone::Waypoint::VelocityVariation) == 0x4);
    // public Jacovone.Waypoint/ReachedEvent reached
    // Size: 0x8
    // Offset: 0x58
    ::Jacovone::Waypoint::ReachedEvent* reached;
    // Field size check
    static_assert(sizeof(::Jacovone::Waypoint::ReachedEvent*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector3 rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotation();
    // Get instance field reference: public UnityEngine.Transform lookAt
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_lookAt();
    // Get instance field reference: public UnityEngine.Vector3 inTangent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_inTangent();
    // Get instance field reference: public UnityEngine.Vector3 outTangent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_outTangent();
    // Get instance field reference: public System.Boolean symmetricTangents
    [[deprecated("Use field access instead!")]] bool& dyn_symmetricTangents();
    // Get instance field reference: public System.Single velocity
    [[deprecated("Use field access instead!")]] float& dyn_velocity();
    // Get instance field reference: public Jacovone.Waypoint/VelocityVariation inVariation
    [[deprecated("Use field access instead!")]] ::Jacovone::Waypoint::VelocityVariation& dyn_inVariation();
    // Get instance field reference: public Jacovone.Waypoint/VelocityVariation outVariation
    [[deprecated("Use field access instead!")]] ::Jacovone::Waypoint::VelocityVariation& dyn_outVariation();
    // Get instance field reference: public Jacovone.Waypoint/ReachedEvent reached
    [[deprecated("Use field access instead!")]] ::Jacovone::Waypoint::ReachedEvent*& dyn_reached();
    // public System.Void .ctor()
    // Offset: 0x1060F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Waypoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Jacovone::Waypoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Waypoint*, creationType>()));
    }
    // public UnityEngine.Vector3 get_Position()
    // Offset: 0x1061024
    ::UnityEngine::Vector3 get_Position();
    // public System.Void set_Position(UnityEngine.Vector3 value)
    // Offset: 0x1061030
    void set_Position(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_Rotation()
    // Offset: 0x106103C
    ::UnityEngine::Vector3 get_Rotation();
    // public System.Void set_Rotation(UnityEngine.Vector3 value)
    // Offset: 0x1061048
    void set_Rotation(::UnityEngine::Vector3 value);
    // public UnityEngine.Transform get_LookAt()
    // Offset: 0x1061054
    ::UnityEngine::Transform* get_LookAt();
    // public System.Void set_LookAt(UnityEngine.Transform value)
    // Offset: 0x106105C
    void set_LookAt(::UnityEngine::Transform* value);
    // public UnityEngine.Vector3 get_InTangent()
    // Offset: 0x1061064
    ::UnityEngine::Vector3 get_InTangent();
    // public System.Void set_InTangent(UnityEngine.Vector3 value)
    // Offset: 0x1061070
    void set_InTangent(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_OutTangent()
    // Offset: 0x1061118
    ::UnityEngine::Vector3 get_OutTangent();
    // public System.Void set_OutTangent(UnityEngine.Vector3 value)
    // Offset: 0x1061124
    void set_OutTangent(::UnityEngine::Vector3 value);
    // public System.Boolean get_SymmetricTangents()
    // Offset: 0x10611CC
    bool get_SymmetricTangents();
    // public System.Void set_SymmetricTangents(System.Boolean value)
    // Offset: 0x10611D4
    void set_SymmetricTangents(bool value);
    // public Jacovone.Waypoint/VelocityVariation get_InVariation()
    // Offset: 0x10611E0
    ::Jacovone::Waypoint::VelocityVariation get_InVariation();
    // public System.Void set_InVariation(Jacovone.Waypoint/VelocityVariation value)
    // Offset: 0x10611E8
    void set_InVariation(::Jacovone::Waypoint::VelocityVariation value);
    // public Jacovone.Waypoint/VelocityVariation get_OutVariation()
    // Offset: 0x10611F0
    ::Jacovone::Waypoint::VelocityVariation get_OutVariation();
    // public System.Void set_OutVariation(Jacovone.Waypoint/VelocityVariation value)
    // Offset: 0x10611F8
    void set_OutVariation(::Jacovone::Waypoint::VelocityVariation value);
    // public System.Single get_Velocity()
    // Offset: 0x1061200
    float get_Velocity();
    // public System.Void set_Velocity(System.Single value)
    // Offset: 0x1061208
    void set_Velocity(float value);
    // public Jacovone.Waypoint/ReachedEvent get_Reached()
    // Offset: 0x1061210
    ::Jacovone::Waypoint::ReachedEvent* get_Reached();
    // public System.Void set_Reached(Jacovone.Waypoint/ReachedEvent value)
    // Offset: 0x1061218
    void set_Reached(::Jacovone::Waypoint::ReachedEvent* value);
  }; // Jacovone.Waypoint
  #pragma pack(pop)
  static check_size<sizeof(Waypoint), 88 + sizeof(::Jacovone::Waypoint::ReachedEvent*)> __Jacovone_WaypointSizeCheck;
  static_assert(sizeof(Waypoint) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Jacovone::Waypoint::VelocityVariation, "Jacovone", "Waypoint/VelocityVariation");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Jacovone::Waypoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Jacovone::Waypoint::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::UnityEngine::Vector3)>(&Jacovone::Waypoint::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_Rotation
// Il2CppName: set_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::UnityEngine::Vector3)>(&Jacovone::Waypoint::set_Rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_LookAt
// Il2CppName: get_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_LookAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_LookAt
// Il2CppName: set_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::UnityEngine::Transform*)>(&Jacovone::Waypoint::set_LookAt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_InTangent
// Il2CppName: get_InTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_InTangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_InTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_InTangent
// Il2CppName: set_InTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::UnityEngine::Vector3)>(&Jacovone::Waypoint::set_InTangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_InTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_OutTangent
// Il2CppName: get_OutTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_OutTangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_OutTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_OutTangent
// Il2CppName: set_OutTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::UnityEngine::Vector3)>(&Jacovone::Waypoint::set_OutTangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_OutTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_SymmetricTangents
// Il2CppName: get_SymmetricTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_SymmetricTangents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_SymmetricTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_SymmetricTangents
// Il2CppName: set_SymmetricTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(bool)>(&Jacovone::Waypoint::set_SymmetricTangents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_SymmetricTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_InVariation
// Il2CppName: get_InVariation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Jacovone::Waypoint::VelocityVariation (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_InVariation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_InVariation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_InVariation
// Il2CppName: set_InVariation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::Jacovone::Waypoint::VelocityVariation)>(&Jacovone::Waypoint::set_InVariation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Jacovone", "Waypoint/VelocityVariation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_InVariation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_OutVariation
// Il2CppName: get_OutVariation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Jacovone::Waypoint::VelocityVariation (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_OutVariation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_OutVariation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_OutVariation
// Il2CppName: set_OutVariation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::Jacovone::Waypoint::VelocityVariation)>(&Jacovone::Waypoint::set_OutVariation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Jacovone", "Waypoint/VelocityVariation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_OutVariation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_Velocity
// Il2CppName: get_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_Velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_Velocity
// Il2CppName: set_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(float)>(&Jacovone::Waypoint::set_Velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::get_Reached
// Il2CppName: get_Reached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Jacovone::Waypoint::ReachedEvent* (Jacovone::Waypoint::*)()>(&Jacovone::Waypoint::get_Reached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "get_Reached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Waypoint::set_Reached
// Il2CppName: set_Reached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Waypoint::*)(::Jacovone::Waypoint::ReachedEvent*)>(&Jacovone::Waypoint::set_Reached)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Jacovone", "Waypoint/ReachedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Waypoint*), "set_Reached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
