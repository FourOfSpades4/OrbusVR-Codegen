// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: KevinIglesias.ResourceType
#include "KevinIglesias/ResourceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KevinIglesias
namespace KevinIglesias {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: KevinIglesias
namespace KevinIglesias {
  // Forward declaring type: GatherResource
  class GatherResource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KevinIglesias::GatherResource);
DEFINE_IL2CPP_ARG_TYPE(::KevinIglesias::GatherResource*, "KevinIglesias", "GatherResource");
// Type namespace: KevinIglesias
namespace KevinIglesias {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: KevinIglesias.GatherResource
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD1E9C
  class GatherResource : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::KevinIglesias::GatherResource::$StartWorking$d__9
    class $StartWorking$d__9;
    // Nested type: ::KevinIglesias::GatherResource::$FarmCycle$d__10
    class $FarmCycle$d__10;
    // Nested type: ::KevinIglesias::GatherResource::$EndFarmCycle$d__11
    class $EndFarmCycle$d__11;
    // Nested type: ::KevinIglesias::GatherResource::$BerryCycle$d__12
    class $BerryCycle$d__12;
    // Nested type: ::KevinIglesias::GatherResource::$ChopTree$d__13
    class $ChopTree$d__13;
    // Nested type: ::KevinIglesias::GatherResource::$ChopCycle$d__14
    class $ChopCycle$d__14;
    // Nested type: ::KevinIglesias::GatherResource::$MiningCycle$d__15
    class $MiningCycle$d__15;
    public:
    // public System.Single delayTime
    // Size: 0x4
    // Offset: 0x18
    float delayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public KevinIglesias.ResourceType resource
    // Size: 0x4
    // Offset: 0x1C
    ::KevinIglesias::ResourceType resource;
    // Field size check
    static_assert(sizeof(::KevinIglesias::ResourceType) == 0x4);
    // public System.Int32 currentPath
    // Size: 0x4
    // Offset: 0x20
    int currentPath;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentPath and: anim
    char __padding2[0x4] = {};
    // private UnityEngine.Animator anim
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Animator* anim;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // public UnityEngine.Transform[] paths
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Transform*> paths;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public UnityEngine.GameObject[] props
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::GameObject*> props;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private UnityEngine.Vector3 initRotation
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 initRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single delayTime
    [[deprecated("Use field access instead!")]] float& dyn_delayTime();
    // Get instance field reference: public KevinIglesias.ResourceType resource
    [[deprecated("Use field access instead!")]] ::KevinIglesias::ResourceType& dyn_resource();
    // Get instance field reference: public System.Int32 currentPath
    [[deprecated("Use field access instead!")]] int& dyn_currentPath();
    // Get instance field reference: private UnityEngine.Animator anim
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_anim();
    // Get instance field reference: public UnityEngine.Transform[] paths
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_paths();
    // Get instance field reference: public UnityEngine.GameObject[] props
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_props();
    // Get instance field reference: private UnityEngine.Vector3 initRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_initRotation();
    // private System.Void Awake()
    // Offset: 0x1061AB4
    void Awake();
    // private System.Void Start()
    // Offset: 0x1061B0C
    void Start();
    // private System.Collections.IEnumerator StartWorking()
    // Offset: 0x1061B64
    ::System::Collections::IEnumerator* StartWorking();
    // private System.Collections.IEnumerator FarmCycle()
    // Offset: 0x1061C04
    ::System::Collections::IEnumerator* FarmCycle();
    // private System.Collections.IEnumerator EndFarmCycle()
    // Offset: 0x1061CA4
    ::System::Collections::IEnumerator* EndFarmCycle();
    // private System.Collections.IEnumerator BerryCycle()
    // Offset: 0x1061D44
    ::System::Collections::IEnumerator* BerryCycle();
    // private System.Collections.IEnumerator ChopTree()
    // Offset: 0x1061DE4
    ::System::Collections::IEnumerator* ChopTree();
    // private System.Collections.IEnumerator ChopCycle()
    // Offset: 0x1061E84
    ::System::Collections::IEnumerator* ChopCycle();
    // private System.Collections.IEnumerator MiningCycle()
    // Offset: 0x1061F24
    ::System::Collections::IEnumerator* MiningCycle();
    // public System.Void .ctor()
    // Offset: 0x1061FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GatherResource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KevinIglesias::GatherResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GatherResource*, creationType>()));
    }
  }; // KevinIglesias.GatherResource
  #pragma pack(pop)
  static check_size<sizeof(GatherResource), 64 + sizeof(::UnityEngine::Vector3)> __KevinIglesias_GatherResourceSizeCheck;
  static_assert(sizeof(GatherResource) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KevinIglesias::GatherResource::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::StartWorking
// Il2CppName: StartWorking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::StartWorking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "StartWorking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::FarmCycle
// Il2CppName: FarmCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::FarmCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "FarmCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::EndFarmCycle
// Il2CppName: EndFarmCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::EndFarmCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "EndFarmCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::BerryCycle
// Il2CppName: BerryCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::BerryCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "BerryCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::ChopTree
// Il2CppName: ChopTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::ChopTree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "ChopTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::ChopCycle
// Il2CppName: ChopCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::ChopCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "ChopCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::MiningCycle
// Il2CppName: MiningCycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (KevinIglesias::GatherResource::*)()>(&KevinIglesias::GatherResource::MiningCycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KevinIglesias::GatherResource*), "MiningCycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KevinIglesias::GatherResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
