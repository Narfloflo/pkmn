Route12_MapScripts::
	.byte 0


Route12_Text_Fisherman1::
	goto_if_set FLAG_TEMP_1, Route12_Text_Fisherman1_2
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1_Text_1, Route12_Text_Fisherman1_Text_2
	msgbox Route12_Text_Fisherman1_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route12_Text_Fisherman1_2:
	msgbox Route12_Text_Fisherman1_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman2::
	goto_if_set FLAG_TEMP_2, Route12_Text_Fisherman2_2
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman2_Text_1, Route12_Text_Fisherman2_Text_2
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_2
	cleartrainerflag TRAINER_DYLAN_2
	end

Route12_Text_Fisherman2_2:
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman3::
	goto_if_set FLAG_TEMP_3, Route12_Text_Fisherman3_2
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman3_Text_1, Route12_Text_Fisherman3_Text_2
	msgbox Route12_Text_Fisherman3_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_3
	cleartrainerflag TRAINER_DYLAN_2
	end

Route12_Text_Fisherman3_2:
	msgbox Route12_Text_Fisherman3_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman4::
	goto_if_set FLAG_TEMP_4, Route12_Text_Fisherman4_2
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman4_Text_1, Route12_Text_Fisherman4_Text_2
	msgbox Route12_Text_Fisherman4_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_4
	cleartrainerflag TRAINER_DYLAN_2
	end

Route12_Text_Fisherman4_2:
	msgbox Route12_Text_Fisherman4_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman5::
	goto_if_set FLAG_TEMP_5, Route12_Text_Fisherman5_2
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman5_Text_1, Route12_Text_Fisherman5_Text_2
	msgbox Route12_Text_Fisherman5_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_5
	cleartrainerflag TRAINER_DYLAN_2
	end

Route12_Text_Fisherman5_2:
	msgbox Route12_Text_Fisherman5_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman6::
	goto_if_set FLAG_TEMP_6, Route12_Text_Fisherman6_2
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman6_Text_1, Route12_Text_Fisherman6_Text_2
	msgbox Route12_Text_Fisherman6_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_6
	cleartrainerflag TRAINER_DYLAN_2
	end

Route12_Text_Fisherman6_2:
	msgbox Route12_Text_Fisherman6_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_FishingSign::
	msgbox Route12_Text_FishingSign_Text_0, MSGBOX_SIGN
	end


Route12_Text_RouteSign::
	msgbox Route12_Text_RouteSign_Text_0, MSGBOX_SIGN
	end


Route12_Text_Fisherman1_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route12_Text_Fisherman1_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route12_Text_Fisherman1_Text_2:
	.string "Tch!\nJust a small fry…$"

Route12_Text_Fisherman1_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"

Route12_Text_Fisherman2_Text_0:
	.string "I guess you get to be good at\nwhat you like.\pWell, you beat me at POKéMON,\nbut you can't top me at fishing.$"

Route12_Text_Fisherman2_Text_1:
	.string "The FISHING FOOL versus POKéMON\nKID!$"

Route12_Text_Fisherman2_Text_2:
	.string "Ouch too much!$"

Route12_Text_Fisherman3_Text_0:
	.string "With a better ROD, I could catch\nbetter POKéMON…$"

Route12_Text_Fisherman3_Text_1:
	.string "Be patient.\nFishing is a waiting game.$"

Route12_Text_Fisherman3_Text_2:
	.string "That one got away!$"

Route12_Text_Fisherman3_Text_3:
	.string "With a better ROD, I could catch\n"
	.string "better POKéMON…$"

Route12_Text_Fisherman4_Text_0:
	.string "It's all right.\nLosing doesn't bug me anymore.$"

Route12_Text_Fisherman4_Text_1:
	.string "I love fishing, don't get me wrong.\pBut it'd be best if I also had more\nwork.$"

Route12_Text_Fisherman4_Text_2:
	.string "It's not easy…$"

Route12_Text_Fisherman4_Text_3:
	.string "It's all right.\n"
	.string "Losing doesn't bug me anymore.$"

Route12_Text_Fisherman5_Text_0:
	.string "What, MAGIKARP?\pI catch them all the time, sure.\nBut, boy are they wimpy.$"

Route12_Text_Fisherman5_Text_1:
	.string "What's catching?\pYou never know what you could\ncatch!$"

Route12_Text_Fisherman5_Text_2:
	.string "Lost it!$"

Route12_Text_Fisherman5_Text_3:
	.string "What, MAGIKARP?\p"
	.string "I catch them all the time, sure.\n"
	.string "But, boy are they wimpy.$"

Route12_Text_Fisherman6_Text_0:
	.string "Well that's a bad day again...\nI won't be able to feed my MEOWTH...$"

Route12_Text_Fisherman6_Text_1:
	.string "A SNORLAX used to block the path.\nBut a kid like you woke him up.\lAnd you scared the fish!$"

Route12_Text_Fisherman6_Text_2:
	.string "Plouff!$"

Route12_Text_Fisherman6_Text_3:
	.string "Well that's a bad day again...\n"
	.string "I won't be able to feed my MEOWTH...$"

Route12_Text_FishingSign_Text_0:
	.string "SPORTFISHING AREA$"

Route12_Text_RouteSign_Text_0:
	.string "ROUTE 12 \nNorth to LAVENDER$"
