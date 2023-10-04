// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Document
  class Document;
  // Forward declaring type: Renderman
  class Renderman;
  // Forward declaring type: WorldUIExpiryEvent
  class WorldUIExpiryEvent;
  // Forward declaring type: RenderMode
  struct RenderMode;
  // Forward declaring type: InputMode
  struct InputMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: FilterMode
  struct FilterMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: WorldUI
  class WorldUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::WorldUI);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::WorldUI*, "PowerUI", "WorldUI");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.WorldUI
  // [TokenAttribute] Offset: FFFFFFFF
  class WorldUI : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean Flat
    // Size: 0x1
    // Offset: 0x10
    bool Flat;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Flat and: Ratio
    char __padding0[0x3] = {};
    // public System.Single Ratio
    // Size: 0x4
    // Offset: 0x14
    float Ratio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 pixelWidth
    // Size: 0x4
    // Offset: 0x18
    int pixelWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 pixelHeight
    // Size: 0x4
    // Offset: 0x1C
    int pixelHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public PowerUI.Document document
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::Document* document;
    // Field size check
    static_assert(sizeof(::PowerUI::Document*) == 0x8);
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x38
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean Expires
    // Size: 0x1
    // Offset: 0x40
    bool Expires;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Expires and: ExpiresIn
    char __padding8[0x3] = {};
    // public System.Single ExpiresIn
    // Size: 0x4
    // Offset: 0x44
    float ExpiresIn;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public PowerUI.WorldUI UIAfter
    // Size: 0x8
    // Offset: 0x48
    ::PowerUI::WorldUI* UIAfter;
    // Field size check
    static_assert(sizeof(::PowerUI::WorldUI*) == 0x8);
    // public PowerUI.WorldUI UIBefore
    // Size: 0x8
    // Offset: 0x50
    ::PowerUI::WorldUI* UIBefore;
    // Field size check
    static_assert(sizeof(::PowerUI::WorldUI*) == 0x8);
    // public System.Single PixelHeightF
    // Size: 0x4
    // Offset: 0x58
    float PixelHeightF;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: PixelHeightF and: Renderer
    char __padding12[0x4] = {};
    // public PowerUI.Renderman Renderer
    // Size: 0x8
    // Offset: 0x60
    ::PowerUI::Renderman* Renderer;
    // Field size check
    static_assert(sizeof(::PowerUI::Renderman*) == 0x8);
    // public UnityEngine.Camera CameraToFace
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Camera* CameraToFace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private System.Boolean IsPixelPerfect
    // Size: 0x1
    // Offset: 0x70
    bool IsPixelPerfect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AlwaysFaceCamera
    // Size: 0x1
    // Offset: 0x71
    bool AlwaysFaceCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AlwaysFaceCamera and: OnExpire
    char __padding16[0x6] = {};
    // public PowerUI.WorldUIExpiryEvent OnExpire
    // Size: 0x8
    // Offset: 0x78
    ::PowerUI::WorldUIExpiryEvent* OnExpire;
    // Field size check
    static_assert(sizeof(::PowerUI::WorldUIExpiryEvent*) == 0x8);
    // private System.Single ScreenSpaceProportion
    // Size: 0x4
    // Offset: 0x80
    float ScreenSpaceProportion;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 WorldScreenOrigin
    // Size: 0x8
    // Offset: 0x84
    ::UnityEngine::Vector2 WorldScreenOrigin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 OriginLocation
    // Size: 0x8
    // Offset: 0x8C
    ::UnityEngine::Vector2 OriginLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [ObsoleteAttribute] Offset: 0xADEE6C
    // public System.Int32 AtlasSize
    // Size: 0x4
    // Offset: 0x94
    int AtlasSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static public System.Collections.Generic.Dictionary`2<UnityEngine.Transform,PowerUI.WorldUI> PhysicsLookup
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::PowerUI::WorldUI*>* _get_PhysicsLookup();
    // Set static field: static public System.Collections.Generic.Dictionary`2<UnityEngine.Transform,PowerUI.WorldUI> PhysicsLookup
    static void _set_PhysicsLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::PowerUI::WorldUI*>* value);
    // Get static field: static public System.Boolean LiveUpdatablesAvailable
    static bool _get_LiveUpdatablesAvailable();
    // Set static field: static public System.Boolean LiveUpdatablesAvailable
    static void _set_LiveUpdatablesAvailable(bool value);
    // Get instance field reference: public System.Boolean Flat
    [[deprecated("Use field access instead!")]] bool& dyn_Flat();
    // Get instance field reference: public System.Single Ratio
    [[deprecated("Use field access instead!")]] float& dyn_Ratio();
    // Get instance field reference: public System.Int32 pixelWidth
    [[deprecated("Use field access instead!")]] int& dyn_pixelWidth();
    // Get instance field reference: public System.Int32 pixelHeight
    [[deprecated("Use field access instead!")]] int& dyn_pixelHeight();
    // Get instance field reference: public PowerUI.Document document
    [[deprecated("Use field access instead!")]] ::PowerUI::Document*& dyn_document();
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public UnityEngine.GameObject gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Boolean Expires
    [[deprecated("Use field access instead!")]] bool& dyn_Expires();
    // Get instance field reference: public System.Single ExpiresIn
    [[deprecated("Use field access instead!")]] float& dyn_ExpiresIn();
    // Get instance field reference: public PowerUI.WorldUI UIAfter
    [[deprecated("Use field access instead!")]] ::PowerUI::WorldUI*& dyn_UIAfter();
    // Get instance field reference: public PowerUI.WorldUI UIBefore
    [[deprecated("Use field access instead!")]] ::PowerUI::WorldUI*& dyn_UIBefore();
    // Get instance field reference: public System.Single PixelHeightF
    [[deprecated("Use field access instead!")]] float& dyn_PixelHeightF();
    // Get instance field reference: public PowerUI.Renderman Renderer
    [[deprecated("Use field access instead!")]] ::PowerUI::Renderman*& dyn_Renderer();
    // Get instance field reference: public UnityEngine.Camera CameraToFace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_CameraToFace();
    // Get instance field reference: private System.Boolean IsPixelPerfect
    [[deprecated("Use field access instead!")]] bool& dyn_IsPixelPerfect();
    // Get instance field reference: public System.Boolean AlwaysFaceCamera
    [[deprecated("Use field access instead!")]] bool& dyn_AlwaysFaceCamera();
    // Get instance field reference: public PowerUI.WorldUIExpiryEvent OnExpire
    [[deprecated("Use field access instead!")]] ::PowerUI::WorldUIExpiryEvent*& dyn_OnExpire();
    // Get instance field reference: private System.Single ScreenSpaceProportion
    [[deprecated("Use field access instead!")]] float& dyn_ScreenSpaceProportion();
    // Get instance field reference: public UnityEngine.Vector2 WorldScreenOrigin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_WorldScreenOrigin();
    // Get instance field reference: public UnityEngine.Vector2 OriginLocation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_OriginLocation();
    // Get instance field reference: public System.Int32 AtlasSize
    [[deprecated("Use field access instead!")]] int& dyn_AtlasSize();
    // static public System.Void UpdateAll()
    // Offset: 0xE1AFD0
    static void UpdateAll();
    // static public PowerUI.WorldUI Find(System.String name)
    // Offset: 0xE1B3CC
    static ::PowerUI::WorldUI* Find(::StringW name);
    // public System.Void .ctor()
    // Offset: 0xE1B45C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorldUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::WorldUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorldUI*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0xE1B76C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorldUI* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::WorldUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorldUI*, creationType>(name)));
    }
    // public System.Void .ctor(System.Int32 widthPX, System.Int32 heightPX)
    // Offset: 0xE1B778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorldUI* New_ctor(int widthPX, int heightPX) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::WorldUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorldUI*, creationType>(widthPX, heightPX)));
    }
    // public System.Void .ctor(System.String name, System.Int32 widthPX, System.Int32 heightPX)
    // Offset: 0xE1B4B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorldUI* New_ctor(::StringW name, int widthPX, int heightPX) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::WorldUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorldUI*, creationType>(name, widthPX, heightPX)));
    }
    // public System.Boolean get_PixelPerfect()
    // Offset: 0xE1BA34
    bool get_PixelPerfect();
    // public System.Void set_PixelPerfect(System.Boolean value)
    // Offset: 0xE1BA3C
    void set_PixelPerfect(bool value);
    // public System.Void CameraChanged()
    // Offset: 0xE1BE50
    void CameraChanged();
    // private System.Void MainScreenSizeChanged()
    // Offset: 0xE1BCD0
    void MainScreenSizeChanged();
    // public PowerUI.RenderMode get_RenderMode()
    // Offset: 0xE1BE70
    ::PowerUI::RenderMode get_RenderMode();
    // public System.Void set_RenderMode(PowerUI.RenderMode value)
    // Offset: 0xE1BEA0
    void set_RenderMode(::PowerUI::RenderMode value);
    // public System.Void UpdateResolution()
    // Offset: 0xE1BED8
    void UpdateResolution();
    // public System.Void SetInputMode(PowerUI.InputMode mode)
    // Offset: 0xE1B818
    void SetInputMode(::PowerUI::InputMode mode);
    // public System.Void set_Layer(System.Int32 value)
    // Offset: 0xE1BF08
    void set_Layer(int value);
    // public System.Int32 get_Layer()
    // Offset: 0xE1BF14
    int get_Layer();
    // public System.Void RenderWithCamera(System.Int32 id)
    // Offset: 0xE1BF44
    void RenderWithCamera(int id);
    // public UnityEngine.Transform get_PhysicsModeCollider()
    // Offset: 0xE1BFA8
    ::UnityEngine::Transform* get_PhysicsModeCollider();
    // public System.Void SetDepthResolution(System.Single gaps)
    // Offset: 0xE1B7E0
    void SetDepthResolution(float gaps);
    // public System.Void SetResolution(System.Int32 ppw)
    // Offset: 0xE1BFD4
    void SetResolution(int ppw);
    // public System.Void SetResolution(System.Single ppw)
    // Offset: 0xE1BFE4
    void SetResolution(float ppw);
    // public System.Void SetResolution(System.Int32 ppwW, System.Int32 ppwH)
    // Offset: 0xE1C048
    void SetResolution(int ppwW, int ppwH);
    // public UnityEngine.Vector2 get_WorldPerPixel()
    // Offset: 0xE1C0B4
    ::UnityEngine::Vector2 get_WorldPerPixel();
    // public UnityEngine.Vector2 get_WorldScreenSize()
    // Offset: 0xE1C17C
    ::UnityEngine::Vector2 get_WorldScreenSize();
    // public System.Void SetDimensions(System.Int32 widthPX, System.Int32 heightPX)
    // Offset: 0xE1C264
    void SetDimensions(int widthPX, int heightPX);
    // public UnityEngine.FilterMode get_TextFilterMode()
    // Offset: 0xE1C404
    ::UnityEngine::FilterMode get_TextFilterMode();
    // public System.Void set_TextFilterMode(UnityEngine.FilterMode value)
    // Offset: 0xE1C434
    void set_TextFilterMode(::UnityEngine::FilterMode value);
    // public System.Void SetOrigin(System.Single x, System.Single y)
    // Offset: 0xE1C46C
    void SetOrigin(float x, float y);
    // private System.Void CameraToFaceChanged()
    // Offset: 0xE1BE60
    void CameraToFaceChanged();
    // public System.Void FaceCamera(UnityEngine.Camera cameraToFace)
    // Offset: 0xE1C4DC
    void FaceCamera(::UnityEngine::Camera* cameraToFace);
    // public System.Void FaceCamera()
    // Offset: 0xE1BCB4
    void FaceCamera();
    // public System.Void StopFacingCamera()
    // Offset: 0xE1C4F8
    void StopFacingCamera();
    // public System.Void Update()
    // Offset: 0xE1B070
    void Update();
    // public System.Void ParentToOrigin(UnityEngine.Transform parent)
    // Offset: 0xE1C650
    void ParentToOrigin(::UnityEngine::Transform* parent);
    // public System.Void ParentToOrigin(UnityEngine.GameObject parent)
    // Offset: 0xE1C870
    void ParentToOrigin(::UnityEngine::GameObject* parent);
    // public System.Void GotoLocalOrigin()
    // Offset: 0xE1C718
    void GotoLocalOrigin();
    // public System.Void Expire()
    // Offset: 0xE1C958
    void Expire();
    // public System.Void CancelExpiry()
    // Offset: 0xE1D0F0
    void CancelExpiry();
    // public System.Void SetExpiry(System.Single expiry)
    // Offset: 0xE1D0F8
    void SetExpiry(float expiry);
    // public System.Void Destroy()
    // Offset: 0xE1C510
    void Destroy();
  }; // PowerUI.WorldUI
  #pragma pack(pop)
  static check_size<sizeof(WorldUI), 148 + sizeof(int)> __PowerUI_WorldUISizeCheck;
  static_assert(sizeof(WorldUI) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::WorldUI::UpdateAll
// Il2CppName: UpdateAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::WorldUI::UpdateAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "UpdateAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::WorldUI* (*)(::StringW)>(&PowerUI::WorldUI::Find)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::WorldUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::WorldUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::WorldUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::WorldUI::get_PixelPerfect
// Il2CppName: get_PixelPerfect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_PixelPerfect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_PixelPerfect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::set_PixelPerfect
// Il2CppName: set_PixelPerfect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(bool)>(&PowerUI::WorldUI::set_PixelPerfect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "set_PixelPerfect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::CameraChanged
// Il2CppName: CameraChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::CameraChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "CameraChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::MainScreenSizeChanged
// Il2CppName: MainScreenSizeChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::MainScreenSizeChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "MainScreenSizeChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::get_RenderMode
// Il2CppName: get_RenderMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::RenderMode (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_RenderMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_RenderMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::set_RenderMode
// Il2CppName: set_RenderMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(::PowerUI::RenderMode)>(&PowerUI::WorldUI::set_RenderMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI", "RenderMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "set_RenderMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::UpdateResolution
// Il2CppName: UpdateResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::UpdateResolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "UpdateResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetInputMode
// Il2CppName: SetInputMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(::PowerUI::InputMode)>(&PowerUI::WorldUI::SetInputMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("PowerUI", "InputMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetInputMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::set_Layer
// Il2CppName: set_Layer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(int)>(&PowerUI::WorldUI::set_Layer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "set_Layer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::get_Layer
// Il2CppName: get_Layer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_Layer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_Layer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::RenderWithCamera
// Il2CppName: RenderWithCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(int)>(&PowerUI::WorldUI::RenderWithCamera)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "RenderWithCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::get_PhysicsModeCollider
// Il2CppName: get_PhysicsModeCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_PhysicsModeCollider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_PhysicsModeCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetDepthResolution
// Il2CppName: SetDepthResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(float)>(&PowerUI::WorldUI::SetDepthResolution)> {
  static const MethodInfo* get() {
    static auto* gaps = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetDepthResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gaps});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(int)>(&PowerUI::WorldUI::SetResolution)> {
  static const MethodInfo* get() {
    static auto* ppw = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppw});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(float)>(&PowerUI::WorldUI::SetResolution)> {
  static const MethodInfo* get() {
    static auto* ppw = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppw});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetResolution
