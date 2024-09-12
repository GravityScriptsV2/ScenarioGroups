// ScriptHook
#include "../../inc/natives.h"
#include "../../inc/enums.h"
#include "../globals.h"
#include "functions.h"

void SetScenarioGroupEnabled(const std::string& scenarioGroup, bool toggle)
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST(scenarioGroup.c_str()))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(scenarioGroup.c_str(), toggle);
	}
}