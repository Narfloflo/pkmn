MahoganyInside_MapScripts::
	.byte 0


MahoganyInside_Text_Koga::
	lock
	faceplayer
	checktrainerflag TRAINER_WATTSON_2
	goto_if 0, MahoganyInside_Text_Koga_2
	checktrainerflag TRAINER_WATTSON_2
	goto_if 1, MahoganyInside_Text_Koga_3
MahoganyInside_Text_Koga_1:
	release
	end

MahoganyInside_Text_Koga_2:
	msgbox MahoganyInside_Text_Koga_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MahoganyInside_Text_Koga_6
	msgbox MahoganyInside_Text_Koga_Text_1
	goto MahoganyInside_Text_Koga_1

MahoganyInside_Text_Koga_3:
	goto MahoganyInside_Text_KogaRematch
	goto MahoganyInside_Text_Koga_1

MahoganyInside_Text_Koga_6:
	goto MahoganyInside_Text_KogaFight
	goto MahoganyInside_Text_Koga_1


MahoganyInside_Text_KogaFight::
	trainerbattle_single TRAINER_WATTSON_2, MahoganyInside_Text_KogaFight_Text_0, MahoganyInside_Text_KogaFight_Text_1
	release
	end


MahoganyInside_Text_KogaRematch::
	msgbox MahoganyInside_Text_KogaRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MahoganyInside_Text_KogaRematch_2
	msgbox MahoganyInside_Text_KogaRematch_Text_1
MahoganyInside_Text_KogaRematch_1:
	release
	end

MahoganyInside_Text_KogaRematch_2:
	cleartrainerflag TRAINER_WATTSON_2
	trainerbattle_single TRAINER_WATTSON_2, MahoganyInside_Text_KogaFight_Text_0, MahoganyInside_Text_KogaFight_Text_1
	goto MahoganyInside_Text_KogaRematch_1


MahoganyTown_Text_BlackBelt1::
	lock
	faceplayer
	msgbox MahoganyTown_Text_BlackBelt1_Text_0
	release
	end


MahoganyTown_Text_Woman::
	lock
	faceplayer
	msgbox MahoganyTown_Text_Woman_Text_0
	release
	end


MahoganyTown_Text_BlackBelt2::
	lock
	faceplayer
	msgbox MahoganyTown_Text_BlackBelt2_Text_0
	release
	end


MahoganyTown_Text_OldVendor::
	lock
	faceplayer
	message MahoganyTown_Text_OldVendor_Text_0
	waitmessage
	pokemart MahoganyVendor
	msgbox MahoganyTown_Text_OldVendor_Text_1
	release
	return


	.align 2
MahoganyVendor:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_RAGE_CANDY
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_REVIVE
	.2byte ITEM_TROPIC_MAIL
	.2byte ITEM_NONE

MahoganyTown_Script_Secret::
	lock
	msgbox MahoganyTown_Script_Secret_Text_0
	applymovement 12, MahoganyOldWomanExclamation
	waitmovement 12
	call MahoganyTown_Script_PlayerMove
	return


MahoganyOldWomanExclamation:
	emote_exclamation_mark
	jump_in_place_right
	step_end

MahoganyTown_Script_PlayerMove::
	msgbox MahoganyTown_Script_PlayerMove_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyPlayerMove
	waitmovement 0
	release
	end


MahoganyPlayerMove:
	walk_fast_down
	step_end

MahoganyInside_Text_Koga_Text_0:
	.string "Who I am ? KOGA. Fifth generation of\n"
	.string "NINJA living in MAHOGANY TOWN. Yeah I\l"
	.string "live in FUSCHIA CITY, but it's my speech\l"
	.string "so... I meditating in my ancestors lands\l"
	.string "before moving to the ELITE FOUR.\l"
	.string "Whatever, I guess a young TRAINER like\l"
	.string "you is looking for a battle ?$"

MahoganyInside_Text_Koga_Text_1:
	.string "Don't forget to get an ANTIDOTE when\n"
	.string "you get out !$"

MahoganyInside_Text_KogaFight_Text_0:
	.string "A fine rehearsal before ELITE FOUR !$"

MahoganyInside_Text_KogaFight_Text_1:
	.string "Ahah ! Looks like I'm not\ngood enough !$"

MahoganyInside_Text_KogaRematch_Text_0:
	.string "You know LANCE sent me a letter about\n"
	.string "belonging to the ELITE FOUR.\l"
	.string "Apparently AGATHA is sick so they need\l"
	.string "someone else. Huh, you want another\l"
	.string "battle ?$"

MahoganyInside_Text_KogaRematch_Text_1:
	.string "...$"

MahoganyTown_Text_BlackBelt1_Text_0:
	.string "Fuh ! I went to the LAKE of RAGE. I got\n"
	.string "so wet. It's so rainy out there !$"

MahoganyTown_Text_Woman_Text_0:
	.string "Are you looking for PRYCE ? I think he\n"
	.string "is in a frosty cave training.$"

MahoganyTown_Text_BlackBelt2_Text_0:
	.string "I wonder; if I train so much, will I be\n"
	.string "able to survive an HYPER BEAM attack ?$"

MahoganyTown_Text_OldVendor_Text_0:
	.string "Fuh fuh fuh!\n"
	.string "Welcome kid !$"

MahoganyTown_Text_OldVendor_Text_1:
	.string "Come back again fuh fuh !$"

MahoganyTown_Script_Secret_Text_0:
	.string "{PLAYER}: What a strange buffet.\n"
	.string "Looks like there is something...$"

MahoganyTown_Script_PlayerMove_Text_0:
	.string "Hey ! Don't you dare touching that !\n"
	.string "It's... My precious heirloom from my\l"
	.string "grandma !$"
