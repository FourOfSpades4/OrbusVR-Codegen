// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RenderTextureDescriptor
#include "UnityEngine/RenderTextureDescriptor.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.RenderTextureReadWrite
#include "UnityEngine/RenderTextureReadWrite.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: RenderTextureMemoryless because it is already included!
  // Skipping declaration: VRTextureUsage because it is already included!
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Skipping declaration: TextureDimension because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RenderTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A70EC8
  // [NativeHeaderAttribute] Offset: A70EC8
  // [NativeHeaderAttribute] Offset: A70EC8
  // [NativeHeaderAttribute] Offset: A70EC8
  // [NativeHeaderAttribute] Offset: A70EC8
  class RenderTexture : public ::UnityEngine::Texture {
    public:
    // public System.Void .ctor(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F923D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor desc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(desc)));
    }
    // public System.Void .ctor(UnityEngine.RenderTexture textureToCopy)
    // Offset: 0x1F9264C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(::UnityEngine::RenderTexture* textureToCopy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(textureToCopy)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0x1F92850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0x1F92BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format, readWrite)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format)
    // Offset: 0x1F92DD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, ::UnityEngine::RenderTextureFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth)
    // Offset: 0x1F92DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth)));
    }
    // public System.Void set_useMipMap(System.Boolean value)
    // Offset: 0x1F93018
    void set_useMipMap(bool value);
    // public UnityEngine.RenderTextureFormat get_format()
    // Offset: 0x1F9308C
    ::UnityEngine::RenderTextureFormat get_format();
    // public System.Void set_format(UnityEngine.RenderTextureFormat value)
    // Offset: 0x1F92B00
    void set_format(::UnityEngine::RenderTextureFormat value);
    // public System.Void set_autoGenerateMips(System.Boolean value)
    // Offset: 0x1F930F8
    void set_autoGenerateMips(bool value);
    // public System.Int32 get_antiAliasing()
    // Offset: 0x1F9316C
    int get_antiAliasing();
    // public System.Void set_antiAliasing(System.Int32 value)
    // Offset: 0x1F931D8
    void set_antiAliasing(int value);
    // static private UnityEngine.RenderTexture GetActive()
    // Offset: 0x1F9324C
    static ::UnityEngine::RenderTexture* GetActive();
    // static private System.Void SetActive(UnityEngine.RenderTexture rt)
    // Offset: 0x1F932A4
    static void SetActive(::UnityEngine::RenderTexture* rt);
    // static public UnityEngine.RenderTexture get_active()
    // Offset: 0x1F93310
    static ::UnityEngine::RenderTexture* get_active();
    // static public System.Void set_active(UnityEngine.RenderTexture value)
    // Offset: 0x1F93314
    static void set_active(::UnityEngine::RenderTexture* value);
    // public System.Void DiscardContents(System.Boolean discardColor, System.Boolean discardDepth)
    // Offset: 0x1F93318
    void DiscardContents(bool discardColor, bool discardDepth);
    // public System.Void MarkRestoreExpected()
    // Offset: 0x1F9339C
    void MarkRestoreExpected();
    // public System.Void DiscardContents()
    // Offset: 0x1F93408
    void DiscardContents();
    // public System.Boolean Create()
    // Offset: 0x1F93414
    bool Create();
    // public System.Void Release()
    // Offset: 0x1F93480
    void Release();
    // public System.Boolean IsCreated()
    // Offset: 0x1F934EC
    bool IsCreated();
    // System.Void SetSRGBReadWrite(System.Boolean srgb)
    // Offset: 0x1F92B74
    void SetSRGBReadWrite(bool srgb);
    // static private System.Void Internal_Create(UnityEngine.RenderTexture rt)
    // Offset: 0x1F925DC
    static void Internal_Create(::UnityEngine::RenderTexture* rt);
    // private System.Void SetRenderTextureDescriptor(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F92648
    void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc);
    // private UnityEngine.RenderTextureDescriptor GetDescriptor()
    // Offset: 0x1F935CC
    ::UnityEngine::RenderTextureDescriptor GetDescriptor();
    // static private UnityEngine.RenderTexture GetTemporary_Internal(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F9368C
    static ::UnityEngine::RenderTexture* GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc);
    // static public System.Void ReleaseTemporary(UnityEngine.RenderTexture temp)
    // Offset: 0x1F936FC
    static void ReleaseTemporary(::UnityEngine::RenderTexture* temp);
    // public System.Int32 get_depth()
    // Offset: 0x1F93768
    int get_depth();
    // public System.Void set_depth(System.Int32 value)
    // Offset: 0x1F92A8C
    void set_depth(int value);
    // public UnityEngine.RenderTextureDescriptor get_descriptor()
    // Offset: 0x1F927E8
    ::UnityEngine::RenderTextureDescriptor get_descriptor();
    // static private System.Void ValidateRenderTextureDesc(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F9244C
    static void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor desc);
    // static public UnityEngine.RenderTexture GetTemporary(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F93894
    static ::UnityEngine::RenderTexture* GetTemporary(::UnityEngine::RenderTextureDescriptor desc);
    // static private UnityEngine.RenderTexture GetTemporaryImpl(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, UnityEngine.RenderTextureMemoryless memorylessMode, UnityEngine.VRTextureUsage vrUsage, System.Boolean useDynamicScale)
    // Offset: 0x1F93920
    static ::UnityEngine::RenderTexture* GetTemporaryImpl(int width, int height, int depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, int antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale);
    // static public UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing)
    // Offset: 0x1F93A7C
    static ::UnityEngine::RenderTexture* GetTemporary(int width, int height, int depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, int antiAliasing);
    // static public UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0x1F93AA4
    static ::UnityEngine::RenderTexture* GetTemporary(int width, int height, int depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);
    // private System.Void SetRenderTextureDescriptor_Injected(ref UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F93558
    void SetRenderTextureDescriptor_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> desc);
    // private System.Void GetDescriptor_Injected(out UnityEngine.RenderTextureDescriptor ret)
    // Offset: 0x1F93618
    void GetDescriptor_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> ret);
    // static private UnityEngine.RenderTexture GetTemporary_Internal_Injected(ref UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1F93690
    static ::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> desc);
    // protected internal System.Void .ctor()
    // Offset: 0x1F92368
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>()));
    }
    // public override System.Int32 get_width()
    // Offset: 0x1F92DE4
    // Implemented from: UnityEngine.Texture
    // Base method: System.Int32 Texture::get_width()
    int get_width();
    // public override System.Void set_width(System.Int32 value)
    // Offset: 0x1F92E50
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::set_width(System.Int32 value)
    void set_width(int value);
    // public override System.Int32 get_height()
    // Offset: 0x1F92EC4
    // Implemented from: UnityEngine.Texture
    // Base method: System.Int32 Texture::get_height()
    int get_height();
    // public override System.Void set_height(System.Int32 value)
    // Offset: 0x1F92F30
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::set_height(System.Int32 value)
    void set_height(int value);
    // public override System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0x1F92FA4
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::set_dimension(UnityEngine.Rendering.TextureDimension value)
    void set_dimension(::UnityEngine::Rendering::TextureDimension value);
  }; // UnityEngine.RenderTexture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_useMipMap
