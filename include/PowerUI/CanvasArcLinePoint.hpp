// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Blaze.ArcLinePoint
#include "Blaze/ArcLinePoint.hpp"
// Including type: PowerUI.ICanvasPoint
#include "PowerUI/ICanvasPoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: CanvasContext
  class CanvasContext;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: CanvasArcLinePoint
  class CanvasArcLinePoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::CanvasArcLinePoint);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::CanvasArcLinePoint*, "PowerUI", "CanvasArcLinePoint");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.CanvasArcLinePoint
  // [TokenAttribute] Offset: FFFFFFFF
  class CanvasArcLinePoint : public ::Blaze::ArcLinePoint/*, public ::PowerUI::ICanvasPoint*/ {
    public:
    // Creating interface conversion operator: operator ::PowerUI::ICanvasPoint
    operator ::PowerUI::ICanvasPoint() noexcept {
      return *reinterpret_cast<::PowerUI::ICanvasPoint*>(this);
    }
    // public System.Void RenderLine(PowerUI.CanvasContext context)
    // Offset: 0xEBD090
    void RenderLine(::PowerUI::CanvasContext* context);
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0xEBD088
    // Implemented from: Blaze.ArcLinePoint
    // Base method: System.Void ArcLinePoint::.ctor(System.Single x, System.Single y)
    // Base method: System.Void VectorLine::.ctor(System.Single x, System.Single y)
    // Base method: System.Void VectorPoint::.ctor(System.Single x, System.Single y)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CanvasArcLinePoint* New_ctor(float x, float y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::CanvasArcLinePoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CanvasArcLinePoint*, creationType>(x, y)));
    }
  }; // PowerUI.CanvasArcLinePoint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::CanvasArcLinePoint::RenderLine
// Il2CppName: RenderLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::CanvasArcLinePoint::*)(::PowerUI::CanvasContext*)>(&PowerUI::CanvasArcLinePoint::RenderLine)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("PowerUI", "CanvasContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::CanvasArcLinePoint*), "RenderLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: PowerUI::CanvasArcLinePoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!