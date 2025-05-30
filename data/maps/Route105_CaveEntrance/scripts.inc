Route105_CaveEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_CaveEntrance_OnResume
	.byte 0


Route105_CaveEntrance_OnResume::
	setdivewarp MAP_UNDERWATER_ROUTE105BIS, 3, 16
	end

