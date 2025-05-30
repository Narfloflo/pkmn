SouthernPath_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, SouthernPath_OnResume
	.byte 0


SouthernPath_OnResume::
	setdivewarp MAP_JOHTO_HOENN_PATH, 17, 4
	end


SouthernPath_Text_Whirlpool::
	lock
	checkitem ITEM_MACH_BIKE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SouthernPath_Text_Whirlpool_2
	msgbox SouthernPath_Text_Whirlpool_Text_0, MSGBOX_AUTOCLOSE
SouthernPath_Text_Whirlpool_1:
	release
	end

SouthernPath_Text_Whirlpool_2:
	goto SouthernPath_Text_RemoveWhirlpool
	goto SouthernPath_Text_Whirlpool_1


SouthernPath_Text_RemoveWhirlpool::
	msgbox SouthernPath_Text_RemoveWhirlpool_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SouthernPath_Text_RemoveWhirlpool_2
SouthernPath_Text_RemoveWhirlpool_1:
	release
	end

SouthernPath_Text_RemoveWhirlpool_2:
	playse SE_M_WHIRLPOOL
	waitse
	removeobject VAR_LAST_TALKED
	goto SouthernPath_Text_RemoveWhirlpool_1


SouthernPath_Text_Whirlpool_Text_0:
	.string "It's a vicious WHIRLPOOL, maybe we can\n"
	.string "remove it...$"

SouthernPath_Text_RemoveWhirlpool_Text_0:
	.string "It's a vicious WHIRLPOOL.\n"
	.string "Wanna remove it ?$"
