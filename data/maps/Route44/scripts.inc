Route44_MapScripts::
	.byte 0


Route44_Text_RouteSign::
	lock
	faceplayer
	msgbox Route44_Text_RouteSign_Text_0
	release
	end


Route44_Text_IcePath::
	lock
	faceplayer
	msgbox Route44_Text_IcePath_Text_0
	release
	end


Route44_Text_Cooltrainer::
	trainerbattle_single TRAINER_EDWIN_4, Route44_Text_Cooltrainer_Text_0, Route44_Text_Cooltrainer_Text_1
	msgbox Route44_Text_Cooltrainer_Text_2, MSGBOX_YESNO
	end


Route44_Text_Youngster::
	trainerbattle_single TRAINER_LYDIA_2, Route44_Text_Youngster_Text_0, Route44_Text_Youngster_Text_1
	msgbox Route44_Text_Youngster_Text_2, MSGBOX_YESNO
	end


Route44_Text_Camper::
	trainerbattle_single TRAINER_LYDIA_3, Route44_Text_Camper_Text_0, Route44_Text_Camper_Text_1
	msgbox Route44_Text_Camper_Text_2, MSGBOX_YESNO
	end


Route44_Text_Fisherman::
	goto_if_set FLAG_TEMP_1, Route44_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, Route44_Text_Fisherman_Text_1, Route44_Text_Fisherman_Text_2
	msgbox Route44_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route44_Text_Fisherman_2:
	msgbox Route44_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route44_Text_RouteSign_Text_0:
	.string "ROUTE 44\p"
	.string "MAHOGANY TOWN - BLACKTHORN CITY$"

Route44_Text_IcePath_Text_0:
	.string "ROUTE 44\n"
	.string "ICE PATH AHEAD$"

Route44_Text_Cooltrainer_Text_0:
	.string "Let me see how strong you are!$"

Route44_Text_Cooltrainer_Text_1:
	.string "Oh wow!$"

Route44_Text_Cooltrainer_Text_2:
	.string "Wow. You have a lot of BADGES.\nNo wonder you're so tough.\lI wonder if ECRUTEAK GYM's MORTY is\lstill in training?\lWhat? He's spending his time in the\lDANCING HALL?\lI'll get my revenge!$"

Route44_Text_Youngster_Text_0:
	.string "I have the ambition of being the\nstrongest TRAINER!\lLet's fight!$"

Route44_Text_Youngster_Text_1:
	.string "I still have a long way attending me.$"

Route44_Text_Youngster_Text_2:
	.string "It's important to have conviction on\nyour side.$"

Route44_Text_Camper_Text_0:
	.string "Have you ever seen a SHINY POKéMON?$"

Route44_Text_Camper_Text_1:
	.string "I'm still weak...$"

Route44_Text_Camper_Text_2:
	.string "If a POKémON has different colors from\nusual, it's more valuable.\lWhat? You mean that's not true?$"

Route44_Text_Fisherman_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route44_Text_Fisherman_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route44_Text_Fisherman_Text_2:
	.string "Tch!\nJust a small fry…$"

Route44_Text_Fisherman_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"
