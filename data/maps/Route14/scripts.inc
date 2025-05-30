Route14_MapScripts::
	.byte 0


Route14_Text_Birdkeeper::
	trainerbattle_single TRAINER_JESSICA_2, Route14_Text_Birdkeeper_Text_0, Route14_Text_Birdkeeper_Text_1
	msgbox Route14_Text_Birdkeeper_Text_2, MSGBOX_AUTOCLOSE
	end


Route14_Text_Thug::
	trainerbattle_single TRAINER_CINDY_2, Route14_Text_Thug_Text_0, Route14_Text_Thug_Text_1
	msgbox Route14_Text_Thug_Text_2, MSGBOX_AUTOCLOSE
	end


Route14_Text_Biker1::
	trainerbattle_single TRAINER_CINDY_3, Route14_Text_Biker1_Text_0, Route14_Text_Biker1_Text_1
	msgbox Route14_Text_Biker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route14_Text_Biker2::
	trainerbattle_single TRAINER_CINDY_4, Route14_Text_Biker2_Text_0, Route14_Text_Biker2_Text_1
	msgbox Route14_Text_Biker2_Text_2, MSGBOX_AUTOCLOSE
	end


Route14_Text_Beauty::
	trainerbattle_single TRAINER_THALIA_2, Route14_Text_Beauty_Text_0, Route14_Text_Beauty_Text_1
	msgbox Route14_Text_Beauty_Text_2, MSGBOX_AUTOCLOSE
	end


Route14_Text_Worker::
	msgbox Route14_Text_Worker_Text_0, MSGBOX_NPC
	end


Route14_Text_Youngster::
	msgbox Route14_Text_Youngster_Text_0, MSGBOX_NPC
	end


Route14_Text_SafariSign::
	msgbox Route14_Text_SafariSign_Text_0, MSGBOX_SIGN
	end


Route14_Text_Birdkeeper_Text_0:
	.string "I always go with bird POKéMON !$"

Route14_Text_Birdkeeper_Text_1:
	.string "Out of power !$"

Route14_Text_Birdkeeper_Text_2:
	.string "I wish I could fly like PIDGEY and\n"
	.string "PIDGEOTTO...$"

Route14_Text_Thug_Text_0:
	.string "You cant understand me.$"

Route14_Text_Thug_Text_1:
	.string "No ! My babies !!$"

Route14_Text_Thug_Text_2:
	.string "You can't understand my love for pink\n"
	.string "POKéMON. But I still have to keep some\l"
	.string "dirty bastards to scare the kids !$"

Route14_Text_Biker1_Text_0:
	.string "Give me your money.$"

Route14_Text_Biker1_Text_1:
	.string "Ahah, here take mine.$"

Route14_Text_Biker1_Text_2:
	.string "I was joking about the money !$"

Route14_Text_Biker2_Text_0:
	.string "I'm a member of the KANTO WHEELS.$"

Route14_Text_Biker2_Text_1:
	.string "And I'm about to get expel...$"

Route14_Text_Biker2_Text_2:
	.string "It's cool you made your POKéMON so\n"
	.string "strong! Might us right! And you know it!$"

Route14_Text_Beauty_Text_0:
	.string "Do you want to POKéMON with me?$"

Route14_Text_Beauty_Text_1:
	.string "What, it's over already ?$"

Route14_Text_Beauty_Text_2:
	.string "I don't know anything about POKéMON. I\n"
	.string "just like cool ones!$"

Route14_Text_Worker_Text_0:
	.string "Oh hello there! We just built a new\nentrance for the SAFARI ZONE!\lSince it is sooooo famous and will\lalways be, it's will be good for\lbusiness.\lRight?$"

Route14_Text_Youngster_Text_0:
	.string "Two minutes ago I was in the SAFARI\nZONE. But I took an exit and I'm here!\lI don't really want to pay ¥500 to get\lback to FUSCHIA.\lI have to walk then...$"

Route14_Text_SafariSign_Text_0:
	.string "SAFARI ZONE Alternate Entrance$"
