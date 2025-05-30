NorthernPath_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, NorthernPath_OnResume
	.byte 0


NorthernPath_OnResume::
	setdivewarp MAP_HOENN_JOHTO_PATH, 9, 47
	end

