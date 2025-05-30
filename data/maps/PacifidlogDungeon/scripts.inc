PacifidlogDungeon_MapScripts::
	.byte 0


ViridianSongs_EventMove_Upstairs::
	lock
	faceplayer
	msgbox ViridianSongs_EventMove_Upstairs_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ViridianSongs_Movement_Upstairs
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


ViridianSongs_Movement_Upstairs:
	walk_left
	step_end

ViridianSongs_EventMove_Upstairs_Text_0:
	.string "{PLAYER}: I shouldn't go upstairs...$"
