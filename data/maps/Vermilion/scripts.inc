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
	applymovement 7, Exclamation
	waitmovement 0
	msgbox Vermilion_Text_Fisherman_Text_1
	release
	end


Exclamation:
	emote_exclamation_mark
	walk_in_place_down
	step_end

Vermilion_Text_Policeman::
	lock
	faceplayer
	msgbox Vermilion_Text_Policeman_Text_0
	release
	end


Vermilion_Text_Hiker::
	lock
	faceplayer
	msgbox Vermilion_Text_Hiker_Text_0
	release
	end


Vermilion_Text_DiglettsCave::
	lock
	msgbox Vermilion_Text_DiglettsCave_Text_0
	release
	end


Vermilion_Text_Camper::
	lock
	faceplayer
	msgbox Vermilion_Text_Camper_Text_0
	release
	end


Vermilion_Text_Boy::
	lock
	faceplayer
	msgbox Vermilion_Text_Boy_Text_0
	release
	end


Watchman::
	lock
	faceplayer
	msgbox Watchman_Text_0
	call PlayersHouse_2F_EventScript_WallClock
	release
	end


Vermilion_Text_Machop::
	lock
	faceplayer
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox Vermilion_Text_Machop_Text_0
	release
	end


Vermilion_Text_Worker::
	lock
	faceplayer
	msgbox Vermilion_Text_Worker_Text_0
	release
	end


Vermilion_Text_SailorToSevii::
	lock
	faceplayer
	msgbox Vermilion_Text_SailorToSevii_Text_0
	release
	end


Vermilion_Text_WomanToSevii::
	lock
	faceplayer
	msgbox Vermilion_Text_WomanToSevii_Text_0
	release
	end


Vermilion_Text_ManToSevii::
	lock
	faceplayer
	msgbox Vermilion_Text_ManToSevii_Text_0
	release
	end


Vermilion_Text_BoyToSevii::
	lock
	faceplayer
	msgbox Vermilion_Text_BoyToSevii_Text_0
	release
	end


Vermilion_Text_OldWomanToSevii::
	lock
	faceplayer
	msgbox Vermilion_Text_OldWomanToSevii_Text_0
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
	.string "My MACHOP is helping me tamping the\n"
	.string "land.$"

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

Vermilion_Text_Policeman_Text_0:
	.string "You know there was a big POKéMON\n"
	.string "blocking the path. But a young TRAINER\l"
	.string "caught it ! I'm amazed.$"

Vermilion_Text_Hiker_Text_0:
	.string "It's incredible ! The DIGLETTS dug this\n"
	.string "long tunnel !It goes right to VIRIDIAN\l"
	.string "CITY !$"

Vermilion_Text_DiglettsCave_Text_0:
	.string "DIGLETT'S CAVE$"

Vermilion_Text_Camper_Text_0:
	.string "I heard that a guy here is giving free\n"
	.string "BIKE VOUCHER.\p"
	.string "But we have to endure a speech about\n"
	.string "RAPIDASH for sooooo long...$"

Vermilion_Text_Boy_Text_0:
	.string "It's the residential area of VERMILION\n"
	.string "CITY. I think LT. SURGE is living\l"
	.string "somewhere here.$"

Watchman_Text_0:
	.string "Humm... Oh you want the time? Here it is.$"

Vermilion_Text_Machop_Text_0:
	.string "Guooh gogogoh!\p"
	.string "{PLAYER}: A MACHOP is growling while\n"
	.string "stomping the ground flat.$"

Vermilion_Text_Worker_Text_0:
	.string "The GYM is closed for now. LT. SURGE\n"
	.string "wants to make some new ajustments\l"
	.string "before reopening.$"

Vermilion_Text_SailorToSevii_Text_0:
	.string "I'm sorry but the FERRY to SEVII\n"
	.string "ISLANDS is late... And I don't think you\l"
	.string "have a ticket either right ?$"

Vermilion_Text_WomanToSevii_Text_0:
	.string "So basically, we've waited for a few\n"
	.string "hours to get in VERMILION from JOHTO\l"
	.string "because the FERRY service is a mess !\l"
	.string "And now we are told that it's the same\l"
	.string "for SEVII ISLANDS ?! I'm exausted...$"

Vermilion_Text_ManToSevii_Text_0:
	.string "I tried to book an HOTEL in CELADON but\n"
	.string "it's full... An another bad news like\l"
	.string "that and my wife is gonna take her\l"
	.string "GYARADOS to blast this city...$"

Vermilion_Text_BoyToSevii_Text_0:
	.string "I don't care if we are in JOHTO,\n"
	.string "VERMILION or somewhere else as long as\l"
	.string "I have my GAMEBOY with me.\p"
	.string "Crap !\n"
	.string "My battery is running low !$"

Vermilion_Text_OldWomanToSevii_Text_0:
	.string "I was happy to go to SEVII ISLAND\n"
	.string "because I heard that there are some\l"
	.string "nice SPA built close to a volcano.\p"
	.string "What there is the same in HOENN ?! What\n"
	.string "are we doing here so !$"
