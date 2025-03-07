IceCave3F_MapScripts::
	.byte 0


PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	applymovement OBJ_EVENT_ID_PLAYER, PewterMuseum_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	applymovement OBJ_EVENT_ID_PLAYER, PewterMuseum_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
	lockall
	setvar VAR_TEMP_1, 2
	applymovement OBJ_EVENT_ID_PLAYER, PewterMuseum_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterMuseum_Movement_WalkInPlaceFasterRight:
	walk_in_place_faster_right
	step_end

PewterCity_Museum_1F_EventScript_EntranceTrigger::
	showmoneybox 0, 0
	msgbox PewterCity_Museum_1F_EventScript_EntranceTrigger_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
	msgbox PewterCity_Museum_1F_EventScript_EntranceTrigger_Text_1
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
	waitmovement 0
	releaseall
	end


PewterCity_Museum_1F_EventScript_TryPayForTicket::
	checkmoney 50
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
	closemessage
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
	playse SE_SHOP
	removemoney 50
	updatemoneybox
	waitse
	msgbox PewterCity_Museum_1F_EventScript_TryPayForTicket_Text_0
	setvar VAR_VERDANTURF_TOWN_STATE, 1
	hidemoneybox
	releaseall
	end


PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_NotEnoughMoney::
	msgbox PewterCity_Museum_1F_EventScript_NotEnoughMoney_Text_0
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
	waitmovement 0
	releaseall
	end


PewterCity_Museum_1F_Movement_ForcePlayerExit:
	walk_down
	step_end

PewterCity_Museum_1F_Movement_ApproachCounterLeft:
	walk_right
	walk_right
	delay_8
	walk_in_place_right
	step_end

PewterCity_Museum_1F_Movement_ApproachCounterMid:
	walk_right
	delay_8
	walk_in_place_right
	step_end

PewterCity_Museum_1F_Movement_ApproachCounterRight:
	delay_8
	walk_in_place_right
	step_end

PewterCity_Museum_1F_EventScript_Scientist1::
	lock
	faceplayer
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	msgbox PewterCity_Museum_1F_EventScript_Scientist1_Text_0
	release
	end


PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
	msgbox PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
	end


PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
	msgbox PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter_Text_0
	applymovement 1, PewterMuseum_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


PewterCity_Museum_1F_EventScript_ExplainAmber::
	msgbox PewterCity_Museum_1F_EventScript_ExplainAmber_Text_0
	applymovement 1, PewterMuseum_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


PewterMuseum_Movement_FaceOriginalDirection:
	face_original_direction
	step_end

PewterCity_Museum_1F_EventScript_OldMan::
	msgbox PewterCity_Museum_1F_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_Man::
	msgbox PewterCity_Museum_2F_EventScript_Man_Text_0, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_OldMan::
	msgbox PewterCity_Museum_2F_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_MoonStone::
	msgbox PewterCity_Museum_2F_EventScript_MoonStone_Text_0, MSGBOX_SIGN
	end


PewterCity_Museum_2F_EventScript_Scientist::
	msgbox PewterCity_Museum_2F_EventScript_Scientist_Text_0, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_SpaceShuttle::
	msgbox PewterCity_Museum_2F_EventScript_SpaceShuttle_Text_0, MSGBOX_SIGN
	end


PewterCity_Museum_2F_EventScript_BaldingMan::
	msgbox PewterCity_Museum_2F_EventScript_BaldingMan_Text_0, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_LittleGirl::
	msgbox PewterCity_Museum_2F_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_EntranceTrigger_Text_0:
	.string "Yes, yes.\nIt's ¥50 for a child's ticket.\pWould you like to come in?$"

PewterCity_Museum_1F_EventScript_EntranceTrigger_Text_1:
	.string "Come again!$"

PewterCity_Museum_1F_EventScript_TryPayForTicket_Text_0:
	.string "Right, ¥50!\nThank you!$"

PewterCity_Museum_1F_EventScript_NotEnoughMoney_Text_0:
	.string "No money, no friend!$"

PewterCity_Museum_1F_EventScript_Scientist1_Text_0:
	.string "Please enjoy yourself.$"

PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_Text_0:
	.string "You can't sneak in the back way!\nNice try, kid, but no.\pOh, whatever!\nDo you know what AMBER is?$"

PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter_Text_0:
	.string "AMBER contains the genetic matter\nof ancient POKéMON.\pThere's a LAB somewhere trying to\nresurrect POKéMON from AMBER.$"

PewterCity_Museum_1F_EventScript_ExplainAmber_Text_0:
	.string "AMBER is actually sap, that gooey\nstuff that oozes from trees.\pThe ancient sap fossilized over\ntime to become rock-hard AMBER.$"

PewterCity_Museum_1F_EventScript_OldMan_Text_0:
	.string "I should be grateful for my long\nlife.\pNever did I think I would get to\nsee the bones of a dragon!$"

PewterCity_Museum_2F_EventScript_Man_Text_0:
	.string "MOON STONE, huh?\pWhat's so special about it?\nLooks like an ordinary rock to me.$"

PewterCity_Museum_2F_EventScript_OldMan_Text_0:
	.string "July 20, 1969!\pHumankind first set foot on the\nmoon that day.\pI bought a color TV just so I\ncould watch that news.$"

PewterCity_Museum_2F_EventScript_MoonStone_Text_0:
	.string "A meteorite that fell on MT. MOON.\nIt is thought to be a MOON STONE.$"

PewterCity_Museum_2F_EventScript_Scientist_Text_0:
	.string "This month, we're running a space\nexhibit.$"

PewterCity_Museum_2F_EventScript_SpaceShuttle_Text_0:
	.string "Space Shuttle$"

PewterCity_Museum_2F_EventScript_BaldingMan_Text_0:
	.string "I promise my daughter I'll get her a\nPIKACHU.\lEver since that moment she want to come\lin the MUSEUM and run around...$"

PewterCity_Museum_2F_EventScript_LittleGirl_Text_0:
	.string "I want a PIKACHU!\nIt's so cute!\pI asked my daddy to catch me one!$"
