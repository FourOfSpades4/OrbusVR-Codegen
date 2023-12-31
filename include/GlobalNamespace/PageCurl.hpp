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
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PageCurl
  class PageCurl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PageCurl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageCurl*, "", "PageCurl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: PageCurl
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class PageCurl : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single initRotation
    // Size: 0x4
    // Offset: 0x18
    float initRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single endRotation
    // Size: 0x4
    // Offset: 0x1C
    float endRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xADC5D8
    // public System.Single rotRatio
    // Size: 0x4
    // Offset: 0x20
    float rotRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xADC5F0
    // public System.Single theta
    // Size: 0x4
    // Offset: 0x24
    float theta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xADC60C
    // public System.Single apex
    // Size: 0x4
    // Offset: 0x28
    float apex;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean invertDirection
    // Size: 0x1
    // Offset: 0x2C
    bool invertDirection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: invertDirection and: initTheta
    char __padding5[0x3] = {};
    // private System.Single initTheta
    // Size: 0x4
    // Offset: 0x30
    float initTheta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single initApex
    // Size: 0x4
    // Offset: 0x34
    float initApex;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Material[] materialRefs
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Material*> materialRefs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private UnityEngine.Vector3 localScale
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 localScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean isCopy
    // Size: 0x1
    // Offset: 0x4C
    bool isCopy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isCopy and: pageNumber
    char __padding10[0x3] = {};
    // private System.Int32 _pageNumber
    // Size: 0x4
    // Offset: 0x50
    int pageNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single prevTheta
    // Size: 0x4
    // Offset: 0x54
    float prevTheta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single prevRot
    // Size: 0x4
    // Offset: 0x58
    float prevRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single prevInitRot
    // Size: 0x4
    // Offset: 0x5C
    float prevInitRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single prevEndRot
    // Size: 0x4
    // Offset: 0x60
    float prevEndRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single initRotation
    [[deprecated("Use field access instead!")]] float& dyn_initRotation();
    // Get instance field reference: public System.Single endRotation
    [[deprecated("Use field access instead!")]] float& dyn_endRotation();
    // Get instance field reference: public System.Single rotRatio
    [[deprecated("Use field access instead!")]] float& dyn_rotRatio();
    // Get instance field reference: public System.Single theta
    [[deprecated("Use field access instead!")]] float& dyn_theta();
    // Get instance field reference: public System.Single apex
    [[deprecated("Use field access instead!")]] float& dyn_apex();
    // Get instance field reference: public System.Boolean invertDirection
    [[deprecated("Use field access instead!")]] bool& dyn_invertDirection();
    // Get instance field reference: private System.Single initTheta
    [[deprecated("Use field access instead!")]] float& dyn_initTheta();
    // Get instance field reference: private System.Single initApex
    [[deprecated("Use field access instead!")]] float& dyn_initApex();
    // Get instance field reference: private UnityEngine.Material[] materialRefs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_materialRefs();
    // Get instance field reference: private UnityEngine.Vector3 localScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localScale();
    // Get instance field reference: public System.Boolean isCopy
    [[deprecated("Use field access instead!")]] bool& dyn_isCopy();
    // Get instance field reference: private System.Int32 _pageNumber
    [[deprecated("Use field access instead!")]] int& dyn__pageNumber();
    // Get instance field reference: private System.Single prevTheta
    [[deprecated("Use field access instead!")]] float& dyn_prevTheta();
    // Get instance field reference: private System.Single prevRot
    [[deprecated("Use field access instead!")]] float& dyn_prevRot();
    // Get instance field reference: private System.Single prevInitRot
    [[deprecated("Use field access instead!")]] float& dyn_prevInitRot();
    // Get instance field reference: private System.Single prevEndRot
    [[deprecated("Use field access instead!")]] float& dyn_prevEndRot();
    // public System.Int32 get_pageNumber()
    // Offset: 0x102F480
    int get_pageNumber();
    // public System.Void set_pageNumber(System.Int32 value)
    // Offset: 0x102F488
    void set_pageNumber(int value);
    // private System.Void Start()
    // Offset: 0x102F4B0
    void Start();
    // private System.Void Update()
    // Offset: 0x102F4FC
    void Update();
    // public System.Single Flip(System.Boolean backwards)
    // Offset: 0x102F958
    float Flip(bool backwards);
    // public System.Single FlipPartial(System.Boolean backwards)
    // Offset: 0x102FA50
    float FlipPartial(bool backwards);
    // public System.Single FlipFast(System.Boolean backwards)
    // Offset: 0x102FB48
    float FlipFast(bool backwards);
    // public System.Void Reset()
    // Offset: 0x102FC40
    void Reset();
    // public UnityEngine.Texture get_FrontTexture()
    // Offset: 0x102FCB8
    ::UnityEngine::Texture* get_FrontTexture();
    // public System.Void set_FrontTexture(UnityEngine.Texture value)
    // Offset: 0x102FD10
    void set_FrontTexture(::UnityEngine::Texture* value);
    // public UnityEngine.Texture get_BackTexture()
    // Offset: 0x102FD70
    ::UnityEngine::Texture* get_BackTexture();
    // public System.Void set_BackTexture(UnityEngine.Texture value)
    // Offset: 0x102FDCC
    void set_BackTexture(::UnityEngine::Texture* value);
    // public System.Void OnPageFlip()
    // Offset: 0x102FE30
    void OnPageFlip();
    // private UnityEngine.Material[] GetMaterials()
    // Offset: 0x102F8BC
    ::ArrayW<::UnityEngine::Material*> GetMaterials();
    // public System.Void .ctor()
    // Offset: 0x102FE34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PageCurl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PageCurl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PageCurl*, creationType>()));
    }
  }; // PageCurl
  #pragma pack(pop)
  static check_size<sizeof(PageCurl), 96 + sizeof(float)> __GlobalNamespace_PageCurlSizeCheck;
  static_assert(sizeof(PageCurl) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::get_pageNumber
// Il2CppName: get_pageNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::get_pageNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "get_pageNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::set_pageNumber
// Il2CppName: set_pageNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)(int)>(&GlobalNamespace::PageCurl::set_pageNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "set_pageNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::Flip
// Il2CppName: Flip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PageCurl::*)(bool)>(&GlobalNamespace::PageCurl::Flip)> {
  static const MethodInfo* get() {
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "Flip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backwards});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::FlipPartial
// Il2CppName: FlipPartial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PageCurl::*)(bool)>(&GlobalNamespace::PageCurl::FlipPartial)> {
  static const MethodInfo* get() {
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "FlipPartial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backwards});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::FlipFast
// Il2CppName: FlipFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PageCurl::*)(bool)>(&GlobalNamespace::PageCurl::FlipFast)> {
  static const MethodInfo* get() {
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "FlipFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backwards});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::get_FrontTexture
// Il2CppName: get_FrontTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::get_FrontTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "get_FrontTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::set_FrontTexture
// Il2CppName: set_FrontTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)(::UnityEngine::Texture*)>(&GlobalNamespace::PageCurl::set_FrontTexture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "set_FrontTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::get_BackTexture
// Il2CppName: get_BackTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::get_BackTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "get_BackTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::set_BackTexture
// Il2CppName: set_BackTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)(::UnityEngine::Texture*)>(&GlobalNamespace::PageCurl::set_BackTexture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "set_BackTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::OnPageFlip
// Il2CppName: OnPageFlip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::OnPageFlip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "OnPageFlip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::GetMaterials
// Il2CppName: GetMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (GlobalNamespace::PageCurl::*)()>(&GlobalNamespace::PageCurl::GetMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageCurl*), "GetMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageCurl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
