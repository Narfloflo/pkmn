slatedockcopy_MapScripts::
	.byte 0

SlateportDocksInside_Text_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, SlateportDocksInside_Text_Sailor_2
	msgbox SlateportDocksInside_Text_Sailor_Text_0, MSGBOX_NPC
	end

	release
	end

SlateportDocksInside_Text_Sailor_2:
	call SlateportDocksInside_Text_Choice
	release
	end


SlateportDocksInside_Text_Choice::
	msgbox SlateportDocksInside_Text_Choice_Text_0, MSGBOX_AUTOCLOSE
	multichoice 20, 8, MULTI_UNUSED_9, TRUE
	switch VAR_RESULT
	case 0, SlateportDocksInside_Text_Choice_3
	case 1, SlateportDocksInside_Text_Choice_4
	case 2, SlateportDocksInside_Text_Choice_5
SlateportDocksInside_Text_Choice_1:
	return

SlateportDocksInside_Text_Choice_3:
	call SlateportDocksInside_Text_WarpToJohto
	goto SlateportDocksInside_Text_Choice_1

SlateportDocksInside_Text_Choice_4:
	call SlateportDocksInside_Text_WarpToKanto
	goto SlateportDocksInside_Text_Choice_1

SlateportDocksInside_Text_Choice_5:
	call SlateportDocksInside_Text_Exit
	goto SlateportDocksInside_Text_Choice_1


SlateportDocksInside_Text_Exit::
	msgbox SlateportDocksInside_Text_Exit_Text_0, MSGBOX_NPC
	end


SlateportDocksInside_Text_WarpToKanto::
	msgbox SlateportDocksInside_Text_WarpToKanto_Text_0, MSGBOX_AUTOCLOSE
	applymovement 1, SlateportDocksInside_Move_moveToShip
	applymovement OBJ_EVENT_ID_PLAYER, SlateportDocksInside_Move_MoveInShip
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_RG_SS_ANNE_HORN
	waitse
	delay 12
	warp MAP_VERMILION, 16, 51
	fadescreen FADE_FROM_BLACK
	end


SlateportDocksInside_Text_WarpToJohto::
	msgbox SlateportDocksInside_Text_WarpToKanto_Text_0, MSGBOX_AUTOCLOSE
	applymovement 1, SlateportDocksInside_Move_moveToShip
	applymovement OBJ_EVENT_ID_PLAYER, SlateportDocksInside_Move_MoveInShip
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_RG_SS_ANNE_HORN
	waitse
	delay 12
	warp MAP_OLIVINE_CITY_PORT, 6, 16
	fadescreen FADE_FROM_BLACK
	end


SlateportDocksInside_Move_moveToShip:
	walk_left
	face_right
	step_end

SlateportDocksInside_Move_MoveInShip:
	walk_up
	walk_up
	set_invisible
	step_end

SlateportDocksInside_Text_Salaryman::
	msgbox SlateportDocksInside_Text_Salaryman_Text_0, MSGBOX_NPC
	end


SlateportDocksInside_Text_Beauty::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, SlateportDocksInside_Text_Beauty_2
	msgbox SlateportDocksInside_Text_Beauty_Text_1
SlateportDocksInside_Text_Beauty_1:
	release
	end

SlateportDocksInside_Text_Beauty_2:
	msgbox SlateportDocksInside_Text_Beauty_Text_0
	goto SlateportDocksInside_Text_Beauty_1


SlateportDocksInside_Text_Man2::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, SlateportDocksInside_Text_Man2_2
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SlateportDocksInside_Text_Man2_3
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, SlateportDocksInside_Text_Man2_4
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, SlateportDocksInside_Text_Man2_5
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, SlateportDocksInside_Text_Man2_6
	msgbox SlateportDocksInside_Text_Man2_Text_4
SlateportDocksInside_Text_Man2_1:
	release
	end

SlateportDocksInside_Text_Man2_2:
	msgbox SlateportDocksInside_Text_Man2_Text_0
	goto SlateportDocksInside_Text_Man2_1

SlateportDocksInside_Text_Man2_3:
	msgbox SlateportDocksInside_Text_Man2_Text_1
	goto SlateportDocksInside_Text_Man2_1

SlateportDocksInside_Text_Man2_4:
	msgbox SlateportDocksInside_Text_Man2_Text_2
	goto SlateportDocksInside_Text_Man2_1

SlateportDocksInside_Text_Man2_5:
	msgbox SlateportDocksInside_Text_Man2_Text_3
	goto SlateportDocksInside_Text_Man2_1

SlateportDocksInside_Text_Man2_6:
	msgbox SlateportDocksInside_Text_Man2_Text_4
	goto SlateportDocksInside_Text_Man2_1


SlateportDocksInside_Text_Sailor_Text_0:
	.string "I'm sorry but I can't take you to\nKANTO. You don't have a TICKET and you\lare a nobody.\pSorry.$"

SlateportDocksInside_Text_Choice_Text_0:
	.string "Oh! The famous TRAINER {PLAYER}!\nIt would be an honour to bring you to\lKANTO or JOHTO!\lAre you willing to go onboard?$"

SlateportDocksInside_Text_Exit_Text_0:
	.string "Another time then!$"

SlateportDocksInside_Text_WarpToKanto_Text_0:
	.string "Please, come in!$"

SlateportDocksInside_Text_Salaryman_Text_0:
	.string "I need a ticket to JOHTO, but\napparently the boat is full...$"

SlateportDocksInside_Text_Beauty_Text_0:
	.string "Oh seems like you are strong enough to\n"
	.string "go to KANTO freely ! Amazing Right ?$"

SlateportDocksInside_Text_Beauty_Text_1:
	.string "Hello, you want a ticket for KANTO ? Well\n"
	.string "unfortunatly we sold them all...$"

SlateportDocksInside_Text_Man2_Text_0:
	.string "I'M REALLY MAD RIGHT NOW ! WHERE IS THE\n"
	.string "FERRY !!???$"

SlateportDocksInside_Text_Man2_Text_1:
	.string "My friend is coming in a minute... Yeah in\n"
	.string "a minute...\p"
	.string "SIGH !$"

SlateportDocksInside_Text_Man2_Text_2:
	.string "Huh I think there is something wrong\n"
	.string "with the FERRY ! I'm starting to lose my\l"
	.string "temper !!$"

SlateportDocksInside_Text_Man2_Text_3:
	.string "It seems that the FERRY is delayed. But\n"
	.string "it's fine, I can wait a bit longer for my\l"
	.string "friend.$"

SlateportDocksInside_Text_Man2_Text_4:
	.string "Hi, I'm waiting for a friend coming from\n"
	.string "KANTO. He should come in a few\l"
	.string "minutes...$"
