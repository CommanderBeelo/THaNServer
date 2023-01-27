/**
 * config.cpp
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

class CfgPatches
{
    class THaNServer_ExpansionLoadingScreen
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Characters",
			"JPC_vest",
			"DZ_Gear_Containers",
			"DayZExpansion_Scripts",
			"CDAJ_Items"
		};
	};
	class THaNServer_BookImage
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DayZExpansion_Scripts"
        };
    };
	class MainMenuMusicMod
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};
///////////////////////////////////////////////
class CfgMods
{
	class THaNServer
	{
	    dir = "THaNServer"; //! Name of the mod
		picture = "THaNServer/Scripts/bookimage/imagesets/beeloswatermark.edds";
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
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"THaNServer\scripts\5_Mission"
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
		samples[] = {{"THaNServer\Scripts\LoadingMusic\mainmenu2.ogg",1}};
		volume = 1.00000000;
	};
};
class cfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class mk5_vest_base;
	class MMG_MK_V_Armor_Burlap: mk5_vest_base
	{
		scope = 2;
		displayName = "Dankest MK5 Armor";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\scripts\textures\mk5_vest_burlap.paa",
			"\THaNServer\scripts\textures\mk5_vest_burlap.paa",
			"\THaNServer\scripts\textures\mk5_vest_burlap.paa"
		};
	};
	class MMG_MK_V_Armor_420: mk5_vest_base
	{
		scope = 2;
		displayName = "Dankest MK5 Armor";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\scripts\textures\mk5_vest_dope.paa",
			"\THaNServer\scripts\textures\mk5_vest_dope.paa",
			"\THaNServer\scripts\textures\mk5_vest_dope.paa"
		};
	};
	
	class combatshirt_base;
	class MMG_combatshirt_420: combatshirt_base
	{
		scope=2;
		displayName="Dankest Combat Shirt";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa"
		};
	};
	
	class combatpants_base;
	class MMG_combatpants_420: combatpants_base
	{
		scope=2;
		displayName="Combat Ready Weed Pants";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa"
		};
	};
	
	class TacticalGloves_ColorBase;
	class mmg_tactical_gloves_420: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="Dankest Gloves";
		hiddenSelectionsTextures[] = 
		{
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa"
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
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa",
			"\THaNServer\scripts\textures\canna2.paa"
		};
	};
	class Morphine: Container_Base
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
    class Epinephrine: Container_Base
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
    class AntiChemInjector: Container_Base
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
	
};