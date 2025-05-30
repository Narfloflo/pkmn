Route7_MapScripts::
	.byte 0


Route7_Text_Picnicker::
	trainerbattle_single TRAINER_WINSTON_3, Route7_Text_Picnicker_Text_0, Route7_Text_Picnicker_Text_1
	msgbox Route7_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_Text_BugCatcher::
	trainerbattle_single TRAINER_WINSTON_4, Route7_Text_BugCatcher_Text_0, Route7_Text_BugCatcher_Text_1
	msgbox Route7_Text_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_Text_UndergroundSign::
	msgbox Route7_Text_UndergroundSign_Text_0, MSGBOX_SIGN
	end


Route7_Text_Picnicker_Text_0:
	.string "The UNDERGROUND are closed ? Why ?$"

Route7_Text_Picnicker_Text_1:
	.string "Oh blasted !$"

Route7_Text_Picnicker_Text_2:
	.string "The UNDERGROUND have been closed\n"
	.string "because some ROCKET and shady\l"
	.string "criminals found refugees inside.$"

Route7_Text_BugCatcher_Text_0:
	.string "I like bugs POKéMON, what you\ngonna do about it ?$"

Route7_Text_BugCatcher_Text_1:
	.string "Oh but, they were so cool !$"

Route7_Text_BugCatcher_Text_2:
	.string "I want to be the toughest BUG CATCHER\n"
	.string "in KANTO. I heard some BUGSY guy from\l"
	.string "JOHTO is quite a genius about this\l"
	.string "type...$"

Route7_Text_UndergroundSign_Text_0:
	.string "UNDERGROUND PATH\nCELADON CITY - LAVENDER TOWN$"
