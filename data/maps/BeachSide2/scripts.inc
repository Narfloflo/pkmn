BeachSide2_MapScripts::
	.byte 0

SailorToHoenn2::
	lock
	faceplayer
	msgbox SailorToHoenn2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SailorToHoenn2_2
	msgbox SailorToHoenn2_Text_2
SailorToHoenn2_1:
	release
	end

SailorToHoenn2_2:
	msgbox SailorToHoenn2_Text_1
	call WarpToHoenn2
	goto SailorToHoenn2_1


WarpToHoenn2::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_BEACH_SIDE, 76, 43
	fadescreen FADE_FROM_BLACK
	return


OlivineCity_Text_SignHarbour::
	lock
	msgbox OlivineCity_Text_SignHarbour_Text_0
	release
	end


OlivineCity_Text_LighthouseSailor::
	lock
	faceplayer
	msgbox OlivineCity_Text_LighthouseSailor_Text_0
	release
	end


OlivineCity_Text_LighthouseSign::
	lock
	msgbox OlivineCity_Text_LighthouseSign_Text_0
	release
	end


OlivineCity_Text_PokedexBoy::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokedexBoy_Text_0
	release
	end


OlivineCity_Text_SignCity::
	lock
	msgbox OlivineCity_Text_SignCity_Text_0
	release
	end


OlivineCity_Text_Artist::
	lock
	faceplayer
	msgbox OlivineCity_Text_Artist_Text_0
	release
	end


OlivineCity_Text_Maniac::
	lock
	faceplayer
	msgbox OlivineCity_Text_Maniac_Text_0
	release
	end


OlivineCity_Text_LighthouseGuard::
	lock
	faceplayer
	msgbox OlivineCity_Text_LighthouseGuard_Text_0
	release
	end


OlivineCity_Text_Woman::
	lock
	faceplayer
	msgbox OlivineCity_Text_Woman_Text_0
	release
	end


OlivineCity_Text_Girl::
	lock
	faceplayer
	msgbox OlivineCity_Text_Girl_Text_0
	release
	end


OlivineCity_Text_Fisherman::
	lock
	faceplayer
	msgbox OlivineCity_Text_Fisherman_Text_0
	release
	end


SailorToHoenn2_Text_0:
	.string "Want to go Back to HOENN ?$"

SailorToHoenn2_Text_1:
	.string "Here we go !$"

SailorToHoenn2_Text_2:
	.string "I'm standing right here !$"

OlivineCity_Text_SignHarbour_Text_0:
	.string "OLIVINE PORT\p"
	.string "FAST SHIP PIER$"

OlivineCity_Text_LighthouseSailor_Text_0:
	.string "Dark roads are dangerouse at night.\p"
	.string "But in the pitchblack of night, the sea\n"
	.string "is even more treacherous!\p"
	.string "Without the beacon of the LIGHTHOUSE\n"
	.string "to guide it, no ship can sail.$"

OlivineCity_Text_LighthouseSign_Text_0:
	.string "OLIVINE LIGHTHOUSE\n"
	.string "Also known as the GLITTER LIGHTHOUSE$"

OlivineCity_Text_PokedexBoy_Text_0:
	.string "Wow, you have a POKéDEX!\p"
	.string "That is just so awesome.$"

OlivineCity_Text_SignCity_Text_0:
	.string "OLIVINE CITY\p"
	.string "The Port Closest to Foreign Lands$"

OlivineCity_Text_Artist_Text_0:
	.string "I love the sea at sunset! I can paint it\n"
	.string "all day long.$"

OlivineCity_Text_Maniac_Text_0:
	.string "Hummm yes? Oh you want to have access\n"
	.string "to this GYM? Sorry but it's still under\l"
	.string "construction.$"

OlivineCity_Text_LighthouseGuard_Text_0:
	.string "Sorry but this area is restricted to\n"
	.string "authorized crew only.$"

OlivineCity_Text_Woman_Text_0:
	.string "My little sister is a tough TRAINER. I\n"
	.string "bet one day she will be a CHAMPION.$"

OlivineCity_Text_Girl_Text_0:
	.string "One of my friend is so strong, even\n"
	.string "STONE types POKEMON can't harm her.$"

OlivineCity_Text_Fisherman_Text_0:
	.string "Hmpfff! I went to the Restaurant and\n"
	.string "ate too much. I feel like a SNORLAX; i\l"
	.string "need to REST.$"
