#include <memory>

#include "sc-memory/sc_memory.hpp"


#include "sc-memory/sc_event.hpp"




#define selectScnPageKeynodes_hpp_11_init  bool _InitInternal(ScAddr const & outputStructure = ScAddr::Empty) override \
{ \
    ScMemoryContext ctx(sc_access_lvl_make_min, "selectScnPageKeynodes::_InitInternal"); \
    ScSystemIdentifierFiver fiver; \
    bool result = true; \
    return result; \
}


#define selectScnPageKeynodes_hpp_11_initStatic static bool _InitStaticInternal(ScAddr const & outputStructure = ScAddr::Empty)  \
{ \
    ScMemoryContext ctx(sc_access_lvl_make_min, "selectScnPageKeynodes::_InitStaticInternal"); \
    ScSystemIdentifierFiver fiver; \
    bool result = true; \
	ctx.HelperResolveSystemIdtf("scn_editor", ScType::NodeConst, fiver);scn_editor = fiver.addr1; result = result && scn_editor.IsValid(); if (outputStructure.IsValid()) {ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	ctx.HelperResolveSystemIdtf("action_select_scn_page", ScType::NodeConst, fiver);action_select_scn_page = fiver.addr1; result = result && action_select_scn_page.IsValid(); if (outputStructure.IsValid()) {ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	ctx.HelperResolveSystemIdtf("rrel_scn_page", ScType::NodeConst, fiver);rrel_scn_page = fiver.addr1; result = result && rrel_scn_page.IsValid(); if (outputStructure.IsValid()) {ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	ctx.HelperResolveSystemIdtf("rrel_current_scn_page", ScType::NodeConst, fiver);rrel_current_scn_page = fiver.addr1; result = result && rrel_current_scn_page.IsValid(); if (outputStructure.IsValid()) {ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);ctx.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
    return result; \
}


#define selectScnPageKeynodes_hpp_11_decl 

#define selectScnPageKeynodes_hpp_selectScnPageKeynodes_impl 

#undef ScFileID
#define ScFileID selectScnPageKeynodes_hpp

