Route10_MapScripts::
	.byte 0


Route10_Text_TunnelSign::
	lock
	msgbox Route10_Text_TunnelSign_Text_0
	release
	end


Route10_Text_PwrPlantSign::
	lock
	msgbox Route10_Text_PwrPlantSign_Text_0
	release
	end


Route10_Text_Scientist::
	lock
	faceplayer
	msgbox Route10_Text_Scientist_Text_0
	release
	end


Route10_Text_Worker1::
	lock
	faceplayer
	msgbox Route10_Text_Worker1_Text_0
	release
	end


Route10_Text_Worker2::
	lock
	faceplayer
	msgbox Route10_Text_Worker2_Text_0
	release
	end


Route10_Text_Camper::
	lock
	faceplayer
	msgbox Route10_Text_Camper_Text_0
	release
	end


Route10_Text_Picnicker1::
	trainerbattle_single TRAINER_JERRY_3, Route10_Text_Picnicker1_Text_0, Route10_Text_Picnicker1_Text_1
	msgbox Route10_Text_Picnicker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_Text_Picnicker2::
	trainerbattle_single TRAINER_JERRY_4, Route10_Text_Picnicker2_Text_0, Route10_Text_Picnicker2_Text_1
	msgbox Route10_Text_Picnicker2_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_Text_Hiker1::
	trainerbattle_single TRAINER_JERRY_2, Route10_Text_Hiker1_Text_0, Route10_Text_Hiker1_Text_1
	msgbox Route10_Text_Hiker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_Text_Hiker2::
	lock
	faceplayer
	msgbox Route10_Text_Hiker2_Text_0
	release
	end


Route10_Text_TunnelSign_Text_0:
	.string "ROCK TUNNEL entrance$"

Route10_Text_PwrPlantSign_Text_0:
	.string "{PLAYER}: It's written KANTO POWER\n"
	.string "PLANT, but it's really decaying !$"

Route10_Text_Scientist_Text_0:
	.string "We are trying to renovate to old POWER\n"
	.string "PLANT. It's been abandonned for a few\l"
	.string "years, and a lot of POKéMON considered\l"
	.string "it home. But we also need a lot of\l"
	.string "energy for the MAGNET TRAIN.$"

Route10_Text_Worker1_Text_0:
	.string "We have a lot of work. It's a great\n"
	.string "construction site ! We need about two\l"
	.string "or three years to complete this\l"
	.string "project without disturbing the\l"
	.string "POKéMON !$"

Route10_Text_Worker2_Text_0:
	.string "LT. SURGE is inside taking care of the\n"
	.string "wilds POKéMON living in the POWER\l"
	.string "PLANT. I'm pretty sure he'll find\l"
	.string "another place for them. But it will take\l"
	.string "some time ! And I heard that a powerful\l"
	.string "POKéMON is living inside !$"

Route10_Text_Camper_Text_0:
	.string "I'm looking for a PIKACHU. I'm pretty\n"
	.string "sure I can find one in here... Or not.$"

Route10_Text_Picnicker1_Text_0:
	.string "Hop hop !\nYou won't get into the TUNNEL without\pfighting me ?$"

Route10_Text_Picnicker1_Text_1:
	.string "I think you were in a hurry !$"

Route10_Text_Picnicker1_Text_2:
	.string "Beware, some TRAINERS are here to fight\n"
	.string "others TRAINERS, in the dark !$"

Route10_Text_Picnicker2_Text_0:
	.string "Hey you went to LAVENDAR TOWN\nbecause you have a dying POKéMON ?$"

Route10_Text_Picnicker2_Text_1:
	.string "Huh it wasn't supposed to be\na threat !$"

Route10_Text_Picnicker2_Text_2:
	.string "I heard a boy is weeping for his dead\n"
	.string "RATTATA. It's so sad !$"

Route10_Text_Hiker1_Text_0:
	.string "You are invading my space !$"

Route10_Text_Hiker1_Text_1:
	.string "Oh no ! $"

Route10_Text_Hiker1_Text_2:
	.string "Ok I'll talk ! I was eating a good old\n"
	.string "sandwich and smoking a cigarette. I\l"
	.string "know it's not healthy. So what ?$"

Route10_Text_Hiker2_Text_0:
	.string "Have you seen that in the ROCK TUNNEL\n"
	.string "there are boulders that are blocking\l"
	.string "the exit ? I hate that ! I wish I had\l"
	.string "some dynamites.$"
