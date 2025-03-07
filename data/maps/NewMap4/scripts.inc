NewMap4_MapScripts::
	.byte 0


Route113_Cave_Text_Rocker::
	msgbox Route113_Cave_Text_Rocker_Text_0, MSGBOX_NPC
	end


Route113_Cave_Text_Hiker::
	msgbox Route113_Cave_Text_Hiker_Text_0, MSGBOX_NPC
	end


Route113_Text_Whismur::
	lock
	faceplayer
	playmoncry SPECIES_WHISMUR, CRY_MODE_ENCOUNTER
	msgbox Route113_Text_Whismur_Text_0
	waitmoncry
	setwildbattle SPECIES_WHISMUR, 25
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route113_Text_Whismur_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route113_Text_Whismur_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route113_Text_Whismur_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route113_Text_Whismur_5
Route113_Text_Whismur_1:
	return

Route113_Text_Whismur_2:
	removeobject 4
	goto Route113_Text_Whismur_1

Route113_Text_Whismur_3:
	removeobject 4
	goto Route113_Text_Whismur_1

Route113_Text_Whismur_4:
	removeobject 4
	goto Route113_Text_Whismur_1

Route113_Text_Whismur_5:
	removeobject 4
	goto Route113_Text_Whismur_1


Route113_Text_Loudred1::
	lock
	faceplayer
	playmoncry SPECIES_LOUDRED, CRY_MODE_ENCOUNTER
	msgbox Route113_Text_Loudred1_Text_0
	waitmoncry
	setwildbattle SPECIES_LOUDRED, 25
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route113_Text_Loudred1_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route113_Text_Loudred1_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route113_Text_Loudred1_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route113_Text_Loudred1_5
Route113_Text_Loudred1_1:
	return

Route113_Text_Loudred1_2:
	removeobject 5
	goto Route113_Text_Loudred1_1

Route113_Text_Loudred1_3:
	removeobject 5
	goto Route113_Text_Loudred1_1

Route113_Text_Loudred1_4:
	removeobject 5
	goto Route113_Text_Loudred1_1

Route113_Text_Loudred1_5:
	removeobject 5
	goto Route113_Text_Loudred1_1


Route113_Text_Loudred2::
	lock
	faceplayer
	playmoncry SPECIES_LOUDRED, CRY_MODE_ENCOUNTER
	msgbox Route113_Text_Loudred2_Text_0
	waitmoncry
	setwildbattle SPECIES_LOUDRED, 25
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route113_Text_Loudred2_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route113_Text_Loudred2_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route113_Text_Loudred2_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route113_Text_Loudred2_5
Route113_Text_Loudred2_1:
	return

Route113_Text_Loudred2_2:
	removeobject 6
	goto Route113_Text_Loudred2_1

Route113_Text_Loudred2_3:
	removeobject 6
	goto Route113_Text_Loudred2_1

Route113_Text_Loudred2_4:
	removeobject 6
	goto Route113_Text_Loudred2_1

Route113_Text_Loudred2_5:
	removeobject 6
	goto Route113_Text_Loudred2_1


Route113_Cave_Text_Rocker_Text_0:
	.string "Hmmmm?\nNo I'm not a TRAINER, I'm just\lpracticing my guitar skills here alone.$"

Route113_Cave_Text_Hiker_Text_0:
	.string "Arrrrg\nI'm lost here!\lI want to go to FALLARBOR but I don't\lknow where the exit is!\lSouth? East?\lArrrgg!$"

Route113_Text_Whismur_Text_0:
	.string "Muuuuu!$"

Route113_Text_Loudred1_Text_0:
	.string "LOUUUUU!$"

Route113_Text_Loudred2_Text_0:
	.string "DREEEEE!$"
