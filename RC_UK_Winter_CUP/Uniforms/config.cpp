class CfgPatches
{
	class RC_British_Winter_Campaign_Uniforms
	{
		author = "Ikguzzi";
		requiredVersion = 0.1; 
		requiredAddons[] = 
		{
			"A3_Data_F_Oldman_Loadorder",
			"CUP_Creatures_Military_BAF",
			"CUP_Creatures_Military_Russia"
		};
		units[] = 
        {
            "RC_Unit_UK_W_1",
            "RC_Unit_UK_W_2",
            "RC_Unit_UK_W_3"
        };
		weapons[] = 
		{
			"RC_UK_Winter_longsleeve",
            "RC_UK_Winter_longsleeve_kneepads",
            "RC_UK_Winter_Russian_Uniform"
		};
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

class CfgWeapons
{
    class Itemcore;
    class UniformItem;
    class CUP_U_B_BAF_MTP_UBACSLONG_Gloves;
    class CUP_U_B_BAF_MTP_UBACSLONGKNEE_Gloves;
    class CUP_U_O_RUS_Ratnik_Winter;


    class RC_UK_Winter_longsleeve: CUP_U_B_BAF_MTP_UBACSLONG_Gloves
	{
		displayName="[RC] BAF UBACS w/Gloves (Winter Sleeves down)";
		scope=1;
		scopeCurator=1;
		picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Uniforms\data\RC_UK_W_BAF_UBACS_01_co.paa",
			"cup\creatures\people\military\cup_creatures_people_military_russia\data\oakley_2_od_co.paa",
            ""
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RC_Unit_UK_W_1";
			containerClass="Supply40";
			mass=20;
		};
	};
    class RC_UK_Winter_longsleeve_kneepads: CUP_U_B_BAF_MTP_UBACSLONGKNEE_Gloves
	{
		displayName="[RC] BAF UBACS w/Gloves (Winter Sleeves down, kneepads)";
		scope=1;
		scopeCurator=1;
		picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Uniforms\data\RC_UK_W_BAF_UBACS_01_co.paa",
			"cup\creatures\people\military\cup_creatures_people_military_russia\data\oakley_2_od_co.paa",
            ""
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RC_Unit_UK_W_2";
			containerClass="Supply40";
			mass=20;
		};
	};
	 class RC_UK_Winter_Russian_Uniform: CUP_U_O_RUS_Ratnik_Winter
	{
		scope=2;
		allowedSlots[]={901};
		displayName="[RC] BAF Winter Masking Suit";
		picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"clan",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Outfit\Data\ra_Jacket_w_co.paa",
			"\RC_UK_Winter_CUP\Uniforms\data\RC_BAF_Jacket_hands_w_co.paa",
			"\RC_UK_Winter_CUP\Uniforms\data\RC_BAF_Pants_L_w_co.paa",
			"\RC_UK_Winter_CUP\Uniforms\data\RC_BAF_Pants_R_w_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Outfit\Data\ra_gloves_shoes_s_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RC_Unit_UK_W_3";
			containerClass="Supply40";
			mass=20;
		};
	};
};

class CfgVehicles
{
    class B_Survivor_F;
    class CUP_O_RUS_Ratnik_Winter;

    class RC_Unit_UK_W_1: B_Survivor_F
	{
		displayName="Uniform 1";
		scope=1;
		scopeCurator=1;
        picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		uniformClass="RC_UK_Winter_longsleeve";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\pcs_ubacs_long_gloves.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Uniforms\data\RC_UK_W_BAF_UBACS_01_co.paa",
			"cup\creatures\people\military\cup_creatures_people_military_russia\data\oakley_2_od_co.paa",
            ""
		};						
	};
    class RC_Unit_UK_W_2: B_Survivor_F
	{
		displayName="Uniform 2";
		scope=1;
		scopeCurator=1;
        picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		uniformClass="RC_UK_Winter_longsleeve_kneepads";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\pcs_ubacs_longknee_gloves.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_UK_Winter_CUP\Uniforms\data\RC_UK_W_BAF_UBACS_01_co.paa",
			"cup\creatures\people\military\cup_creatures_people_military_russia\data\oakley_2_od_co.paa",
            ""
		};						
	};
	 class RC_Unit_UK_W_3: CUP_O_RUS_Ratnik_Winter
	{
		displayName="Uniform 3";
		scope=1;
		scopeCurator=1;
        picture = "\RC_UK_Winter_CUP\Logo\RC_UK_W_Logo_co.paa";
		uniformClass="RC_UK_Winter_Russian_Uniform";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Outfit\CUP_6SH119_w.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"clan",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Outfit\Data\ra_Jacket_w_co.paa",
			"\RC_UK_Winter_CUP\Uniforms\data\RC_BAF_Jacket_hands_w_co.paa",
			"\RC_UK_Winter_CUP\Uniforms\data\RC_BAF_Pants_L_w_co.paa",
			"\RC_UK_Winter_CUP\Uniforms\data\RC_BAF_Pants_R_w_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\RatnikV2\Outfit\Data\ra_gloves_shoes_s_co.paa"
		};				
	};
};