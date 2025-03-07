OakLab_MapScripts::
	.byte 0


OakLab_Text_ScientistF::
	lock
	faceplayer
	msgbox OakLab_Text_ScientistF_Text_0
	release
	end


OakLab_Text_Scientist1::
	lock
	faceplayer
	msgbox OakLab_Text_Scientist1_Text_0
	release
	end


OakLab_Text_Scientist2::
	lock
	faceplayer
	msgbox OakLab_Text_Scientist2_Text_0
	release
	end


OakLab_Text_ProfOak::
	lock
	faceplayer
	checktrainerflag TRAINER_NORMAN_4
	goto_if 1, OakLab_Text_ProfOak_2
	msgbox OakLab_Text_ProfOak_Text_1
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OakLab_Text_ProfOakMalePlayer
	goto_if_eq VAR_RESULT, FEMALE, OakLab_Text_ProfOakFemalePlayer
OakLab_Text_ProfOak_1:
	release
	end

OakLab_Text_ProfOak_2:
	msgbox OakLab_Text_ProfOak_Text_0
	goto OakLab_Text_ProfOak_1


OakLab_Text_ProfOakMalePlayer::
	checktrainerflag TRAINER_ROXANNE_2
	goto_if 1, OakLab_Text_ProfOakMalePlayer_5
OakLab_Text_ProfOakMalePlayer_3:
	msgbox OakLab_Text_ProfOakMalePlayer_Text_2
OakLab_Text_ProfOakMalePlayer_1:
	release
	end

OakLab_Text_ProfOakMalePlayer_2:
	msgbox OakLab_Text_ProfOakMalePlayer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq OakLab_Text_ProfOakMalePlayer_15
	msgbox OakLab_Text_ProfOakMalePlayer_Text_1
	goto OakLab_Text_ProfOakMalePlayer_1

OakLab_Text_ProfOakMalePlayer_4:
	checktrainerflag TRAINER_ROXANNE_4
	goto_if 1, OakLab_Text_ProfOakMalePlayer_9
	goto OakLab_Text_ProfOakMalePlayer_3

OakLab_Text_ProfOakMalePlayer_5:
	checktrainerflag TRAINER_ROXANNE_2
	goto_if 1, OakLab_Text_ProfOakMalePlayer_4
	goto OakLab_Text_ProfOakMalePlayer_3

OakLab_Text_ProfOakMalePlayer_8:
	checktrainerflag TRAINER_WATTSON_4
	goto_if 1, OakLab_Text_ProfOakMalePlayer_12
	goto OakLab_Text_ProfOakMalePlayer_3

OakLab_Text_ProfOakMalePlayer_9:
	checktrainerflag TRAINER_BRAWLY_4
	goto_if 1, OakLab_Text_ProfOakMalePlayer_8
	goto OakLab_Text_ProfOakMalePlayer_3

OakLab_Text_ProfOakMalePlayer_12:
	checktrainerflag TRAINER_FLANNERY_2
	goto_if 1, OakLab_Text_ProfOakMalePlayer_2
	goto OakLab_Text_ProfOakMalePlayer_3

OakLab_Text_ProfOakMalePlayer_15:
	goto OakLab_Text_ProfOakProperBattle
	goto OakLab_Text_ProfOakMalePlayer_1


OakLab_Text_ProfOakFemalePlayer::
	checktrainerflag TRAINER_ROXANNE_2
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_5
OakLab_Text_ProfOakFemalePlayer_3:
	msgbox OakLab_Text_ProfOakMalePlayer_Text_2
OakLab_Text_ProfOakFemalePlayer_1:
	release
	end

OakLab_Text_ProfOakFemalePlayer_2:
	msgbox OakLab_Text_ProfOakFemalePlayer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq OakLab_Text_ProfOakFemalePlayer_17
	msgbox OakLab_Text_ProfOakMalePlayer_Text_1
	goto OakLab_Text_ProfOakFemalePlayer_1

OakLab_Text_ProfOakFemalePlayer_4:
	checktrainerflag TRAINER_ROXANNE_4
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_9
	goto OakLab_Text_ProfOakFemalePlayer_3

OakLab_Text_ProfOakFemalePlayer_5:
	checktrainerflag TRAINER_ROXANNE_2
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_4
	goto OakLab_Text_ProfOakFemalePlayer_3

OakLab_Text_ProfOakFemalePlayer_8:
	checktrainerflag TRAINER_BRAWLY_4
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_13
	goto OakLab_Text_ProfOakFemalePlayer_3

