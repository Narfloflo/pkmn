CinnabarIsland_MapScripts::
	.byte 0


CinnabarIsland_Text_Cooltrainer::
	lock
	faceplayer
	msgbox CinnabarIsland_Text_Cooltrainer_Text_0
	release
	end


CinnabarIsland_Text_Oldman::
	lock
	faceplayer
	msgbox CinnabarIsland_Text_Oldman_Text_0
	release
	end


CinnabarIsland_Text_CitySign::
	lock
	msgbox CinnabarIsland_Text_CitySign_Text_0
	release
	end


CinnabarIsland_Text_LabSign::
	lock
	msgbox CinnabarIsland_Text_LabSign_Text_0
	release
	end


CinnabarIsland_Text_Scientist::
	lock
	faceplayer
	msgbox CinnabarIsland_Text_Scientist_Text_0
	release
	end


CinnabarIsland_Text_Fisherman::
	lock
	faceplayer
	msgbox CinnabarIsland_Text_Fisherman_Text_0
	release
	end


CinnabarIsland_Text_Hiker::
	lock
	faceplayer
	msgbox CinnabarIsland_Text_Hiker_Text_0
	release
	end


CinnabarIsland_Text_GymSign::
	msgbox CinnabarIsland_Text_GymSign_Text_0, MSGBOX_SIGN
	end


CinnabarIsland_Text_Cooltrainer_Text_0:
	.string "Huh, looks like BLAINE isn't in the GYM.\n"
	.string "I heard he is studying the SEAFOAM\l"
	.string "ISLANDS. I wonder why.$"

CinnabarIsland_Text_Oldman_Text_0:
	.string "BLAINE has been living on this island\n"
	.string "for a few decades now. I was one of his\l"
	.string "companions, until we went SOUTH...$"

CinnabarIsland_Text_CitySign_Text_0:
	.string "CINNABAR ISLAND\n"
	.string "The fiery town of burning desire.$"

CinnabarIsland_Text_LabSign_Text_0:
	.string "POKéMON LAB$"

CinnabarIsland_Text_Scientist_Text_0:
	.string "Here is the POKéMON LAB. We have a\n"
	.string "technology that revive FOSSILS. Yeah\l"
	.string "like DEVON! (They stole everything from\l"
	.string "us...)$"

CinnabarIsland_Text_Fisherman_Text_0:
	.string "Some scientists are saying that the\n"
	.string "sea is getting a little hotter. But it\l"
	.string "can't be bad, like a volcano right ?$"

CinnabarIsland_Text_Hiker_Text_0:
	.string "Beware! There are a lot of powerful\n"
	.string "FIRE POKéMON up there!$"

CinnabarIsland_Text_GymSign_Text_0:
	.string "CINNABAR ISLAND POKéMON GYM\nLEADER: BLAINE\lThe Hotheaded Quiz Master!$"
