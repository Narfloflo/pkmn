SaffronInside_MapScripts::
	.byte 0


SaffronInside_Text_Sabrina::
	lock
	faceplayer
	checktrainerflag TRAINER_BRAWLY_4
	goto_if 0, SaffronInside_Text_Sabrina_2
	checktrainerflag TRAINER_BRAWLY_4
	goto_if 1, SaffronInside_Text_Sabrina_3
SaffronInside_Text_Sabrina_1:
	release
	end

SaffronInside_Text_Sabrina_2:
	msgbox SaffronInside_Text_Sabrina_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SaffronInside_Text_Sabrina_6
	msgbox SaffronInside_Text_Sabrina_Text_1
	goto SaffronInside_Text_Sabrina_1

SaffronInside_Text_Sabrina_3:
	goto SaffronInside_Text_SabrinaRematch
	goto SaffronInside_Text_Sabrina_1

SaffronInside_Text_Sabrina_6:
	goto SaffronInside_Text_SabrinaFight
	goto SaffronInside_Text_Sabrina_1


SaffronInside_Text_SabrinaFight::
	trainerbattle_single TRAINER_BRAWLY_4, SaffronInside_Text_SabrinaFight_Text_0, SaffronInside_Text_SabrinaFight_Text_1
	release
	end


SaffronInside_Text_SabrinaRematch::
	msgbox SaffronInside_Text_SabrinaRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SaffronInside_Text_SabrinaRematch_2
	msgbox SaffronInside_Text_SabrinaRematch_Text_1
SaffronInside_Text_SabrinaRematch_1:
	release
	end

SaffronInside_Text_SabrinaRematch_2:
	cleartrainerflag TRAINER_BRAWLY_4
	trainerbattle_single TRAINER_BRAWLY_4, SaffronInside_Text_SabrinaFight_Text_0, SaffronInside_Text_SabrinaFight_Text_1
	goto SaffronInside_Text_SabrinaRematch_1


SaffonInside_Text_OfficeLady::
	lock
	faceplayer
	msgbox SaffonInside_Text_OfficeLady_Text_0
	release
	end


SaffonInside_Text_OfficeGuard::
	lock
	faceplayer
	msgbox SaffonInside_Text_OfficeGuard_Text_0
	playse MUS_OBTAIN_ITEM
	waitse
	message SaffonInside_Text_OfficeGuard_Text_1
	release
	end


SaffronInside_Text_TrainerFanclubSign::
	msgbox SaffronInside_Text_TrainerFanclubSign_Text_0, MSGBOX_SIGN
	end


SaffronInside_Text_Sabrina_Text_0:
	.string "{PLAYER} right ? I forsaw you coming\n"
	.string "here. I'm a bit busy ordering stuff for\l"
	.string "my GYM, but I know what you are looking\l"
	.string "for. So you wanna fight me ?$"

SaffronInside_Text_Sabrina_Text_1:
	.string "Yeah I forsaw that eventually...$"

SaffronInside_Text_SabrinaFight_Text_0:
	.string "I already know all your moves !$"

SaffronInside_Text_SabrinaFight_Text_1:
	.string "I didn't paid attention...$"

SaffronInside_Text_SabrinaRematch_Text_0:
	.string "You know, administrative stuff can be\n"
	.string "really a waste of time. We can spend it\l"
	.string "with our POKéMON if you want ?$"

SaffronInside_Text_SabrinaRematch_Text_1:
	.string "...$"

SaffonInside_Text_OfficeLady_Text_0:
	.string "Here in YAMABUKI CORP. we didn't suffer\n"
	.string "TEAM ROCKET mischieves that much. Ok\l"
	.string "some of our scientist are missing. But\l"
	.string "at least our offices didn't blew up !$"

SaffonInside_Text_OfficeGuard_Text_0:
	.string "Welcome to YAMABUKI CORP.$"

SaffonInside_Text_OfficeGuard_Text_1:
	.string "Here is a flyer about what we do. What\n"
	.string "it's blank ? Well you get the idea...$"

SaffronInside_Text_TrainerFanclubSign_Text_0:
	.string "POKéMON TRAINER FAN CLUB\pMany TRAINERS have scribbled their\nnames on this sign.$"
