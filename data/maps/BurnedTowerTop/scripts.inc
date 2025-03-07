BurnedTowerTop_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BurnedTowerTop_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BurnedTowerTop_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_unset FLAG_UNUSED_0x020, BurnedTowerTop_EventScript_Hole
	end


BurnedTowerTop_EventScript_Hole::
	setmetatile 7, 11, METATILE_BurnedTower_Floor, FALSE
	setmetatile 3, 19, METATILE_BurnedTower_Floor, FALSE
	removeobject 1
	end


BurnedTower_Text_Leaf::
	lock
	faceplayer
	trainerbattle_single TRAINER_LEAF, BurnedTower_Text_Leaf_Text_0, BurnedTower_Text_Leaf_Text_1, BurnedTower_Text_LeafPostBattle, FALSE
	return


BurnedTower_Text_LeafPostBattle::
	setflag FLAG_UNUSED_0x020
	msgbox BurnedTower_Text_LeafPostBattle_Text_0, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, BurnedTower_Text_LeafPostBattleMove
	waitmovement 0
	playse SE_BREAKABLE_DOOR
	call BurnedTower_Text_RemoveFloor
	warphole MAP_BURNED_TOWER
	release
	end


BurnedTower_Text_RemoveFloor::
	setmetatile 7, 11, METATILE_BurnedTower_CrackHole, FALSE
	return


BurnedTower_Text_LeafPostBattleMove:
	emote_question_mark
	step_end

BurnedTower_Text_PicnickGirl::
	goto_if_set FLAG_UNUSED_0x021, BurnedTower_Text_PicnickGirl_1
	msgbox BurnedTower_Text_PicnickGirl_Text_1, MSGBOX_NPC
	end

BurnedTower_Text_PicnickGirl_1:
	msgbox BurnedTower_Text_PicnickGirl_Text_0, MSGBOX_NPC
	end


BurnedTower_Text_Firebreather::
	trainerbattle_single TRAINER_MADELINE_2, BurnedTower_Text_Firebreather_Text_0, BurnedTower_Text_Firebreather_Text_1
	msgbox BurnedTower_Text_Firebreather_Text_2, MSGBOX_NPC
	end


BurnedTower_Text_Leaf_Text_0:
	.string ".......... ?!$"

BurnedTower_Text_Leaf_Text_1:
	.string "....$"

BurnedTower_Text_LeafPostBattle_Text_0:
	.string "..............\n............$"

BurnedTower_Text_PicnickGirl_Text_0:
	.string "You are lucky I could find a ladder\naround! When I heard you fall I noticed\lthe ground was fragile so I was able to\lhelp you out!$"

BurnedTower_Text_PicnickGirl_Text_1:
	.string "This place is shrouded with legends!\nA friend of mine is around mapping the\llocation.\lShe's a fierce TRAINER!$"

BurnedTower_Text_Firebreather_Text_0:
	.string "Hey$"

BurnedTower_Text_Firebreather_Text_1:
	.string "Damn$"

BurnedTower_Text_Firebreather_Text_2:
	.string "I lost!$"
