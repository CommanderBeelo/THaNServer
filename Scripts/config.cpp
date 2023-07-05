/**
 * config.cpp
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

class CfgPatches
{
    class THaNServer
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Scripts",
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Headgear",
			"DZ_Scripts",
			"DZ_Characters",
			"JPC_vest",
			"mmg_storage",
			"namalsk_survival",
			"CDAJ_Items"
		};
	};
};

class CfgMods
{
	class THaNServer
	{
	    dir = "THaNServer"; //! Name of the mod
		picture = "THaNServer/Scripts/textures/Canna.edds";
	    action = "";
	    hideName = 0;
	    hidePicture = 0;
		name = "THaNServer";
		credits = "CommanderBeelo";
	    author = "CommanderBeelo";
		overview="Server mod for The Horror at Namalsk";
	    authorID = "CommanderBeelo";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

		dependencies[]= 
		{
			"Game",
			"Mission",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"THaNServer/Scripts/3_Game"
					//! Mod name/Scripts/3_Game
				};
			};
			class worldScriptModule
            {
                files[]=
                {
                    "THaNServer/Scripts/4_World"
                };
            };
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"THaNServer/Scripts/5_Mission"
				};
			};
		};
    };
};
class CfgSoundSets
{
	class Main_Music_Menu_SoundSet
	{
		soundShaders[] = {"Main_Music_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};	
class CfgSoundShaders
{
	class Main_Music_Menu_SoundShader
	{
		samples[] = {{"THaNServer\Music\mainmenu3.ogg",1}};
		volume = 1.00000000;
	};
};
class cfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class mk5_vest_base;
	class Clothing_Base;
	class Switchable_Base;
	class MMG_MK_V_Armor_Burlap: mk5_vest_base
	{
		scope = 2;
		displayName = "Dankest MK5 Armor";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\Textures\mk5_vest_burlap.paa",
			"\THaNServer\Textures\mk5_vest_burlap.paa",
			"\THaNServer\Textures\mk5_vest_burlap.paa"
		};
	};
	class MMG_MK_V_Armor_420: mk5_vest_base
	{
		scope = 2;
		displayName = "Dankest MK5 Armor";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\Textures\mk5_vest_dope.paa",
			"\THaNServer\Textures\mk5_vest_dope.paa",
			"\THaNServer\Textures\mk5_vest_dope.paa"
		};
	};
	
	class combatshirt_base;
	class MMG_combatshirt_420: combatshirt_base
	{
		scope=2;
		displayName="Dankest Combat Shirt";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa"
		};
	};
	
	class combatpants_base;
	class MMG_combatpants_420: combatpants_base
	{
		scope=2;
		displayName="Combat Ready Weed Pants";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa"
		};
	};
	
	class TacticalGloves_ColorBase;
	class mmg_tactical_gloves_420: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="Dankest Gloves";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa"
		};
	};
	
	class balaclava_base;
	class MMG_balaclava_420: balaclava_base
	{
		scope=2;
		displayName="Dankest Balaclava";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa",
			"\THaNServer\Textures\canna2.paa"
		};
	};
	class Morphine: Inventory_Base
    {
        inventorySlot[]+=
        {
			"CDAJ_Morphine",
			"CDAJ_EpinephrineA",
            "CDAJ_EpinephrineB",
            "morphine",
            "epinephrine"
        };
    };
    class Epinephrine: Inventory_Base
    {
        inventorySlot[]+=
        {
			"CDAJ_Morphine",
			"CDAJ_EpinephrineA",
            "CDAJ_EpinephrineB",
            "morphine",
            "epinephrine"
        };
    };
    class AntiChemInjector: Inventory_Base
    {
        inventorySlot[]+=
        {
			"CDAJ_Morphine",
			"CDAJ_EpinephrineA",
            "CDAJ_EpinephrineB",
            "morphine",
            "epinephrine"
        };
    };
	class dzn_vega7_enzyme: Inventory_Base
    {
        inventorySlot[]+=
        {
            "CDAJ_Morphine",
			"CDAJ_EpinephrineA",
            "CDAJ_EpinephrineB",
            "morphine",
            "epinephrine"
        };
    };
    class dzn_oxygenated_blood: Inventory_Base
    {
        inventorySlot[]+=
        {
            "CDAJ_Morphine",
			"CDAJ_EpinephrineA",
            "CDAJ_EpinephrineB",
            "morphine",
            "epinephrine"
        };
    };
	class WaterBottle;
	class ExpansionMilkBottle: WaterBottle
	{
		varWetInit=3;
		varWetMax=3;
	};
	class Edible_Base;
	class Expansion_FoodBase: Edible_Base
	{
		varWetInit=3;
		varWetMax=3;
	};
	class Canteen;
	class JPC_Bottle_Base: Canteen
	{
		varWetInit=3;
		varWetMax=3;
	};
	class Clothing: Clothing_Base
	{
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		inventorySlot[]+=
		{
			"Eyewear",
			"Headgear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
	};
	class Expansion_GraveBase: Inventory_Base
    {
        attachments[] += {"LEHS"};
    };
	class ExpansionPersonalStorageContainer: Container_Base
	{
		attachments[] += {"LEHS"};
    };
};