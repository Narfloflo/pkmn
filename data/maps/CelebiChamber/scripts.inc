CelebiChamber_MapScripts::
	.byte 0


CelebiChamber_EventScript_Celebi::
	lockall
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_CELEBI, 80, ITEM_LUCKY_EGG
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, CelebiChamber_EventScript_Won_or_Caught
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CelebiChamber_EventScript_RanAway
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CelebiChamber_EventScript_RanAway
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CelebiChamber_EventScript_RanAway
	waitmessage
	releaseall
	return


CelebiChamber_EventScript_Won_or_Caught::
	setflag FLAG_UNUSED_0x026
	fadescreen FADE_TO_BLACK
	warp MAP_ILEX_FOREST, 17, 36
	fadescreen FADE_FROM_BLACK
	msgbox CelebiChamber_EventScript_Won_or_Caught_Text_0
	waitbuttonpress
	delay 50
	return


CelebiChamber_EventScript_RanAway::
	removeobject 1
	setflag FLAG_UNUSED_0x026
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox CelebiChamber_EventScript_RanAway_Text_0
	fadescreen FADE_TO_BLACK
	warp MAP_ILEX_FOREST, 17, 36
	fadescreen FADE_FROM_BLACK
	msgbox CelebiChamber_EventScript_RanAway_Text_1
	waitbuttonpress
	delay 50
	return


CelebiChamber_EventScript_Won_or_Caught_Text_0:
	.string "There is a warm feeling above yourself.$"

CelebiChamber_EventScript_RanAway_Text_0:
	.string "{PLAYER}: Damn it! How can I be that bad!$"

CelebiChamber_EventScript_RanAway_Text_1:
	.string "A celestial voice is fadding away.$"
