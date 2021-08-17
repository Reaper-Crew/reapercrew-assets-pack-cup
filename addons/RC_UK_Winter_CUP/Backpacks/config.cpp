class CfgPatches
{
	class RC_British_Winter_Campaign_Backpacks
	{
		author = "Reaper Crew";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder"
		};
		units[] =  
        {
            "RC_UK_W_Assaultpack_1_co",
            "RC_UK_W_Carryall_1_co",
            "RC_UK_W_Kitbag_1_co",
			"RC_UK_W_Predator",
			"RC_UK_W_Predator_Radio"
        };
		weapons[] = {};
	};
};

class CfgMods
{
    class Mod_Base;
    class ReaperCrew_Common: Mod_Base
    {
        logo="reaperCrew_Common\data\reaperLogo.paa";
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

    class RC_UK_W_Assaultpack_1_co: B_AssaultPack_cbr
    {
		scope = 2;
		displayName = "Assault Pack (Winter)";
		picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		hiddenSelectionsTextures[]=
        {
            "\RC_UK_Winter_CUP\Backpacks\data\RC_UK_W_Assaultpack_01_co.paa"
        };
    };
    class RC_UK_W_Carryall_1_co: B_Carryall_cbr
    {
		scope = 2;
		displayName = "Carryall Backpack (Winter)";
		picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		hiddenSelectionsTextures[]=
        {
            "\RC_UK_Winter_CUP\Backpacks\data\RC_UK_W_Carryall_01_co.paa"
        };
    };
    class RC_UK_W_Kitbag_1_co: B_Kitbag_tan
    {
		scope = 2;
		displayName = "Kitbag (Winter)";
		picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		hiddenSelectionsTextures[]=
        {
            "\RC_UK_Winter_CUP\Backpacks\data\RC_UK_W_Kitbag_01_co.paa"
        };
    };
    class RC_UK_W_Predator: CUP_B_Predator_MTP
	{
		scope=2;
        scopeCurator=2;
		displayName="[RC] Predator (Winter)";
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
			"\RC_UK_Winter_CUP\Backpacks\data\RC_UK_W_Predator_01_co.paa"
		};
	};
    class RC_UK_W_Predator_Radio: CUP_B_Predator_Radio_MTP
	{
		scope=2;
        scopeCurator=2;
		displayName="[RC] Predator Radio (Winter)";
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
			"\RC_UK_Winter_CUP\Backpacks\data\RC_UK_W_Predator_01_co.paa"
			
		};
	};
};