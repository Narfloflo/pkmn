CeruleanCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, CeruleanCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CeruleanCave_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x029, CeruleanCave_Event_RemoveMewtwoandRed
	end


CeruleanCave_Text_RedBattle::
	trainerbattle_single TRAINER_RED, Red_Intro, Red_Outro, Mewtwo
	msgbox PostbattleRed, MSGBOX_AUTOCLOSE
	release
	end


Mewtwo::
	special PlayerFaceTrainerAfterBattle
	setflag FLAG_UNUSED_0x029
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
	fadescreen FADE_TO_BLACK
	removeobject 1
	removeobject 2
	fadescreen FADE_FROM_BLACK
	msgbox GiveMewtwo_Text_2, MSGBOX_DEFAULT
	end

GiveMewtwo_2:
	msgbox GiveMewtwo_Text_0
	goto GiveMewtwo_1

GiveMewtwo_3:
	msgbox GiveMewtwo_Text_1
	goto GiveMewtwo_1


CeruleanCave_Text_Pika::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox CeruleanCave_Text_Pika_Text_0
	release
	end


CeruleanCave_Text_RedvsMewtwo::
	checktrainerflag TRAINER_RED
	goto_if 1, CeruleanCave_Text_RedvsMewtwo_1
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CeruleanCave_Text_CameraOnFight
	waitmovement 0
	fadeoutbgm 2
	playbgm MUS_NONE, FALSE
	playmoncry SPECIES_MEWTWO, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	waitmoncry
	fadescreen FADE_TO_BLACK
	playse SE_M_EXPLOSION
	waitse
	playse SE_BALL_OPEN
	waitse
	removeobject 10
	fadescreen FADE_FROM_BLACK
	special RemoveCameraObject
	goto CeruleanCave_Text_RedBattle
	return

CeruleanCave_Text_RedvsMewtwo_1:
	msgbox CeruleanCave_Text_RedvsMewtwo_Text_0, MSGBOX_NPC
	end


CeruleanCave_Text_CameraOnFight:
	walk_up
	step_end

CeruleanCave_Event_RemoveMewtwoandRed::
	removeobject 2
	removeobject 1
	removeobject 10
	end


Mewtwo_Text_0:
	.string "{PLAYER}: Huh? I can have it ?$"

GiveMewtwo_Text_0:
	.string "You received a POKéMON!$"

GiveMewtwo_Text_1:
	.string "You received a POKéMON!\p"
	.string "It was sent to the PC.$"

GiveMewtwo_Text_2:
	.string "{PLAYER}: There is a picture:\nMT. SILVER... What is this place MT.\lSILVER?$"

CeruleanCave_Text_Pika_Text_0:
	.string "Pika! Pi-piii!\p"
	.string "{PLAYER}: Never seen a PIKACHU so\n"
	.string "pumped up than\n"
	.string "this one!$"

CeruleanCave_Text_RedvsMewtwo_Text_0:
	.string "...............$"

Red_Intro::
	.string "RED:...................................\n{PLAYER}:..............................\lRED:................................??!$"

Red_Outro::
	.string "?!$"

PostbattleRed::
	.string "..........................$"
