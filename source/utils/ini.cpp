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
	IniCountrysideBanks = ini.GetBoolValue(settingsGroup, "Countryside Banks", IniCountrysideBanks);
	IniFortZancudoGuards = ini.GetBoolValue(settingsGroup, "Fort Zancudo Guards", IniFortZancudoGuards);
	IniGuardsAtPrison = ini.GetBoolValue(settingsGroup, "Guards At Prison", IniGuardsAtPrison);
	IniLostClubhouse = ini.GetBoolValue(settingsGroup, "Lost Clubhouse", IniLostClubhouse);
	IniPaletoBank = ini.GetBoolValue(settingsGroup, "Paleto Bay Bank", IniPaletoBank);
	IniPaletoCops = ini.GetBoolValue(settingsGroup, "Paleto Bay Cops", IniPaletoCops);
	IniPoliceAtCourt = ini.GetBoolValue(settingsGroup, "Police At Court", IniPoliceAtCourt);
	IniPolicePound1 = ini.GetBoolValue(settingsGroup, "Police Pound 1", IniPolicePound1);
	IniPolicePound2 = ini.GetBoolValue(settingsGroup, "Police Pound 2", IniPolicePound2);
	IniPolicePound3 = ini.GetBoolValue(settingsGroup, "Police Pound 3", IniPolicePound3);
	IniPolicePound4 = ini.GetBoolValue(settingsGroup, "Police Pound 4", IniPolicePound4);
	IniPolicePound5 = ini.GetBoolValue(settingsGroup, "Police Pound 5", IniPolicePound5);
	IniPrisonTowers = ini.GetBoolValue(settingsGroup, "Prison Towers", IniPrisonTowers);
	IniPrisonTransport = ini.GetBoolValue(settingsGroup, "Prison Transport", IniPrisonTransport);
	IniSandyCops = ini.GetBoolValue(settingsGroup, "Sandy Shores Cops", IniSandyCops);
	IniScrapSecurity = ini.GetBoolValue(settingsGroup, "Scrapyard Security", IniScrapSecurity);
	IniFacilityCannon = ini.GetBoolValue(settingsGroup, "Facility Cannon", IniFacilityCannon);
	IniFacilityMain1 = ini.GetBoolValue(settingsGroup, "Facility Main 1", IniFacilityMain1);
	IniFacilityMain2 = ini.GetBoolValue(settingsGroup, "Facility Main 2", IniFacilityMain2);
	IniFacilityMain3 = ini.GetBoolValue(settingsGroup, "Facility Main 3", IniFacilityMain3);
	IniCypressFlatsClub = ini.GetBoolValue(settingsGroup, "Cypress Flats Nightclub", IniCypressFlatsClub);
	IniDelPerroClub = ini.GetBoolValue(settingsGroup, "Del Perro Nightclub", IniDelPerroClub);
	IniElysianIslandClub = ini.GetBoolValue(settingsGroup, "Elysian Island Nightclub", IniElysianIslandClub);
	IniLaMesaClub = ini.GetBoolValue(settingsGroup, "La Mesa Nightclub", IniLaMesaClub);
	IniAirportClub = ini.GetBoolValue(settingsGroup, "LSIA Nightclub", IniAirportClub);
	IniMissionRowClub = ini.GetBoolValue(settingsGroup, "Mission Row Nightclub", IniMissionRowClub);
	IniStrawberryClub = ini.GetBoolValue(settingsGroup, "Strawberry Nightclub", IniStrawberryClub);
	IniWestVinewoodClub = ini.GetBoolValue(settingsGroup, "West Vinewood Nightclub", IniWestVinewoodClub);
	IniCayoPerico = ini.GetBoolValue(settingsGroup, "Cayo Perico", IniCayoPerico);

	return;
}