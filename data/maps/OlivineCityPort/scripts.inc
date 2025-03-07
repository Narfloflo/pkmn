OlivineCityPort_MapScripts::
	.byte 0


OlivineCityPort_Text_Sidney::
	lock
	faceplayer
	msgbox OlivineCityPort_Text_Sidney_Text_0
	release
	end


OlivineCityPort_Text_Guy::
	lock
	faceplayer
	msgbox OlivineCityPort_Text_Guy_Text_0
	release
	end


OlivineCityPort_Text_Girl::
	lock
	faceplayer
	msgbox OlivineCityPort_Text_Girl_Text_0
	release
	end


OlivineCityPort_Text_SailorToHoenn2::
	lock
	faceplayer
	msgbox OlivineCityPort_Text_SailorToHoenn2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne OlivineCityPort_Text_SailorToHoenn2_2
	msgbox OlivineCityPort_Text_SailorToHoenn2_Text_2
OlivineCityPort_Text_SailorToHoenn2_1:
	release
	end

OlivineCityPort_Text_SailorToHoenn2_2:
	msgbox OlivineCityPort_Text_SailorToHoenn2_Text_1
	call OlivineCityPort_Text_WarpToHoenn
	goto OlivineCityPort_Text_SailorToHoenn2_1


OlivineCityPort_Text_WarpToHoenn::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_BEACH_SIDE, 69, 21
	fadescreen FADE_FROM_BLACK
	return


OlivineCityPort_Text_Sidney_Text_0:
	.string "Oh hello {PLAYER} how are you?..... Me?\n"
	.string "Well I'm exploring the lands of JOHTO\l"
	.string "and KANTO a little bit. The world is\l"
	.string "vast and I should not be limited to\l"
	.string "HOENN.\p"
	.string "Somehow the ship to KANTO is late... It's\n"
	.string "annoying.$"

OlivineCityPort_Text_Guy_Text_0:
	.string "FAST SHIP S.S. AQUA sails to KANTO on\n"
	.string "Mondays and Fridays.\p"
	.string "But it seems to be delayed...$"

OlivineCityPort_Text_Girl_Text_0:
	.string "There are a lot of POKEMON in KANTO. I\n"
	.string "wish I could go...$"

OlivineCityPort_Text_SailorToHoenn2_Text_0:
	.string "Want to go Back to HOENN ?$"

OlivineCityPort_Text_SailorToHoenn2_Text_1:
	.string "Here we go!$"

OlivineCityPort_Text_SailorToHoenn2_Text_2:
	.string "I'm standing right here !$"
