class CfgPatches
{
	class ReaperCrew_headgear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};
class cfgWeapons
{
	class CUP_H_USA_Boonie_wdl;
	class reaperCrew_rsr_boonieHat : CUP_H_USA_Boonie_wdl
	{
		Author="Reaper Crew";
		scope=2;
		displayName="[RSR] Boonie Hat (Folded)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\equip1_co.paa",
			"\reaperCrew_cup_headgear\data\booniefolded_M81_test_co"
		};
	};
};
class cfgMods
{
	author="Reaper Crew";
	timepacked="1604252829";
};
