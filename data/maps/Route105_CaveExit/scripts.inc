Route105_CaveExit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_CaveExit_OnResume
	.byte 0


Route105_CaveExit_OnResume::
	setdivewarp MAP_UNDERWATER_ROUTE105BIS, 4, 2
	end

