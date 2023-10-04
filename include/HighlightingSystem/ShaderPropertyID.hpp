// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Forward declaring type: ShaderPropertyID
  class ShaderPropertyID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HighlightingSystem::ShaderPropertyID);
DEFINE_IL2CPP_ARG_TYPE(::HighlightingSystem::ShaderPropertyID*, "HighlightingSystem", "ShaderPropertyID");
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HighlightingSystem.ShaderPropertyID
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExcludeFromDocsAttribute] Offset: FFFFFFFF
  class ShaderPropertyID : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 _MainTex
    static int _get__MainTex();
    // Set static field: static public readonly System.Int32 _MainTex
    static void _set__MainTex(int value);
    // Get static field: static public readonly System.Int32 _Cutoff
    static int _get__Cutoff();
    // Set static field: static public readonly System.Int32 _Cutoff
    static void _set__Cutoff(int value);
    // Get static field: static public readonly System.Int32 _HighlightingIntensity
    static int _get__HighlightingIntensity();
    // Set static field: static public readonly System.Int32 _HighlightingIntensity
    static void _set__HighlightingIntensity(int value);
    // Get static field: static public readonly System.Int32 _HighlightingCull
    static int _get__HighlightingCull();
    // Set static field: static public readonly System.Int32 _HighlightingCull
    static void _set__HighlightingCull(int value);
    // Get static field: static public readonly System.Int32 _HighlightingColor
    static int _get__HighlightingColor();
    // Set static field: static public readonly System.Int32 _HighlightingColor
    static void _set__HighlightingColor(int value);
    // Get static field: static public readonly System.Int32 _HighlightingBlurOffset
    static int _get__HighlightingBlurOffset();
    // Set static field: static public readonly System.Int32 _HighlightingBlurOffset
    static void _set__HighlightingBlurOffset(int value);
    // Get static field: static public readonly System.Int32 _HighlightingFillAlpha
    static int _get__HighlightingFillAlpha();
    // Set static field: static public readonly System.Int32 _HighlightingFillAlpha
    static void _set__HighlightingFillAlpha(int value);
    // Get static field: static public readonly System.Int32 _HighlightingBuffer
    static int _get__HighlightingBuffer();
    // Set static field: static public readonly System.Int32 _HighlightingBuffer
    static void _set__HighlightingBuffer(int value);
    // Get static field: static public readonly System.Int32 _HighlightingBlur1
    static int _get__HighlightingBlur1();
    // Set static field: static public readonly System.Int32 _HighlightingBlur1
    static void _set__HighlightingBlur1(int value);
    // Get static field: static public readonly System.Int32 _HighlightingBlur2
    static int _get__HighlightingBlur2();
    // Set static field: static public readonly System.Int32 _HighlightingBlur2
    static void _set__HighlightingBlur2(int value);
    // public System.Void .ctor()
    // Offset: 0x1AB6E98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderPropertyID* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HighlightingSystem::ShaderPropertyID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderPropertyID*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AB6EA0
    static void _cctor();
  }; // HighlightingSystem.ShaderPropertyID
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HighlightingSystem::ShaderPropertyID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HighlightingSystem::ShaderPropertyID::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HighlightingSystem::ShaderPropertyID::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::ShaderPropertyID*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
