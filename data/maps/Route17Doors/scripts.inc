Route17Doors_MapScripts::
	.byte 0


Route17Doors_Text_Guard::
	lock
	msgbox Route17Doors_Text_Guard_Text_0, MSGBOX_NPC
	end


Route17Doors_Text_GuardBike::
	lock
	msgbox Route17Doors_Text_GuardBike_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route17Doors_Move_NoBike
	waitmovement 0
	releaseall
	end


Route17Doors_Move_NoBike:
	walk_right
	step_end

Route17Doors_Text_CheckBike::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Route17Doors_Text_GuardBike
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end


Route17Doors_Text_ClearBike::
	lockall
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	releaseall
	end


Route17Doors_Text_Guard_Text_0:
	.string "CYCLING ROAD is a downhill course\nby the sea. It's a great ride.$"

Route17Doors_Text_GuardBike_Text_0:
	.string "Hey ! you can't go there without a BIKE\n"
	.string "(or a MOTOCYCLE...) ! That's the rule !$"
