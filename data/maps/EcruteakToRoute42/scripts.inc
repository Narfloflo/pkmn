EcruteakToRoute42_MapScripts::
	.byte 0


EcruteakToRoute42_Text_ReloadGuy::
	lock
	faceplayer
	msgbox EcruteakToRoute42_Text_ReloadGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakToRoute42_Text_ReloadGuy_2
	msgbox EcruteakToRoute42_Text_ReloadGuy_Text_2, MSGBOX_NPC
EcruteakToRoute42_Text_ReloadGuy_1:
	release
	end

EcruteakToRoute42_Text_ReloadGuy_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_DYLAN_2
	cleartrainerflag TRAINER_ERNEST_3
	cleartrainerflag TRAINER_ERNEST_4
	cleartrainerflag TRAINER_CORY_2
	cleartrainerflag TRAINER_CORY_3
	cleartrainerflag TRAINER_CORY_4
	cleartrainerflag TRAINER_EDWIN_2
	cleartrainerflag TRAINER_EDWIN_3
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox EcruteakToRoute42_Text_ReloadGuy_Text_1, MSGBOX_NPC
	goto EcruteakToRoute42_Text_ReloadGuy_1


EcruteakToRoute42_Text_Police::
	msgbox EcruteakToRoute42_Text_Police_Text_0, MSGBOX_NPC
	end


EcruteakToRoute42_Text_ReloadGuy_Text_0:
	.string "Who am I?\nJust your friendly neighborhood\lRematch guy!\lIf you want I can ask all the TRAINERS\lin ROUTE 42 and MT. MORTAR to offer\lyou a rematch.\lWhat do you think?$"

EcruteakToRoute42_Text_ReloadGuy_Text_1:
	.string "Alright done! I asked them to pretend\nthey've never seen you before.$"

EcruteakToRoute42_Text_ReloadGuy_Text_2:
	.string "Well if you can't train, don't blame\nme!$"

EcruteakToRoute42_Text_Police_Text_0:
	.string "Mt. MORTAR is like a maze inside.\nBe careful don't get lost in there.$"
