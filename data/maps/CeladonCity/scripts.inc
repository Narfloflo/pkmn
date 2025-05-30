CeladonCity_MapScripts::
	.byte 0


CeladonCity_Text_CheckGender::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, CeladonCity_Text_MenAreTrash
	goto_if_eq VAR_RESULT, FEMALE, CeladonCity_Text_YoucanCome
	end


CeladonCity_Text_MenAreTrash::
	lock
	msgbox CeladonCity_Text_MenAreTrash_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, CeladonCity_Move_MenAreTrash
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


CeladonCity_Move_MenAreTrash:
	walk_fast_down
	step_end

CeladonCity_Text_YoucanCome::
	release
	end


CeladonCity_Text_GymLass::
	lock
	faceplayer
	msgbox CeladonCity_Text_GymLass_Text_0
	release
	end


CeladonCity_Text_GymGirl::
	lock
	faceplayer
	msgbox CeladonCity_Text_GymGirl_Text_0
	release
	end


CeladonCity_Text_GymBeauty::
	lock
	faceplayer
	msgbox CeladonCity_Text_GymBeauty_Text_0
	release
	end


CeladonCity_Text_Pervert::
	lock
	msgbox CeladonCity_Text_Pervert_Text_0
	release
	end


CeladonCity_Text_PoliceLeft::
	lock
	msgbox CeladonCity_Text_PoliceLeft_Text_0
	release
	end


CeladonCity_Text_PoliceRight::
	lock
	msgbox CeladonCity_Text_PoliceRight_Text_0
	release
	end


CeladonCity_Text_Erika::
	lock
	faceplayer
	checktrainerflag TRAINER_BRAWLY_2
	goto_if 0, CeladonCity_Text_Erika_2
	checktrainerflag TRAINER_BRAWLY_2
	goto_if 1, CeladonCity_Text_Erika_3
CeladonCity_Text_Erika_1:
	release
	end

CeladonCity_Text_Erika_2:
	msgbox CeladonCity_Text_Erika_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CeladonCity_Text_Erika_6
	msgbox CeladonCity_Text_Erika_Text_1
	goto CeladonCity_Text_Erika_1

CeladonCity_Text_Erika_3:
	goto CeladonCity_Text_ErikaRematch
	goto CeladonCity_Text_Erika_1

CeladonCity_Text_Erika_6:
	goto CeladonCity_Text_ErikaFight
	goto CeladonCity_Text_Erika_1


CeladonCity_Text_ErikaFight::
	trainerbattle_single TRAINER_BRAWLY_2, CeladonCity_Text_ErikaFight_Text_0, CeladonCity_Text_ErikaFight_Text_1
	release
	end


CeladonCity_Text_ErikaRematch::
	msgbox CeladonCity_Text_ErikaRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CeladonCity_Text_ErikaRematch_2
	msgbox CeladonCity_Text_ErikaRematch_Text_2
CeladonCity_Text_ErikaRematch_1:
	release
	end

CeladonCity_Text_ErikaRematch_2:
	cleartrainerflag TRAINER_BRAWLY_2
	trainerbattle_single TRAINER_BRAWLY_2, CeladonCity_Text_ErikaRematch_Text_1, CeladonCity_Text_ErikaFight_Text_1
	goto CeladonCity_Text_ErikaRematch_1


CeladonCity_Text_Policeman::
	lock
	faceplayer
	msgbox CeladonCity_Text_Policeman_Text_0
	release
	end


CeladonCity_Text_Salaryman::
	lock
	msgbox CeladonCity_Text_Salaryman_Text_0
	release
	end


CeladonCity_Text_Fatman::
	lock
	faceplayer
	msgbox CeladonCity_Text_Fatman_Text_0
	release
	end


CeladonCity_Text_Slowking::
	lock
	faceplayer
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	msgbox CeladonCity_Text_Slowking_Text_0
	release
	end


CeladonCity_Text_Woman::
	lock
	faceplayer
	msgbox CeladonCity_Text_Woman_Text_0
	release
	end


CeladonCity_Text_Artist::
	lock
	faceplayer
	msgbox CeladonCity_Text_Artist_Text_0
	release
	end


CeladonCity_Text_OldMan::
	lock
	faceplayer
	msgbox CeladonCity_Text_OldMan_Text_0
	release
	end


