// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: Tayx.Graphy
namespace Tayx::Graphy {
  // Forward declaring type: ShaderGraph
  class ShaderGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::ShaderGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::ShaderGraph*, "Tayx.Graphy", "ShaderGraph");
// Type namespace: Tayx.Graphy
namespace Tayx::Graphy {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.ShaderGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderGraph : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 ArrayMaxSize
    // Size: 0x4
    // Offset: 0x10
    int ArrayMaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ArrayMaxSize and: Image
    char __padding0[0x4] = {};
    // public UnityEngine.UI.Image Image
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* Image;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String Name_Length
    // Size: 0x8
    // Offset: 0x28
    ::StringW Name_Length;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single[] Array
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<float> Array;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single Average
    // Size: 0x4
    // Offset: 0x38
    float Average;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 averagePropertyId
    // Size: 0x4
    // Offset: 0x3C
    int averagePropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single GoodThreshold
    // Size: 0x4
    // Offset: 0x40
    float GoodThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CautionThreshold
    // Size: 0x4
    // Offset: 0x44
    float CautionThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 goodThresholdPropertyId
    // Size: 0x4
    // Offset: 0x48
    int goodThresholdPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 cautionThresholdPropertyId
    // Size: 0x4
    // Offset: 0x4C
    int cautionThresholdPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color GoodColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color GoodColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color CautionColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color CautionColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color CriticalColor
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Color CriticalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Int32 goodColorPropertyId
    // Size: 0x4
    // Offset: 0x80
    int goodColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 cautionColorPropertyId
    // Size: 0x4
    // Offset: 0x84
    int cautionColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 criticalColorPropertyId
    // Size: 0x4
    // Offset: 0x88
    int criticalColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static public System.Int32 ArrayMaxSizeFull
    static constexpr const int ArrayMaxSizeFull = 512;
    // Get static field: static public System.Int32 ArrayMaxSizeFull
    static int _get_ArrayMaxSizeFull();
    // Set static field: static public System.Int32 ArrayMaxSizeFull
    static void _set_ArrayMaxSizeFull(int value);
    // static field const value: static public System.Int32 ArrayMaxSizeLight
    static constexpr const int ArrayMaxSizeLight = 128;
    // Get static field: static public System.Int32 ArrayMaxSizeLight
    static int _get_ArrayMaxSizeLight();
    // Set static field: static public System.Int32 ArrayMaxSizeLight
    static void _set_ArrayMaxSizeLight(int value);
    // Get instance field reference: public System.Int32 ArrayMaxSize
    [[deprecated("Use field access instead!")]] int& dyn_ArrayMaxSize();
    // Get instance field reference: public UnityEngine.UI.Image Image
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_Image();
    // Get instance field reference: private System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: private System.String Name_Length
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name_Length();
    // Get instance field reference: public System.Single[] Array
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_Array();
    // Get instance field reference: public System.Single Average
    [[deprecated("Use field access instead!")]] float& dyn_Average();
    // Get instance field reference: private System.Int32 averagePropertyId
    [[deprecated("Use field access instead!")]] int& dyn_averagePropertyId();
    // Get instance field reference: public System.Single GoodThreshold
    [[deprecated("Use field access instead!")]] float& dyn_GoodThreshold();
    // Get instance field reference: public System.Single CautionThreshold
    [[deprecated("Use field access instead!")]] float& dyn_CautionThreshold();
    // Get instance field reference: private System.Int32 goodThresholdPropertyId
    [[deprecated("Use field access instead!")]] int& dyn_goodThresholdPropertyId();
    // Get instance field reference: private System.Int32 cautionThresholdPropertyId
    [[deprecated("Use field access instead!")]] int& dyn_cautionThresholdPropertyId();
    // Get instance field reference: public UnityEngine.Color GoodColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_GoodColor();
    // Get instance field reference: public UnityEngine.Color CautionColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_CautionColor();
    // Get instance field reference: public UnityEngine.Color CriticalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_CriticalColor();
    // Get instance field reference: private System.Int32 goodColorPropertyId
    [[deprecated("Use field access instead!")]] int& dyn_goodColorPropertyId();
    // Get instance field reference: private System.Int32 cautionColorPropertyId
    [[deprecated("Use field access instead!")]] int& dyn_cautionColorPropertyId();
    // Get instance field reference: private System.Int32 criticalColorPropertyId
    [[deprecated("Use field access instead!")]] int& dyn_criticalColorPropertyId();
    // public System.Void InitializeShader()
    // Offset: 0x10412D8
    void InitializeShader();
    // public System.Void UpdateArray()
    // Offset: 0x1041DBC
    void UpdateArray();
    // public System.Void UpdateAverage()
    // Offset: 0x1041E3C
    void UpdateAverage();
    // public System.Void UpdateThresholds()
    // Offset: 0x1041CFC
    void UpdateThresholds();
    // public System.Void UpdateColors()
    // Offset: 0x1041BB8
    void UpdateColors();
    // public System.Void UpdatePoints()
    // Offset: 0x1041904
    void UpdatePoints();
    // public System.Void .ctor()
    // Offset: 0x1041EA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::ShaderGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderGraph*, creationType>()));
    }
  }; // Tayx.Graphy.ShaderGraph
  #pragma pack(pop)
  static check_size<sizeof(ShaderGraph), 136 + sizeof(int)> __Tayx_Graphy_ShaderGraphSizeCheck;
  static_assert(sizeof(ShaderGraph) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::InitializeShader
// Il2CppName: InitializeShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::ShaderGraph::*)()>(&Tayx::Graphy::ShaderGraph::InitializeShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::ShaderGraph*), "InitializeShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::UpdateArray
// Il2CppName: UpdateArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::ShaderGraph::*)()>(&Tayx::Graphy::ShaderGraph::UpdateArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::ShaderGraph*), "UpdateArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::UpdateAverage
// Il2CppName: UpdateAverage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::ShaderGraph::*)()>(&Tayx::Graphy::ShaderGraph::UpdateAverage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::ShaderGraph*), "UpdateAverage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::UpdateThresholds
// Il2CppName: UpdateThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::ShaderGraph::*)()>(&Tayx::Graphy::ShaderGraph::UpdateThresholds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::ShaderGraph*), "UpdateThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::UpdateColors
// Il2CppName: UpdateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::ShaderGraph::*)()>(&Tayx::Graphy::ShaderGraph::UpdateColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::ShaderGraph*), "UpdateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::UpdatePoints
// Il2CppName: UpdatePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::ShaderGraph::*)()>(&Tayx::Graphy::ShaderGraph::UpdatePoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::ShaderGraph*), "UpdatePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::ShaderGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
