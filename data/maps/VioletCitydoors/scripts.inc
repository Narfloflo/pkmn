VioletCitydoors_MapScripts::
	.byte 0


VioletCitydoors_Text_Lass::
	lock
	faceplayer
	msgbox VioletCitydoors_Text_Lass_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq VioletCitydoors_Text_Lass_2
	msgbox VioletCitydoors_Text_Lass_Text_2
VioletCitydoors_Text_Lass_1:
	release
	end

VioletCitydoors_Text_Lass_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_KATELYN_2
	cleartrainerflag TRAINER_KATELYN_3
	cleartrainerflag TRAINER_KATELYN_4
	cleartrainerflag TRAINER_BENJAMIN_2
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox VioletCitydoors_Text_Lass_Text_1
	goto VioletCitydoors_Text_Lass_1


VioletCitydoors_Text_Police::
	msgbox VioletCitydoors_Text_Police_Text_0, MSGBOX_NPC
	end


VioletCitydoors_Text_Lass_Text_0:
	.string "Hey! Looks like you beat all my friend\non ROUTE 30 and 31?\lYou want me to call them to have a\lrematch?$"

VioletCitydoors_Text_Lass_Text_1:
	.string "It's done!\nThey'll pretend they've never fought\lwith you. Teehee!\l{PLAYER}: Urgh!$"

VioletCitydoors_Text_Lass_Text_2:
	.string "No? Ok no worry.\nThey should train some more anyway and\llearn the basics of battle in school.$"

VioletCitydoors_Text_Police_Text_0:
	.string "You are entering VIOLET CITY.\nYou can visit the SPROUT TOWER and the\lSCHOOL.\lOh yeah, the GYM is closed.\lVIOLET's LEADER left for a journey.\lBut his son, FALKNER, should be in\lcharge. He is training I think.$"
