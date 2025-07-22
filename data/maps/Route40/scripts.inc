Route40_MapScripts::
	.byte 0


Route40_Text_Worker::
	lock
	faceplayer
	msgbox Route40_Text_Worker_Text_0
	release
	end


Route40_Text_Fisherman::
	lock
	faceplayer
	msgbox Route40_Text_Fisherman_Text_0
	release
	end


Route40_Text_Fisherman2::
	lock
	faceplayer
	msgbox Route40_Text_Fisherman2_Text_0
	release
	end


Route40_Text_SwimmerF::
	lock
	faceplayer
	msgbox Route40_Text_SwimmerF_Text_0
	release
	end


Route40_Text_SwimmerF2::
	lock
	faceplayer
	msgbox Route40_Text_SwimmerF2_Text_0
	release
	end


Route40_Text_Machoke::
	lock
	faceplayer
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox Route40_Text_Machoke_Text_0
	release
	end


Route40_Text_SwimmerM1::
	trainerbattle_single TRAINER_DIANA_3, Route40_Text_SwimmerM1_Text_0, Route40_Text_SwimmerM1_Text_1
	msgbox Route40_Text_SwimmerM1_Text_2, MSGBOX_NPC
	end


Route40_Text_SwimmerM2::
	trainerbattle_single TRAINER_DIANA_4, Route40_Text_SwimmerM1_Text_0, Route40_Text_SwimmerM1_Text_1
	msgbox Route40_Text_SwimmerM1_Text_2, MSGBOX_NPC
	end


Route40_Text_SwimmerM3::
	trainerbattle_single TRAINER_AMY_AND_LIV_2, Route40_Text_SwimmerM1_Text_0, Route40_Text_SwimmerM1_Text_1
	msgbox Route40_Text_SwimmerM1_Text_2, MSGBOX_NPC
	end


Route40_Text_SwimmerM4::
	trainerbattle_single TRAINER_AMY_AND_LIV_3, Route40_Text_SwimmerM1_Text_0, Route40_Text_SwimmerM1_Text_1
	msgbox Route40_Text_SwimmerM1_Text_2, MSGBOX_NPC
	end


Route40_Text_SwimmerF3::
	trainerbattle_single TRAINER_AMY_AND_LIV_4, Route40_Text_SwimmerM1_Text_0, Route40_Text_SwimmerM1_Text_1
	msgbox Route40_Text_SwimmerM1_Text_2, MSGBOX_NPC
	end


Route40_Text_Worker_Text_0:
	.string "We are digging in the hills. There is a\n"
	.string "place across they want to build a thing\l"
	.string "like a BATTLE TOWER or something.$"

Route40_Text_Fisherman_Text_0:
	.string "Best place to fish is here.\p"
	.string "Yeah, I have nothing to say, goodbye.$"

Route40_Text_Fisherman2_Text_0:
	.string "I don't know how I end up here, but\n"
	.string "that's a really good place to fish!$"

Route40_Text_SwimmerF_Text_0:
	.string "I don't know if the water is cold, but all\n"
	.string "my friend are in the sea, so...$"

Route40_Text_SwimmerF2_Text_0:
	.string "I was floatting and I drift there. I'm\n"
	.string "not scared but wow ! It could be worse.$"

Route40_Text_Machoke_Text_0:
	.string "Choky!$"

Route40_Text_SwimmerM1_Text_0:
	.string "Hey$"

Route40_Text_SwimmerM1_Text_1:
	.string "Damn$"

Route40_Text_SwimmerM1_Text_2:
	.string "I lost!$"
