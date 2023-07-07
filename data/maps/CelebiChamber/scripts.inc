CelebiChamber_MapScripts::
	.byte 0


CelebiChamber_EventScript_Celebi::
	lockall
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_CELEBI, 15, ITEM_LUCKY_EGG
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CelebiChamber_EventScript_Celebi_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CelebiChamber_EventScript_Celebi_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CelebiChamber_EventScript_Celebi_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CelebiChamber_EventScript_Celebi_5
CelebiChamber_EventScript_Celebi_1:
	waitmessage
	releaseall
	return

CelebiChamber_EventScript_Celebi_2:
	call CelebiChamber_EventScript_Won_or_Caught
	goto CelebiChamber_EventScript_Celebi_1

CelebiChamber_EventScript_Celebi_3:
	call CelebiChamber_EventScript_RanAway
	goto CelebiChamber_EventScript_Celebi_1

CelebiChamber_EventScript_Celebi_4:
	call CelebiChamber_EventScript_RanAway
	goto CelebiChamber_EventScript_Celebi_1

CelebiChamber_EventScript_Celebi_5:
	call CelebiChamber_EventScript_RanAway
	goto CelebiChamber_EventScript_Celebi_1


CelebiChamber_EventScript_Won_or_Caught::
	fadescreen FADE_TO_BLACK
	warp MAP_PETALBURG_WOODS, 56, 46
	fadescreen FADE_FROM_BLACK
	msgbox CelebiChamber_EventScript_Won_or_Caught_Text_0
	delay 50
	return


CelebiChamber_EventScript_RanAway::
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	msgbox CelebiChamber_EventScript_RanAway_Text_0, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	warp MAP_PETALBURG_WOODS, 56, 46
	fadescreen FADE_FROM_BLACK
	msgbox CelebiChamber_EventScript_RanAway_Text_1
	delay 50
	return


CelebiChamber_EventScript_Won_or_Caught_Text_0:
	.string "There is a warm feeling above yourself.$"

CelebiChamber_EventScript_RanAway_Text_0:
	.string "{PLAYER}: Damn it!$"

CelebiChamber_EventScript_RanAway_Text_1:
	.string "A celestial voice is fadding away.$"
