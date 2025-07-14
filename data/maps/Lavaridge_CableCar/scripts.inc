Lavaridge_CableCar_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Lavaridge_CableCar_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Lavaridge_CableCar_OnFrame
    .byte 0

Lavaridge_CableCar_OnTransition:
    setescapewarp MAP_ROUTE112, 28, 28
    call_if_eq VAR_UNUSED_0x40A8, 1, Lavaridge_CableCar_EventScript_MoveAttendantAside
    end

Lavaridge_CableCar_EventScript_MoveAttendantAside::
    setobjectxyperm 2, 7, 4
    setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
    return

Lavaridge_CableCar_OnFrame:
    map_script_2 VAR_UNUSED_0x40A8, 1, Lavaridge_CableCar_EventScript_ExitCableCar
    .2byte 0

Lavaridge_CableCar_EventScript_ExitCableCar::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Lavaridge_CableCar_Movement_ExitCableCar
	applymovement 2, Lavaridge_CableCar_Movement_FollowPlayerOutFromCableCar
	waitmovement 0
	setvar VAR_UNUSED_0x40A8, 0
	setobjectxyperm 2, 6, 7
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	releaseall
	end


Lavaridge_CableCar_EventScript_Attendant::
	lock
	faceplayer
	msgbox Lavaridge_CableCar_EventScript_Attendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Lavaridge_CableCar_EventScript_Attendant_2
	goto Lavaridge_CableCar_EventScript_DeclineRide
Lavaridge_CableCar_EventScript_Attendant_1:
	end

Lavaridge_CableCar_EventScript_Attendant_2:
	goto Lavaridge_CableCar_EventScript_RideCableCar
	goto Lavaridge_CableCar_EventScript_Attendant_1


Lavaridge_CableCar_EventScript_DeclineRide::
	msgbox Lavaridge_CableCar_EventScript_DeclineRide_Text_0, MSGBOX_DEFAULT
	release
	end


Lavaridge_CableCar_EventScript_RideCableCar::
	msgbox Lavaridge_CableCar_EventScript_RideCableCar_Text_0, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Lavaridge_CableCar_Movement_LeadPlayerToCableCar
	applymovement OBJ_EVENT_ID_PLAYER, Lavaridge_CableCar_Movement_BoardCableCar
	waitmovement 0
	setvar VAR_0x8004, TRUE
	setvar VAR_UNUSED_0x40A8, 2
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
	special CableCarWarpBis
	special CableCar
	waitstate
	release
	end


Lavaridge_CableCar_Movement_LeadPlayerToCableCar:
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_left
	step_end

Lavaridge_CableCar_Movement_FollowPlayerOutFromCableCar:
	delay_16
	walk_left
	walk_down
	walk_down
	step_end

Lavaridge_CableCar_Movement_BoardCableCar:
	walk_up
	walk_up
	walk_up
	delay_16
	step_end

Lavaridge_CableCar_Movement_ExitCableCar:
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

Lavaridge_CableCar_EventScript_Woman::
	msgbox Lavaridge_CableCar_EventScript_Woman_Text_0, MSGBOX_NPC
	end


Lavaridge_CableCar_EventScript_Attendant_Text_0:
	.string "The CABLE CAR is ready to go down.\nWould you like to be on it?$"

Lavaridge_CableCar_EventScript_DeclineRide_Text_0:
	.string "Please ride with us another time.$"

Lavaridge_CableCar_EventScript_RideCableCar_Text_0:
	.string "Please step this way.$"

Lavaridge_CableCar_EventScript_Woman_Text_0:
	.string "They don't sell drinks in there.\nIt's a pity, it would be nice while\ltaking the CABLE CAR!$"
