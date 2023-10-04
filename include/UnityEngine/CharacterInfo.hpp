// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterInfo
  struct CharacterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterInfo, "UnityEngine", "CharacterInfo");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.CharacterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A8B9F0
  struct CharacterInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [ObsoleteAttribute] Offset: 0xA8BADC
    // public UnityEngine.Rect uv
    // Size: 0x10
    // Offset: 0x4
    ::UnityEngine::Rect uv;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // [ObsoleteAttribute] Offset: 0xA8BB14
    // public UnityEngine.Rect vert
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Rect vert;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // [ObsoleteAttribute] Offset: 0xA8BB4C
    // [NativeNameAttribute] Offset: 0xA8BB4C
    // public System.Single width
    // Size: 0x4
    // Offset: 0x24
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x28
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.FontStyle style
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::FontStyle style;
    // Field size check
    static_assert(sizeof(::UnityEngine::FontStyle) == 0x4);
    // [ObsoleteAttribute] Offset: 0xA8BBAC
    // public System.Boolean flipped
    // Size: 0x1
    // Offset: 0x30
    bool flipped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: CharacterInfo
    constexpr CharacterInfo(int index_ = {}, ::UnityEngine::Rect uv_ = {}, ::UnityEngine::Rect vert_ = {}, float width_ = {}, int size_ = {}, ::UnityEngine::FontStyle style_ = {}, bool flipped_ = {}) noexcept : index{index_}, uv{uv_}, vert{vert_}, width{width_}, size{size_}, style{style_}, flipped{flipped_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public UnityEngine.Rect uv
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_uv();
    // Get instance field reference: public UnityEngine.Rect vert
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_vert();
    // Get instance field reference: public System.Single width
    [[deprecated("Use field access instead!")]] float& dyn_width();
    // Get instance field reference: public System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // Get instance field reference: public UnityEngine.FontStyle style
    [[deprecated("Use field access instead!")]] ::UnityEngine::FontStyle& dyn_style();
    // Get instance field reference: public System.Boolean flipped
    [[deprecated("Use field access instead!")]] bool& dyn_flipped();
    // public System.Int32 get_advance()
    // Offset: 0xBD2988
    int get_advance();
    // public System.Int32 get_minY()
    // Offset: 0xBD2990
    int get_minY();
    // public System.Int32 get_maxY()
    // Offset: 0xBD29D8
    int get_maxY();
    // public System.Int32 get_minX()
    // Offset: 0xBD29F8
    int get_minX();
    // public System.Int32 get_maxX()
    // Offset: 0xBD2A18
    int get_maxX();
    // UnityEngine.Vector2 get_uvBottomLeftUnFlipped()
    // Offset: 0xBD2A60
    ::UnityEngine::Vector2 get_uvBottomLeftUnFlipped();
    // UnityEngine.Vector2 get_uvBottomRightUnFlipped()
    // Offset: 0xBD2A68
    ::UnityEngine::Vector2 get_uvBottomRightUnFlipped();
    // UnityEngine.Vector2 get_uvTopRightUnFlipped()
    // Offset: 0xBD2A70
    ::UnityEngine::Vector2 get_uvTopRightUnFlipped();
    // UnityEngine.Vector2 get_uvTopLeftUnFlipped()
    // Offset: 0xBD2A78
    ::UnityEngine::Vector2 get_uvTopLeftUnFlipped();
    // public UnityEngine.Vector2 get_uvBottomLeft()
    // Offset: 0xBD2A80
    ::UnityEngine::Vector2 get_uvBottomLeft();
    // public UnityEngine.Vector2 get_uvBottomRight()
    // Offset: 0xBD2A88
    ::UnityEngine::Vector2 get_uvBottomRight();
    // public UnityEngine.Vector2 get_uvTopRight()
    // Offset: 0xBD2A90
    ::UnityEngine::Vector2 get_uvTopRight();
    // public UnityEngine.Vector2 get_uvTopLeft()
    // Offset: 0xBD2A98
    ::UnityEngine::Vector2 get_uvTopLeft();
  }; // UnityEngine.CharacterInfo
  #pragma pack(pop)
  static check_size<sizeof(CharacterInfo), 48 + sizeof(bool)> __UnityEngine_CharacterInfoSizeCheck;
  static_assert(sizeof(CharacterInfo) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_advance
// Il2CppName: get_advance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_advance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_advance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_minY
// Il2CppName: get_minY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_minY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_minY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_maxY
// Il2CppName: get_maxY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_maxY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_maxY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_minX
// Il2CppName: get_minX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_minX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_minX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_maxX
// Il2CppName: get_maxX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_maxX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_maxX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvBottomLeftUnFlipped
// Il2CppName: get_uvBottomLeftUnFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvBottomLeftUnFlipped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvBottomLeftUnFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvBottomRightUnFlipped
// Il2CppName: get_uvBottomRightUnFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvBottomRightUnFlipped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvBottomRightUnFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvTopRightUnFlipped
// Il2CppName: get_uvTopRightUnFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvTopRightUnFlipped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvTopRightUnFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvTopLeftUnFlipped
// Il2CppName: get_uvTopLeftUnFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvTopLeftUnFlipped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvTopLeftUnFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvBottomLeft
// Il2CppName: get_uvBottomLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvBottomLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvBottomLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvBottomRight
// Il2CppName: get_uvBottomRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvBottomRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvBottomRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvTopRight
// Il2CppName: get_uvTopRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvTopRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvTopRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterInfo::get_uvTopLeft
// Il2CppName: get_uvTopLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::CharacterInfo::*)()>(&UnityEngine::CharacterInfo::get_uvTopLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterInfo), "get_uvTopLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};