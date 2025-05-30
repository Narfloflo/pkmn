CeruleanCity_MapScripts::
	.byte 0


CeruleanCity_Text_Misty::
	lock
	faceplayer
	checktrainerflag TRAINER_ROXANNE_2
	goto_if 0, CeruleanCity_Text_Misty_2
	checktrainerflag TRAINER_ROXANNE_2
	goto_if 1, CeruleanCity_Text_Misty_3
CeruleanCity_Text_Misty_1:
	release
	end

CeruleanCity_Text_Misty_2:
	msgbox CeruleanCity_Text_Misty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CeruleanCity_Text_Misty_6
	msgbox CeruleanCity_Text_Misty_Text_1
	goto CeruleanCity_Text_Misty_1

CeruleanCity_Text_Misty_3:
	goto CeruleanCity_Text_MistyRematch
	goto CeruleanCity_Text_Misty_1

CeruleanCity_Text_Misty_6:
	goto CeruleanCity_Text_MistyFight
	goto CeruleanCity_Text_Misty_1


CeruleanCity_Text_MistyFight::
	trainerbattle_single TRAINER_ROXANNE_2, CeruleanCity_Text_MistyFight_Text_0, CeruleanCity_Text_MistyFight_Text_1
	release
	end


CeruleanCity_Text_MistyRematch::
	msgbox CeruleanCity_Text_MistyRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CeruleanCity_Text_MistyRematch_2
	msgbox CeruleanCity_Text_MistyRematch_Text_1
CeruleanCity_Text_MistyRematch_1:
	release
	end

CeruleanCity_Text_MistyRematch_2:
	cleartrainerflag TRAINER_ROXANNE_2
	trainerbattle_single TRAINER_ROXANNE_2, CeruleanCity_Text_MistyFight_Text_0, CeruleanCity_Text_MistyFight_Text_1
	goto CeruleanCity_Text_MistyRematch_1


CeruleanCity_Text_SwimmingPool::
	lock
	msgbox CeruleanCity_Text_SwimmingPool_Text_0
	release
	end


CeruleanCity_Text_Policeman::
	lock
	faceplayer
	msgbox CeruleanCity_Text_Policeman_Text_0
	release
	end


CeruleanCave_Text_Camper::
	lock
	faceplayer
	msgbox CeruleanCave_Text_Camper_Text_0
	release
	end


CeruleanCave_Text_Youngster::
	lock
	faceplayer
	msgbox CeruleanCave_Text_Youngster_Text_0
	release
	end


CeruleanCave_Text_Lass::
	lock
	msgbox CeruleanCave_Text_Lass_Text_0
	release
	end


CeruleanCave_Text_Slowbro::
	lock
	faceplayer
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox CeruleanCave_Text_Slowbro_Text_0
	release
	end


CeruleanCave_Text_Man::
	lock
	faceplayer
	msgbox CeruleanCave_Text_Man_Text_0
	release
	end


CeruleanCave_Text_Oldman::
	lock
	faceplayer
	msgbox CeruleanCave_Text_Oldman_Text_0
	release
	end


CeruleanCave_Text_PoliceSign::
	lock
	msgbox CeruleanCave_Text_PoliceSign_Text_0
	release
	end


CeruleanCave_Text_GymSign::
	lock
	msgbox CeruleanCave_Text_GymSign_Text_0
	release
	end


CeruleanCave_Text_CitySign::
	lock
	msgbox CeruleanCave_Text_CitySign_Text_0
	release
	end


CeruleanCave_Text_BikeShopSign::
	lock
	msgbox CeruleanCave_Text_BikeShopSign_Text_0
	release
	end


CeruleanCave_Text_Gentleman::
	lock
	faceplayer
	msgbox CeruleanCave_Text_Gentleman_Text_0
	release
	end


CeruleanCave_Text_Hiker::
	lock
	faceplayer
	msgbox CeruleanCave_Text_Hiker_Text_0
	release
	end


CeruleanCave_Text_SwimmerF::
	lock
	faceplayer
	msgbox CeruleanCave_Text_SwimmerF_Text_0
	release
	end


CeruleanCave_Text_TuberF::
	lock
	faceplayer
	msgbox CeruleanCave_Text_TuberF_Text_0
	release
	end


