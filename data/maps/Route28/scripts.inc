Route28_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route28_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route28_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x02A, Route28_Event_RedRemove
	return


Route28_Event_RedLeavestoMtSilverUP::
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Route28_Move_RedLeavestoMtSilverUP
	waitmovement 0
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_0, MSGBOX_AUTOCLOSE
	applymovement 2, Route28_Move_BirdkeepertoHiker
	waitmovement 0
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_1, MSGBOX_AUTOCLOSE
	applymovement 3, Route28_Move_RedLeavestoMtSilver
	waitmovement 0
	removeobject 3
	setflag FLAG_UNUSED_0x02A
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_2, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playse SE_M_EARTHQUAKE
	waitse
	playmoncry SPECIES_MOLTRES, CRY_MODE_NORMAL
	waitmoncry
	applymovement OBJ_EVENT_ID_CAMERA, Route28_Move_RedLeavestoMtSilverUPReset
	waitmovement 0
	special RemoveCameraObject
	fadescreen FADE_FROM_BLACK
	setvar VAR_PACIFIDLOG_TOWN_STATE, 1
	end


Route28_Move_RedLeavestoMtSilverUP:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

Route28_Move_RedLeavestoMtSilverUPReset:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

Route28_Event_RedLeavestoMtSilverMID::
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Route28_Move_RedLeavestoMtSilverMID
	waitmovement 0
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_0, MSGBOX_AUTOCLOSE
	applymovement 2, Route28_Move_BirdkeepertoHiker
	waitmovement 0
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_1, MSGBOX_AUTOCLOSE
	applymovement 3, Route28_Move_RedLeavestoMtSilver
	waitmovement 0
	removeobject 3
	setflag FLAG_UNUSED_0x02A
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_2, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playse SE_M_EARTHQUAKE
	waitse
	playmoncry SPECIES_MOLTRES, CRY_MODE_NORMAL
	waitmoncry
	applymovement OBJ_EVENT_ID_CAMERA, Route28_Move_RedLeavestoMtSilverMIDReset
	waitmovement 0
	special RemoveCameraObject
	fadescreen FADE_FROM_BLACK
	setvar VAR_PACIFIDLOG_TOWN_STATE, 1
	end


Route28_Move_RedLeavestoMtSilverMID:
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

Route28_Move_RedLeavestoMtSilverMIDReset:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

Route28_Event_RedLeavestoMtSilverLOW::
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Route28_Move_RedLeavestoMtSilverLOW
	waitmovement 0
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_0, MSGBOX_AUTOCLOSE
	applymovement 2, Route28_Move_BirdkeepertoHiker
	waitmovement 0
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_1, MSGBOX_AUTOCLOSE
	applymovement 3, Route28_Move_RedLeavestoMtSilver
	waitmovement 0
	removeobject 3
	setflag FLAG_UNUSED_0x02A
	msgbox Route28_Event_RedLeavestoMtSilverUP_Text_2, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	playse SE_M_EARTHQUAKE
	waitse
	setmetatile 10, 8, 0x078, TRUE
	setmetatile 11, 8, 0x07A, TRUE
	setmetatile 10, 7, 0x068, TRUE
	setmetatile 11, 7, 0x06A, TRUE
	playmoncry SPECIES_MOLTRES, CRY_MODE_NORMAL
	waitmoncry
	applymovement OBJ_EVENT_ID_CAMERA, Route28_Move_RedLeavestoMtSilverLOWReset
	waitmovement 0
	special RemoveCameraObject
	fadescreen FADE_FROM_BLACK
	setvar VAR_PACIFIDLOG_TOWN_STATE, 1
	end


Route28_Move_RedLeavestoMtSilverLOW:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

Route28_Move_RedLeavestoMtSilverLOWReset:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

Route28_Move_BirdkeepertoHiker:
	face_right
	step_end

Route28_Move_RedLeavestoMtSilver:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route28_Event_RedRemove::
	removeobject 3
	end


Route28_Text_Hiker::
	msgbox Route28_Text_Hiker_Text_0, MSGBOX_NPC
	end


Route28_Text_Birdkeeper::
	msgbox Route28_Text_Birdkeeper_Text_0, MSGBOX_NPC
	end


Route28_Event_RedLeavestoMtSilverUP_Text_0:
	.string "Wait kid!\nThere were a landslide a few times!\lIt's not safe at all!$"

Route28_Event_RedLeavestoMtSilverUP_Text_1:
	.string "There are also so much strong POKéMON!\nA big flaming BIRD has a nest around\lhere!\lIt's not safe! Come back!$"

Route28_Event_RedLeavestoMtSilverUP_Text_2:
	.string "Watchout!$"

Route28_Text_Hiker_Text_0:
	.string "Oh ARCEUS!\nI hope this kid isn't dead!\lHe looked like the CHAMPION right?\l......................................\lOh you just beat him?\lWell, that would explain why he left.\lBut still, we are not sure if he's\ltotally safe. Yet I feel a bit relieved\lby knowing who he is!$"

Route28_Text_Birdkeeper_Text_0:
	.string "Have you heard that cry?\nIt was the legendary BIRD who lived\lthere.\lI think the landslide made him move to\lthe south. But I don't know where.\lI only know that it loves warm secluded\lplaces like a VOLCANO.\lOr an ISLAND with a VOLCANO maybe?$"
