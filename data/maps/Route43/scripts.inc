Route43_MapScripts::
	.byte 0


Route43_Text_RouteSign::
	lock
	faceplayer
	msgbox Route43_Text_RouteSign_Text_0
	release
	end


Route43_Text_Camper::
	trainerbattle_single TRAINER_LYDIA_4, Route43_Text_Camper_Text_0, Route43_Text_Camper_Text_1
	msgbox Route43_Text_Camper_Text_2, MSGBOX_YESNO
	end


Route43_Text_Picnicker::
	trainerbattle_single TRAINER_ISAAC_2, Route43_Text_Picnicker_Text_0, Route43_Text_Picnicker_Text_1
	msgbox Route43_Text_Picnicker_Text_2, MSGBOX_YESNO
	end


Route43_Text_Cooltrainer::
	trainerbattle_single TRAINER_ISAAC_3, Route43_Text_Cooltrainer_Text_0, Route43_Text_Cooltrainer_Text_1
	msgbox Route43_Text_Cooltrainer_Text_2, MSGBOX_YESNO
	end


Route43_Text_Youngster::
	trainerbattle_single TRAINER_ISAAC_4, Route43_Text_Youngster_Text_0, Route43_Text_Youngster_Text_1
	msgbox Route43_Text_Youngster_Text_2, MSGBOX_YESNO
	end


Route43_Text_RouteSign_Text_0:
	.string "ROUTE 43\p"
	.string "LAKE OF RAGE - MAHOGANY TOWN$"

Route43_Text_Camper_Text_0:
	.string "Are you going to LAKE OF RAGE?$"

Route43_Text_Camper_Text_1:
	.string "Wow, what strength!$"

Route43_Text_Camper_Text_2:
	.string "I'm going to camp in LAKE of RAGE$"

Route43_Text_Picnicker_Text_0:
	.string "Hey do you have a baby POKéMON?$"

Route43_Text_Picnicker_Text_1:
	.string "You just blast me!$"

Route43_Text_Picnicker_Text_2:
	.string "A baby POKéMON can somtimes inherit a\nmove from its father, even one that it\lwouldn't normally learn.$"

Route43_Text_Cooltrainer_Text_0:
	.string "Do you use differents POKéMON TYPES?\nLet's see that!$"

Route43_Text_Cooltrainer_Text_1:
	.string "Well yep, indeed you are.$"

Route43_Text_Cooltrainer_Text_2:
	.string "It's OK for people to like different\ntypes of POKéMON.\lPOKéMON isn't just about having the\lmost powerful one.$"

Route43_Text_Youngster_Text_0:
	.string "Let's see if you have some rare\nPOKéMON!$"

Route43_Text_Youngster_Text_1:
	.string "Rare and strong they are!$"

Route43_Text_Youngster_Text_2:
	.string "What else do I like besides POKéMON?\nShorts I guess?$"
