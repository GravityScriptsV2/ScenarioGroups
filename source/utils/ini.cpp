#include "../../inc/SimpleIni.h"
#include "ini.h"
#include "../globals.h"

static const char* settingsGroup = "Settings";

// General
bool IniAmmunation = false;
bool IniCountrysideBanks = false;
bool IniFortZancudoGuards = false;
bool IniGuardsAtPrison = false;
bool IniLostClubhouse = false;
bool IniPaletoBank = false;
bool IniPaletoCops = false;
bool IniPoliceAtCourt = false;
bool IniPolicePound1 = false;
bool IniPolicePound2 = false;
bool IniPolicePound3 = false;
bool IniPolicePound4 = false;
bool IniPolicePound5 = false;
bool IniPrisonTowers = false;
bool IniPrisonTransport = false;
bool IniSandyCops = false;
bool IniScrapSecurity = false;
bool IniFacilityCannon = false;
bool IniFacilityMain1 = false;
bool IniFacilityMain2 = false;
bool IniFacilityMain3 = false;
bool IniCypressFlatsClub = false;
bool IniDelPerroClub = false;
bool IniElysianIslandClub = false;
bool IniLaMesaClub = false;
bool IniAirportClub = false;
bool IniMissionRowClub = false;
bool IniStrawberryClub = false;
bool IniWestVinewoodClub = false;
bool IniCayoPerico = false;

void ReadINI()
{
	CSimpleIniA ini;
	SI_Error res = ini.LoadFile("ScenarioGroups.ini");

	if (res != SI_OK)
		return;

	////////////////////////////////////// General //////////////////////////////////////////
    IniAmmunation = ini.GetBoolValue(settingsGroup, "Ammunation", IniAmmunation);
    IniCountrysideBanks = ini.GetBoolValue(settingsGroup, "CountrysideBanks", IniCountrysideBanks);
    IniFortZancudoGuards = ini.GetBoolValue(settingsGroup, "FortZancudoGuards", IniFortZancudoGuards);
    IniGuardsAtPrison = ini.GetBoolValue(settingsGroup, "GuardsAtPrison", IniGuardsAtPrison);
    IniLostClubhouse = ini.GetBoolValue(settingsGroup, "LostClubhouse", IniLostClubhouse);
    IniPaletoBank = ini.GetBoolValue(settingsGroup, "PaletoBank", IniPaletoBank);
    IniPaletoCops = ini.GetBoolValue(settingsGroup, "PaletoCops", IniPaletoCops);
    IniPoliceAtCourt = ini.GetBoolValue(settingsGroup, "PoliceAtCourt", IniPoliceAtCourt);
    IniPolicePound1 = ini.GetBoolValue(settingsGroup, "PolicePound1", IniPolicePound1);
    IniPolicePound2 = ini.GetBoolValue(settingsGroup, "PolicePound2", IniPolicePound2);
    IniPolicePound3 = ini.GetBoolValue(settingsGroup, "PolicePound3", IniPolicePound3);
    IniPolicePound4 = ini.GetBoolValue(settingsGroup, "PolicePound4", IniPolicePound4);
    IniPolicePound5 = ini.GetBoolValue(settingsGroup, "PolicePound5", IniPolicePound5);
    IniPrisonTowers = ini.GetBoolValue(settingsGroup, "PrisonTowers", IniPrisonTowers);
    IniPrisonTransport = ini.GetBoolValue(settingsGroup, "PrisonTransport", IniPrisonTransport);
    IniSandyCops = ini.GetBoolValue(settingsGroup, "SandyCops", IniSandyCops);
    IniScrapSecurity = ini.GetBoolValue(settingsGroup, "ScrapSecurity", IniScrapSecurity);
    IniFacilityCannon = ini.GetBoolValue(settingsGroup, "FacilityCannon", IniFacilityCannon);
    IniFacilityMain1 = ini.GetBoolValue(settingsGroup, "FacilityMain1", IniFacilityMain1);
    IniFacilityMain2 = ini.GetBoolValue(settingsGroup, "FacilityMain2", IniFacilityMain2);
    IniFacilityMain3 = ini.GetBoolValue(settingsGroup, "FacilityMain3", IniFacilityMain3);
    IniCypressFlatsClub = ini.GetBoolValue(settingsGroup, "CypressFlatsClub", IniCypressFlatsClub);
    IniDelPerroClub = ini.GetBoolValue(settingsGroup, "DelPerroClub", IniDelPerroClub);
    IniElysianIslandClub = ini.GetBoolValue(settingsGroup, "ElysianIslandClub", IniElysianIslandClub);
    IniLaMesaClub = ini.GetBoolValue(settingsGroup, "LaMesaClub", IniLaMesaClub);
    IniAirportClub = ini.GetBoolValue(settingsGroup, "AirportClub", IniAirportClub);
    IniMissionRowClub = ini.GetBoolValue(settingsGroup, "MissionRowClub", IniMissionRowClub);
    IniStrawberryClub = ini.GetBoolValue(settingsGroup, "StrawberryClub", IniStrawberryClub);
    IniWestVinewoodClub = ini.GetBoolValue(settingsGroup, "WestVinewoodClub", IniWestVinewoodClub);
    IniCayoPerico = ini.GetBoolValue(settingsGroup, "CayoPerico", IniCayoPerico);

	return;
}