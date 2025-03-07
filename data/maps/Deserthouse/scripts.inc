Deserthouse_MapScripts::
	.byte 0

DesertHouse_Text_Dusclops::
	lock
	faceplayer
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_ENCOUNTER
	msgbox DesertHouse_Text_Dusclops_Text_0
	waitmoncry
	setwildbattle SPECIES_DUSCLOPS, 55
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq DesertHouse_Text_Dusclops_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DesertHouse_Text_Dusclops_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq DesertHouse_Text_Dusclops_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq DesertHouse_Text_Dusclops_5
DesertHouse_Text_Dusclops_1:
	return

DesertHouse_Text_Dusclops_2:
	removeobject 1
	goto DesertHouse_Text_Dusclops_1

DesertHouse_Text_Dusclops_3:
	removeobject 1
	goto DesertHouse_Text_Dusclops_1

DesertHouse_Text_Dusclops_4:
	removeobject 1
	goto DesertHouse_Text_Dusclops_1

DesertHouse_Text_Dusclops_5:
	removeobject 1
	goto DesertHouse_Text_Dusclops_1


DesertHouse_Text_Haunter::
	lock
	faceplayer
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	msgbox DesertHouse_Text_Haunter_Text_0
	waitmoncry
	setwildbattle SPECIES_HAUNTER, 55
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq DesertHouse_Text_Haunter_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DesertHouse_Text_Haunter_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq DesertHouse_Text_Haunter_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq DesertHouse_Text_Haunter_5
DesertHouse_Text_Haunter_1:
	return

DesertHouse_Text_Haunter_2:
	removeobject 2
	goto DesertHouse_Text_Haunter_1

DesertHouse_Text_Haunter_3:
	removeobject 2
	goto DesertHouse_Text_Haunter_1

DesertHouse_Text_Haunter_4:
	removeobject 2
	goto DesertHouse_Text_Haunter_1

DesertHouse_Text_Haunter_5:
	removeobject 2
	goto DesertHouse_Text_Haunter_1


DesertHouse_Text_Dusclops_Text_0:
	.string "Looooops !$"

DesertHouse_Text_Haunter_Text_0:
	.string "Booo !$"
