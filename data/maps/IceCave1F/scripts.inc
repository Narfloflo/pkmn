IceCave1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, IceCave1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IceCave1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x4FA, IceCave1F_Event_ArticunoGone
	end


IceCave1F_Event_Articuno::
	lockall
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_ARTICUNO, 80, ITEM_NEVER_MELT_ICE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, IceCave1F_Event_ArticunoCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IceCave1F_Event_ArticunoCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IceCave1F_Event_ArticunoFlew
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IceCave1F_Event_ArticunoFlew
	waitmessage
	releaseall
	return


IceCave1F_Event_ArticunoCaught::
	setflag FLAG_UNUSED_0x4FA
	goto Common_EventScript_RemoveStaticPokemon
	return


IceCave1F_Event_ArticunoFlew::
	setflag FLAG_UNUSED_0x4FA
	goto Common_EventScript_LegendaryFlewAway
	return


IceCave1F_Event_ArticunoGone::
	removeobject 5
	end

