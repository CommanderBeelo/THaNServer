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
};
