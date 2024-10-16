//ScriptHook
#include "../inc/natives.h"
//Custom
#include "script.h"
#include "globals.h"
#include "./utils/ini.h"
#include "utils//functions.h"

static bool isInitialized = false;

static void update()
{
	if (!isInitialized)
	{
		SetScenarioGroupEnabled("ammunation", IniAmmunation);
		SetScenarioGroupEnabled("countryside_banks", IniCountrysideBanks);
		SetScenarioGroupEnabled("fort_zancudo_guards", IniFortZancudoGuards);
		SetScenarioGroupEnabled("guards_at_prison", IniGuardsAtPrison);
		SetScenarioGroupEnabled("lost_hangout", IniLostClubhouse);
		SetScenarioGroupEnabled("paleto_bank", IniPaletoBank);
		SetScenarioGroupEnabled("paleto_cops", IniPaletoCops);
		SetScenarioGroupEnabled("police_at_court", IniPoliceAtCourt);
		SetScenarioGroupEnabled("police_pound1", IniPolicePound1);
		SetScenarioGroupEnabled("police_pound2", IniPolicePound2);
		SetScenarioGroupEnabled("police_pound3", IniPolicePound3);
		SetScenarioGroupEnabled("police_pound4", IniPolicePound4);
		SetScenarioGroupEnabled("police_pound5", IniPolicePound5);
		SetScenarioGroupEnabled("prison_towers", IniPrisonTowers);
		SetScenarioGroupEnabled("prison_transport", IniPrisonTransport);
		SetScenarioGroupEnabled("sandy_cops", IniSandyCops);
		SetScenarioGroupEnabled("scrap_security", IniScrapSecurity);
		SetScenarioGroupEnabled("facility_cannon", IniFacilityCannon);
		SetScenarioGroupEnabled("facility_main_1", IniFacilityMain1);
		SetScenarioGroupEnabled("facility_main_2", IniFacilityMain2);
		SetScenarioGroupEnabled("facility_main_3", IniFacilityMain3);
		SetScenarioGroupEnabled("club_cypress_flats_warehouse", IniCypressFlatsClub);
		SetScenarioGroupEnabled("club_del_perro_building", IniDelPerroClub);
		SetScenarioGroupEnabled("club_elysian_island_warehouse", IniElysianIslandClub);
		SetScenarioGroupEnabled("club_la_mesa_warehouse", IniLaMesaClub);
		SetScenarioGroupEnabled("club_lsia_warehouse", IniAirportClub);
		SetScenarioGroupEnabled("club_mission_row_building", IniMissionRowClub);
		SetScenarioGroupEnabled("club_strawberry_warehouse", IniStrawberryClub);
		SetScenarioGroupEnabled("club_west_vinewood_building", IniWestVinewoodClub);
		SetScenarioGroupEnabled("Heist_Island_Peds", IniCayoPerico);
		isInitialized = true; 
	}
}

void ScriptMain()
{
	ReadINI();
	while (true)
	{
		update();
		WAIT(0);
	}
	return;
}