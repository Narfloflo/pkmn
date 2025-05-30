Route1_MapScripts::
	.byte 0


Route1_Text_MartVendor::
	lock
	faceplayer
	msgbox Route1_Text_MartVendor_Text_0
	release
	end


Route1_Text_Guy::
	lock
	faceplayer
	msgbox Route1_Text_Guy_Text_0
	release
	end


Route1_Text_RouteSign::
	lock
	faceplayer
	msgbox Route1_Text_RouteSign_Text_0
	release
	end


Route1_Text_BugCatcher::
	trainerbattle_single TRAINER_KOJI_3, Route1_Text_BugCatcher_Text_0, Route1_Text_BugCatcher_Text_1
	msgbox Route1_Text_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


Route1_Text_MartVendor_Text_0:
	.string "I had some free samples to give to\n"
	.string "rookies, but I'm out of POTIONS.$"

Route1_Text_Guy_Text_0:
	.string "Hey young lad ! Nowadays there are more\n"
	.string "and more TRAINERS around here. PALLET\l"
	.string "TOWN is becoming famous thanks to the\l"
	.string "three colors prodigies !$"

Route1_Text_RouteSign_Text_0:
	.string "ROUTE 1\n"
	.string "PALLET TOWN - VIRIDIAN CITY$"

Route1_Text_BugCatcher_Text_0:
	.string "Hey ! Can we fight please ?$"

Route1_Text_BugCatcher_Text_1:
	.string "Terrible !$"

Route1_Text_BugCatcher_Text_2:
	.string "I'm glad I could battle you ! Now I'm\n"
	.string "improving my skill !$"
