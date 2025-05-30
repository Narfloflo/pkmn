Route30_31_MapScripts::
	.byte 0


Route3031_Text_Hiker::
	msgbox Route3031_Text_Hiker_Text_0, MSGBOX_NPC
	end


Route3031_Text_RouteSign::
	msgbox Route3031_Text_RouteSign_Text_0, MSGBOX_SIGN
	end


Route3031_Text_Youngster::
	trainerbattle_single TRAINER_KATELYN_2, Route3031_Text_Youngster_Text_0, Route3031_Text_Youngster_Text_1
	msgbox Route3031_Text_Youngster_Text_2, MSGBOX_NPC
	end


Route3031_Text_Camper::
	trainerbattle_single TRAINER_KATELYN_3, Route3031_Text_Camper_Text_0, Route3031_Text_Camper_Text_1
	msgbox Route3031_Text_Camper_Text_2, MSGBOX_NPC
	end


Route3031_Text_BugCatcher::
	trainerbattle_single TRAINER_KATELYN_4, Route3031_Text_BugCatcher_Text_0, Route3031_Text_BugCatcher_Text_1
	msgbox Route3031_Text_BugCatcher_Text_2, MSGBOX_NPC
	end


Route3031_Text_Youngster2::
	trainerbattle_single TRAINER_BENJAMIN_2, Route3031_Text_Youngster2_Text_0, Route3031_Text_Youngster2_Text_1
	msgbox Route3031_Text_Youngster2_Text_2, MSGBOX_NPC
	end


Route3031_Text_Hiker_Text_0:
	.string "I swear I should have taken a lantern\nwith me to explore the DARK CAVE...\lWhat?! POKéMON can learn such a MOVE?!\lImpressive!$"

Route3031_Text_RouteSign_Text_0:
	.string "ROUTE 30\nVIOLET CITY - CHERRYGROVE CITY$"

Route3031_Text_Youngster_Text_0:
	.string "Hey are you going to VIOLET SCHOOL?$"

Route3031_Text_Youngster_Text_1:
	.string "Oh wow!$"

Route3031_Text_Youngster_Text_2:
	.string "Oh my! You really are tough!\nYou learn all of that in school?$"

Route3031_Text_Camper_Text_0:
	.string "I'm trying to camp here. But you\ndisturb me!$"

Route3031_Text_Camper_Text_1:
	.string "No no! My campfire!$"

Route3031_Text_Camper_Text_2:
	.string "There are a few places where we can\ncamp in JOHTO.\lBut the middle of the road seems like a\lbad idea.$"

Route3031_Text_BugCatcher_Text_0:
	.string "There are only weaks BUG POKéMON\nhere...$"

Route3031_Text_BugCatcher_Text_1:
	.string "You destroyed my team!$"

Route3031_Text_BugCatcher_Text_2:
	.string "Heard about the NATIONAL PARC? I think\nyou can catch a few strong BUG POKéMON!$"

Route3031_Text_Youngster2_Text_0:
	.string "Wanna go see MR. POKéMON?$"

Route3031_Text_Youngster2_Text_1:
	.string "Oh wow!\nLooks like I'm out of POKéMON!$"

Route3031_Text_Youngster2_Text_2:
	.string "MR. POKéMON is an old man living alone.\nI think he has that hobby of catching\lPOKéMON. Can't judge him, I'm the same.$"
