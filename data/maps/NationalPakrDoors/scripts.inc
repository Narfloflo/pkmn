NationalPakrDoors_MapScripts::
	.byte 0


NationalParkDoors_Text_Bugsy::
	lock
	faceplayer
	checktrainerflag TRAINER_WATTSON_3
	goto_if 0, NationalParkDoors_Text_Bugsy_2
	checktrainerflag TRAINER_WATTSON_3
	goto_if 1, NationalParkDoors_Text_Bugsy_3
NationalParkDoors_Text_Bugsy_1:
	release
	end

NationalParkDoors_Text_Bugsy_2:
	msgbox NationalParkDoors_Text_Bugsy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NationalParkDoors_Text_Bugsy_6
	msgbox NationalParkDoors_Text_Bugsy_Text_1
	goto NationalParkDoors_Text_Bugsy_1

NationalParkDoors_Text_Bugsy_3:
	goto NationalParkDoors_Text_BugsyRematch
	goto NationalParkDoors_Text_Bugsy_1

NationalParkDoors_Text_Bugsy_6:
	goto NationalParkDoors_Text_BugsyFight
	goto NationalParkDoors_Text_Bugsy_1


NationalParkDoors_Text_BugsyFight::
	trainerbattle_single TRAINER_WATTSON_3, NationalParkDoors_Text_BugsyFight_Text_0, NationalParkDoors_Text_BugsyFight_Text_1
	release
	end


NationalParkDoors_Text_BugsyRematch::
	msgbox NationalParkDoors_Text_BugsyRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NationalParkDoors_Text_BugsyRematch_2
	msgbox NationalParkDoors_Text_BugsyRematch_Text_1
NationalParkDoors_Text_BugsyRematch_1:
	release
	end

NationalParkDoors_Text_BugsyRematch_2:
	cleartrainerflag TRAINER_WATTSON_3
	trainerbattle_single TRAINER_WATTSON_3, NationalParkDoors_Text_BugsyFight_Text_0, NationalParkDoors_Text_BugsyFight_Text_1
	goto NationalParkDoors_Text_BugsyRematch_1


NationalParkDoors_Text_Bugsy_Text_0:
	.string "Hello, I'm currently dealing with this\n"
	.string "guy here because I want to create a\l"
	.string "contest in the NATIONAL PARK. I would\l"
	.string "be a bug catching contest. Sound great\l"
	.string "right ? So, you wanna fight against me\l"
	.string "while the guard is filling the papers ?$"

NationalParkDoors_Text_Bugsy_Text_1:
	.string "Arf, you are not funny !$"

NationalParkDoors_Text_BugsyFight_Text_0:
	.string "Prepare yourself, it sting !$"

NationalParkDoors_Text_BugsyFight_Text_1:
	.string "Wow what a strength !$"

NationalParkDoors_Text_BugsyRematch_Text_0:
	.string "The guard still has a lot of papers to\n"
	.string "fill... I hate administrative stuff... Oh\l"
	.string "you wanna fight again ?$"

NationalParkDoors_Text_BugsyRematch_Text_1:
	.string "You know where to find me if you change\n"
	.string "your mind.$"
