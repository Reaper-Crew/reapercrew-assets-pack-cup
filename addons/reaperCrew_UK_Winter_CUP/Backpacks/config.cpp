class CfgPatches
{
	class reaperCrew_British_Winter_Campaign_Backpacks
	{
		author = "Reaper Crew";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder"
		};
		units[] =  
        {
            "reaperCrew_UK_W_Assaultpack_1_co",
            "reaperCrew_UK_W_Carryall_1_co",
            "reaperCrew_UK_W_Kitbag_1_co",
			"reaperCrew_UK_W_Predator",
			"reaperCrew_UK_W_Predator_Radio"
        };
		weapons[] = {};
	};
};

class CfgMods
{
    class Mod_Base;
    class ReaperCrew_Common: Mod_Base
    {
        logo="rc_assets_pack\addons\reaperCrew_Common\data\reaperLogo.paa";
    };
    author="Reaper Crew";
    timepacked="1618105293";
};

class CfgVehicles
{
    class B_AssaultPack_cbr;
    class B_Carryall_cbr;
    class B_Kitbag_tan;
    class CUP_B_Predator_Base;
	class CUP_B_Predator_Radio_MTP;
	class CUP_B_Predator_MTP;

    class reaperCrew_UK_W_Assaultpack_1_co: B_AssaultPack_cbr
    {
		scope = 2;
		displayName = "Assault Pack (Winter)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		hiddenSelectionsTextures[]=
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Backpacks\data\reaperCrew_UK_W_Assaultpack_01_co.paa"
        };
    };
    class reaperCrew_UK_W_Carryall_1_co: B_Carryall_cbr
    {
		scope = 2;
		displayName = "Carryall Backpack (Winter)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		hiddenSelectionsTextures[]=
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Backpacks\data\reaperCrew_UK_W_Carryall_01_co.paa"
        };
    };
    class reaperCrew_UK_W_Kitbag_1_co: B_Kitbag_tan
    {
		scope = 2;
		displayName = "Kitbag (Winter)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		hiddenSelectionsTextures[]=
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Backpacks\data\reaperCrew_UK_W_Kitbag_01_co.paa"
        };
    };
    class reaperCrew_UK_W_Predator: CUP_B_Predator_MTP
	{
		scope=2;
        scopeCurator=2;
		displayName="[reaperCrew] Predator (Winter)";
		model="CUP\Weapons\CUP_Weapons_Backpacks\predator.p3d";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_Pred_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Backpacks\data\reaperCrew_UK_W_Predator_01_co.paa"
		};
	};
    class reaperCrew_UK_W_Predator_Radio: CUP_B_Predator_Radio_MTP
	{
		scope=2;
        scopeCurator=2;
		displayName="[reaperCrew] Predator Radio (Winter)";
		model="CUP\Weapons\CUP_Weapons_Backpacks\predator_radio.p3d";
		picture="CUP\Weapons\CUP_Weapons_Backpacks\data\ui\Pack_PredBow_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Backpacks\data\reaperCrew_UK_W_Predator_01_co.paa"
			
		};
	};
};