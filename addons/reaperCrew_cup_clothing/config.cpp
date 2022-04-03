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
    class CUP_U_B_BDUv2_base;
    class CUP_U_B_BDUv2_OD: CUP_U_B_BDUv2_base
    {
        class Iteminfo;
    };

    class reaperCrew_BDU_mm14: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (MM-14)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_mm14";
		};
	};
    class reaperCrew_BDU_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (M-84)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_m84";
		};
	};
    class reaperCrew_BDU_gloves_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (M-84, Gloves)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_gloves_m84";
		};
	};
    class reaperCrew_BDU_roll_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (M-84, Rolled)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll_m84";
		};
	};
    class reaperCrew_BDU_roll_gloves_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (M-84, Rolled/Gloves)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll_gloves_m84";
		};
	};
    class reaperCrew_BDU_roll2_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (M-84, Rolled High)";
		picture="";
		class ItemInfo: ItemInfo
		{
			uniformClass="U_reaperCrew_BDU_roll2_m84";
		};
	};
    class reaperCrew_BDU_roll2_gloves_m84: CUP_U_B_BDUv2_OD
    {
		scope=2;
		displayName="BDU (M-84, Rolled High/Gloves)";
		picture="";
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