rustboroSewer_MapScripts::
	.byte 0

RustoboroSewer_Text_Policeman::
	lock
	faceplayer
	msgbox RustoboroSewer_Text_Policeman_Text_0
	release
	end


RustoboroSewer_Text_Zigzagoon1::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	waitmoncry
	msgbox RustoboroSewer_Text_Zigzagoon1_Text_0
	setwildbattle SPECIES_ZIGZAGOON, 15
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RustoboroSewer_Text_Zigzagoon1_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RustoboroSewer_Text_Zigzagoon1_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RustoboroSewer_Text_Zigzagoon1_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq RustoboroSewer_Text_Zigzagoon1_5
RustoboroSewer_Text_Zigzagoon1_1:
	return

RustoboroSewer_Text_Zigzagoon1_2:
	removeobject 9
	goto RustoboroSewer_Text_Zigzagoon1_1

RustoboroSewer_Text_Zigzagoon1_3:
	removeobject 9
	goto RustoboroSewer_Text_Zigzagoon1_1

RustoboroSewer_Text_Zigzagoon1_4:
	removeobject 9
	goto RustoboroSewer_Text_Zigzagoon1_1

RustoboroSewer_Text_Zigzagoon1_5:
	removeobject 9
	goto RustoboroSewer_Text_Zigzagoon1_1


RustoboroSewer_Text_Zigzagoon2::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	waitmoncry
	msgbox RustoboroSewer_Text_Zigzagoon2_Text_0
	setwildbattle SPECIES_ZIGZAGOON, 15
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RustoboroSewer_Text_Zigzagoon2_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RustoboroSewer_Text_Zigzagoon2_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RustoboroSewer_Text_Zigzagoon2_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq RustoboroSewer_Text_Zigzagoon2_5
RustoboroSewer_Text_Zigzagoon2_1:
	return

RustoboroSewer_Text_Zigzagoon2_2:
	removeobject 8
	goto RustoboroSewer_Text_Zigzagoon2_1

RustoboroSewer_Text_Zigzagoon2_3:
	removeobject 8
	goto RustoboroSewer_Text_Zigzagoon2_1

RustoboroSewer_Text_Zigzagoon2_4:
	removeobject 8
	goto RustoboroSewer_Text_Zigzagoon2_1

RustoboroSewer_Text_Zigzagoon2_5:
	removeobject 8
	goto RustoboroSewer_Text_Zigzagoon2_1


RustoboroSewer_Text_Scientist::
	lock
	faceplayer
	msgbox RustoboroSewer_Text_Scientist_Text_0
	release
	end


RustoboroSewer_Text_Worker::
	lock
	faceplayer
	msgbox RustoboroSewer_Text_Worker_Text_0
	release
	end


RustoboroSewer_Text_Hiker::
	lock
	faceplayer
	msgbox RustoboroSewer_Text_Hiker_Text_0
	release
	end


RustoboroSewer_Text_SchoolBoy::
	lock
	faceplayer
	msgbox RustoboroSewer_Text_SchoolBoy_Text_0
	release
	end


RustoboroSewer_Text_Policeman_Text_0:
	.string "Be careful out there. Some wilds\n"
	.string "POKéMON won't hesitate to attack you,\l"
	.string "even if there are people working there.$"

RustoboroSewer_Text_Zigzagoon1_Text_0:
	.string "Goowi?$"

RustoboroSewer_Text_Zigzagoon2_Text_0:
	.string "Zwazz!$"

RustoboroSewer_Text_Scientist_Text_0:
	.string "Hey, we are cleaning the water here.\n"
	.string "Some wilds POKéMON are running around,\l"
	.string "but some TRAINERS are around and keep\l"
	.string "us safe.$"

RustoboroSewer_Text_Worker_Text_0:
	.string "Sometimes there are some GRIMER in the\n"
	.string "water, and that's a good indicator of\l"
	.string "the quality of water.$"

RustoboroSewer_Text_Hiker_Text_0:
	.string "My team of MACHOP can crush every\n"
	.string "ZIGZAGOON around there. The city is\l"
	.string "paying me a few bucks to protect the\l"
	.string "cleaning team out there.$"

RustoboroSewer_Text_SchoolBoy_Text_0:
	.string "I went to the sewer to train my team,\n"
	.string "but they all fainted... I need to move\l"
	.string "to the POKéMON CENTER, but every step\l"
	.string "is a nightmare! I get attacked\l"
	.string "everytime!$"
