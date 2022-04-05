class CfgPatches 
{
    class reaperCrew_CUP_clothing
    {
        units[] = 
        {
            "U_reaperCrew_BDU_mm14",
            "U_reaperCrew_BDU_m84",
            "U_reaperCrew_BDU_gloves_m84",
            "U_reaperCrew_BDU_roll_m84",
            "U_reaperCrew_BDU_roll_gloves_m84",
            "U_reaperCrew_BDU_roll2_m84",
            "U_reaperCrew_BDU_roll2_gloves_m84"
        };
        weapons[] = 
        {
			"reaperCrew_HelmetACH_GCOVERED_Headset_m84",
			"reaperCrew_HelmetACH_ESS_Headset_m84",
            "reaperCrew_HelmetACH_Headset_m84",
			"reaperCrew_IOTV_m84_Empty",
			"reaperCrew_IOTV_m84_Grenadier",
			"reaperCrew_IOTV_m84_MG",
			"reaperCrew_IOTV_m84_Rifleman",
			"reaperCrew_IOTV_m84_SAW",
			"reaperCrew_IOTV_m84_TL",
			"reaperCrew_IOTV_m84_SL",
			"reaperCrew_BDU_mm14",
            "reaperCrew_BDU_m84",
            "reaperCrew_BDU_gloves_m84",
            "reaperCrew_BDU_roll_m84",
            "reaperCrew_BDU_roll_gloves_m84",
            "reaperCrew_BDU_roll2_m84",
            "reaperCrew_BDU_roll2_gloves_m84"
        };
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
			"A3_Data_F_Oldman_Loadorder",
            "CUP_Creatures_People_LoadOrder"
        };
        author = "Ikguzzi";
        authors[] = {"Ikguzzi"};
    };
};

class CfgWeapons
{
	class ItemCore;

	// Helmets
	class HeadgearItem;
	class CUP_H_USArmy_HelmetACH_Headset_UCP: ItemCore
	{
		class Iteminfo;
	};
	class reaperCrew_HelmetACH_Headset_m84: ItemCore
	{
		scope=2;
		displayName="[RC] ACH (M-84/Headset)";
		descriptionShort="$STR_A3_SP_AL_II";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACH\CUP_ACH_headset.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_ACH_m84_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACH\CUP_ACH_headset.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_ACH_m84_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class reaperCrew_HelmetACH_ESS_Headset_m84: ItemCore
	{
		scope=2;
		displayName="[RC] ACH (M-84/Goggles/Headset)";
		descriptionShort="$STR_A3_SP_AL_II";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACH\CUP_ACH_ess_headset.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_ACH_m84_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACH\CUP_ACH_ess_headset.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo",
				"camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_ACH_m84_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_rgr_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class reaperCrew_HelmetACH_GCOVERED_Headset_m84: ItemCore
	{
		scope=2;
		displayName="[RC] ACH (M-84/Covered Goggles/Headset)";
		descriptionShort="$STR_A3_SP_AL_II";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACH\CUP_ACH_gcovered_headset.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_ACH_m84_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACH\CUP_ACH_gcovered_headset.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=3;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_ACH_m84_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};

	// Vests
	class CUP_V_B_IOTV_Base: ItemCore
	{
		class Iteminfo;
	};

	class reaperCrew_IOTV_m84_Empty: CUP_V_B_IOTV_Base
	{
		scope=2;
		displayName="[RC] IOTV (Empty/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_iotv_1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply60";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_iotv_1.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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
	class reaperCrew_IOTV_m84_Grenadier: CUP_V_B_IOTV_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="[RC] IOTV (Grenadier/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_grenadier.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_grenadier.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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
	class reaperCrew_IOTV_m84_MG: CUP_V_B_IOTV_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="[RC] IOTV (Machinegunner/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_mg.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_mg.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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
	class reaperCrew_IOTV_m84_Rifleman: CUP_V_B_IOTV_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="[RC] IOTV (Rifleman/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_rifleman_1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_rifleman_1.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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
	class reaperCrew_IOTV_m84_SAW: CUP_V_B_IOTV_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="[RC] IOTV (SAW/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_saw.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_saw.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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
	class reaperCrew_IOTV_m84_TL: CUP_V_B_IOTV_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="[RC] IOTV (Team Leader/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_tl.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_tl.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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
	class reaperCrew_IOTV_m84_SL: CUP_V_B_IOTV_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="[RC] IOTV (Squad Leader/M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_sl.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\iotv\CUP_iotv_sl.p3d";
			armor=20;
			hiddenSelectionsTextures[]=
			{
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_iotv_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_pouches_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_accessories_m84_co.paa",
				"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_acc2_m84_co.paa"
			};
			passThrough=0.5;
			mass=70;
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

	// Uniforms
    class CUP_U_B_BDUv2_base;
    class CUP_U_B_BDUv2_OD: CUP_U_B_BDUv2_base
    {
        class Iteminfo;
    };

    class reaperCrew_BDU_mm14: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (MM-14)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_mm14";
		};
	};
    class reaperCrew_BDU_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (M-84)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_m84";
		};
	};
    class reaperCrew_BDU_gloves_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (M-84, Gloves)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_gloves_m84";
		};
	};
    class reaperCrew_BDU_roll_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (M-84, Rolled)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll_m84";
		};
	};
    class reaperCrew_BDU_roll_gloves_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (M-84, Rolled/Gloves)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll_gloves_m84";
		};
	};
    class reaperCrew_BDU_roll2_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (M-84, Rolled High)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll2_m84";
		};
	};
    class reaperCrew_BDU_roll2_gloves_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="[RC] BDU (M-84, Rolled High/Gloves)";
		picture="\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\ui\reaperCrew_CDF_Icon.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll2_gloves_m84";
		};
	};
};

