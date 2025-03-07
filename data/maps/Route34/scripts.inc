Route34_MapScripts::
	.byte 0


Route34_Text_Jeanlouis::
	lock
	faceplayer
	checktrainerflag TRAINER_ROSE_2
	goto_if 0, Route34_Text_Jeanlouis_2
	goto Route34_Text_JeanlouisRematch
Route34_Text_Jeanlouis_1:
	release
	end

Route34_Text_Jeanlouis_2:
	goto Route34_Text_JeanlouisFight
	goto Route34_Text_Jeanlouis_1


Route34_Text_JeanlouisFight::
	msgbox Route34_Text_JeanlouisFight_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route34_Text_JeanlouisFight_2
	msgbox Route34_Text_JeanlouisFight_Text_3
Route34_Text_JeanlouisFight_1:
	release
	end

Route34_Text_JeanlouisFight_2:
	trainerbattle_single TRAINER_ROSE_2, Route34_Text_JeanlouisFight_Text_1, Route34_Text_JeanlouisFight_Text_2
	goto Route34_Text_JeanlouisFight_1


Route34_Text_JeanlouisRematch::
	msgbox Route34_Text_JeanlouisRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route34_Text_JeanlouisRematch_2
	msgbox Route34_Text_JeanlouisRematch_Text_2
Route34_Text_JeanlouisRematch_1:
	release
	end

Route34_Text_JeanlouisRematch_2:
	cleartrainerflag TRAINER_ROSE_2
	trainerbattle_single TRAINER_ROSE_2, Route34_Text_JeanlouisRematch_Text_1, Route34_Text_JeanlouisFight_Text_2
	goto Route34_Text_JeanlouisRematch_1


Route34_Text_Pokefan::
	trainerbattle_double TRAINER_ROBERT_2, Route34_Text_Pokefan_Text_0, Route34_Text_Pokefan_Text_1, Route34_Text_Pokefan_Text_2
	msgbox Route34_Text_Pokefan_Text_3, MSGBOX_NPC
	end


Route34_Text_Youngster::
	trainerbattle_single TRAINER_ROBERT_3, Route34_Text_Pokefan_Text_0, Route34_Text_Pokefan_Text_1
	msgbox Route34_Text_Pokefan_Text_3, MSGBOX_NPC
	end


Route34_Text_Picnicker::
	trainerbattle_double TRAINER_ROBERT_4, Route34_Text_Pokefan_Text_0, Route34_Text_Pokefan_Text_1, Route34_Text_Pokefan_Text_2
	msgbox Route34_Text_Pokefan_Text_3, MSGBOX_NPC
	end


Route34_Text_Cooltrainer::
	trainerbattle_single TRAINER_LAO_2, Route34_Text_Pokefan_Text_0, Route34_Text_Pokefan_Text_1
	msgbox Route34_Text_Pokefan_Text_3, MSGBOX_NPC
	end


Route34_Text_LittleKid::
	msgbox Route34_Text_LittleKid_Text_0, MSGBOX_NPC
	end


Route34_Text_LittleGirl::
	lock
	faceplayer
	msgbox Route34_Text_LittleGirl_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route34_Text_LittleGirl_2
	msgbox Route34_Text_LittleGirl_Text_2
Route34_Text_LittleGirl_1:
	release
	end

Route34_Text_LittleGirl_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_ROBERT_2
	cleartrainerflag TRAINER_ROBERT_3
	cleartrainerflag TRAINER_ROBERT_4
	cleartrainerflag TRAINER_LAO_2
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox Route34_Text_LittleGirl_Text_1
	goto Route34_Text_LittleGirl_1


Route34_Text_Girl::
	msgbox Route34_Text_Girl_Text_0, MSGBOX_NPC
	end


Route34_Text_JeanlouisFight_Text_0:
	.string "I'm patrolling around here. Criminality\n"
	.string "in JOHTO is low, what about a quick\l"
	.string "battle ?$"

Route34_Text_JeanlouisFight_Text_1:
	.string "You are defying the authorities ?$"

Route34_Text_JeanlouisFight_Text_2:
	.string "I'll keep an eye on you punk !$"

Route34_Text_JeanlouisFight_Text_3:
	.string "Yes, you fear the authorities!$"

Route34_Text_JeanlouisRematch_Text_0:
	.string "You are still around doing mischieves?\n"
	.string "Do you have some time for a BATTLE ?$"

Route34_Text_JeanlouisRematch_Text_1:
	.string "I can't lose again !$"

Route34_Text_JeanlouisRematch_Text_2:
	.string "Yes, you fear the authorities !$"

Route34_Text_Pokefan_Text_0:
	.string "Hey!$"

Route34_Text_Pokefan_Text_1:
	.string "Arg$"

Route34_Text_Pokefan_Text_2:
	.string "Nope$"

Route34_Text_Pokefan_Text_3:
	.string "Damn!$"

Route34_Text_LittleKid_Text_0:
	.string "I'm looking for an ABRA.\nBut everytime I get close to it, it\luses TELEPORT!$"

Route34_Text_LittleGirl_Text_0:
	.string "Hey! Looks like you beat all my friend\non ROUTE 34?\lYou want me to call them to have a\lrematch?$"

Route34_Text_LittleGirl_Text_1:
	.string "It's done!\nThey'll pretend they've never fought\lwith you. Teehee!\l{PLAYER}: Urgh!$"

Route34_Text_LittleGirl_Text_2:
	.string "No? Ok no worry.\nThey should train some more anyway and\llearn the basics of battle in school.$"

Route34_Text_Girl_Text_0:
	.string "You find our secret training place!\nYou are lucky I'm still not a TRAINER\lYET.\lYou'll see in a few years, you'll\lsee...$"
