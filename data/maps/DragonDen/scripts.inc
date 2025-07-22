DragonDen_MapScripts::
	.byte 0


DragonDen_Text_Oldman::
	msgbox DragonDen_Text_Oldman_Text_0, MSGBOX_NPC
	end


DragonDen_Text_Whirlpool::
	lock
	checkitem ITEM_MACH_BIKE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq DragonDen_Text_Whirlpool_2
	msgbox DragonDen_Text_Whirlpool_Text_0, MSGBOX_AUTOCLOSE
DragonDen_Text_Whirlpool_1:
	release
	end

DragonDen_Text_Whirlpool_2:
	goto DragonDen_Text_RemoveWhirlpool
	goto DragonDen_Text_Whirlpool_1


DragonDen_Text_RemoveWhirlpool::
	msgbox DragonDen_Text_RemoveWhirlpool_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DragonDen_Text_RemoveWhirlpool_2
DragonDen_Text_RemoveWhirlpool_1:
	release
	end

DragonDen_Text_RemoveWhirlpool_2:
	playse SE_M_WHIRLPOOL
	waitse
	removeobject VAR_LAST_TALKED
	goto DragonDen_Text_RemoveWhirlpool_1


DragonDen_Text_CooltrainerM::
	trainerbattle_single TRAINER_WINONA_4, DragonDen_Text_CooltrainerM_Text_0, DragonDen_Text_CooltrainerM_Text_1
	msgbox DragonDen_Text_CooltrainerM_Text_2, MSGBOX_NPC
	end


DragonDen_Text_CooltrainerF::
	trainerbattle_single TRAINER_TATE_AND_LIZA_2, DragonDen_Text_CooltrainerM_Text_0, DragonDen_Text_CooltrainerM_Text_1
	msgbox DragonDen_Text_CooltrainerM_Text_2, MSGBOX_NPC
	end


DragonDen_Text_Oldman_Text_0:
	.string "Huh huh huh, what, you thought I'm\ngonna let you out easily?\lYou are a CHAMPION, if you wanna get\lout, do it on your own!$"

DragonDen_Text_Whirlpool_Text_0:
	.string "It's a vicious WHIRLPOOL, maybe we can\n"
	.string "remove it...$"

DragonDen_Text_RemoveWhirlpool_Text_0:
	.string "It's a vicious WHIRLPOOL.\n"
	.string "Wanna remove it ?$"

DragonDen_Text_CooltrainerM_Text_0:
	.string "Are you lost?$"

DragonDen_Text_CooltrainerM_Text_1:
	.string "Oh not again!$"

DragonDen_Text_CooltrainerM_Text_2:
	.string "I came to explore MT. MORTAR, but I got\nblasted by a KARATE master, then by\lyou.\lGrumbl...$"
