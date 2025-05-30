Route41_MapScripts::
	.byte 0


Route41_Text_Whirlpool::
	lock
	checkitem ITEM_MACH_BIKE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Route41_Text_Whirlpool_2
	msgbox Route41_Text_Whirlpool_Text_0, MSGBOX_AUTOCLOSE
Route41_Text_Whirlpool_1:
	release
	end

Route41_Text_Whirlpool_2:
	goto Route41_Text_RemoveWhirlpool
	goto Route41_Text_Whirlpool_1


Route41_Text_RemoveWhirlpool::
	msgbox Route41_Text_RemoveWhirlpool_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route41_Text_RemoveWhirlpool_2
Route41_Text_RemoveWhirlpool_1:
	release
	end

Route41_Text_RemoveWhirlpool_2:
	playse SE_M_WHIRLPOOL
	waitse
	removeobject VAR_LAST_TALKED
	goto Route41_Text_RemoveWhirlpool_1


Route41_Text_LostBoy::
	lock
	faceplayer
	msgbox Route41_Text_LostBoy_Text_0
	release
	end


Route41_Text_SwimmerF::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route41_Text_SwimmerF_Text_0, Route41_Text_SwimmerF_Text_1
	msgbox Route41_Text_SwimmerF_Text_2, MSGBOX_NPC
	end


Route41_Text_SwimmerM::
	trainerbattle_single TRAINER_ERNEST_2, Route41_Text_SwimmerF_Text_0, Route41_Text_SwimmerF_Text_1
	msgbox Route41_Text_SwimmerF_Text_2, MSGBOX_NPC
	end


Route41_Text_Whirlpool_Text_0:
	.string "It's a vicious WHIRLPOOL, maybe we can\n"
	.string "remove it...$"

Route41_Text_RemoveWhirlpool_Text_0:
	.string "It's a vicious WHIRLPOOL.\n"
	.string "Wanna remove it ?$"

Route41_Text_LostBoy_Text_0:
	.string "ARCEUS be praised ! I've been abandoned\n"
	.string "here by my father a few days ago. I\l"
	.string "thought nobody would come to save. But\l"
	.string "you came finally ! I can go home !.. What\l"
	.string "you are not here for me but for the\l"
	.string "LEGENDARY POKéMON in the cave ??? Well\l"
	.string "leave me alone you bastard !$"

Route41_Text_SwimmerF_Text_0:
	.string "Hey$"

Route41_Text_SwimmerF_Text_1:
	.string "Damn$"

Route41_Text_SwimmerF_Text_2:
	.string "I lost!$"
