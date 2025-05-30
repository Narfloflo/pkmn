EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_Text_EnteringVictoryRoad:
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign:
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"

EverGrandeCity_Text_PolicemanEnter::
	lock
	faceplayer
	msgbox EverGrandeCity_Text_PolicemanEnter_Text_0
	release
	end


EverGrandeCity_Text_PolicemanExit::
	lock
	faceplayer
	msgbox EverGrandeCity_Text_PolicemanExit_Text_0
	release
	end


EverGrandeCity_Text_PolicemanEnter_Text_0:
	.string "Here is the entrance of the VICTORY\n"
	.string "ROAD. Good luck !$"

EverGrandeCity_Text_PolicemanExit_Text_0:
	.string "Congratulations ! The POKéMON LEAGUE\n"
	.string "is just a bit NORTH down this mountain.$"