CeladonCity_Text_Cooltrainer::
	lock
	faceplayer
	msgbox CeladonCity_Text_Cooltrainer_Text_0
	release
	end


CeladonCity_Text_Scientist::
	lock
	faceplayer
	msgbox CeladonCity_Text_Scientist_Text_0
	release
	end


CeladonCity_Text_Beauty::
	lock
	faceplayer
	msgbox CeladonCity_Text_Beauty_Text_0
	release
	end


CeladonCity_Text_LassHoenn1::
	msgbox CeladonCity_Text_LassHoenn1_Text_0, MSGBOX_NPC
	end


CeladonCity_Text_LassHoenn2::
	msgbox CeladonCity_Text_LassHoenn2_Text_0, MSGBOX_NPC
	end


CeladonCity_Text_Fisherman::
	msgbox CeladonCity_Text_Fisherman_Text_0, MSGBOX_NPC
	end


CeladonCity_Text_Woman1::
	msgbox CeladonCity_Text_Woman1_Text_0, MSGBOX_NPC
	end


CeladonCity_Text_OldWoman::
	msgbox CeladonCity_Text_OldWoman_Text_0, MSGBOX_NPC
	end


CeladonCity_Text_Youngster::
	msgbox CeladonCity_Text_Youngster_Text_0, MSGBOX_NPC
	end


CeladonCity_Text_CitySign::
	msgbox CeladonCity_Text_CitySign_Text_0, MSGBOX_SIGN
	end


CeladonCity_Text_MallSign::
	msgbox CeladonCity_Text_MallSign_Text_0, MSGBOX_SIGN
	end


CeladonCity_Text_PrizeExchangeSign::
	msgbox CeladonCity_Text_PrizeExchangeSign_Text_0, MSGBOX_SIGN
	end


CeladonCity_Text_GameCornerSign::
	msgbox CeladonCity_Text_GameCornerSign_Text_0, MSGBOX_SIGN
	end


CeladonCity_Text_GameCornerSign2::
	msgbox CeladonCity_Text_GameCornerSign2_Text_0, MSGBOX_SIGN
	end


CeladonCity_Text_GymSign::
	msgbox CeladonCity_Text_GymSign_Text_0, MSGBOX_SIGN
	end


CeladonCity_Text_MenAreTrash_Text_0:
	.string "Oh no ! You get out of here, you criminal\n"
	.string "boy !!$"

CeladonCity_Text_GymLass_Text_0:
	.string "Oh my ARCEUS ! This old geezer is\n"
	.string "stalking us for so much months !$"

CeladonCity_Text_GymGirl_Text_0:
	.string "We had to sheltered ERIKA from this\n"
	.string "pervert. She couldn't even go to the\l"
	.string "DEPARTMENT STORE without being\l"
	.string "annoyed by him...$"

CeladonCity_Text_GymBeauty_Text_0:
	.string "I used to be part of a GANG. Back in\n"
	.string "those days I would have smashed this\l"
	.string "old guy properly in his POKéBALLS !$"

CeladonCity_Text_Pervert_Text_0:
	.string "Hum no, But... Noo... I didn't...$"

CeladonCity_Text_PoliceLeft_Text_0:
	.string "Dirty bastard ! It's been a while you've\n"
	.string "been stalking these girls !$"

CeladonCity_Text_PoliceRight_Text_0:
	.string "And to say that you came back after\n"
	.string "ERIKA smash your face... Degenerate !$"

CeladonCity_Text_Erika_Text_0:
	.string "Gosh, this old pervert as been around\n"
	.string "for so long. I can't even walk around\l"
	.string "properly... Mmmmh, maybe I can try to\l"
	.string "relax with a quick battle. What do you\l"
	.string "think ?$"

CeladonCity_Text_Erika_Text_1:
	.string "I hope the police is gonna arrest this\n"
	.string "perv.$"

CeladonCity_Text_ErikaFight_Text_0:
	.string "I'll beat you !$"

CeladonCity_Text_ErikaFight_Text_1:
	.string "You really are strong !$"

CeladonCity_Text_ErikaRematch_Text_0:
	.string "I wonder how many time the police is\n"
	.string "gonna take to arrest the old geezer...\l"
	.string "Oh you want another battle ?$"

CeladonCity_Text_ErikaRematch_Text_1:
	.string "I'll beat you this time !!$"

