MtMortar_MapScripts::
	.byte 0


MtMortar_Text_Jasmine::
	lock
	faceplayer
	checktrainerflag TRAINER_NORMAN_2
	goto_if 0, MtMortar_Text_Jasmine_2
	checktrainerflag TRAINER_NORMAN_2
	goto_if 1, MtMortar_Text_Jasmine_3
MtMortar_Text_Jasmine_1:
	release
	end

MtMortar_Text_Jasmine_2:
	msgbox MtMortar_Text_Jasmine_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MtMortar_Text_Jasmine_6
	msgbox MtMortar_Text_Jasmine_Text_1
	goto MtMortar_Text_Jasmine_1

MtMortar_Text_Jasmine_3:
	goto MtMortar_Text_JasmineRematch
	goto MtMortar_Text_Jasmine_1

MtMortar_Text_Jasmine_6:
	goto MtMortar_Text_JasmineFight
	goto MtMortar_Text_Jasmine_1


MtMortar_Text_JasmineFight::
	trainerbattle_single TRAINER_NORMAN_2, MtMortar_Text_JasmineFight_Text_0, MtMortar_Text_JasmineFight_Text_1, MtMortar_Text_JasminePostFight
	release
	end


MtMortar_Text_JasminePostFight::
	msgbox MtMortar_Text_JasminePostFight_Text_0
	return


MtMortar_Text_JasmineRematch::
	msgbox MtMortar_Text_JasmineRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MtMortar_Text_JasmineRematch_2
	msgbox MtMortar_Text_JasmineRematch_Text_3
MtMortar_Text_JasmineRematch_1:
	release
	end

MtMortar_Text_JasmineRematch_2:
	cleartrainerflag TRAINER_NORMAN_2
	trainerbattle_single TRAINER_NORMAN_2, MtMortar_Text_JasmineRematch_Text_1, MtMortar_Text_JasmineRematch_Text_2
	goto MtMortar_Text_JasmineRematch_1


MtMortar_Text_Maniac1::
	trainerbattle_single TRAINER_CORY_2, MtMortar_Text_Maniac1_Text_0, MtMortar_Text_Maniac1_Text_1
	msgbox MtMortar_Text_Maniac1_Text_2, MSGBOX_NPC
	end


MtMortar_Text_Maniac2::
	trainerbattle_single TRAINER_CORY_3, MtMortar_Text_Maniac2_Text_0, MtMortar_Text_Maniac2_Text_1
	msgbox MtMortar_Text_Maniac2_Text_2, MSGBOX_NPC
	end


MtMortar_Text_Blackbelt::
	trainerbattle_single TRAINER_CORY_4, MtMortar_Text_Blackbelt_Text_0, MtMortar_Text_Blackbelt_Text_1
	msgbox MtMortar_Text_Blackbelt_Text_2, MSGBOX_NPC
	end


MtMortar_Text_Jasmine_Text_0:
	.string "{PLAYER}! You are back in JOHTO?!\n"
	.string "So how are you doing?\l"
	.string "....................\l"
	.string "Wow I'm impressed! What about me?\l"
	.string "Well I'm training here because I\l"
	.string "want to become a GYM lEADER!\l"
	.string "Since you left OLIVINE I've heard\l"
	.string "that you became a TRAINER. So I\l"
	.string "wanted to become one too!\l"
	.string "So, is HOENN's CHAMPION gonna help\l"
	.string "me achieve my dream?$"

MtMortar_Text_Jasmine_Text_1:
	.string "Oh you meanie!$"

MtMortar_Text_JasmineFight_Text_0:
	.string "Yeah! A proper fight !$"

MtMortar_Text_JasmineFight_Text_1:
	.string "I lost... But I'm not sad haha!$"

MtMortar_Text_JasminePostFight_Text_0:
	.string "You really are strong. I still\n"
	.string "have a long way to become a GYM\l"
	.string "LEADER.\l"
	.string "{PLAYER} you know you are really\l"
	.string "strong for a simple TRAINER! I'm\l"
	.string "pretty sure in a few months you'll\l"
	.string "be a GYM LEADER. Just send a mail\l"
	.string "to the LEAGUE, they'll approuve it\l"
	.string "I'm sure. I'll even support you!\l"
	.string "JASMINE: Thanks you {PLAYER}! You\l"
	.string "are the best!\l"
	.string "I'll still be training here until\l"
	.string "I learn something new!\l"
	.string "Thanks again!$"

MtMortar_Text_JasmineRematch_Text_0:
	.string "{PLAYER}, I'm still training, but\n"
	.string "I admit that fighting against you\l"
	.string "would help me improve my skills.\l"
	.string "Would you help me?$"

MtMortar_Text_JasmineRematch_Text_1:
	.string "Let me show you how I handle this\nsituation!$"

MtMortar_Text_JasmineRematch_Text_2:
	.string "I lose again...$"

MtMortar_Text_JasmineRematch_Text_3:
	.string "Oh ok, it's fine. I'll be there just in\n"
	.string "case you change your mind.$"

MtMortar_Text_Maniac1_Text_0:
	.string "Are you lost?$"

MtMortar_Text_Maniac1_Text_1:
	.string "Oh not again!$"

MtMortar_Text_Maniac1_Text_2:
	.string "I came to explore MT. MORTAR, but I got\nblasted by a KARATE master, then by\lyou.\lGrumbl...$"

MtMortar_Text_Maniac2_Text_0:
	.string "Are you also here to train?$"

MtMortar_Text_Maniac2_Text_1:
	.string "I don't think you need to train harder!$"

MtMortar_Text_Maniac2_Text_2:
	.string "There's a karate dude that battled me.\nHe was ridiculously good.\lHe just thrashed us silly. He went\lsomewhere saying it was for his\ltraining.\lI wonder how he is?$"

MtMortar_Text_Blackbelt_Text_0:
	.string "You will help me in my training.\nEn garde!$"

MtMortar_Text_Blackbelt_Text_1:
	.string "Yet another kid smashed me.$"

MtMortar_Text_Blackbelt_Text_2:
	.string "I bow to you.$"
