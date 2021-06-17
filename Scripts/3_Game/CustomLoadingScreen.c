//! Where are the files located
const string LOADING_SCREENS_PATH 	= "THaNServer/Scripts/LoadingScreen/LoadingImages.json";
const string LOADING_MESSAGES_PATH 	= "THaNServer/Scripts/LoadingScreen/LoadingMessages.json";
const string LOADING_SCREEN_LOGO 	= "THaNServer/Scripts/LoadingScreen/NamalskBigLogo.edds";
									//! ModName/Path/File

//! true  = yes
//! false = no
const bool UseCustomLoadingPictures = true;
const bool UseCustomLoadingMessages = true;
const bool UseCustomLogo = true;
const bool UseCustomLoadingBarColor = true;
const int CustomLoadingBarColor = ARGB( 255, 255, 255, 255 ); 	//! A = Alpha (opacity) / R = Red / G = Green / B = Blue
															//! Use a online ARGB color picker, make sure to not mix the values !

//! Do not touch anything bellow this line
modded class LoadingScreen 
{
	void LoadingScreen(DayZGame game)
	{
		if ( UseCustomLoadingPictures )
		{
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}

		if ( UseCustomLoadingMessages )
		{
			JsonFileLoader< ref array< ref ExpansionLoadingScreenMessageData > >.JsonLoadFile( LOADING_MESSAGES_PATH, m_MessageJson );
		}
		
		if ( UseCustomLogo )
		{
			m_ImageLogoMid.LoadImageFile( 0, LOADING_SCREEN_LOGO );
			m_ImageLogoCorner.LoadImageFile( 0, LOADING_SCREEN_LOGO );
		}

		if ( UseCustomLoadingBarColor )
		{
			m_ProgressLoading.SetColor( CustomLoadingBarColor );
		}
	};

	override void Show()
	{
		if ( UseCustomLoadingPictures )
		{
			m_Backgrounds.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}

		if ( UseCustomLoadingMessages )
		{
			m_MessageJson.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenMessageData > >.JsonLoadFile( LOADING_MESSAGES_PATH, m_MessageJson );
		}
		
		super.Show();
	};
};
 
modded class LoginQueueBase 
{
	void LoginQueueBase()
	{
		if ( UseCustomLoadingPictures )
		{
			m_Backgrounds.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}
	};
};
 
modded class LoginTimeBase 
{
	void LoginTimeBase()
	{
		if ( UseCustomLoadingPictures )
		{
			m_Backgrounds.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}
	};
};