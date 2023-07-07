Route6_MapScripts::
	.byte 0


Route6_Text_RedBattle::
	trainerbattle_single TRAINER_RED, Red_Intro, Red_Outro, Mewtwo
	msgbox PostbattleRed, MSGBOX_AUTOCLOSE
	release
	end


Mewtwo::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Mewtwo_Text_0
	call GiveMewtwo
	release
	end


GiveMewtwo::
	givemon SPECIES_MEWTWO, 70
	playfanfare MUS_OBTAIN_ITEM
	compare MON_GIVEN_TO_PARTY, 0
	goto_if_ne GiveMewtwo_2
	compare MON_GIVEN_TO_PC, 0
	goto_if_ne GiveMewtwo_3
GiveMewtwo_1:
	return

GiveMewtwo_2:
	msgbox GiveMewtwo_Text_0
	goto GiveMewtwo_1

GiveMewtwo_3:
	msgbox GiveMewtwo_Text_1
	goto GiveMewtwo_1


Route6_Text_Pika::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox Route6_Text_Pika_Text_0
	release
	end


Route6_Remove_Pika::
	checktrainerflag TRAINER_RED
	goto_if 1, Route6_Remove_Pika_1
	return

Route6_Remove_Pika_1:
	removeobject 2
	return


Mewtwo_Text_0:
	.string "{PLAYER}: Huh? I can have it ?$"

GiveMewtwo_Text_0:
	.string "You received a POKéMON!$"

GiveMewtwo_Text_1:
	.string "You received a POKéMON!\p"
	.string "It was sent to the PC.$"

Route6_Text_Pika_Text_0:
	.string "Pika! Pi-piii!\p"
	.string "{PLAYER}: This bastard look tough...\n"
	.string "I'm in deep shit...$"

Red_Intro::
	.string "...................\p!!!$"

Red_Outro::
	.string "?!$"

PostbattleRed::
	.string "..........................$"
