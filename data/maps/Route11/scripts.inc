Route11_MapScripts::
	.byte 0


Route11_Text_Youngster::
	trainerbattle_single TRAINER_CALVIN_2, Route11_Text_Youngster_Text_0, Route11_Text_Youngster_Text_1
	msgbox Route11_Text_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_Text_Camper::
	trainerbattle_single TRAINER_CALVIN_3, Route11_Text_Camper_Text_0, Route11_Text_Camper_Text_1
	msgbox Route11_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_Text_Picnicker::
	trainerbattle_single TRAINER_CALVIN_4, Route11_Text_Picnicker_Text_0, Route11_Text_Picnicker_Text_1
	msgbox Route11_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_Text_Gambler::
	trainerbattle_single TRAINER_ELLIOT_2, Route11_Text_Gambler_Text_0, Route11_Text_Gambler_Text_1
	msgbox Route11_Text_Gambler_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_Text_Policeman::
	lock
	faceplayer
	msgbox Route11_Text_Policeman_Text_0
	release
	end


Route11_Text_Policeman2::
	lock
	msgbox Route11_Text_Policeman2_Text_0
	release
	end


Route11_Text_Gambler2::
	lock
	msgbox Route11_Text_Gambler2_Text_0
	release
	end


Route11_Text_Worker::
	lock
	faceplayer
	msgbox Route11_Text_Worker_Text_0
	release
	end


Route11_Text_Worker2::
	lock
	faceplayer
	msgbox Route11_Text_Worker2_Text_0
	release
	end


Route11_Text_DiglettsCave::
	lock
	msgbox Route11_Text_DiglettsCave_Text_0
	release
	end


Route11_Text_Hiker::
	lock
	faceplayer
	msgbox Route11_Text_Hiker_Text_0
	release
	end


Route11_Text_Youngster_Text_0:
	.string "Wanna see a wonderful team ?$"

Route11_Text_Youngster_Text_1:
	.string "Yours was much better...$"

Route11_Text_Youngster_Text_2:
	.string "There are some strange POKéMON around\n"
	.string "here. I mean, sometimes I feel drowsy\l"
	.string "and when I wake up, it's like my dreams\l"
	.string "were eaten !$"

Route11_Text_Camper_Text_0:
	.string "I've got the best camping spot !$"

Route11_Text_Camper_Text_1:
	.string "You spoiled it all !$"

Route11_Text_Camper_Text_2:
	.string "There was a big POKéMON block the path.\n"
	.string "It was sleeping so deeply. Yeah like me\l"
	.string "after a big lunch !$"

Route11_Text_Picnicker_Text_0:
	.string "I've got a big sandwich.\nDo you want it ?$"

Route11_Text_Picnicker_Text_1:
	.string "Here take it.$"

Route11_Text_Picnicker_Text_2:
	.string "Me and my POKéMON (you just totally\n"
	.string "crushed) are wandering to find the\l"
	.string "best spot to eat sandwiches. You\l"
	.string "should do it too !$"

Route11_Text_Gambler_Text_0:
	.string "SPADES or DIAMONDS ?$"

Route11_Text_Gambler_Text_1:
	.string "You just beat my ACES$"

Route11_Text_Gambler_Text_2:
	.string "Don't tell the cops I gave you money\n"
	.string "because you beat me. What it's not\l"
	.string "gambling it's the rule ? I call that\l"
	.string "racket then !$"

Route11_Text_Policeman_Text_0:
	.string "Gambling outside of the GAME CORNER is\n"
	.string "forbidden in KANTO. We arrest every\l"
	.string "shady persons that are gambling\l"
	.string "illegally. So be careful kid, we have an\l"
	.string "eye on you !$"

Route11_Text_Policeman2_Text_0:
	.string "What about this card game? You are\n"
	.string "making money out of it right?$"

Route11_Text_Gambler2_Text_0:
	.string "... But it's a genuine TRADING CARD GAME!\n"
	.string "It's just about POKéMON!...$"

Route11_Text_Worker_Text_0:
	.string "I'm looking for some MAGNEMITE or\n"
	.string "MAGNETON to help me in my everydays\l"
	.string "jobs!$"

Route11_Text_Worker2_Text_0:
	.string "No I'm not a TRAINER. I've been beating\n"
	.string "a few months ago by some young lads,\l"
	.string "and now I'm in a total depression...$"

Route11_Text_DiglettsCave_Text_0:
	.string "DIGLETT'S CAVE$"

Route11_Text_Hiker_Text_0:
	.string "It's incredible! The DIGLETTS dug this\n"
	.string "long tunnel! It goes right to VIRIDIAN\l"
	.string "CITY!$"
