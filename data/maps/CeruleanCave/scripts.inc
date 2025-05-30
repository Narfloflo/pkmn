CeruleanCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, CeruleanCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CeruleanCave_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x029, CeruleanCave_Event_RemoveMewtwoandRed
	end


CeruleanCave_Text_RedBattle::
	trainerbattle_single TRAINER_RED, CeruleanCave_Text_Red_Intro, CeruleanCave_Text_Red_Outro, CeruleanCave_PostBattle_Mewtwo
	msgbox CeruleanCave_Text_PostbattleRed, MSGBOX_AUTOCLOSE
	release
	end


CeruleanCave_PostBattle_Mewtwo::
	special PlayerFaceTrainerAfterBattle
	setflag FLAG_UNUSED_0x029
	waitmovement 0
	msgbox CeruleanCave_PostBattle_Mewtwo_Text_0
	call CeruleanCave_PostBattle_GiveMewtwo
	release
	end


CeruleanCave_PostBattle_GiveMewtwo::
	givemon SPECIES_MEWTWO, 70
	playfanfare MUS_OBTAIN_ITEM
	compare MON_GIVEN_TO_PARTY, 0
	goto_if_ne CeruleanCave_PostBattle_GiveMewtwo_2
	compare MON_GIVEN_TO_PC, 0
	goto_if_ne CeruleanCave_PostBattle_GiveMewtwo_3
CeruleanCave_PostBattle_GiveMewtwo_1:
	fadescreen FADE_TO_BLACK
	removeobject 1
	removeobject 2
	fadescreen FADE_FROM_BLACK
	msgbox CeruleanCave_PostBattle_GiveMewtwo_Text_2, MSGBOX_DEFAULT
	end

CeruleanCave_PostBattle_GiveMewtwo_2:
	msgbox CeruleanCave_PostBattle_GiveMewtwo_Text_0
	goto CeruleanCave_PostBattle_GiveMewtwo_1

CeruleanCave_PostBattle_GiveMewtwo_3:
	msgbox CeruleanCave_PostBattle_GiveMewtwo_Text_1
	goto CeruleanCave_PostBattle_GiveMewtwo_1


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


CeruleanCave_PostBattle_Mewtwo_Text_0:
	.string "{PLAYER}: Huh? I can have it ?$"

CeruleanCave_PostBattle_GiveMewtwo_Text_0:
	.string "You received a POKéMON!$"

CeruleanCave_PostBattle_GiveMewtwo_Text_1:
	.string "You received a POKéMON!\p"
	.string "It was sent to the PC.$"

CeruleanCave_PostBattle_GiveMewtwo_Text_2:
	.string "{PLAYER}: There is a picture:\nMT. SILVER... What is this place MT.\lSILVER?$"

CeruleanCave_Text_Pika_Text_0:
	.string "Pika! Pi-piii!\p"
	.string "{PLAYER}: Never seen a PIKACHU so\n"
	.string "pumped up than\n"
	.string "this one!$"

CeruleanCave_Text_RedvsMewtwo_Text_0:
	.string "...............$"

CeruleanCave_Text_Red_Intro::
	.string "RED:...................................\n{PLAYER}:..............................\lRED:................................??!$"

CeruleanCave_Text_Red_Outro::
	.string "?!$"

CeruleanCave_Text_PostbattleRed::
	.string "..........................$"