class CfgVehicles
{
    // Uniforms
    class CUP_B_USArmy_Soldier_BDUv2_OD;
    class CUP_B_USArmy_Soldier_BDUv2_gloves_OD;
    class CUP_B_USArmy_Soldier_BDUv2_roll_OD;
    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_OD;
    class CUP_B_USArmy_Soldier_BDUv2_roll2_OD;
    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_OD;

    class U_reaperCrew_BDU_mm14: CUP_B_USArmy_Soldier_BDUv2_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_mm14";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_mm14_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_mm14_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_mm14_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_mm14_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_flag_Ukraine.paa"
		};
	};
    class U_reaperCrew_BDU_m84: CUP_B_USArmy_Soldier_BDUv2_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_m84";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            ""
		};
	};
    class U_reaperCrew_BDU_gloves_m84: CUP_B_USArmy_Soldier_BDUv2_gloves_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_gloves_m84";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_co.paa",
            ""
		};
	};
    class U_reaperCrew_BDU_roll_m84: CUP_B_USArmy_Soldier_BDUv2_roll_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_roll_m84";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            ""
		};
	};
    class U_reaperCrew_BDU_roll_gloves_m84: CUP_B_USArmy_Soldier_BDUv2_roll_gloves_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_roll_gloves_m84";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_co.paa",
            ""
		};
	};
    class U_reaperCrew_BDU_roll2_m84: CUP_B_USArmy_Soldier_BDUv2_roll2_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_roll2_m84";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            ""
		};
	};
    class U_reaperCrew_BDU_roll2_gloves_m84: CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_OD
	{
		scope=1;
		author="Reaper Crew";
		uniformClass="reaperCrew_BDU_roll2_gloves_m84";
		hiddenSelectionsTextures[]=
		{
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
			"\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\RC_Assets_Pack_CUP\addons\reaperCrew_cup_clothing\data\reaperCrew_BDUv2_m84_CO.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_co.paa",
            ""
		};
	};
};