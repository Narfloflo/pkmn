slatedockcopy_MapScripts::
	.byte 0

SailorToKanto::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, SailorToKanto_2
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
	warp MAP_VERMILION, 16, 45
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

SailorToKanto_Text_0:
	.string "So you beat all the CHAMPIONS of HOENN,\n"
	.string "good. I can take you to KANTO, only if\l"
	.string "you want.$"

SailorToKanto_Text_1:
	.string "Please, come in !$"

SailorToKanto_Text_2:
	.string "Another time then !$"

SailorToKanto_Text_3:
	.string "I'm sorry but I can't take you to KANTO.\n"
	.string "You haven't receive all the BADGES.\l"
	.string "Come once you have them all.$"
