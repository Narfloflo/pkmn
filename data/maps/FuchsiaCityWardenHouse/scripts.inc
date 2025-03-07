FuchsiaCityWardenHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, FuchsiaCityWardenHouse_Entrance_OnFrame
	.byte 0

FuchsiaCityWardenHouse_Entrance_OnFrame::
	map_script_2 VAR_MAUVILLE_CITY_STATE, 1, FuchsiaCityWardenHouse_Entrance_EventScript_ExitWarpIn
	map_script_2 VAR_MAUVILLE_CITY_STATE, 2, FuchsiaCityWardenHouse_Entrance_EventScript_ExitEarly
	map_script_2 VAR_MAUVILLE_CITY_STATE, 3, FuchsiaCityWardenHouse_Entrance_EventScript_ExitWalkIn
	.2byte 0

@ When player runs out of balls mid-battle
FuchsiaCityWardenHouse_Entrance_EventScript_ExitWalkIn::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_ApproachCounter
	waitmovement 0
	msgbox FuchsiaCityWardenHouse_Entrance_Text_CatchFairShareComeAgain
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_Exit2
	waitmovement 0
	special ExitSafariMode
	setvar VAR_MAUVILLE_CITY_STATE, 0
	releaseall
	end

@ When player runs of out balls after catching a pokemon, or runs out of steps
FuchsiaCityWardenHouse_Entrance_EventScript_ExitWarpIn::
	lockall
	msgbox FuchsiaCityWardenHouse_Entrance_Text_CatchFairShareComeAgain
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_Exit
	waitmovement 0
	special ExitSafariMode
	setvar VAR_MAUVILLE_CITY_STATE, 0
	releaseall
	end

@ When player re-enters the entrance building with balls/steps remaining
FuchsiaCityWardenHouse_Entrance_EventScript_ExitEarly::
	lockall
	msgbox FuchsiaCityWardenHouse_Entrance_Text_GoingToLeaveSafariZoneEarly, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FuchsiaCityWardenHouse_Entrance_EventScript_ReturnToSafariZone
	msgbox FuchsiaCityWardenHouse_Entrance_Text_PleaseReturnSafariBalls
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_Exit
	waitmovement 0
	special ExitSafariMode
	setvar VAR_MAUVILLE_CITY_STATE, 0
	releaseall
	end

FuchsiaCityWardenHouse_Entrance_EventScript_ReturnToSafariZone::
	msgbox FuchsiaCityWardenHouse_Entrance_Text_GoodLuck
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_ReEnter
	waitmovement 0
	warp MAP_SAFARI_ZONE_KANTO, 71, 44
	waitstate
	end

FuchsiaCityWardenHouse_Entrance_Movement_Exit::
	walk_down
	walk_down
	step_end

FuchsiaCityWardenHouse_Entrance_Movement_ReEnter::
	walk_up
	step_end

FuchsiaCityWardenHouse_Entrance_Movement_Exit2::
	walk_down
	walk_down
	step_end

FuchsiaCityWardenHouse_Entrance_Movement_ApproachCounter::
	walk_down
	delay_8
	step_end

FuchsiaCityWardenHouse_Entrance_EventScript_EntryTriggerMid::
	lockall
	setvar VAR_TEMP_2, 0
	goto FuchsiaCityWardenHouse_Entrance_EventScript_AskEnterSafariZone
	end

FuchsiaCityWardenHouse_Entrance_EventScript_EntryTriggerRight::
	lockall
	setvar VAR_TEMP_2, 1
	goto FuchsiaCityWardenHouse_Entrance_EventScript_AskEnterSafariZone
	end

FuchsiaCityWardenHouse_Entrance_EventScript_EntryTriggerLeft::
	lockall
	setvar VAR_TEMP_2, 2
	goto FuchsiaCityWardenHouse_Entrance_EventScript_AskEnterSafariZone
	end

