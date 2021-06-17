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
			"DayZExpansion_Scripts"
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
	class DZ_THaNServer_ExpansionLoadingScreen
	{
	    dir = "THaNServer"; //! Name of the mod
		picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
		name = "THaNServer";
		credits = "DayZ Expansion";
	    author = "CommanderBeelo";
	    authorID = "CommanderBeelo";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

		dependencies[]= 
		{
			"Game"
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
		};
    };
	class THaNServer_BookImage
    {
        dir="THaNServer";
        picture="";
        action="";
        hideName=1;
        hidePicture=1;
        name="THaNServer BookImage";
        credits="CommanderBeelo";
        author="CommanderBeelo";
        authorID="0";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]={};
        class defs
        {
            class imageSets
            {
                files[]=
                {
                    "THaNServer/Scripts/BookImage/imagesets/BookImage.imageset"
                };
            };
        };
    };
	class MainMenuMusicMod
	{
		dir="THaNServer";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="THaNServer MainMenuMusicMod";
		credits="Commander Beelo";
		author="Commander Beelo";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Mission"
		};
		class defs
		{
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
		samples[] = {{"THaNServer\Scripts\LoadingMusic\MainMenu.ogg",1}};
		volume = 0.70794576;
	};
};
