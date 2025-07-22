Route32_MapScripts::
	.byte 0


Route32_Text_LittleBoy::
	lock
	faceplayer
	msgbox Route32_Text_LittleBoy_Text_0
	release
	end


Route32_Text_Nurse::
	lock
	faceplayer
	msgbox Route32_Text_Nurse_Text_0
	release
	end


Route32_Text_Worker::
	lock
	faceplayer
	msgbox Route32_Text_Worker_Text_0
	release
	end


Route32_Text_Scientist::
	lock
	faceplayer
	msgbox Route32_Text_Scientist_Text_0
	release
	end


Route32_Text_BaldMan::
	lock
	faceplayer
	msgbox Route32_Text_BaldMan_Text_0
	release
	end


Route32_Text_CaveSign::
	lock
	msgbox Route32_Text_CaveSign_Text_0
	release
	end


Route32_Text_Fisherman::
	goto_if_set FLAG_TEMP_1, Route32_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, Route32_Text_Fisherman_Text_1, Route32_Text_Fisherman_Text_2
	msgbox Route32_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route32_Text_Fisherman_2:
	msgbox Route32_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route32_Text_Fisherman2::
	goto_if_set FLAG_TEMP_2, Route32_Text_Fisherman2_2
	trainerbattle_single TRAINER_DYLAN_2, Route32_Text_Fisherman_Text_1, Route32_Text_Fisherman_Text_2
	msgbox Route32_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_2
	cleartrainerflag TRAINER_DYLAN_2
	end

Route32_Text_Fisherman2_2:
	msgbox Route32_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route32_Text_Fisherman3::
	goto_if_set FLAG_TEMP_3, Route32_Text_Fisherman3_2
	trainerbattle_single TRAINER_DYLAN_2, Route32_Text_Fisherman_Text_1, Route32_Text_Fisherman_Text_2
	msgbox Route32_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_3
	cleartrainerflag TRAINER_DYLAN_2
	end

Route32_Text_Fisherman3_2:
	msgbox Route32_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route32_Text_Picnicker::
	trainerbattle_single TRAINER_GABRIELLE_2, Route32_Text_Picnicker_Text_0, Route32_Text_Picnicker_Text_1
	msgbox Route32_Text_Picnicker_Text_2, MSGBOX_NPC
	end


Route32_Text_Camper::
	trainerbattle_single TRAINER_GABRIELLE_3, Route32_Text_Camper_Text_0, Route32_Text_Camper_Text_1
	msgbox Route32_Text_Camper_Text_2, MSGBOX_NPC
	end


Route32_Text_Engineer::
	msgbox Route32_Text_Engineer_Text_0, MSGBOX_NPC
	end


Route32_Text_LittleBoy_Text_0:
	.string "The adults are planning to build a\n"
	.string "POKéCENTER right here. Strange isn't it\l"
	.string "?$"

Route32_Text_Nurse_Text_0:
	.string "Oh hello young TRAINER. This place will\n"
	.string "be great in a few years but for now it's\l"
	.string "still empty.$"

Route32_Text_Worker_Text_0:
	.string "It may take some time to build,\n"
	.string "especially if you keep disturbing us !$"

Route32_Text_Scientist_Text_0:
	.string "We've built a few POKéCENTER around, so\n"
	.string "it may be really quick to build. I don't\l"
	.string "know why the chief of operation is\l"
	.string "talking about a few years... Maybe he\l"
	.string "want to be paid for a big contract...$"

Route32_Text_BaldMan_Text_0:
	.string "I use to guide the rookies in VIOLET\n"
	.string "CITY if they didn't had the city\l"
	.string "BADGES. But since the LEADER is\l"
	.string "travelling and his son training, I'm\l"
	.string "unemployed...$"

Route32_Text_CaveSign_Text_0:
	.string "UNION CAVE Ahead$"

Route32_Text_Fisherman_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route32_Text_Fisherman_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route32_Text_Fisherman_Text_2:
	.string "Tch!\nJust a small fry…$"

Route32_Text_Fisherman_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"

Route32_Text_Picnicker_Text_0:
	.string "Are you going to UNION CAVE too?$"

Route32_Text_Picnicker_Text_1:
	.string "Oh wow!$"

Route32_Text_Picnicker_Text_2:
	.string "How can you be so tough?$"

Route32_Text_Camper_Text_0:
	.string "Hey! That's my spot!$"

Route32_Text_Camper_Text_1:
	.string "Ok! Ok! I'll share it with you.$"

Route32_Text_Camper_Text_2:
	.string "If you want to avoid the POKéMON, just\ndon't walk in the grass.$"

Route32_Text_Engineer_Text_0:
	.string "What am I doing?\nWell I'm cutting the trees because we\lare going to build the railways for the\lMAGNET TRAIN.$"
