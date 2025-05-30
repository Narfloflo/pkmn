IceGrotto_MapScripts::
	.byte 0


IceGrotto_Text_Pryce::
	lock
	faceplayer
	checktrainerflag TRAINER_WINONA_3
	goto_if 0, IceGrotto_Text_Pryce_2
	checktrainerflag TRAINER_WINONA_3
	goto_if 1, IceGrotto_Text_Pryce_3
IceGrotto_Text_Pryce_1:
	release
	end

IceGrotto_Text_Pryce_2:
	msgbox IceGrotto_Text_Pryce_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq IceGrotto_Text_Pryce_6
	msgbox IceGrotto_Text_Pryce_Text_1
	goto IceGrotto_Text_Pryce_1

IceGrotto_Text_Pryce_3:
	goto IceGrotto_Text_PryceRematch
	goto IceGrotto_Text_Pryce_1

IceGrotto_Text_Pryce_6:
	goto IceGrotto_Text_PryceFight
	goto IceGrotto_Text_Pryce_1


IceGrotto_Text_PryceFight::
	trainerbattle_single TRAINER_WINONA_3, IceGrotto_Text_PryceFight_Text_0, IceGrotto_Text_PryceFight_Text_1
	release
	end


IceGrotto_Text_PryceRematch::
	msgbox IceGrotto_Text_PryceRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq IceGrotto_Text_PryceRematch_2
	msgbox IceGrotto_Text_PryceRematch_Text_1
IceGrotto_Text_PryceRematch_1:
	release
	end

IceGrotto_Text_PryceRematch_2:
	cleartrainerflag TRAINER_WINONA_3
	trainerbattle_single TRAINER_WINONA_3, IceGrotto_Text_PryceFight_Text_0, IceGrotto_Text_PryceFight_Text_1
	goto IceGrotto_Text_PryceRematch_1


IceGrotto_Text_RematchGuy::
	lock
	faceplayer
	msgbox IceGrotto_Text_RematchGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq IceGrotto_Text_RematchGuy_2
	msgbox IceGrotto_Text_RematchGuy_Text_2, MSGBOX_NPC
IceGrotto_Text_RematchGuy_1:
	release
	end

IceGrotto_Text_RematchGuy_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_EDWIN_4
	cleartrainerflag TRAINER_LYDIA_2
	cleartrainerflag TRAINER_LYDIA_3
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox IceGrotto_Text_RematchGuy_Text_1, MSGBOX_NPC
	goto IceGrotto_Text_RematchGuy_1


IceGrotto_Text_Pryce_Text_0:
	.string "Huh, a kid...\nYou want to go to MAHOGANY's GYM?\lWell it's closed. I'm training now. I\lheard the new CHAMPION of KANTO is some\lstrong kid.\lHuh, wait, you can help me. Do you\lwanna train with me?$"

IceGrotto_Text_Pryce_Text_1:
	.string "Well let that old man die then!$"

IceGrotto_Text_PryceFight_Text_0:
	.string "Be careful of frostbites!$"

IceGrotto_Text_PryceFight_Text_1:
	.string "I'm amazed!$"

IceGrotto_Text_PryceRematch_Text_0:
	.string "I'm not good enough...\nI need to train myself harder!\lWanna help me?$"

IceGrotto_Text_PryceRematch_Text_1:
	.string "You know where to find me if you\nchange your mind.$"

IceGrotto_Text_RematchGuy_Text_0:
	.string "Who am I?\nJust your friendly neighborhood\lRematch guy!\lIf you want I can ask all the TRAINERS\lin ROUTE 43 to offer\lyou a rematch.\lWhat do you think?$"

IceGrotto_Text_RematchGuy_Text_1:
	.string "Alright done! I asked them to pretend\nthey've never seen you before.$"

IceGrotto_Text_RematchGuy_Text_2:
	.string "Well if you can't train, don't blame\nme!$"
