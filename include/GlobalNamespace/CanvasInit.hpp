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
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CanvasInit
  class CanvasInit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CanvasInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CanvasInit*, "", "CanvasInit");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CanvasInit
  // [TokenAttribute] Offset: FFFFFFFF
  class CanvasInit : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Canvas uiCanvas
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Canvas* uiCanvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Canvas uiCanvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn_uiCanvas();
    // private System.Void Start()
    // Offset: 0xDDF4A4
    void Start();
    // private System.Void Update()
    // Offset: 0xDDF538
    void Update();
    // public System.Void .ctor()
    // Offset: 0xDDF53C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CanvasInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CanvasInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CanvasInit*, creationType>()));
    }
  }; // CanvasInit
  #pragma pack(pop)
  static check_size<sizeof(CanvasInit), 24 + sizeof(::UnityEngine::Canvas*)> __GlobalNamespace_CanvasInitSizeCheck;
  static_assert(sizeof(CanvasInit) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CanvasInit::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CanvasInit::*)()>(&GlobalNamespace::CanvasInit::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CanvasInit*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CanvasInit::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CanvasInit::*)()>(&GlobalNamespace::CanvasInit::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CanvasInit*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CanvasInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!