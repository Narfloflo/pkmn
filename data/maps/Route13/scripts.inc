Route13_MapScripts::
	.byte 0


Route13_Text_Thug::
	trainerbattle_single TRAINER_CINDY_2, Route13_Text_Thug_Text_0, Route13_Text_Thug_Text_1
	msgbox Route13_Text_Thug_Text_2, MSGBOX_AUTOCLOSE
	end


Route13_Text_Biker1::
	trainerbattle_single TRAINER_CINDY_3, Route13_Text_Biker1_Text_0, Route13_Text_Biker1_Text_1
	msgbox Route13_Text_Biker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route13_Text_Biker2::
	trainerbattle_single TRAINER_CINDY_4, Route13_Text_Biker2_Text_0, Route13_Text_Biker2_Text_1
	msgbox Route13_Text_Biker2_Text_2, MSGBOX_AUTOCLOSE
	end


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


Route13_Text_Beauty::
	trainerbattle_single TRAINER_THALIA_2, Route13_Text_Beauty_Text_0, Route13_Text_Beauty_Text_1
	msgbox Route13_Text_Beauty_Text_2, MSGBOX_AUTOCLOSE
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


Route13_Text_Thug_Text_0:
	.string "You cant understand me.$"

Route13_Text_Thug_Text_1:
	.string "No ! My babies !!$"

Route13_Text_Thug_Text_2:
	.string "You can't understand my love for pink\n"
	.string "POKéMON. But I still have to keep some\l"
	.string "dirty bastards to scare the kids !$"

Route13_Text_Biker1_Text_0:
	.string "Give me your money.$"

Route13_Text_Biker1_Text_1:
	.string "Ahah, here take mine.$"

Route13_Text_Biker1_Text_2:
	.string "I was joking about the money !$"

Route13_Text_Biker2_Text_0:
	.string "I'm a member of the KANTO WHEELS.$"

Route13_Text_Biker2_Text_1:
	.string "And I'm about to get expel...$"

Route13_Text_Biker2_Text_2:
	.string "It's cool you made your POKéMON so\n"
	.string "strong ! Might us right ! And you know\l"
	.string "it !$"

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

Route13_Text_Beauty_Text_0:
	.string "Do you want to POKéMON with me ?$"

Route13_Text_Beauty_Text_1:
	.string "What, it's over already ?$"

Route13_Text_Beauty_Text_2:
	.string "I don't know anything about POKéMON. I\n"
	.string "just like cool ones !$"

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
