Route13_MapScripts::
	.byte 0


Route13_Text_Worker::
	lock
	faceplayer
	msgbox Route13_Text_Worker_Text_0
	release
	end


Route13_Text_Hiker::
	trainerbattle_single TRAINER_CINDY_5, Route13_Text_Hiker_Text_0, Route13_Text_Hiker_Text_1
	msgbox Route13_Text_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route13_Text_Picnicker::
	trainerbattle_single TRAINER_THALIA_3, Route13_Text_Picnicker_Text_0, Route13_Text_Picnicker_Text_1
	msgbox Route13_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route13_Text_Camper::
	trainerbattle_single TRAINER_THALIA_4, Route13_Text_Camper_Text_0, Route13_Text_Camper_Text_1
	msgbox Route13_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route13_Text_Birdkeeper::
	trainerbattle_single TRAINER_JESSICA_2, Route13_Text_Birdkeeper_Text_0, Route13_Text_Birdkeeper_Text_1
	msgbox Route13_Text_Birdkeeper_Text_2, MSGBOX_AUTOCLOSE
	end


Route13_Text_TipsSign1::
	msgbox Route13_Text_TipsSign1_Text_0, MSGBOX_SIGN
	end


Route13_Text_TipsSign2::
	msgbox Route13_Text_TipsSign2_Text_0, MSGBOX_SIGN
	end


Route13_Text_RouteSign::
	msgbox Route13_Text_RouteSign_Text_0, MSGBOX_SIGN
	end


Route13_Text_Worker_Text_0:
	.string "Oh hello there ! We are actually\n"
	.string "thinking about building a DOCKS here !\l"
	.string "Since SAFARI ZONE is sooooo famous\l"
	.string "and will always be, it's will be good for\l"
	.string "business. Right ?$"

Route13_Text_Hiker_Text_0:
	.string "I think the ROCK TUNNEL is futher\nnorth right ?$"

Route13_Text_Hiker_Text_1:
	.string "Ahhhh I should have taken a map !$"

Route13_Text_Hiker_Text_2:
	.string "I should quit the HIKERS club.\n"
	.string "Yeah it's a real thing, you thought we\l"
	.string "were a just bunch of random hiker who\l"
	.string "looked the same for no reason ?$"

Route13_Text_Picnicker_Text_0:
	.string "Whw ! Your BADGES are too cool !$"

Route13_Text_Picnicker_Text_1:
	.string "Not enough !$"

Route13_Text_Picnicker_Text_2:
	.string "You got those BADGES from GYM LEADERS\n"
	.string "from HOENN ? Interesting !$"

Route13_Text_Camper_Text_0:
	.string "I'll show you the TMs I bought in\nCELADON !$"

Route13_Text_Camper_Text_1:
	.string "It's garbage...$"

Route13_Text_Camper_Text_2:
	.string "You have some HMs, right ? POKéMON\n"
	.string "can't ever forget those moves. Except\l"
	.string "if you go and talk to an old geezer in\l"
	.string "LAVERDER TOWN...$"

Route13_Text_Birdkeeper_Text_0:
	.string "I always go with bird POKéMON !$"

Route13_Text_Birdkeeper_Text_1:
	.string "Out of power !$"

Route13_Text_Birdkeeper_Text_2:
	.string "I wish I could fly like PIDGEY and\n"
	.string "PIDGEOTTO...$"

Route13_Text_TipsSign1_Text_0:
	.string "TRAINER TIPS\pUse SELECT to switch items in the ITEMS\lwindow.\l{PLAYER}: What?! You kidding me?!$"

Route13_Text_TipsSign2_Text_0:
	.string "TRAINER TIPS\pYou've been trolled. Nothing relevant\nis written here.\lTeehee!\l{PLAYER}: Your mother the MIGHTYENA!$"

Route13_Text_RouteSign_Text_0:
	.string "ROUTE 13\nNorth to SILENCE BRIDGE$"
