LeagueEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LeagueEntrance_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LeagueEntrance_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x029, LeagueEntrance_Event_GuardToMtSilver
	end


LeagueEntrance_Text_Scientist::
	lock
	faceplayer
	msgbox LeagueEntrance_Text_Scientist_Text_0
	release
	end


LeagueEntrance_Text_Police1::
	lock
	faceplayer
	msgbox LeagueEntrance_Text_Police1_Text_0
	release
	end


LeagueEntrance_Text_Police2::
	lock
	faceplayer
	msgbox LeagueEntrance_Text_Police2_Text_0
	release
	end


LeagueEntrance_Text_Police3::
	goto_if_set FLAG_UNUSED_0x029, LeagueEntrance_Text_Police3_1
	msgbox LeagueEntrance_Text_Police3_Text_1, MSGBOX_NPC
	end

LeagueEntrance_Text_Police3_1:
	msgbox LeagueEntrance_Text_Police3_Text_0, MSGBOX_NPC
	end


LeagueEntrance_Text_Cooltrainer::
	lock
	faceplayer
	msgbox LeagueEntrance_Text_Cooltrainer_Text_0
	release
	end


LeagueEntrance_Text_Oldman::
	lock
	faceplayer
	msgbox LeagueEntrance_Text_Oldman_Text_0
	release
	end


LeagueEntrance_Event_CannotGoYet::
	checktrainerflag TRAINER_NORMAN_4
	goto_if 0, LeagueEntrance_Event_CannotGoYet_1
	release
	end

LeagueEntrance_Event_CannotGoYet_1:
	lock
	msgbox LeagueEntrance_Event_CannotGoYet_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, LeagueEntrance_Move_FaceCounter
	waitmovement 0
	msgbox LeagueEntrance_Event_CannotGoYet_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, LeagueEntrance_Move_Leaving
	waitmovement 0
	release
	end


LeagueEntrance_Event_CannotGoYet1::
	checktrainerflag TRAINER_NORMAN_4
	goto_if 0, LeagueEntrance_Event_CannotGoYet1_1
	release
	end

LeagueEntrance_Event_CannotGoYet1_1:
	lock
	msgbox LeagueEntrance_Event_CannotGoYet_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, LeagueEntrance_Move_WalktoCounter
	waitmovement 0
	msgbox LeagueEntrance_Event_CannotGoYet_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, LeagueEntrance_Move_Leaving
	waitmovement 0
	release
	end


LeagueEntrance_Move_FaceCounter:
	face_left
	step_end

LeagueEntrance_Move_WalktoCounter:
	walk_left
	step_end

LeagueEntrance_Move_Leaving:
	walk_up
	step_end

LeagueEntrance_Event_GuardToMtSilver::
	setobjectxyperm 7, 1, 5
	return


LeagueEntrance_Text_Scientist_Text_0:
	.string "We are surveying a project that lead to\n"
	.string "a MOUNTAIN called MT. SILVER. It will\l"
	.string "take time !$"

LeagueEntrance_Text_Police1_Text_0:
	.string "Welcome to the KANTO's POKéMON LEAGUE.$"

LeagueEntrance_Text_Police2_Text_0:
	.string "This way is closed. You can't challenge\n"
	.string "the KANTO's POKéMON LEAGUE. I don't\l"
	.string "really know where they all are...$"

LeagueEntrance_Text_Police3_Text_0:
	.string "You there! You look strong!\nMaybe you can see what is going on\lhere!\lOur CHAMPION RED blasted this way into\lMT. SILVER! It's dangerous!\lCan you help us and see what's going\lon?$"

LeagueEntrance_Text_Police3_Text_1:
	.string "The way throught MT. SILVER is closed.\nThe HIKERS CLUB is investigating the\lplace currently.$"

LeagueEntrance_Text_Cooltrainer_Text_0:
	.string "I was hired to secure the way to MT.\n"
	.string "SILVER. POKéMON there are really\l"
	.string "strong !$"

LeagueEntrance_Text_Oldman_Text_0:
	.string "I used to live close to MT. SILVER. It's\n"
	.string "an hard place to reach, so I'm guiding\l"
	.string "the crews safely.$"

LeagueEntrance_Event_CannotGoYet_Text_0:
	.string "Wait wait !$"

LeagueEntrance_Event_CannotGoYet_Text_1:
	.string "Unfortunatly we can't let you go\nthere...\lYes we know, it's frustrating but\lthe entire mountain just erodes\land we are cleaning the path\lthanks to the HIKER CLUB !\lYou can come back later.$"
