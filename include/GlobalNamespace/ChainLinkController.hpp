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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ChainLinkController
  class ChainLinkController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ChainLinkController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChainLinkController*, "", "ChainLinkController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ChainLinkController
  // [TokenAttribute] Offset: FFFFFFFF
  class ChainLinkController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.LineRenderer line
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::LineRenderer* line;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.ParticleSystem particles
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ParticleSystem* particles;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.Transform start
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* start;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform end
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* end;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 startPos
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 endPos
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xADA518
    // private System.Boolean <isHidden>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool isHidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isHidden and: emissionRate
    char __padding6[0x3] = {};
    // public System.Single emissionRate
    // Size: 0x4
    // Offset: 0x54
    float emissionRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.LineRenderer line
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_line();
    // Get instance field reference: private UnityEngine.ParticleSystem particles
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_particles();
    // Get instance field reference: private UnityEngine.Transform start
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_start();
    // Get instance field reference: private UnityEngine.Transform end
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_end();
    // Get instance field reference: private UnityEngine.Vector3 startPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startPos();
    // Get instance field reference: private UnityEngine.Vector3 endPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_endPos();
    // Get instance field reference: private System.Boolean <isHidden>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isHidden$k__BackingField();
    // Get instance field reference: public System.Single emissionRate
    [[deprecated("Use field access instead!")]] float& dyn_emissionRate();
    // public System.Boolean get_isHidden()
    // Offset: 0xDDF544
    bool get_isHidden();
    // private System.Void set_isHidden(System.Boolean value)
    // Offset: 0xDDF54C
    void set_isHidden(bool value);
    // private System.Void Start()
    // Offset: 0xDDF558
    void Start();
    // private System.Void Update()
    // Offset: 0xDDF5CC
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0xDDFA54
    void LateUpdate();
    // public System.Void SetStartTarget(UnityEngine.Transform target)
    // Offset: 0xDDFB24
    void SetStartTarget(::UnityEngine::Transform* target);
    // public System.Void SetStartPosition(UnityEngine.Vector3 pos)
    // Offset: 0xDDFB2C
    void SetStartPosition(::UnityEngine::Vector3 pos);
    // public UnityEngine.Transform GetStartTarget()
    // Offset: 0xDDFB38
    ::UnityEngine::Transform* GetStartTarget();
    // public System.Void SetEndTarget(UnityEngine.Transform target)
    // Offset: 0xDDFB40
    void SetEndTarget(::UnityEngine::Transform* target);
    // public System.Void SetEndPosition(UnityEngine.Vector3 pos)
    // Offset: 0xDDFB48
    void SetEndPosition(::UnityEngine::Vector3 pos);
    // public UnityEngine.Transform GetEndTarget()
    // Offset: 0xDDFB54
    ::UnityEngine::Transform* GetEndTarget();
    // public System.Void Show()
    // Offset: 0xDDFB5C
    void Show();
    // public System.Void Hide()
    // Offset: 0xDDFB98
    void Hide();
    // public System.Void .ctor()
    // Offset: 0xDDFBE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChainLinkController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ChainLinkController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChainLinkController*, creationType>()));
    }
  }; // ChainLinkController
  #pragma pack(pop)
  static check_size<sizeof(ChainLinkController), 84 + sizeof(float)> __GlobalNamespace_ChainLinkControllerSizeCheck;
  static_assert(sizeof(ChainLinkController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::get_isHidden
// Il2CppName: get_isHidden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::get_isHidden)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "get_isHidden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::set_isHidden
// Il2CppName: set_isHidden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)(bool)>(&GlobalNamespace::ChainLinkController::set_isHidden)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "set_isHidden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::SetStartTarget
// Il2CppName: SetStartTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)(::UnityEngine::Transform*)>(&GlobalNamespace::ChainLinkController::SetStartTarget)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "SetStartTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::SetStartPosition
// Il2CppName: SetStartPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)(::UnityEngine::Vector3)>(&GlobalNamespace::ChainLinkController::SetStartPosition)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "SetStartPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::GetStartTarget
// Il2CppName: GetStartTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::GetStartTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "GetStartTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::SetEndTarget
// Il2CppName: SetEndTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)(::UnityEngine::Transform*)>(&GlobalNamespace::ChainLinkController::SetEndTarget)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "SetEndTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::SetEndPosition
// Il2CppName: SetEndPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)(::UnityEngine::Vector3)>(&GlobalNamespace::ChainLinkController::SetEndPosition)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "SetEndPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::GetEndTarget
// Il2CppName: GetEndTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::GetEndTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "GetEndTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChainLinkController::*)()>(&GlobalNamespace::ChainLinkController::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChainLinkController*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChainLinkController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
