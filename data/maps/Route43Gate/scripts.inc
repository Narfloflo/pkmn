Route43Gate_MapScripts::
	.byte 0


Route43Gate_Text_RematchGuy::
	msgbox Route43Gate_Text_RematchGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route43Gate_Text_RematchGuy_2
	msgbox Route43Gate_Text_RematchGuy_Text_2, MSGBOX_NPC
Route43Gate_Text_RematchGuy_1:
	release
	end

Route43Gate_Text_RematchGuy_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_LYDIA_4
	cleartrainerflag TRAINER_ISAAC_2
	cleartrainerflag TRAINER_ISAAC_3
	cleartrainerflag TRAINER_ISAAC_4
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox Route43Gate_Text_RematchGuy_Text_1, MSGBOX_NPC
	goto Route43Gate_Text_RematchGuy_1


Route43Gate_Text_Policeman::
	msgbox Route43Gate_Text_Policeman_Text_0, MSGBOX_NPC
	end


Route43Gate_Text_RematchGuy_Text_0:
	.string "Who am I?\nJust your friendly neighborhood\lRematch guy!\lIf you want I can ask all the TRAINERS\lin ROUTE 43 to offer\lyou a rematch.\lWhat do you think?$"

Route43Gate_Text_RematchGuy_Text_1:
	.string "Alright done! I asked them to pretend\nthey've never seen you before.$"

Route43Gate_Text_RematchGuy_Text_2:
	.string "Well if you can't train, don't blame\nme!$"

Route43Gate_Text_Policeman_Text_0:
	.string "Use this gate to avoid walking in the\ngrass.$"
