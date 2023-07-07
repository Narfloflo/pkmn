Vermilion_MapScripts::
	.byte 0

SailorToHoenn::
	lock
	faceplayer
	msgbox SailorToHoenn_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SailorToHoenn_2
	msgbox SailorToHoenn_Text_2
SailorToHoenn_1:
	release
	end

SailorToHoenn_2:
	msgbox SailorToHoenn_Text_1
	call WarpToHoenn
	goto SailorToHoenn_1


WarpToHoenn::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_SLATEDOCKCOPY, 8, 10
	fadescreen FADE_FROM_BLACK
	return


KVermilion_Text_GrimerMultipliesInSludge::
	lock
	faceplayer
	msgbox KVermilion_Text_GrimerMultipliesInSludge_Text_0
	release
	end


KVermilion_Text_DidYouSeeSSAnneInHarbor::
	lock
	faceplayer
	msgbox KVermilion_Text_DidYouSeeSSAnneInHarbor_Text_0
	release
	end


KVermilion_Text_BuildingOnThisLand::
	lock
	faceplayer
	msgbox KVermilion_Text_BuildingOnThisLand_Text_0
	release
	end


KVermilion_Text_Sailor::
	lock
	faceplayer
	msgbox KVermilion_Text_Sailor_Text_0
	release
	end


KVermilion_Text_CitySign::
	lock
	msgbox KVermilion_Text_CitySign_Text_0
	release
	end


KVermilion_Text_VermilionHarbor::
	lock
	msgbox KVermilion_Text_VermilionHarbor_Text_0
	release
	end


KVermilion_Text_PokemonFanClubSign::
	lock
	msgbox KVermilion_Text_PokemonFanClubSign_Text_0
	release
	end


KVermilion_Text_Shady::
	lock
	faceplayer
	msgbox KVermilion_Text_Shady_Text_0
	release
	end


Vermilion_Text_Fisherman::
	lock
	msgbox Vermilion_Text_Fisherman_Text_0
	applymovement 11, Exclamation
	waitmovement 0
	msgbox Vermilion_Text_Fisherman_Text_1
	release
	end


Exclamation:
	emote_exclamation_mark
	walk_in_place_down
	step_end

GetAway::
	lock
	applymovement 4, GuyUp
	applymovement 3, GuyDown
	waitmovement 0
	msgbox GetAway_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ReturnLeft
	waitmovement 0
	release
	end


ReturnLeft:
	walk_left
	step_end

Vermilion_Text_GuyUp::
	lock
	faceplayer
	msgbox GetAway_Text_0
	release
	end


Vermilion_Text_GuyDown::
	lock
	faceplayer
	msgbox GetAway_Text_0
	release
	end


Vermilion_Text_Camper::
	lock
	faceplayer
	msgbox Vermilion_Text_Camper_Text_0
	release
	end


GuyUp:
	walk_in_place_up
	step_end

GuyDown:
	walk_in_place_down
	step_end

Watchman::
	lock
	faceplayer
	msgbox Watchman_Text_0
	call PlayersHouse_2F_EventScript_WallClock
	release
	end


SailorToHoenn_Text_0:
	.string "Want to go Back to HOENN ?$"

SailorToHoenn_Text_1:
	.string "Here we go !$"

SailorToHoenn_Text_2:
	.string "I'm standing right here !$"

KVermilion_Text_GrimerMultipliesInSludge_Text_0:
	.string "We're careful about pollution here.\p"
	.string "We've heard GRIMER multiplies in toxic\n"
	.string "sludge.$"

KVermilion_Text_DidYouSeeSSAnneInHarbor_Text_0:
	.string "Wondering why the S.S. ANNE hasn't\n"
	.string "shored?\p"
	.string "She'll be back in VERMILION in a few\n"
	.string "months now.$"

KVermilion_Text_BuildingOnThisLand_Text_0:
	.string "I'm putting up a building on this plot of\n"
	.string "land. I own it all.\p"
	.string "My MACHOP were helping me tamping the\n"
	.string "land, but TEAM ROCKET stole them...$"

KVermilion_Text_Sailor_Text_0:
	.string "I love VERMILION CITY. The docks are so\n"
	.string "relaxing.\p"
	.string "Where are you from? HOENN? LILYCOVE\n"
	.string "CITY's harbors are fine as well!$"

KVermilion_Text_CitySign_Text_0:
	.string "VERMILION CITY\n"
	.string "The Port of Exquisite Sunsets$"

KVermilion_Text_VermilionHarbor_Text_0:
	.string "VERMILION HARBOR$"

KVermilion_Text_PokemonFanClubSign_Text_0:
	.string "POKéMON FAN CLUB\n"
	.string "All POKéMON fans welcome!$"

KVermilion_Text_Shady_Text_0:
	.string "There are some shady character here...\p"
	.string "They look likes TEAM ROCKET member, but\n"
	.string "version Pirate of the Caribbean.\p"
	.string "So cheap!$"

Vermilion_Text_Fisherman_Text_0:
	.string "Hope I'll get something other than a\n"
	.string "MAGIKARP..$"

Vermilion_Text_Fisherman_Text_1:
	.string "Oh ! another MAGIKARP...$"

GetAway_Text_0:
	.string "The road here is closed. The DUGLETTS\n"
	.string "are making a mess.\p"
	.string "We are investigating the place.$"

Vermilion_Text_Camper_Text_0:
	.string "I heard that a guy here is giving free\n"
	.string "BIKE VOUCHER.\p"
	.string "But we have to endure a speech about\n"
	.string "RAPIDASH for sooooo long...$"

Watchman_Text_0:
	.string "Humm... Oh you want the time? Here it is.$"
