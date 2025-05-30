DewfordToSlateportCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DewfordToSlateportCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

DewfordToSlateportCave_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_unset FLAG_UNUSED_0x021, DewfordToSlateportCave_Event_NoSuicune
	call_if_unset FLAG_UNUSED_0x022, DewfordToSlateportCave_Event_SuicuneGone
	end


DewfordToSlateportCave_Event_NoSuicune::
	setmetatile 16, 33, METATILE_Cave_EntranceCover, TRUE
	setmetatile 16, 34, METATILE_Cave_WallOnWater_Bottom, FALSE
	setmetatile 17, 34, METATILE_Cave_WallOnWater_Bottom, TRUE
	setmetatile 15, 34, METATILE_Cave_WallOnWater_Bottom, TRUE
	end


DewfordToSlateportCave_EventScript_Suicune::
	lockall
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_SUICUNE, 80, ITEM_MYSTIC_WATER
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, DewfordToSlateportCave_EventScript_SuicuneCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DewfordToSlateportCave_EventScript_SuicuneCaught
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DewfordToSlateportCave_EventScript_SuicuneFlew
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DewfordToSlateportCave_EventScript_SuicuneFlew
	waitmessage
	releaseall
	return


DewfordToSlateportCave_EventScript_SuicuneCaught::
	setflag FLAG_UNUSED_0x022
	goto Common_EventScript_RemoveStaticPokemon
	return


DewfordToSlateportCave_EventScript_SuicuneFlew::
	setflag FLAG_UNUSED_0x022
	goto Common_EventScript_LegendaryFlewAway
	return


DewfordToSlateportCave_Event_SuicuneGone::
	removeobject 1
	end

