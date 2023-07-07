BeachSide_MapScripts::
	.byte 0

SailorToJohto::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, SailorToJohto_2
	msgbox SailorToJohto_Text_3
SailorToJohto_1:
	release
	end

SailorToJohto_2:
	msgbox SailorToJohto_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SailorToJohto_5
	msgbox SailorToJohto_Text_2
	goto SailorToJohto_1

SailorToJohto_5:
	msgbox SailorToJohto_Text_1
	call WarpToJohto
	goto SailorToJohto_1


WarpToJohto::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_BEACH_SIDE2, 29, 46
	fadescreen FADE_FROM_BLACK
	return


SailorToJohto_Text_0:
	.string "Wanna go to JOHTO ?$"

SailorToJohto_Text_1:
	.string "Please, come in !$"

SailorToJohto_Text_2:
	.string "Another time then !$"

SailorToJohto_Text_3:
	.string "Hmm, you didn't receive all the BADGES.$"
