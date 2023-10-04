// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ProceduralWorld
#include "GlobalNamespace/ProceduralWorld.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProceduralWorld::ProceduralTile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProceduralWorld::ProceduralTile*, "", "ProceduralWorld/ProceduralTile");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ProceduralWorld/ProceduralTile
  // [TokenAttribute] Offset: FFFFFFFF
  class ProceduralWorld::ProceduralTile : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ProceduralWorld::ProceduralTile::$Generate$d__12
    class $Generate$d__12;
    // Nested type: ::GlobalNamespace::ProceduralWorld::ProceduralTile::$InternalGenerate$d__17
    class $InternalGenerate$d__17;
    public:
    // private System.Int32 x
    // Size: 0x4
    // Offset: 0x10
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 z
    // Size: 0x4
    // Offset: 0x14
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Random rnd
    // Size: 0x8
    // Offset: 0x18
    ::System::Random* rnd;
    // Field size check
    static_assert(sizeof(::System::Random*) == 0x8);
    // private System.Boolean staticBatching
    // Size: 0x1
    // Offset: 0x20
    bool staticBatching;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: staticBatching and: world
    char __padding3[0x7] = {};
    // private ProceduralWorld world
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ProceduralWorld* world;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ProceduralWorld*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAD8AA8
    // private System.Boolean <destroyed>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool destroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: destroyed and: root
    char __padding5[0x7] = {};
    // private UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.IEnumerator ie
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::IEnumerator* ie;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: private System.Int32 z
    [[deprecated("Use field access instead!")]] int& dyn_z();
    // Get instance field reference: private System.Random rnd
    [[deprecated("Use field access instead!")]] ::System::Random*& dyn_rnd();
    // Get instance field reference: private System.Boolean staticBatching
    [[deprecated("Use field access instead!")]] bool& dyn_staticBatching();
    // Get instance field reference: private ProceduralWorld world
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ProceduralWorld*& dyn_world();
    // Get instance field reference: private System.Boolean <destroyed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$destroyed$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_root();
    // Get instance field reference: private System.Collections.IEnumerator ie
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_ie();
    // public System.Boolean get_destroyed()
    // Offset: 0xE1F9F4
    bool get_destroyed();
    // private System.Void set_destroyed(System.Boolean value)
    // Offset: 0xE1F9FC
    void set_destroyed(bool value);
    // public System.Void .ctor(ProceduralWorld world, System.Int32 x, System.Int32 z)
    // Offset: 0xE1F4F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralWorld::ProceduralTile* New_ctor(::GlobalNamespace::ProceduralWorld* world, int x, int z) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ProceduralWorld::ProceduralTile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralWorld::ProceduralTile*, creationType>(world, x, z)));
    }
    // public System.Collections.IEnumerator Generate()
    // Offset: 0xE1F594
    ::System::Collections::IEnumerator* Generate();
    // public System.Void ForceFinish()
    // Offset: 0xE1F608
    void ForceFinish();
    // private UnityEngine.Vector3 RandomInside()
    // Offset: 0xE1FA34
    ::UnityEngine::Vector3 RandomInside();
    // private UnityEngine.Vector3 RandomInside(System.Single px, System.Single pz)
    // Offset: 0xE1FB00
    ::UnityEngine::Vector3 RandomInside(float px, float pz);
    // private UnityEngine.Quaternion RandomYRot()
    // Offset: 0xE1FC08
    ::UnityEngine::Quaternion RandomYRot();
    // private System.Collections.IEnumerator InternalGenerate()
    // Offset: 0xE1FCD8
    ::System::Collections::IEnumerator* InternalGenerate();
    // public System.Void Destroy()
    // Offset: 0xE1F24C
    void Destroy();
  }; // ProceduralWorld/ProceduralTile
  #pragma pack(pop)
  static check_size<sizeof(ProceduralWorld::ProceduralTile), 64 + sizeof(::System::Collections::IEnumerator*)> __GlobalNamespace_ProceduralWorld_ProceduralTileSizeCheck;
  static_assert(sizeof(ProceduralWorld::ProceduralTile) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::get_destroyed
// Il2CppName: get_destroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::get_destroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "get_destroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::set_destroyed
// Il2CppName: set_destroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProceduralWorld::ProceduralTile::*)(bool)>(&GlobalNamespace::ProceduralWorld::ProceduralTile::set_destroyed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "set_destroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::Generate
// Il2CppName: Generate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::Generate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "Generate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::ForceFinish
// Il2CppName: ForceFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::ForceFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "ForceFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::RandomInside
// Il2CppName: RandomInside
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::RandomInside)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "RandomInside", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::RandomInside
// Il2CppName: RandomInside
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::ProceduralWorld::ProceduralTile::*)(float, float)>(&GlobalNamespace::ProceduralWorld::ProceduralTile::RandomInside)> {
  static const MethodInfo* get() {
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pz = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "RandomInside", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{px, pz});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::RandomYRot
// Il2CppName: RandomYRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::RandomYRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "RandomYRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::InternalGenerate
// Il2CppName: InternalGenerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::InternalGenerate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "InternalGenerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralWorld::ProceduralTile::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProceduralWorld::ProceduralTile::*)()>(&GlobalNamespace::ProceduralWorld::ProceduralTile::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralWorld::ProceduralTile*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};