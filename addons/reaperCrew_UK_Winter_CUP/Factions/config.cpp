class CfgPatches
{
	class reaperCrew_British_Winter_Campaign_Vehicles_Faction
	{
		author = "Reaper Crew";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	class reaperCrew_UK_W_Vehicle_Faction
	{
		displayName = "Reaper Crew (CUP)";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 2;
		side = 1; // Blufor
	};
};

