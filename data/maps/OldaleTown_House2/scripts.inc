OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "If the POKéMON with you become\n"
	.string "stronger, you'll be able to go farther\l"
	.string "away from here.$"

OldaleTown_House2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, OldaleTown_House2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

OldaleTown_House2_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x02D, OldaleTown_House2_RemoveZigzagoon
	call_if_lt VAR_FORTREE_CITY_STATE, 2, OldaleTown_House2_FlagOldman
	call_if_set FLAG_UNUSED_0x02C, OldaleTown_House2_RemoveOldman
	return


OldaleTown_House2_FlagOldman::
	setflag FLAG_UNUSED_0x02C
	end


OldaleTown_House2_RemoveOldman::
	removeobject 3
	end


OldaleTown_House2_RemoveZigzagoon::
	removeobject 4
	end


OldaleTown_House2_Oldman::
	lock
	faceplayer
	msgbox OldaleTown_House2_Oldman_Text_0
	release
	end


OldaleTown_House2_TriggerWildPokemon::
	goto_if_eq VAR_FORTREE_CITY_STATE, 0, OldaleTown_House2_RunningFromZiggy
	goto_if_eq VAR_FORTREE_CITY_STATE, 5, OldaleTown_House2_RunningFromZiggy
	goto_if_eq VAR_FORTREE_CITY_STATE, 1, OldaleTown_House2_TriggerZiggyFight
	goto_if_gt VAR_FORTREE_CITY_STATE, 2, OldaleTown_House2_NoMoreZiggy
	goto_if_gt VAR_FORTREE_CITY_STATE, 3, OldaleTown_House2_NoMoreZiggy
	goto_if_gt VAR_FORTREE_CITY_STATE, 4, OldaleTown_House2_NoMoreZiggy
	return


OldaleTown_House2_RunningFromZiggy::
	msgbox OldaleTown_House2_RunningFromZiggy_Text_0, MSGBOX_NPC
	warp MAP_OLDALE_TOWN, 17, 22
	end


OldaleTown_House2_NoMoreZiggy::
	releaseall
	end


OldaleTown_House2_TriggerZiggyFight::
	applymovement 4, OldaleTown_House2_ZiggySpotsYou
	waitmovement 4
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_ZIGZAGOON, 10, ITEM_ORAN_BERRY
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq OldaleTown_House2_TriggerZiggyFight_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq OldaleTown_House2_TriggerZiggyFight_3
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq OldaleTown_House2_TriggerZiggyFight_4
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OldaleTown_House2_TriggerZiggyFight_5
OldaleTown_House2_TriggerZiggyFight_1:
	end

OldaleTown_House2_TriggerZiggyFight_2:
	call OldaleTown_House2_Ziggybeaten
	goto OldaleTown_House2_TriggerZiggyFight_1

OldaleTown_House2_TriggerZiggyFight_3:
	call OldaleTown_House2_RunFromZiggy
	goto OldaleTown_House2_TriggerZiggyFight_1

OldaleTown_House2_TriggerZiggyFight_4:
	call OldaleTown_House2_RunFromZiggy
	goto OldaleTown_House2_TriggerZiggyFight_1

OldaleTown_House2_TriggerZiggyFight_5:
	call OldaleTown_House2_Ziggybeaten
	goto OldaleTown_House2_TriggerZiggyFight_1


OldaleTown_House2_ZiggySpotsYou:
	jump_in_place_left
	jump_in_place_left
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

OldaleTown_House2_Ziggybeaten::
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_UNUSED_0x02C
	removeobject 4
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_FORTREE_CITY_STATE, 2
	msgbox OldaleTown_House2_Ziggybeaten_Text_0, MSGBOX_AUTOCLOSE
	release
	end


OldaleTown_House2_RunFromZiggy::
	msgbox OldaleTown_House2_RunFromZiggy_Text_0, MSGBOX_NPC
	setvar VAR_FORTREE_CITY_STATE, 5
	warp MAP_OLDALE_TOWN, 17, 23
	end


OldaleTown_House2_Oldman_Text_0:
	.string "Some POKéMON can EVOLVE with a\n"
	.string "specific object.\l"
	.string "I heard that a place is selling those\l"
	.string "objects. But I don't remember\l"
	.string "where...$"

OldaleTown_House2_RunningFromZiggy_Text_0:
	.string "{PLAYER}: There is a ZIGZAGOON running\namok.\lI should get out of here...$"

OldaleTown_House2_Ziggybeaten_Text_0:
	.string "{PLAYER}: Alright, now I should get\nback to the farmer.$"

OldaleTown_House2_RunFromZiggy_Text_0:
	.string "{PLAYER}:.............................\nI better run away$"
