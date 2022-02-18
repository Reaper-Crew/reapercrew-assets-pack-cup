class CfgPatches
{
	class reaperCrew_British_Winter_Campaign_Helmets
	{
		author = "Reaper Crew";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder",
			"CUP_Creatures_Military_BAF"
		};
		units[] =  {};
		weapons[] = 
		{
            "reaperCrew_UK_Winter_Helmet_Mk6_empty",
			"reaperCrew_UK_Winter_Helmet_Mk6_Crew_PRR",
			"reaperCrew_UK_Winter_Helmet_Mk6_empty_PRR",
			"reaperCrew_UK_Winter_Helmet_Mk6_Glass_PRR",
			"reaperCrew_UK_Winter_Helmet_Mk6_Googles_PRR",
			"reaperCrew_UK_Winter_Helmet_Mk6_Netting_PRR"
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
    class CUP_H_BAF_MTP_Mk6_EMPTY;
    class CUP_H_BAF_MTP_Mk6_CREW_PRR;
    class CUP_H_BAF_MTP_Mk6_EMPTY_PRR;
    class CUP_H_BAF_MTP_Mk6_GLASS_PRR;
    class CUP_H_BAF_MTP_Mk6_GOGGLES_PRR;
    class CUP_H_BAF_MTP_Mk6_NETTING_PRR;
    class HeadgearItem;

    class reaperCrew_UK_Winter_Helmet_Mk6_empty: CUP_H_BAF_MTP_Mk6_EMPTY
    {
        scope = 2;
		displayName = "[reaperCrew] MK7 Helmet BAF (Winter)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_Empty.p3d";
		hiddenSelections[] = 
        {
            "camo",
            "camo3"
        };
		hiddenSelectionsTextures[] = 
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
        };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_Empty.p3d";
			hiddenSelections[] = 
            {
                "camo",
                "camo3"
            };
			class HitpointsProtectionInfo 
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class reaperCrew_UK_Winter_Helmet_Mk6_Crew_PRR: CUP_H_BAF_MTP_Mk6_CREW_PRR
    {
        scope = 2;
		displayName = "[reaperCrew] MK7 Helmet BAF (Winter/PPRR/Crew)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Crew.p3d";
		hiddenSelections[] = 
        {
            "camo",
            "camo3"
        };
		hiddenSelectionsTextures[] = 
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
        };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Crew.p3d";
			hiddenSelections[] = 
            {
                "camo",
                "camo3"
            };
			class HitpointsProtectionInfo 
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Helmet_Mk6_empty_PRR: CUP_H_BAF_MTP_Mk6_EMPTY_PRR
    {
        scope = 2;
		displayName = "[reaperCrew] MK7 Helmet BAF (Winter/PRR)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Empty.p3d";
		hiddenSelections[] = 
        {
            "camo",
            "camo3"
        };
		hiddenSelectionsTextures[] = 
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
        };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Empty.p3d";
			hiddenSelections[] = 
            {
                "camo",
                "camo3"
            };
			class HitpointsProtectionInfo 
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Helmet_Mk6_Glass_PRR: CUP_H_BAF_MTP_Mk6_GLASS_PRR
    {
        scope = 2;
		displayName = "[reaperCrew] MK7 Helmet BAF (Winter/PRR/Glasses)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Glasses.p3d";
		hiddenSelections[] = 
        {
            "camo",
            "camo3"
        };
		hiddenSelectionsTextures[] = 
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
        };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Glasses.p3d";
			hiddenSelections[] = 
            {
                "camo",
                "camo3"
            };
			class HitpointsProtectionInfo 
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Helmet_Mk6_Googles_PRR: CUP_H_BAF_MTP_Mk6_GOGGLES_PRR
    {
        scope = 2;
		displayName = "[reaperCrew] MK7 Helmet BAF (Winter/PRR/Googles)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Goggles.p3d";
		hiddenSelections[] = 
        {
            "camo",
            "camo3"
        };
		hiddenSelectionsTextures[] = 
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
        };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Goggles.p3d";
			hiddenSelections[] = 
            {
                "camo",
                "camo3"
            };
			class HitpointsProtectionInfo 
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class reaperCrew_UK_Winter_Helmet_Mk6_Netting_PRR: CUP_H_BAF_MTP_Mk6_NETTING_PRR
    {
        scope = 2;
		displayName = "[reaperCrew] MK7 Helmet BAF (Winter/PRR/Netting)";
		picture = "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Logo\reaperCrew_UK_W_Logo_co.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Netting.p3d";
		hiddenSelections[] = 
        {
            "camo",
            "camo3"
        };
		hiddenSelectionsTextures[] = 
        {
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_co.paa",
            "rc_assets_pack_cup\addons\reaperCrew_UK_Winter_CUP\Vests\data\reaperCrew_UK_W_MK4_Osprey_equip_d_co.paa",
        };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_headgear\mk6\Mk6_PRR_Netting.p3d";
			hiddenSelections[] = 
            {
                "camo",
                "camo3"
            };
			class HitpointsProtectionInfo 
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};