FuchsiaCityWardenHouse_Entrance_EventScript_AskEnterSafariZone::
	msgbox FuchsiaCityWardenHouse_Entrance_Text_WelcomeToSafariZone
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmoneybox 0, 0
	msgbox FuchsiaCityWardenHouse_Entrance_Text_PlaySafariGameFor500, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCityWardenHouse_Entrance_EventScript_TryEnterSafariZone
	msgbox FuchsiaCityWardenHouse_Entrance_Text_OkayPleaseComeAgain
	goto FuchsiaCityWardenHouse_Entrance_EventScript_ForcePlayerBack
	end

FuchsiaCityWardenHouse_Entrance_EventScript_TryEnterSafariZone::
	checkmoney 500
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCityWardenHouse_Entrance_EventScript_NotEnoughMoney
	removemoney 500
	updatemoneybox
	msgbox FuchsiaCityWardenHouse_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls
	playfanfare MUS_LEVEL_UP
	message FuchsiaCityWardenHouse_Entrance_Text_PlayerReceived30SafariBalls
	waitfanfare
	msgbox FuchsiaCityWardenHouse_Entrance_Text_CallYouOnPAWhenYouRunOut
	closemessage
	hidemoneybox
	call_if_eq VAR_TEMP_2, 0, FuchsiaCityWardenHouse_Entrance_EventScript_EnterSafariZoneMid
	call_if_eq VAR_TEMP_2, 1, FuchsiaCityWardenHouse_Entrance_EventScript_EnterSafariZoneRight
	call_if_eq VAR_TEMP_2, 2, FuchsiaCityWardenHouse_Entrance_EventScript_EnterSafariZoneLeft
	special EnterSafariMode
	setvar VAR_MAUVILLE_CITY_STATE, 2
	warp MAP_SAFARI_ZONE_KANTO, 71, 44
	waitstate
	end

FuchsiaCityWardenHouse_Entrance_EventScript_EnterSafariZoneRight::
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_EnterSafariZoneRight
	waitmovement 0
	return

FuchsiaCityWardenHouse_Entrance_EventScript_EnterSafariZoneMid::
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_EnterSafariZoneMid
	waitmovement 0
	return

FuchsiaCityWardenHouse_Entrance_EventScript_EnterSafariZoneLeft::
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_EnterSafariZoneLeft
	waitmovement 0
	return

FuchsiaCityWardenHouse_Entrance_EventScript_CheckSpaceForMons::
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_Return
	goto_if_eq VAR_RESULT, TRUE, EventScript_Return
	msgbox SafariZone_Text_ExcuseMeYourPCBoxIsFull
	goto FuchsiaCityWardenHouse_Entrance_EventScript_ForcePlayerBack
	end

FuchsiaCityWardenHouse_Entrance_EventScript_NotEnoughMoney::
	msgbox FuchsiaCityWardenHouse_Entrance_Text_OopsNotEnoughMoney
	goto FuchsiaCityWardenHouse_Entrance_EventScript_ForcePlayerBack
	end

FuchsiaCityWardenHouse_Entrance_EventScript_ForcePlayerBack::
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCityWardenHouse_Entrance_Movement_ForceBack
	waitmovement 0
	releaseall
	end

FuchsiaCityWardenHouse_Entrance_Movement_ForceBack::
	walk_down
	step_end

FuchsiaCityWardenHouse_Entrance_Movement_EnterSafariZoneMid::
	walk_up
	walk_up
	step_end

FuchsiaCityWardenHouse_Entrance_Movement_EnterSafariZoneRight::
	walk_up
	walk_left
	walk_up
	step_end

FuchsiaCityWardenHouse_Entrance_Movement_EnterSafariZoneLeft::
	walk_up
	walk_right
	walk_up
	step_end

