class CfgPatches
{
	class reaperCrew_British_Winter_Campaign_Vests
	{
		author = "Reaper Crew";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder",
            "CUP_Creatures_Military_BAF"
		};
		units[] = {};
		weapons[] = 
		{
			"reaperCrew_UK_Winter_Vest_empty",
			"reaperCrew_UK_Winter_Vest_AutoRifleman",
			"reaperCrew_UK_Winter_Vest_Crewman",
			"reaperCrew_UK_Winter_Vest_Engineer",
			"reaperCrew_UK_Winter_Vest_Grenadier",
			"reaperCrew_UK_Winter_Vest_Medic",
			"reaperCrew_UK_Winter_Vest_Officer",
			"reaperCrew_UK_Winter_Vest_Rifleman",
			"reaperCrew_UK_Winter_Vest_Scout"
		};
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

class CfgWeapons
{
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Empty;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Belt;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Medic;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Officer;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman;
    class CUP_V_B_BAF_MTP_Osprey_Mk4_Scout;

    class ItemCore;
    class CUP_Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };

    class reaperCrew_UK_Winter_Vest_empty: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Empty)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_empty.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_empty.p3d";		
			containerClass = Supply0;		
			mass = 70;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_AutoRifleman: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Automatic Rifleman)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_gunner.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_gunner.p3d";	
			containerClass = Supply190;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Crewman: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Crewman)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_crewman.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_crewman.p3d";	
			containerClass = Supply80;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Engineer: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Engineer)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_engineer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_engineer.p3d";	
			containerClass = Supply190;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
				"camo5"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Grenadier: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Grenadier)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_grenadier.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_grenadier.p3d";	
			containerClass = Supply190;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Medic: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Medic)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_medic.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_medic.p3d";	
			containerClass = Supply190;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo12",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Officer: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Officer)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_officer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_officer.p3d";	
			containerClass = Supply190;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo12",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Rifleman: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Rifleman)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_rifleman.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_rifleman.p3d";	
			containerClass = Supply190;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
			{
				"camo1",
				"camo12",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
				"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Vest_Scout: CUP_Vest_Camo_Base
    {
		scope=2;
		curatorScope=2;
		displayName = "[reaperCrew] BAF Osprey MK4 (Winter, Scout)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_scout.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\osprey_mk4_scout.p3d";	
			containerClass = Supply80;		
			mass = 80;
			armor=20;
			passThrough=0.5;
			hiddenSelections[] = 
		{
			"camo1",
			"camo12",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] = 
		{
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_forcerecon_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
			"rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_gear_co.paa"
		};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};