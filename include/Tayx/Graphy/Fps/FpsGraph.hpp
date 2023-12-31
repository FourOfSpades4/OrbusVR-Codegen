// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tayx.Graphy.Graph.Graph
#include "Tayx/Graphy/Graph/Graph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Tayx::Graphy
namespace Tayx::Graphy {
  // Forward declaring type: GraphyManager
  class GraphyManager;
  // Forward declaring type: ShaderGraph
  class ShaderGraph;
}
// Forward declaring namespace: Tayx::Graphy::Fps
namespace Tayx::Graphy::Fps {
  // Forward declaring type: FpsMonitor
  class FpsMonitor;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: Tayx.Graphy.Fps
namespace Tayx::Graphy::Fps {
  // Forward declaring type: FpsGraph
  class FpsGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::Fps::FpsGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::FpsGraph*, "Tayx.Graphy.Fps", "FpsGraph");
// Type namespace: Tayx.Graphy.Fps
namespace Tayx::Graphy::Fps {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.Fps.FpsGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class FpsGraph : public ::Tayx::Graphy::Graph::Graph {
    public:
    public:
    // private Tayx.Graphy.GraphyManager m_graphyManager
    // Size: 0x8
    // Offset: 0x18
    ::Tayx::Graphy::GraphyManager* m_graphyManager;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::GraphyManager*) == 0x8);
    // private Tayx.Graphy.Fps.FpsMonitor m_fpsMonitor
    // Size: 0x8
    // Offset: 0x20
    ::Tayx::Graphy::Fps::FpsMonitor* m_fpsMonitor;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::Fps::FpsMonitor*) == 0x8);
    // private UnityEngine.UI.Image m_imageGraph
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Image* m_imageGraph;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.Int32 m_resolution
    // Size: 0x4
    // Offset: 0x30
    int m_resolution;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_resolution and: m_shaderGraph
    char __padding3[0x4] = {};
    // private Tayx.Graphy.ShaderGraph m_shaderGraph
    // Size: 0x8
    // Offset: 0x38
    ::Tayx::Graphy::ShaderGraph* m_shaderGraph;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::ShaderGraph*) == 0x8);
    // public UnityEngine.Shader ShaderFull
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Shader* ShaderFull;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader ShaderLight
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Shader* ShaderLight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private System.Int32[] m_fpsArray
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<int> m_fpsArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 m_highestFps
    // Size: 0x4
    // Offset: 0x58
    int m_highestFps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Tayx.Graphy.GraphyManager m_graphyManager
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::GraphyManager*& dyn_m_graphyManager();
    // Get instance field reference: private Tayx.Graphy.Fps.FpsMonitor m_fpsMonitor
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::Fps::FpsMonitor*& dyn_m_fpsMonitor();
    // Get instance field reference: private UnityEngine.UI.Image m_imageGraph
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_m_imageGraph();
    // Get instance field reference: private System.Int32 m_resolution
    [[deprecated("Use field access instead!")]] int& dyn_m_resolution();
    // Get instance field reference: private Tayx.Graphy.ShaderGraph m_shaderGraph
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::ShaderGraph*& dyn_m_shaderGraph();
    // Get instance field reference: public UnityEngine.Shader ShaderFull
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_ShaderFull();
    // Get instance field reference: public UnityEngine.Shader ShaderLight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_ShaderLight();
    // Get instance field reference: private System.Int32[] m_fpsArray
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_m_fpsArray();
    // Get instance field reference: private System.Int32 m_highestFps
    [[deprecated("Use field access instead!")]] int& dyn_m_highestFps();
    // private System.Void Awake()
    // Offset: 0x1043610
    void Awake();
    // private System.Void Update()
    // Offset: 0x10436F0
    void Update();
    // public System.Void UpdateParameters()
    // Offset: 0x10436FC
    void UpdateParameters();
    // private System.Void Init()
    // Offset: 0x1043614
    void Init();
    // protected override System.Void UpdateGraph()
    // Offset: 0x1043868
    // Implemented from: Tayx.Graphy.Graph.Graph
    // Base method: System.Void Graph::UpdateGraph()
    void UpdateGraph();
    // protected override System.Void CreatePoints()
    // Offset: 0x1043BA4
    // Implemented from: Tayx.Graphy.Graph.Graph
    // Base method: System.Void Graph::CreatePoints()
    void CreatePoints();
    // public System.Void .ctor()
    // Offset: 0x1043D80
    // Implemented from: Tayx.Graphy.Graph.Graph
    // Base method: System.Void Graph::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpsGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Fps::FpsGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpsGraph*, creationType>()));
    }
  }; // Tayx.Graphy.Fps.FpsGraph
  #pragma pack(pop)
  static check_size<sizeof(FpsGraph), 88 + sizeof(int)> __Tayx_Graphy_Fps_FpsGraphSizeCheck;
  static_assert(sizeof(FpsGraph) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::FpsGraph::*)()>(&Tayx::Graphy::Fps::FpsGraph::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::FpsGraph*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::FpsGraph::*)()>(&Tayx::Graphy::Fps::FpsGraph::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::FpsGraph*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::UpdateParameters
// Il2CppName: UpdateParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::FpsGraph::*)()>(&Tayx::Graphy::Fps::FpsGraph::UpdateParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::FpsGraph*), "UpdateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::FpsGraph::*)()>(&Tayx::Graphy::Fps::FpsGraph::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::FpsGraph*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::UpdateGraph
// Il2CppName: UpdateGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::FpsGraph::*)()>(&Tayx::Graphy::Fps::FpsGraph::UpdateGraph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::FpsGraph*), "UpdateGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::CreatePoints
// Il2CppName: CreatePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::FpsGraph::*)()>(&Tayx::Graphy::Fps::FpsGraph::CreatePoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::FpsGraph*), "CreatePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::FpsGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
