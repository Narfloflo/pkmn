Underwater_Route105Ter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_Route105Ter_OnResume
	.byte 0


Underwater_Route105Ter_OnResume::
	setdivewarp MAP_ROUTE105_CAVE_EXIT, 3, 2
	end

