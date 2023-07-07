Junction103117_Cave_2_MapScripts::
	.byte 0


MewCave_Expert_Text::
	lock
	faceplayer
	msgbox MewCave_Expert_Text_Text_0
	goto_if_set FLAG_IS_CHAMPION, MewCave_Expert_Text_1
	release
	end

MewCave_Expert_Text_1:
	trainerbattle_single TRAINER_EXPERT_JUNCTION_CAVE, Elga_Intro, Elga_Outro, MewMap
	msgbox ElgaLost, MSGBOX_AUTOCLOSE
	release
	end


MewMap::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MewMap_Text_0
	giveitem ITEM_OLD_SEA_MAP
	release
	end


MewCave_Expert_Text_Text_0:
	.string "Who are you? What? Huh? Leave me\n"
	.string "alone!...$"

MewMap_Text_0:
	.string "Take this, it's my curse!...$"

Elga_Intro::
	.string "What? You fought all the ELITE FOUR by\n"
	.string "yourself? Well........\p"
	.string "COME AND GET ME!!$"

Elga_Outro::
	.string "Ah.. Ah! Ahahaha!!$"

ElgaLost::
	.string "Please Leave me...$"
