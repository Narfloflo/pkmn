Underwater_Route105Bis_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_Route105Bis_OnResume
	.byte 0


Underwater_Route105Bis_OnResume::
	setdivewarp MAP_ROUTE105_CAVE_ENTRANCE, 6, 3
	end

