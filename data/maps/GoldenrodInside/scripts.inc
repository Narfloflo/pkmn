GoldenrodInside_MapScripts::
	.byte 0


GoldenrodInside_Text_Whitney::
	lock
	faceplayer
	checktrainerflag TRAINER_BRAWLY_3
	goto_if 0, GoldenrodInside_Text_Whitney_2
	checktrainerflag TRAINER_BRAWLY_3
	goto_if 1, GoldenrodInside_Text_Whitney_3
GoldenrodInside_Text_Whitney_1:
	release
	end

GoldenrodInside_Text_Whitney_2:
	msgbox GoldenrodInside_Text_Whitney_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq GoldenrodInside_Text_Whitney_6
	msgbox GoldenrodInside_Text_Whitney_Text_1
	goto GoldenrodInside_Text_Whitney_1

GoldenrodInside_Text_Whitney_3:
	goto GoldenrodInside_Text_WhitneyRematch
	goto GoldenrodInside_Text_Whitney_1

GoldenrodInside_Text_Whitney_6:
	goto GoldenrodInside_Text_WhitneyFight
	goto GoldenrodInside_Text_Whitney_1


GoldenrodInside_Text_WhitneyFight::
	trainerbattle_single TRAINER_BRAWLY_3, GoldenrodInside_Text_WhitneyFight_Text_0, GoldenrodInside_Text_WhitneyFight_Text_1
	release
	end


GoldenrodInside_Text_WhitneyRematch::
	msgbox GoldenrodInside_Text_WhitneyRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq GoldenrodInside_Text_WhitneyRematch_2
	msgbox GoldenrodInside_Text_WhitneyRematch_Text_1
GoldenrodInside_Text_WhitneyRematch_1:
	release
	end

GoldenrodInside_Text_WhitneyRematch_2:
	cleartrainerflag TRAINER_BRAWLY_3
	trainerbattle_single TRAINER_BRAWLY_3, GoldenrodInside_Text_WhitneyFight_Text_0, GoldenrodInside_Text_WhitneyFight_Text_1
	goto GoldenrodInside_Text_WhitneyRematch_1


GoldenrodInside_Text_WhitneyFriend::
	lock
	faceplayer
	msgbox GoldenrodInside_Text_WhitneyFriend_Text_0
	release
	end


GoldenrodInside_Text_Whitney_Text_0:
	.string "I know, I closed the GYM and people are\n"
	.string "lining up to fight me. They will be\l"
	.string "disappointed because I'm having a\l"
	.string "snack. Huh, you still are looking for\l"
	.string "murder ?$"

GoldenrodInside_Text_Whitney_Text_1:
	.string "My sweets are waiting for me !$"

GoldenrodInside_Text_WhitneyFight_Text_0:
	.string "Haha I'll crush you so hard !$"

GoldenrodInside_Text_WhitneyFight_Text_1:
	.string "You really are strong !$"

GoldenrodInside_Text_WhitneyRematch_Text_0:
	.string "I'm ordering a tea and a cheesecake.\n"
	.string "Wanna fight again while I'm waiting for\l"
	.string "it ?$"

GoldenrodInside_Text_WhitneyRematch_Text_1:
	.string "You know where to find me if you change\n"
	.string "your mind.$"

GoldenrodInside_Text_WhitneyFriend_Text_0:
	.string "I don't know what to choose. Curry or\n"
	.string "Spaghetti ? Either way, it's not very\l"
	.string "cute right ?$"
