CaveOfOrigin_UnusedRubySapphireMap1_MapScripts::
	.byte 0


CeladonResto_Text_Hiker::
	lock
	faceplayer
	msgbox CeladonResto_Text_Hiker_Text_0
	release
	end


CeladonResto_Text_GymGuy::
	lock
	faceplayer
	msgbox CeladonResto_Text_GymGuy_Text_0
	release
	end


CeladonResto_Text_Fatman::
	lock
	faceplayer
	msgbox CeladonResto_Text_Fatman_Text_0
	release
	end


CeladonResto_Text_Woman::
	lock
	faceplayer
	msgbox CeladonResto_Text_Woman_Text_0
	release
	end


CeladonResto_Text_Cook::
	lock
	faceplayer
	msgbox CeladonResto_Text_Cook_Text_0
	release
	end


CeladonHotel_Text_Hostess::
	msgbox CeladonHotel_Text_Hostess_Text_0, MSGBOX_NPC
	end


CeladonHotel_Text_Beauty::
	msgbox CeladonHotel_Text_Beauty_Text_0, MSGBOX_NPC
	end


CeladonCondominium_Text_OldLady::
	msgbox CeladonCondominium_Text_OldLady_Text_0, MSGBOX_NPC
	end


CeladonCondominium_Text_Meowth::
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox CeladonCondominium_Text_Meowth_Text_0, MSGBOX_NPC
	end


CeladonCondominium_Text_OfficeLandLord::
	msgbox CeladonCondominium_Text_OfficeLandLord_Text_0, MSGBOX_NPC
	end


CeladonResto_Text_Hiker_Text_0:
	.string "Pssst ! There were a basement under the\n"
	.string "GAME CORNER.$"

CeladonResto_Text_GymGuy_Text_0:
	.string "I always thought I was going to get the\n"
	.string "three 7 ! Damn it GAME CORNER ! Damn it !$"

CeladonResto_Text_Fatman_Text_0:
	.string "Munch... The man at that table lost it\n"
	.string "all at the slots. He even gave his COIN\l"
	.string "CASE to some kid. He is dangerous !$"

CeladonResto_Text_Woman_Text_0:
	.string "My POKéMON are weak, so I often have to\n"
	.string "go to the Dug Store.$"

CeladonResto_Text_Cook_Text_0:
	.string "Huh ? What you want a SANDWICH ? We are\n"
	.string "taking a break so maybe later. Or not...$"

CeladonHotel_Text_Hostess_Text_0:
	.string "POKéMON?\nNo, this is a hotel for people.\lWe're full up, unfortunately.$"

CeladonHotel_Text_Beauty_Text_0:
	.string "I was on wvacation with my brother and\nboyfriend.\lHe dumped me, and I let my brother go\lback home.\lI can finally relax alone.$"

CeladonCondominium_Text_OldLady_Text_0:
	.string "My dear POKéMON keep me company.\nMEOWTH even brings money home!$"

CeladonCondominium_Text_Meowth_Text_0:
	.string "MEOWTH: Meow!$"

CeladonCondominium_Text_OfficeLandLord_Text_0:
	.string "What you are looking for GAME FREAK\nTeam?\lWell they left a few months ago.\lThe left for HOENN...\lApparently my rent is too high!$"