// Il2CppName: set_useMipMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(bool)>(&UnityEngine::RenderTexture::set_useMipMap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_useMipMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureFormat (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_format
// Il2CppName: set_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(::UnityEngine::RenderTextureFormat)>(&UnityEngine::RenderTexture::set_format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_autoGenerateMips
// Il2CppName: set_autoGenerateMips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(bool)>(&UnityEngine::RenderTexture::set_autoGenerateMips)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_autoGenerateMips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_antiAliasing
// Il2CppName: get_antiAliasing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::get_antiAliasing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_antiAliasing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_antiAliasing
// Il2CppName: set_antiAliasing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(int)>(&UnityEngine::RenderTexture::set_antiAliasing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_antiAliasing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetActive
// Il2CppName: GetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)()>(&UnityEngine::RenderTexture::GetActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&UnityEngine::RenderTexture::SetActive)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)()>(&UnityEngine::RenderTexture::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&UnityEngine::RenderTexture::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::DiscardContents
// Il2CppName: DiscardContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(bool, bool)>(&UnityEngine::RenderTexture::DiscardContents)> {
  static const MethodInfo* get() {
    static auto* discardColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* discardDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "DiscardContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{discardColor, discardDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::MarkRestoreExpected
// Il2CppName: MarkRestoreExpected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::MarkRestoreExpected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "MarkRestoreExpected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::DiscardContents
// Il2CppName: DiscardContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::DiscardContents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "DiscardContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::IsCreated
// Il2CppName: IsCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::IsCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "IsCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetSRGBReadWrite
// Il2CppName: SetSRGBReadWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(bool)>(&UnityEngine::RenderTexture::SetSRGBReadWrite)> {
  static const MethodInfo* get() {
    static auto* srgb = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "SetSRGBReadWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{srgb});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&UnityEngine::RenderTexture::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetRenderTextureDescriptor
// Il2CppName: SetRenderTextureDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::RenderTexture::SetRenderTextureDescriptor)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "SetRenderTextureDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetDescriptor
// Il2CppName: GetDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::GetDescriptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary_Internal
// Il2CppName: GetTemporary_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::RenderTexture::GetTemporary_Internal)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetTemporary_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::ReleaseTemporary
// Il2CppName: ReleaseTemporary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&UnityEngine::RenderTexture::ReleaseTemporary)> {
  static const MethodInfo* get() {
    static auto* temp = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "ReleaseTemporary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{temp});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_depth
// Il2CppName: get_depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::get_depth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_depth
// Il2CppName: set_depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(int)>(&UnityEngine::RenderTexture::set_depth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_descriptor
// Il2CppName: get_descriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::get_descriptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_descriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::ValidateRenderTextureDesc
// Il2CppName: ValidateRenderTextureDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::RenderTexture::ValidateRenderTextureDesc)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "ValidateRenderTextureDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(::UnityEngine::RenderTextureDescriptor)>(&UnityEngine::RenderTexture::GetTemporary)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetTemporary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporaryImpl
// Il2CppName: GetTemporaryImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(int, int, int, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, int, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, bool)>(&UnityEngine::RenderTexture::GetTemporaryImpl)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthBuffer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    static auto* readWrite = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureReadWrite")->byval_arg;
    static auto* antiAliasing = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* memorylessMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureMemoryless")->byval_arg;
    static auto* vrUsage = &::il2cpp_utils::GetClassFromName("UnityEngine", "VRTextureUsage")->byval_arg;
    static auto* useDynamicScale = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetTemporaryImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage, useDynamicScale});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(int, int, int, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, int)>(&UnityEngine::RenderTexture::GetTemporary)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthBuffer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    static auto* readWrite = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureReadWrite")->byval_arg;
    static auto* antiAliasing = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetTemporary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, depthBuffer, format, readWrite, antiAliasing});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(int, int, int, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(&UnityEngine::RenderTexture::GetTemporary)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthBuffer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    static auto* readWrite = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureReadWrite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetTemporary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, depthBuffer, format, readWrite});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetRenderTextureDescriptor_Injected
// Il2CppName: SetRenderTextureDescriptor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(ByRef<::UnityEngine::RenderTextureDescriptor>)>(&UnityEngine::RenderTexture::SetRenderTextureDescriptor_Injected)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "SetRenderTextureDescriptor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetDescriptor_Injected
// Il2CppName: GetDescriptor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(ByRef<::UnityEngine::RenderTextureDescriptor>)>(&UnityEngine::RenderTexture::GetDescriptor_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetDescriptor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary_Internal_Injected
// Il2CppName: GetTemporary_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(ByRef<::UnityEngine::RenderTextureDescriptor>)>(&UnityEngine::RenderTexture::GetTemporary_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "GetTemporary_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(int)>(&UnityEngine::RenderTexture::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTexture::*)()>(&UnityEngine::RenderTexture::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(int)>(&UnityEngine::RenderTexture::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_dimension
// Il2CppName: set_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTexture::*)(::UnityEngine::Rendering::TextureDimension)>(&UnityEngine::RenderTexture::set_dimension)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTexture*), "set_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};