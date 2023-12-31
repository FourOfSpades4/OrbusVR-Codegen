// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: System.Xml.XPath.IXPathNavigable
#include "System/Xml/XPath/IXPathNavigable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlLinkedNode
  class XmlLinkedNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNode*, "System.Xml", "XmlNode");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlNode
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A69720
  // [DebuggerDisplayAttribute] Offset: A69720
  class XmlNode : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IEnumerable, public ::System::Xml::XPath::IXPathNavigable*/ {
    public:
    public:
    // System.Xml.XmlNode parentNode
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlNode* parentNode;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Xml::XPath::IXPathNavigable
    operator ::System::Xml::XPath::IXPathNavigable() noexcept {
      return *reinterpret_cast<::System::Xml::XPath::IXPathNavigable*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::XmlNode*
    constexpr operator ::System::Xml::XmlNode*() const noexcept {
      return parentNode;
    }
    // Get instance field reference: System.Xml.XmlNode parentNode
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNode*& dyn_parentNode();
    // public System.Xml.XmlNodeType get_NodeType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XmlNodeType get_NodeType();
    // public System.Xml.XmlNode get_ParentNode()
    // Offset: 0x1647438
    ::System::Xml::XmlNode* get_ParentNode();
    // public System.Xml.XmlNode get_NextSibling()
    // Offset: 0x1647544
    ::System::Xml::XmlNode* get_NextSibling();
    // public System.Xml.XmlNode get_FirstChild()
    // Offset: 0x164754C
    ::System::Xml::XmlNode* get_FirstChild();
    // System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x1647570
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // public System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1647578
    ::Il2CppObject* System_ICloneable_Clone();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1647588
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Xml.XmlNode
  #pragma pack(pop)
  static check_size<sizeof(XmlNode), 16 + sizeof(::System::Xml::XmlNode*)> __System_Xml_XmlNodeSizeCheck;
  static_assert(sizeof(XmlNode) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlNode::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::get_NextSibling
// Il2CppName: get_NextSibling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::get_NextSibling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "get_NextSibling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::get_FirstChild
// Il2CppName: get_FirstChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::get_FirstChild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "get_FirstChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlNode::*)(bool)>(&System::Xml::XmlNode::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNode::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::XmlNode::*)()>(&System::Xml::XmlNode::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNode*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
