#pragma once

#include "sc-memory/kpm/sc_agent.hpp"
#include "sc-agents-common/keynodes/coreKeynodes.hpp"

#include "searchSemNeighborhoodAgent.generated.hpp"

namespace common_module {
  class searchSemNeighborhoodAgent : public ScAgent {
    SC_CLASS(Agent, Event(scAgentsCommon::CoreKeynodes::question_initiated, ScEvent::Type::AddOutputEdge))
    SC_GENERATED_BODY()

    private:
    bool checkActionClass(ScAddr const & actionAddr);
  };

}  // namespace common_module