// Il2CppName: SetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(int, int)>(&PowerUI::WorldUI::SetResolution)> {
  static const MethodInfo* get() {
    static auto* ppwW = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ppwH = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppwW, ppwH});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::get_WorldPerPixel
// Il2CppName: get_WorldPerPixel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_WorldPerPixel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_WorldPerPixel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::get_WorldScreenSize
// Il2CppName: get_WorldScreenSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_WorldScreenSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_WorldScreenSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetDimensions
// Il2CppName: SetDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(int, int)>(&PowerUI::WorldUI::SetDimensions)> {
  static const MethodInfo* get() {
    static auto* widthPX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightPX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{widthPX, heightPX});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::get_TextFilterMode
// Il2CppName: get_TextFilterMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FilterMode (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::get_TextFilterMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "get_TextFilterMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::set_TextFilterMode
// Il2CppName: set_TextFilterMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(::UnityEngine::FilterMode)>(&PowerUI::WorldUI::set_TextFilterMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "set_TextFilterMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetOrigin
// Il2CppName: SetOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(float, float)>(&PowerUI::WorldUI::SetOrigin)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::CameraToFaceChanged
// Il2CppName: CameraToFaceChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::CameraToFaceChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "CameraToFaceChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::FaceCamera
// Il2CppName: FaceCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(::UnityEngine::Camera*)>(&PowerUI::WorldUI::FaceCamera)> {
  static const MethodInfo* get() {
    static auto* cameraToFace = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "FaceCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraToFace});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::FaceCamera
// Il2CppName: FaceCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::FaceCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "FaceCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::StopFacingCamera
// Il2CppName: StopFacingCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::StopFacingCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "StopFacingCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::ParentToOrigin
// Il2CppName: ParentToOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(::UnityEngine::Transform*)>(&PowerUI::WorldUI::ParentToOrigin)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "ParentToOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::ParentToOrigin
// Il2CppName: ParentToOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(::UnityEngine::GameObject*)>(&PowerUI::WorldUI::ParentToOrigin)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "ParentToOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::GotoLocalOrigin
// Il2CppName: GotoLocalOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::GotoLocalOrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "GotoLocalOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::Expire
// Il2CppName: Expire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::Expire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "Expire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::CancelExpiry
// Il2CppName: CancelExpiry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::CancelExpiry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "CancelExpiry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::SetExpiry
// Il2CppName: SetExpiry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)(float)>(&PowerUI::WorldUI::SetExpiry)> {
  static const MethodInfo* get() {
    static auto* expiry = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "SetExpiry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expiry});
  }
};
// Writing MetadataGetter for method: PowerUI::WorldUI::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::WorldUI::*)()>(&PowerUI::WorldUI::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::WorldUI*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};