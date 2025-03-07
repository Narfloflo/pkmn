PewterCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PewterCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_VERDANTURF_TOWN_STATE, 0
	return


PewterCity_Text_Lass::
	lock
	faceplayer
	msgbox PewterCity_Text_Lass_Text_0
	release
	end


PewterCity_Text_Fatman::
	lock
	faceplayer
	msgbox PewterCity_Text_Fatman_Text_0
	release
	end


PewterCity_Text_CitySign::
	lock
	msgbox PewterCity_Text_CitySign_Text_0
	release
	end


PewterCity_Text_MuseumSign::
	lock
	msgbox PewterCity_Text_MuseumSign_Text_0
	release
	end


PewterCity_Text_NoticeSign::
	lock
	msgbox PewterCity_Text_NoticeSign_Text_0
	release
	end


PewterCity_Text_PoliceStationSign::
	lock
	msgbox PewterCity_Text_PoliceStationSign_Text_0
	release
	end


PewterCity_Text_Scientist::
	lock
	faceplayer
	msgbox PewterCity_Text_Scientist_Text_0
	release
	end


PewterCity_Text_Camper::
	lock
	faceplayer
	msgbox PewterCity_Text_Camper_Text_0
	release
	end


PewterCity_Text_Youngster::
	lock
	msgbox PewterCity_Text_Youngster_Text_0
	release
	end


PewterCity_Text_BugCatcher::
	lock
	msgbox PewterCity_Text_BugCatcher_Text_0
	release
	end


PewterCity_Text_Oldman::
	lock
	faceplayer
	msgbox PewterCity_Text_Oldman_Text_0
	release
	end


PewterCity_Text_Hiker::
	lock
	faceplayer
	msgbox PewterCity_Text_Hiker_Text_0
	release
	end


PewterCity_Text_Lass_Text_0:
	.string "It's rumored that CLEFAIRYS came from\n"
	.string "the moon ! They appeared after MOON\l"
	.string "STONES fell on MT. MOON.$"

PewterCity_Text_Fatman_Text_0:
	.string "There aren't many serious POKéMON\n"
	.string "trainers here ! They're all like BUG\l"
	.string "CATCHERS, but BROCK'S GYM is a real\l"
	.string "deal. But he's not in the GYM currently.$"

PewterCity_Text_CitySign_Text_0:
	.string "PEWTER CITY\n"
	.string "A stone grey city$"

PewterCity_Text_MuseumSign_Text_0:
	.string "PEWTER Museum of Science$"

PewterCity_Text_NoticeSign_Text_0:
	.string "NOTICE !\n"
	.string "Thieves have been arrested in MT. MOON.\l"
	.string "Thanks for your cooperation. PEWTER\l"
	.string "CITY POLICE$"

PewterCity_Text_PoliceStationSign_Text_0:
	.string "PEWTER CITY POLICE STATION$"

PewterCity_Text_Scientist_Text_0:
	.string "We had some AMBER in the MUSEUM, but we\n"
	.string "gave it to some kid who destroyed the\l"
	.string "bush at the back. Go inside and check\l"
	.string "if they have some more AMBER if you\l"
	.string "want.$"

PewterCity_Text_Camper_Text_0:
	.string "I should have followed BROCK in MT.\n"
	.string "MOON. Now I'm bored...$"

PewterCity_Text_Youngster_Text_0:
	.string "My MACHOP will crush your RATTATA !$"

PewterCity_Text_BugCatcher_Text_0:
	.string "RATTATA is undefeated !$"

PewterCity_Text_Oldman_Text_0:
	.string "My flowers have been ravaged by some\n"
	.string "wild POKéMON. So now I need more REPEL\l"
	.string "!$"

PewterCity_Text_Hiker_Text_0:
	.string "Hey you!\nBROCK is not here, so the GYM is\lclosed.\lYou better take a look in ROUTE 3 if\lyou are looking for him.$"
