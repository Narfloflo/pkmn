PacifidlogDungeon2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PacifidlogDungeon2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PacifidlogDungeon2_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x4F9, NewMauvilleMontain2_EventScript_ZapdosGone
	end


NewMauvilleMontain2_EventScript_Zapdos::
	lockall
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_ZAPDOS, 80, ITEM_SHARP_BEAK
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, NewMauvilleMontain2_EventScript_ZapdosCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauvilleMontain2_EventScript_ZapdosCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauvilleMontain2_EventScript_ZapdosFlew
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauvilleMontain2_EventScript_ZapdosFlew
	waitmessage
	releaseall
	return


NewMauvilleMontain2_EventScript_ZapdosCaught::
	setflag FLAG_UNUSED_0x4F9
	goto Common_EventScript_RemoveStaticPokemon
	return


NewMauvilleMontain2_EventScript_ZapdosFlew::
	setflag FLAG_UNUSED_0x4F9
	goto Common_EventScript_LegendaryFlewAway
	return


NewMauvilleMontain2_EventScript_ZapdosGone::
	removeobject 5
	end

