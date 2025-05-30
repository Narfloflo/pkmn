JohtoHoennPath_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, JohtoHoennPath_OnResume
	.byte 0


JohtoHoennPath_OnResume::
	setdivewarp MAP_SOUTHERN_PATH, 20, 23
	end

