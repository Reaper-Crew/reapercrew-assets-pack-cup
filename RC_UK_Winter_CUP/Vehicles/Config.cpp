class CfgPatches
{
	class RC_British_Winter_Campaign_Vehicles
	{
		author = "Reaper Crew";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder",
			"CUP_WheeledVehicles_Boxer"
		};
		units[] =  
        {
            "RC_B_BOXER_HMG_GER_Winter",
            "RC_B_BOXER_GMG_GER_Winter",
            "RC_B_BOXER_Empty_GER_Winter",
            "RC_B_BOXER_HMG_GER_Desert",
            "RC_B_BOXER_GMG_GER_Desert",
            "RC_B_BOXER_HMG_GER_Woodland",
            "RC_B_BOXER_GMG_GER_Woodland"
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
    class CUP_B_Boxer_HMG_GER_DES;
    class CUP_B_Boxer_GMG_GER_DES;
    class CUP_B_Boxer_Empty_GER_DES;
    class CUP_B_Boxer_HMG_GER_WDL;
    class CUP_B_Boxer_GMG_GER_WDL;


        //////////////////////////////////////////////////////// Winter ///////////////////////////////////////////////////////

    class RC_B_BOXER_HMG_GER_Winter: CUP_B_Boxer_HMG_GER_DES
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Winter, HMG, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_Body_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_Wheel_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_MissionModule_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_FLW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_DES.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };
    class RC_B_BOXER_GMG_GER_Winter: CUP_B_Boxer_GMG_GER_DES
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Winter, GMG, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_Body_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_Wheel_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_MissionModule_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_FLW_co.paa",
            "\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_FLW_GMW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_DES.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };
    class RC_B_BOXER_Empty_GER_Winter: CUP_B_Boxer_Empty_GER_DES
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Winter, Empty, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_Body_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_Wheel_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\back_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_DES.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };

    //////////////////////////////////////////////////////// Desert ///////////////////////////////////////////////////////

    class RC_B_BOXER_HMG_GER_Desert: CUP_B_Boxer_HMG_GER_DES
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Desert, HMG, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\body_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\wheel_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_MissionModule_DES_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\FLW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_DES.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };
    class RC_B_BOXER_GMG_GER_Desert: CUP_B_Boxer_GMG_GER_DES
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Desert, GMG, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\body_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\wheel_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_MissionModule_DES_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\FLW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\Tropentarn\FLW-GMW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_DES.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };

    //////////////////////////////////////////////////////// Woodland ///////////////////////////////////////////////////////

    class RC_B_BOXER_HMG_GER_Woodland: CUP_B_Boxer_HMG_GER_WDL
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Woodland, HMG, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\body_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\wheel_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_MissionModule_WDL_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\FLW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_WDL.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };
    class RC_B_BOXER_GMG_GER_Woodland: CUP_B_Boxer_GMG_GER_WDL
    {
		scope=2;
		scopeCurator=2;
		side=1;
		crew="CUP_B_GER_Crew";
		faction="RC_UK_W_Vehicle_Faction";
		displayName="GTK Boxer (Woodland, GMG, No Insignia)";
		hiddenSelectionsTextures[]=
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\body_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\wheel_co.paa",
			"\RC_UK_Winter_CUP\Vehicles\data\RC_UK_W_Boxer_MissionModule_WDL_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\FLW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\FLW-GMW_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\license_plate_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\unit_sign_mech_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Boxer\data\preview\CUP_B_Boxer_HMG_GER_WDL.jpg";
		class TransportWeapons
		{
			class _xx_CUP_arifle_G36A
			{
				weapon="CUP_arifle_G36A";
				count=2;
			};
			class _xx_CUP_launch_PzF3_Loaded
			{
				weapon="CUP_launch_PzF3_Loaded";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36
			{
				magazine="CUP_30Rnd_556x45_G36";
				count=20;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine="CUP_MAAWS_HEAT_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_GER_Pack_Flecktarn
			{
				backpack="CUP_B_GER_Pack_Flecktarn";
				count=4;
			};
		};
    };
};