OakLab_Text_ProfOakFemalePlayer_9:
	checktrainerflag TRAINER_BRAWLY_2
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_8
	goto OakLab_Text_ProfOakFemalePlayer_3

OakLab_Text_ProfOakFemalePlayer_12:
	checktrainerflag TRAINER_FLANNERY_2
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_2
	goto OakLab_Text_ProfOakFemalePlayer_3

OakLab_Text_ProfOakFemalePlayer_13:
	checktrainerflag TRAINER_WATTSON_4
	goto_if 1, OakLab_Text_ProfOakFemalePlayer_12
	goto OakLab_Text_ProfOakFemalePlayer_3

OakLab_Text_ProfOakFemalePlayer_17:
	goto OakLab_Text_ProfOakProperBattle
	goto OakLab_Text_ProfOakFemalePlayer_1


OakLab_Text_ProfOakProperBattle::
	trainerbattle_single TRAINER_NORMAN_4, OakLab_Text_ProfOakProperBattle_Text_0, OakLab_Text_ProfOakProperBattle_Text_1, OakLab_Text_ProfOakPostBattle
	return


OakLab_Text_ProfOakPostBattle::
	msgbox OakLab_Text_ProfOakPostBattle_Text_0
	giveitem ITEM_OAKS_PARCEL
	msgbox OakLab_Text_ProfOakPostBattle_Text_1
	release
	end


OakLab_Text_ScientistF_Text_0:
	.string "We are the top class of Scientist in\n"
	.string "the world. Yet we are only a team of\l"
	.string "four...\l"
	.string "{PLAYER}: Like GAMEFREAK?$"

OakLab_Text_Scientist1_Text_0:
	.string "We sent a POKéDEX to PROF. BIRCH a few\n"
	.string "month ago. Hummm... Looks like he gave\l"
	.string "it to you ? Seriously ?$"

OakLab_Text_Scientist2_Text_0:
	.string "You know PROF. OAK's grandchildren are\n"
	.string "really adventurous: DAISY is mapping\l"
	.string "the whole REGIONS. And BLUE was\l"
	.string "KANTO's CHAMPION for five minutes. I\l"
	.string "heard he kept crying somewhere...$"

OakLab_Text_ProfOak_Text_0:
	.string "Well {PLAYER}, how is your quest\n"
	.string "doing?$"

OakLab_Text_ProfOak_Text_1:
	.string "Hello, who are you?\n"
	.string ".........................\l"
	.string "So {PLAYER}, BIRCH gave you a\l"
	.string "POKéDEX?\l"
	.string "You know it's my device?\l"
	.string "What you are HOENN's CHAMPION?\l"
	.string "I can probably help you in your\l"
	.string "quest!\l"
	.string "But before that did you fought\l"
	.string "against all the GYM LEADER?$"

OakLab_Text_ProfOakMalePlayer_Text_0:
	.string "Ahah you couldn't fought against\n"
	.string "ERIKA? Well I've heard that she\l"
	.string "don't let boys coming in her GYM,\l"
	.string "so it doesn't matter.\l"
	.string "Anyway, since you came here, I\l"
	.string "need to test you myself!\l"
	.string "Are you ready?$"

OakLab_Text_ProfOakMalePlayer_Text_1:
	.string "Get ready and come back to me then\n"
	.string "{PLAYER}!$"

OakLab_Text_ProfOakMalePlayer_Text_2:
	.string "Looks like you haven't fought\nagainst the GYM LEADERS...\lI think if you go to their CITIES,\lyou'll have some clue about their\llocation.$"

OakLab_Text_ProfOakFemalePlayer_Text_0:
	.string "Ah! Perfect!\n"
	.string "You really are a skilled TRAINER!\l"
	.string "Well, since you came here, I\l"
	.string "need to test you myself!\l"
	.string "Are you ready?$"

OakLab_Text_ProfOakProperBattle_Text_0:
	.string "It feel revigorating!$"

OakLab_Text_ProfOakProperBattle_Text_1:
	.string "Great great!$"

OakLab_Text_ProfOakPostBattle_Text_0:
	.string "You are strong enough to get this\nobject.$"

OakLab_Text_ProfOakPostBattle_Text_1:
	.string "Urh... I don't really like asking you\n"
	.string "to do errands, but can you bring that\l"
	.string "to my old friend KURT in AZALEA?\l"
	.string "Yes it's in JOHTO; you should be able\l"
	.string "to reach the REGION through the gates\l"
	.string "in ROUTE 22.$"