FuchsiaCityWardenHouse_Entrance_EventScript_InfoAttendant::
	lock
	faceplayer
	msgbox FuchsiaCityWardenHouse_Entrance_Text_FirstTimeAtSafariZone, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCityWardenHouse_Entrance_EventScript_ExplainSafariZone
	msgbox FuchsiaCityWardenHouse_Entrance_Text_SorryYoureARegularHere
	release
	end

FuchsiaCityWardenHouse_Entrance_EventScript_ExplainSafariZone::
	msgbox FuchsiaCityWardenHouse_Entrance_Text_ExplainSafariZone
	release
	end


FuchsiaCityWardenHouse_Entrance_Text_WelcomeToSafariZone::
    .string "Welcome to the SAFARI ZONE!$"

FuchsiaCityWardenHouse_Entrance_Text_PlaySafariGameFor500::
    .string "For just ¥500, you can play the\n"
    .string "SAFARI GAME.\p"
    .string "You can roam the wide-open safari\n"
    .string "and catch what you like.\p"
    .string "Would you like to play?$"

FuchsiaCityWardenHouse_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls::
    .string "That'll be ¥500, please!\p"
    .string "We only use a special kind of \n"
    .string "POKé BALLS here.$"

FuchsiaCityWardenHouse_Entrance_Text_PlayerReceived30SafariBalls::
    .string "{PLAYER} received 30 SAFARI BALLS\n"
    .string "from the attendant.$"

FuchsiaCityWardenHouse_Entrance_Text_CallYouOnPAWhenYouRunOut::
    .string "We'll call you on the PA when you\n"
    .string "run out of time or SAFARI BALLS.\p"
    .string "Well, I'll wish you the best of\n"
    .string "luck!$"

FuchsiaCityWardenHouse_Entrance_Text_OkayPleaseComeAgain::
    .string "Okay.\n"
    .string "Please come again!$"

FuchsiaCityWardenHouse_Entrance_Text_OopsNotEnoughMoney::
    .string "Oops!\n"
    .string "Not enough money!$"

FuchsiaCityWardenHouse_Entrance_Text_GoingToLeaveSafariZoneEarly::
    .string "Are you going to leave the\n"
    .string "SAFARI ZONE early?$"

FuchsiaCityWardenHouse_Entrance_Text_PleaseReturnSafariBalls::
    .string "Please return any SAFARI BALLS\n"
    .string "you may have left.$"

FuchsiaCityWardenHouse_Entrance_Text_GoodLuck::
    .string "Good luck!$"

FuchsiaCityWardenHouse_Entrance_Text_CatchFairShareComeAgain::
    .string "Did you catch your fair share?\n"
    .string "Come again!$"

FuchsiaCityWardenHouse_Entrance_Text_FirstTimeAtSafariZone::
    .string "Hi! Is it your first time here at\n"
    .string "the SAFARI ZONE?$"

FuchsiaCityWardenHouse_Entrance_Text_ExplainSafariZone::
    .string "The SAFARI ZONE actually has\n"
    .string "four zones in it.\p"
    .string "Each zone has different kinds of\n"
    .string "POKéMON, even some rare ones.\p"
    .string "Use the supplied SAFARI BALLS to\n"
    .string "catch them.\p"
    .string "You can also throw BAIT or ROCKS\n"
    .string "besides the SAFARI BALLS.\p"
    .string "If you throw BAIT, the POKéMON\n"
    .string "becomes less likely to flee, but\l"
    .string "harder to catch.\p"
    .string "If you throw ROCKS, the POKéMON\n"
    .string "becomes more likely to flee, but\l"
    .string "easier to catch.\p"
    .string "When you run out of time or SAFARI\n"
    .string "BALLS, it's game over for you!$"

FuchsiaCityWardenHouse_Entrance_Text_SorryYoureARegularHere::
    .string "Sorry, you're a regular here!$"

EventScript_Return::
	return

SafariZone_Text_ExcuseMeYourPCBoxIsFull::
	.string "Excuse me!\n"
	.string "Your PC BOX is full.$"
