BurnedTower_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BurnedTower_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BurnedTower_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call_if_set FLAG_UNUSED_0x021, BurnedTower_MapScripts_ThreeBeastRemove
	end


BurnedTower_MapScripts_ThreeBeastTrigger::
	lock
	playbgm MUS_NONE, FALSE
	playmoncry SPECIES_RAIKOU, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_ENTEI, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	waitmoncry
	applymovement 1, BurnedTower_MapScripts_SuicuneMove
	waitmovement 1
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x021
	setvar VAR_UNUSED_0x404E, 1
	delay 60
	removeobject 1
	removeobject 2
	removeobject 3
	fadescreen FADE_FROM_BLACK
	playbgm MUS_GSC_BURNED_TOWER, TRUE
	releaseall
	end


BurnedTower_MapScripts_SuicuneMove:
	jump_down
	jump_down
	jump_right
	step_end

BurnedTower_MapScripts_ThreeBeastRemove::
	removeobject 1
	removeobject 2
	removeobject 3
	releaseall
	end

