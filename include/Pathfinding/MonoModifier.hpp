// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Pathfinding.IPathModifier
#include "Pathfinding/IPathModifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Seeker
  class Seeker;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: MonoModifier
  class MonoModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::MonoModifier);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::MonoModifier*, "Pathfinding", "MonoModifier");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.MonoModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoModifier : public ::UnityEngine::MonoBehaviour/*, public ::Pathfinding::IPathModifier*/ {
    public:
    public:
    // public Seeker seeker
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Seeker* seeker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Seeker*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Pathfinding::IPathModifier
    operator ::Pathfinding::IPathModifier() noexcept {
      return *reinterpret_cast<::Pathfinding::IPathModifier*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Seeker seeker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Seeker*& dyn_seeker();
    // public System.Void OnEnable()
    // Offset: 0x1C1CDF4
    void OnEnable();
    // public System.Void OnDisable()
    // Offset: 0x1C1CDF8
    void OnDisable();
    // public System.Int32 get_Order()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Order();
    // public System.Void Awake()
    // Offset: 0x1C1CDFC
    void Awake();
    // public System.Void OnDestroy()
    // Offset: 0x1C1CEB4
    void OnDestroy();
    // public System.Void PreProcess(Pathfinding.Path p)
    // Offset: 0x1C1CF54
    void PreProcess(::Pathfinding::Path* p);
    // public System.Void Apply(Pathfinding.Path p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Apply(::Pathfinding::Path* p);
    // protected System.Void .ctor()
    // Offset: 0x1C07EC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::MonoModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoModifier*, creationType>()));
    }
  }; // Pathfinding.MonoModifier
  #pragma pack(pop)
  static check_size<sizeof(MonoModifier), 24 + sizeof(::GlobalNamespace::Seeker*)> __Pathfinding_MonoModifierSizeCheck;
  static_assert(sizeof(MonoModifier) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::MonoModifier::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MonoModifier::*)()>(&Pathfinding::MonoModifier::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MonoModifier::*)()>(&Pathfinding::MonoModifier::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::MonoModifier::*)()>(&Pathfinding::MonoModifier::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MonoModifier::*)()>(&Pathfinding::MonoModifier::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MonoModifier::*)()>(&Pathfinding::MonoModifier::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::PreProcess
// Il2CppName: PreProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MonoModifier::*)(::Pathfinding::Path*)>(&Pathfinding::MonoModifier::PreProcess)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "PreProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::MonoModifier::*)(::Pathfinding::Path*)>(&Pathfinding::MonoModifier::Apply)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::MonoModifier*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::MonoModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
