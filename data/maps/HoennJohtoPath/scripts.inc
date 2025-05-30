HoennJohtoPath_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, HoennJohtoPath_OnResume
	.byte 0


HoennJohtoPath_OnResume::
	setdivewarp MAP_NORTHERN_PATH, 9, 9
	end

