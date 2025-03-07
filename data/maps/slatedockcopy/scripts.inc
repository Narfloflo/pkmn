slatedockcopy_MapScripts::
	.byte 0

SailorToKanto::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, SailorToKanto_2
	msgbox SailorToKanto_Text_3
SailorToKanto_1:
	release
	end

SailorToKanto_2:
	msgbox SailorToKanto_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SailorToKanto_5
	msgbox SailorToKanto_Text_2
	goto SailorToKanto_1

SailorToKanto_5:
	msgbox SailorToKanto_Text_1
	applymovement 1, moveToShip
	applymovement OBJ_EVENT_ID_PLAYER, MoveInShip
	waitmovement 0
	call WarpToKanto
	goto SailorToKanto_1


WarpToKanto::
	fadescreen FADE_TO_BLACK
	playse SE_RG_SS_ANNE_HORN
	delay 60
	warp MAP_VERMILION, 16, 51
	fadescreen FADE_FROM_BLACK
	return


moveToShip:
	walk_left
	face_right
	step_end

MoveInShip:
	walk_up
	walk_up
	set_invisible
	step_end

SlateportDocksInside_Text_Salaryman::
	lock
	faceplayer
	msgbox SlateportDocksInside_Text_Salaryman_Text_0
	release
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


SailorToKanto_Text_0:
	.string "Oh ! The famous TRAINER {PLAYER} ! It\n"
	.string "would be an honour to bring you to\l"
	.string "KANTO. Are you with us for this travel ?$"

SailorToKanto_Text_1:
	.string "Please, come in !$"

SailorToKanto_Text_2:
	.string "Another time then !$"

SailorToKanto_Text_3:
	.string "I'm sorry but I can't take you to KANTO.\n"
	.string "You don't have a TICKET and you are a\l"
	.string "nobody. Sorry.$"

SlateportDocksInside_Text_Salaryman_Text_0:
	.string "I need a ticket to JOHTO, but\n"
	.string "apparently the DOCKS aren't here, but\l"
	.string "close to MAUVILLE CITY.$"

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
