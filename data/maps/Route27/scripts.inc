Route27_MapScripts::
	.byte 0


Route27_Text_FatGuy::
	lock
	faceplayer
	msgbox Route27_Text_FatGuy_Text_0
	release
	end


Route27_Text_CooltrainerM::
	trainerbattle_single TRAINER_STEVE_2, Route27_Text_CooltrainerM_Text_0, Route27_Text_CooltrainerM_Text_1
	msgbox Route27_Text_CooltrainerM_Text_2, MSGBOX_AUTOCLOSE
	end


Route27_Text_CooltrainerF::
	trainerbattle_single TRAINER_STEVE_3, Route27_Text_CooltrainerF_Text_0, Route27_Text_CooltrainerF_Text_1
	msgbox Route27_Text_CooltrainerF_Text_2, MSGBOX_AUTOCLOSE
	end


Route27_Text_Fisherman::
	goto_if_set FLAG_TEMP_1, Route27_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, Route27_Text_Fisherman_Text_1, Route27_Text_Fisherman_Text_2
	msgbox Route27_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route27_Text_Fisherman_2:
	msgbox Route27_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route27_Text_Whirlpool4::
	lock
	checkitem ITEM_MACH_BIKE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Route27_Text_Whirlpool4_2
	msgbox Route27_Text_Whirlpool4_Text_0, MSGBOX_AUTOCLOSE
Route27_Text_Whirlpool4_1:
	release
	end

Route27_Text_Whirlpool4_2:
	goto Route27_Text_RemoveWhirlpool4
	goto Route27_Text_Whirlpool4_1


Route27_Text_RemoveWhirlpool4::
	msgbox Route27_Text_RemoveWhirlpool4_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route27_Text_RemoveWhirlpool4_2
Route27_Text_RemoveWhirlpool4_1:
	release
	end

Route27_Text_RemoveWhirlpool4_2:
	playse SE_M_WHIRLPOOL
	waitse
	removeobject 5
	goto Route27_Text_RemoveWhirlpool4_1


Route27_Text_Hiker::
	msgbox Route27_Text_Hiker_Text_0, MSGBOX_NPC
	end


Route27_Text_FatGuy_Text_0:
	.string "Hey! You are in KANTO now. It's crazy\n"
	.string "right?$"

Route27_Text_CooltrainerM_Text_0:
	.string "I'm on my way to because a CHAMPION !$"

Route27_Text_CooltrainerM_Text_1:
	.string "Oh that quite don't help…$"

Route27_Text_CooltrainerM_Text_2:
	.string "I want to be the very best. But losing\n"
	.string "to a kid doesn't help… I feel like a\l"
	.string "NPC…$"

Route27_Text_CooltrainerF_Text_0:
	.string "Help me gaining some XP please.$"

Route27_Text_CooltrainerF_Text_1:
	.string "Looks like you gain XP…$"

Route27_Text_CooltrainerF_Text_2:
	.string "We are suppose to be the toughest\n"
	.string "TRAINERS in KANTO and JOHTO. Who are\l"
	.string "you ?$"

Route27_Text_Fisherman_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route27_Text_Fisherman_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route27_Text_Fisherman_Text_2:
	.string "Tch!\nJust a small fry…$"

Route27_Text_Fisherman_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"

Route27_Text_Whirlpool4_Text_0:
	.string "It's a vicious WHIRLPOOL, maybe we can\n"
	.string "remove it…$"

Route27_Text_RemoveWhirlpool4_Text_0:
	.string "It's a vicious WHIRLPOOL.\n"
	.string "Wanna remove it ?$"

Route27_Text_Hiker_Text_0:
	.string "I'm puzzled…\nIf I jump the ledge here, if I wanna go\lback in KANTO I'd need to go through\lthe TOHJO CAVE.\lBut I need WATERFALL, and my POKéMON\lare all of ROCK TYPE!\lAlso, If I want to go to JOHTO, I need\lSURF…\lArrrrrg! What to do!$"