CeladonCity_Text_ErikaRematch_Text_2:
	.string "Well I'm hiding from the pervert, so I'm\n"
	.string "here if you want.$"

CeladonCity_Text_Policeman_Text_0:
	.string "You know, KANTO was plagued by\n"
	.string "criminality. But a TRAINER beat the\l"
	.string "ROCKETS all alone ! Since I heard that,\l"
	.string "I wanted to join the police forces to\l"
	.string "keep KANTO from other lunatics who\l"
	.string "would try to take over the world !$"

CeladonCity_Text_Salaryman_Text_0:
	.string "Woooh ! So I can buy a POKéMON inside\n"
	.string "??? This is some kind of slavery ? Wait\l"
	.string "?...$"

CeladonCity_Text_Fatman_Text_0:
	.string "This is my trusted pal, Slowking ! It\n"
	.string "evolved from slowpoke when I traded it\l"
	.string "!$"

CeladonCity_Text_Slowking_Text_0:
	.string "Kiiiiiing !!$"

CeladonCity_Text_Woman_Text_0:
	.string "The Game Corner is bad for our city's\n"
	.string "image ! Look at what the ROCKETS did !$"

CeladonCity_Text_Artist_Text_0:
	.string "Ahh ! CELADON !\n"
	.string "Such a wonderful place to paint\p"
	.string "What it's ramping with criminality ? I\n"
	.string "don't know about that...$"

CeladonCity_Text_OldMan_Text_0:
	.string "Hello, there !\n"
	.string "I've seen you, but I never had a chance\l"
	.string "to talk !\p"
	.string "What you want a reward ? I don't have\n"
	.string "it, sorry. Have a good day !$"

CeladonCity_Text_Cooltrainer_Text_0:
	.string "I heard there is a great restaurant\n"
	.string "around here. But I can't find it...$"

CeladonCity_Text_Scientist_Text_0:
	.string "I used to serve TEAM ROCKET. They\n"
	.string "enrole me by force. What was I\l"
	.string "supposed to do ?$"

CeladonCity_Text_Beauty_Text_0:
	.string "There is an hotel here, but they hate\n"
	.string "POKéMON. So basically I don't have a\l"
	.string "roof today... Maybe in SAFFRON CITY\l"
	.string "there are places to stay ?$"

CeladonCity_Text_LassHoenn1_Text_0:
	.string "Hey! I think I saw you on TV!\nYeah you beat the ELITE FOUR in HOENN\lright?\lI'm impressed!$"

CeladonCity_Text_LassHoenn2_Text_0:
	.string "We came in CELADON throught the SHIP in\nVERMILION!\lFortunatly my dad could buy us a TICKET\lfor KANTO, it's really expensive!$"

CeladonCity_Text_Fisherman_Text_0:
	.string "There are so much frogs around!\nYou should try SURFING around, you'll\lsee about it!$"

CeladonCity_Text_Woman1_Text_0:
	.string "I think there is a new place around\nhere.\lIt's unbelievable how much this place\lexpanded these last months after the\lROCKET left!$"

CeladonCity_Text_OldWoman_Text_0:
	.string "You think this place is huge, well you\nbetter go to GOLDENROD in JOHTO.\lYou'll be amazed!$"

CeladonCity_Text_Youngster_Text_0:
	.string "There were a lot of pollution around\nhere, but it looks like it was cleaned\lup recently!$"

CeladonCity_Text_CitySign_Text_0:
	.string "CELADON CITY\nThe City of Rainbow Dreams$"

CeladonCity_Text_MallSign_Text_0:
	.string "Find what you need at the\nCELADON DEPT. STORE!$"

CeladonCity_Text_PrizeExchangeSign_Text_0:
	.string "COINS exchanged for prizes!\nPRIZE EXCHANGE$"

CeladonCity_Text_GameCornerSign_Text_0:
	.string "ROCKET GAME CORNER\nThe playground for grown-ups!$"

CeladonCity_Text_GameCornerSign2_Text_0:
	.string "STEAMBOAT GAME CORNER\nThe playground for grown-ups!$"

CeladonCity_Text_GymSign_Text_0:
	.string "CELADON CITY POKéMON GYM\nLEADER: ERIKA\lThe Nature-Loving Princess!$"
