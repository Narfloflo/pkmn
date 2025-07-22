NewIslandCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NewIslandCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewIslandCave_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_unset FLAG_UNUSED_0x021, NewIslandCave_Event_NoRaikou
	call_if_unset FLAG_UNUSED_0x023, NewIslandCave_Event_RaikouGone
	end


NewIslandCave_Event_NoRaikou::
	setmetatile 7, 11, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 11, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 11, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 12, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 12, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 12, METATILE_Cave_EntranceCover, TRUE
	end


NewIslandCave_EventScript_Raikou::
	lockall
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_RAIKOU, 80, ITEM_MAGNET
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, NewIslandCave_EventScript_RaikouCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewIslandCave_EventScript_RaikouCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewIslandCave_EventScript_RaikouFlew
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewIslandCave_EventScript_RaikouFlew
	waitmessage
	releaseall
	return


NewIslandCave_EventScript_RaikouCaught::
	setflag FLAG_UNUSED_0x023
	goto Common_EventScript_RemoveStaticPokemon
	return


NewIslandCave_EventScript_RaikouFlew::
	setflag FLAG_UNUSED_0x023
	goto Common_EventScript_LegendaryFlewAway
	return


NewIslandCave_Event_RaikouGone::
	removeobject 1
	end


NewIslandCave_Text_Scientist::
	msgbox NewIslandCave_Text_Scientist_Text_0, MSGBOX_NPC
	end


NewIslandCave_Text_Scientist_Text_0:
	.string "Huh what?\nWho are you?\lWhere are we?\lDo you know ARCEUS?\lI saw his smile! His love changed me!\lHuh? What you are still here?\lWhat do you want?\lARCEUS! Deliver us!$"
