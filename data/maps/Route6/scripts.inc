Route6_MapScripts::
	.byte 0


Route6_Text_Door::
	lock
	msgbox Route6_Text_Door_Text_0
	release
	end


Route6_Text_BugCatcher1::
	trainerbattle_single TRAINER_ABIGAIL_2, Route6_Text_BugCatcher1_Text_0, Route6_Text_BugCatcher1_Text_1
	msgbox Route6_Text_BugCatcher1_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Text_BugCatcher2::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, Route6_Text_BugCatcher2_2
	msgbox Route6_Text_BugCatcher2_Text_1, MSGBOX_NPC
	call Route6_EventScript_Butterfree
	end

Route6_Text_BugCatcher2_2:
	msgbox Route6_Text_BugCatcher2_Text_0
	release
	end


Route6_EventScript_Butterfree::
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_BUTTERFREE, 65
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route6_EventScript_Butterfree_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route6_EventScript_Butterfree_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route6_EventScript_Butterfree_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route6_EventScript_Butterfree_5
Route6_EventScript_Butterfree_1:
	end

Route6_EventScript_Butterfree_2:
	setflag FLAG_TEMP_1
	applymovement 2, Route6_Move_BugCatcher
	waitmovement 0
	msgbox Route6_Text_BugCatcher2_Text_0
	release
	goto Route6_EventScript_Butterfree_1

Route6_EventScript_Butterfree_3:
	setflag FLAG_TEMP_1
	applymovement 2, Route6_Move_BugCatcher
	waitmovement 0
	msgbox Route6_Text_BugCatcher2_Text_0
	release
	goto Route6_EventScript_Butterfree_1

Route6_EventScript_Butterfree_4:
	setflag FLAG_TEMP_1
	applymovement 2, Route6_Move_BugCatcher
	waitmovement 0
	msgbox Route6_EventScript_Butterfree_Text_0
	release
	goto Route6_EventScript_Butterfree_1

Route6_EventScript_Butterfree_5:
	setflag FLAG_TEMP_1
	applymovement 2, Route6_Move_BugCatcher
	waitmovement 0
	msgbox Route6_EventScript_Butterfree_Text_0
	release
	goto Route6_EventScript_Butterfree_1


Route6_Move_BugCatcher:
	face_player
	step_end

Route6_Text_Camper::
	trainerbattle_single TRAINER_ABIGAIL_3, Route6_Text_Camper_Text_0, Route6_Text_Camper_Text_1
	msgbox Route6_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Text_Picnicker::
	trainerbattle_single TRAINER_ABIGAIL_4, Route6_Text_Picnicker_Text_0, Route6_Text_Picnicker_Text_1
	msgbox Route6_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Text_UndergroundSign::
	lock
	msgbox Route6_Text_UndergroundSign_Text_0
	release
	end


Route6_Text_Fisherman::
	lock
	faceplayer
	msgbox Route6_Text_Fisherman_Text_0
	release
	end


Route6_Text_Door_Text_0:
	.string "The UNDERGROUND is close until further\n"
	.string "notice. Thanks.$"

Route6_Text_BugCatcher1_Text_0:
	.string "hey ! Wanna see some bugs ?$"

Route6_Text_BugCatcher1_Text_1:
	.string "Oh wow !$"

Route6_Text_BugCatcher1_Text_2:
	.string "I'm trying to find something good\n"
	.string "that's not a BUG POKéMON, but...$"

Route6_Text_BugCatcher2_Text_0:
	.string "Thanks you ! I will be careful now !$"

Route6_Text_BugCatcher2_Text_1:
	.string "Oh no some POKéMON is running after me !\p HELP !$"

Route6_EventScript_Butterfree_Text_0:
	.string "Well, at least it leave me alone !$"

Route6_Text_Camper_Text_0:
	.string "I eat a lot of vitamins.\nIt makes me strong !$"

Route6_Text_Camper_Text_1:
	.string "Seems like it's not enough...$"

Route6_Text_Camper_Text_2:
	.string "I should bring more POKéMON with\n"
	.string "me. I'll feel safer that way.$"

Route6_Text_Picnicker_Text_0:
	.string "You look weak.\nI'll beat you !$"

Route6_Text_Picnicker_Text_1:
	.string "Oh wait don't hit me !$"

Route6_Text_Picnicker_Text_2:
	.string "I want to get stronger.\n"
	.string "What's your secret ?$"

Route6_Text_UndergroundSign_Text_0:
	.string "UNDERGROUND PATH\n"
	.string "CERULEAN CITY - VERMILION CITY$"

Route6_Text_Fisherman_Text_0:
	.string "Oh yeah I'm fishing.\p"
	.string "What you thought I had something more\n"
	.string "interesting to say ? I have a proper\l"
	.string "life, I'm not a random NPC !$"
