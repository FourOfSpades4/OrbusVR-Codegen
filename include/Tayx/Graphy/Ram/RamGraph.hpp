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
// Forward declaring namespace: Tayx::Graphy::Ram
namespace Tayx::Graphy::Ram {
  // Forward declaring type: RamMonitor
  class RamMonitor;
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
// Type namespace: Tayx.Graphy.Ram
namespace Tayx::Graphy::Ram {
  // Forward declaring type: RamGraph
  class RamGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::Ram::RamGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::RamGraph*, "Tayx.Graphy.Ram", "RamGraph");
// Type namespace: Tayx.Graphy.Ram
namespace Tayx::Graphy::Ram {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.Ram.RamGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class RamGraph : public ::Tayx::Graphy::Graph::Graph {
    public:
    public:
    // private Tayx.Graphy.GraphyManager m_graphyManager
    // Size: 0x8
    // Offset: 0x18
    ::Tayx::Graphy::GraphyManager* m_graphyManager;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::GraphyManager*) == 0x8);
    // private Tayx.Graphy.Ram.RamMonitor m_ramMonitor
    // Size: 0x8
    // Offset: 0x20
    ::Tayx::Graphy::Ram::RamMonitor* m_ramMonitor;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::Ram::RamMonitor*) == 0x8);
    // private UnityEngine.UI.Image m_imageAllocated
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Image* m_imageAllocated;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image m_imageReserved
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Image* m_imageReserved;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image m_imageMono
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Image* m_imageMono;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.Int32 m_resolution
    // Size: 0x4
    // Offset: 0x40
    int m_resolution;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_resolution and: m_shaderGraphAllocated
    char __padding5[0x4] = {};
    // private Tayx.Graphy.ShaderGraph m_shaderGraphAllocated
    // Size: 0x8
    // Offset: 0x48
    ::Tayx::Graphy::ShaderGraph* m_shaderGraphAllocated;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::ShaderGraph*) == 0x8);
    // private Tayx.Graphy.ShaderGraph m_shaderGraphReserved
    // Size: 0x8
    // Offset: 0x50
    ::Tayx::Graphy::ShaderGraph* m_shaderGraphReserved;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::ShaderGraph*) == 0x8);
    // private Tayx.Graphy.ShaderGraph m_shaderGraphMono
    // Size: 0x8
    // Offset: 0x58
    ::Tayx::Graphy::ShaderGraph* m_shaderGraphMono;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::ShaderGraph*) == 0x8);
    // public UnityEngine.Shader ShaderFull
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Shader* ShaderFull;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader ShaderLight
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Shader* ShaderLight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private System.Single[] m_allocatedArray
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<float> m_allocatedArray;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Single[] m_reservedArray
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<float> m_reservedArray;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Single[] m_monoArray
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<float> m_monoArray;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Single m_highestMemory
    // Size: 0x4
    // Offset: 0x88
    float m_highestMemory;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Tayx.Graphy.GraphyManager m_graphyManager
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::GraphyManager*& dyn_m_graphyManager();
    // Get instance field reference: private Tayx.Graphy.Ram.RamMonitor m_ramMonitor
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::Ram::RamMonitor*& dyn_m_ramMonitor();
    // Get instance field reference: private UnityEngine.UI.Image m_imageAllocated
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_m_imageAllocated();
    // Get instance field reference: private UnityEngine.UI.Image m_imageReserved
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_m_imageReserved();
    // Get instance field reference: private UnityEngine.UI.Image m_imageMono
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_m_imageMono();
    // Get instance field reference: private System.Int32 m_resolution
    [[deprecated("Use field access instead!")]] int& dyn_m_resolution();
    // Get instance field reference: private Tayx.Graphy.ShaderGraph m_shaderGraphAllocated
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::ShaderGraph*& dyn_m_shaderGraphAllocated();
    // Get instance field reference: private Tayx.Graphy.ShaderGraph m_shaderGraphReserved
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::ShaderGraph*& dyn_m_shaderGraphReserved();
    // Get instance field reference: private Tayx.Graphy.ShaderGraph m_shaderGraphMono
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::ShaderGraph*& dyn_m_shaderGraphMono();
    // Get instance field reference: public UnityEngine.Shader ShaderFull
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_ShaderFull();
    // Get instance field reference: public UnityEngine.Shader ShaderLight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_ShaderLight();
    // Get instance field reference: private System.Single[] m_allocatedArray
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_m_allocatedArray();
    // Get instance field reference: private System.Single[] m_reservedArray
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_m_reservedArray();
    // Get instance field reference: private System.Single[] m_monoArray
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_m_monoArray();
    // Get instance field reference: private System.Single m_highestMemory
    [[deprecated("Use field access instead!")]] float& dyn_m_highestMemory();
    // private System.Void Awake()
    // Offset: 0x1048E58
    void Awake();
    // private System.Void Update()
    // Offset: 0x1048F94
    void Update();
    // public System.Void UpdateParameters()
    // Offset: 0x1048FA0
    void UpdateParameters();
    // private System.Void Init()
    // Offset: 0x1048E5C
    void Init();
    // protected override System.Void UpdateGraph()
    // Offset: 0x10492E4
    // Implemented from: Tayx.Graphy.Graph.Graph
    // Base method: System.Void Graph::UpdateGraph()
    void UpdateGraph();
    // protected override System.Void CreatePoints()
    // Offset: 0x10497AC
    // Implemented from: Tayx.Graphy.Graph.Graph
    // Base method: System.Void Graph::CreatePoints()
    void CreatePoints();
    // public System.Void .ctor()
    // Offset: 0x1049D10
    // Implemented from: Tayx.Graphy.Graph.Graph
    // Base method: System.Void Graph::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RamGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Ram::RamGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RamGraph*, creationType>()));
    }
  }; // Tayx.Graphy.Ram.RamGraph
  #pragma pack(pop)
  static check_size<sizeof(RamGraph), 136 + sizeof(float)> __Tayx_Graphy_Ram_RamGraphSizeCheck;
  static_assert(sizeof(RamGraph) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamGraph::*)()>(&Tayx::Graphy::Ram::RamGraph::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamGraph*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamGraph::*)()>(&Tayx::Graphy::Ram::RamGraph::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamGraph*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::UpdateParameters
// Il2CppName: UpdateParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamGraph::*)()>(&Tayx::Graphy::Ram::RamGraph::UpdateParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamGraph*), "UpdateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamGraph::*)()>(&Tayx::Graphy::Ram::RamGraph::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamGraph*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::UpdateGraph
// Il2CppName: UpdateGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamGraph::*)()>(&Tayx::Graphy::Ram::RamGraph::UpdateGraph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamGraph*), "UpdateGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::CreatePoints
// Il2CppName: CreatePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamGraph::*)()>(&Tayx::Graphy::Ram::RamGraph::CreatePoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamGraph*), "CreatePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
