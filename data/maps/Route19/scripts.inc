Route19_MapScripts::
	.byte 0


Route19_Text_Picnicker::
	trainerbattle_single TRAINER_TONY_2, Route19_Text_Picnicker_Text_0, Route19_Text_Picnicker_Text_1
	msgbox Route19_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route19_Text_SwimmerM::
	trainerbattle_single TRAINER_TONY_3, Route19_Text_SwimmerM_Text_0, Route19_Text_SwimmerM_Text_1
	msgbox Route19_Text_SwimmerM_Text_2, MSGBOX_AUTOCLOSE
	end


Route19_Text_SwimmerF::
	trainerbattle_single TRAINER_TONY_4, Route19_Text_SwimmerF_Text_0, Route19_Text_SwimmerF_Text_1
	msgbox Route19_Text_SwimmerF_Text_2, MSGBOX_AUTOCLOSE
	end


Route19_Text_Picnicker_Text_0:
	.string "I didn't took my swimsuit...$"

Route19_Text_Picnicker_Text_1:
	.string "Oupsss !$"

Route19_Text_Picnicker_Text_2:
	.string "I wanted to go to SEAFOAM ISLANDS but\n"
	.string "none of my POKéMON know how to SURF\l"
	.string "and I don't have a swimsuit either. Do\l"
	.string "you think you can accompagne me there\l"
	.string "? No ? Too bad...$"

Route19_Text_SwimmerM_Text_0:
	.string "One more lap and I'm done.$"

Route19_Text_SwimmerM_Text_1:
	.string "Glummbl...$"

Route19_Text_SwimmerM_Text_2:
	.string "I'm training myself for the GYM of\n"
	.string "CERULEAN CITY. MISTY is really crazy\l"
	.string "about swimming.$"

Route19_Text_SwimmerF_Text_0:
	.string "The water is cold around here don't you think ?$"

Route19_Text_SwimmerF_Text_1:
	.string "Attchewww !$"

Route19_Text_SwimmerF_Text_2:
	.string "The SEAFOAM ISLANDS are just ahead.\n"
	.string "It's full of ICE POKéMON.$"
