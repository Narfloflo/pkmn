NewIsland_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NewIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x021, NewIsland_Text_Weather
	end


NewIsland_Text_RuinManiac::
	goto_if_set FLAG_UNUSED_0x021, NewIsland_Text_RuinManiac_2
	msgbox NewIsland_Text_RuinManiac_Text_1, MSGBOX_NPC
	end

NewIsland_Text_RuinManiac_2:
	msgbox NewIsland_Text_RuinManiac_Text_0, MSGBOX_NPC
	end


NewIsland_Text_Weather::
	setweather WEATHER_RAIN_THUNDERSTORM
	end


NewIsland_Text_RuinManiac_Text_0:
	.string "Oh my ARCEUS! I feel like there is more\nthunder now...\lSo strange!$"

NewIsland_Text_RuinManiac_Text_1:
	.string "There must be something here...\nI feel it!$"