CeruleanCity_Text_Misty_Text_0:
	.string "Hello you. The GYM is closed ? Yes I\n"
	.string "know, I'm actually training my future\l"
	.string "troops here in the pool. They can\l"
	.string "barely know how to swim... I can have a\l"
	.string "small fight with you if you want ?$"

CeruleanCity_Text_Misty_Text_1:
	.string "Well, I still have these lazy ass to\n"
	.string "train so...$"

CeruleanCity_Text_MistyFight_Text_0:
	.string "I'm always ready for that !$"

CeruleanCity_Text_MistyFight_Text_1:
	.string "You really are strong !$"

CeruleanCity_Text_MistyRematch_Text_0:
	.string "Pfffiou, all these guys can't\n"
	.string "understand the basics of swimming. I\l"
	.string "give up. Oh {PLAYER} ! You want a\l"
	.string "rematch ?$"

CeruleanCity_Text_MistyRematch_Text_1:
	.string "You know where to find me if you change\n"
	.string "your mind.$"

CeruleanCity_Text_SwimmingPool_Text_0:
	.string "{PLAYER} : This is a swimming pool, I\n"
	.string "don't think I can SURF here.$"

CeruleanCity_Text_Policeman_Text_0:
	.string "This is the CERULEAN POLICE STATION.\n"
	.string "Since TEAM ROCKET was making a big\l"
	.string "ruckus here, the authorities thought\l"
	.string "it would be great to build a POLICE\l"
	.string "STATION. So if this lunatics are back,\l"
	.string "we are ready !$"

CeruleanCave_Text_Camper_Text_0:
	.string "This way lead to the ROUTE 9 and the\n"
	.string "ROCK TUNNEL. But this bush is blocking\l"
	.string "the way...$"

CeruleanCave_Text_Youngster_Text_0:
	.string "You're a TRAINER too ? Collecting,\n"
	.string "fighting, it's a tough life.$"

CeruleanCave_Text_Lass_Text_0:
	.string "Ok !\n"
	.string "SLOWBRO ! Use SONICBOOM !\p"
	.string "Come on, SLOWBRO pay attention !$"

CeruleanCave_Text_Slowbro_Text_0:
	.string "Guuh ?\n"
	.string "{PLAYER} : Admit that you can't use\l"
	.string "this move to your TRAINER...$"

CeruleanCave_Text_Man_Text_0:
	.string "You're making an encyclopedia on\n"
	.string "POKéMON ? Just like those trainers...\l"
	.string "GREEN and RED. Seems like the Profs\l"
	.string "give kids their jobs...$"

CeruleanCave_Text_Oldman_Text_0:
	.string "I use to teach TRAINERS the power of\n"
	.string "the BADGES. But I grew tired of this.\l"
	.string "Now I'm tending my garden. It's better.$"

CeruleanCave_Text_PoliceSign_Text_0:
	.string "CERULEAN POLICE STATION$"

CeruleanCave_Text_GymSign_Text_0:
	.string "CERULEAN CITY GYM POKéMON GYM\n"
	.string "Leader : MISTY The tomboyish mermaid !$"

CeruleanCave_Text_CitySign_Text_0:
	.string "CERULEAN CITY\n"
	.string "A mysterious, blue aura surrounds it.$"

CeruleanCave_Text_BikeShopSign_Text_0:
	.string "Grass and caves handled easily !\n"
	.string "BIKE SHOP$"

CeruleanCave_Text_Gentleman_Text_0:
	.string "This house was robbed by TEAM ROCKET.\n"
	.string "It was a few months ago. Then, we\l"
	.string "totally rebuilt CERULEAN CITY entirely.$"

CeruleanCave_Text_Hiker_Text_0:
	.string "ROCK TUNNEL in the east, MT. MOON in the\n"
	.string "west : a paradise for a HIKER like me !$"

CeruleanCave_Text_SwimmerF_Text_0:
	.string "I wanted to become a GYM TRAINER, but\n"
	.string "MISTY told me I couldn't swim. That's\l"
	.string "wrong, she just jalouse because I won\l"
	.string "against her last month !$"

CeruleanCave_Text_TuberF_Text_0:
	.string "I'm gonna be a tough TRAINER thanks to\n"
	.string "MISTY training !$"
