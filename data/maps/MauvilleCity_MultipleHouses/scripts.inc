MauvilleCity_MultipleHouses_MapScripts::
	.byte 0


MauvilleCity_MultipleHouses_Text_LittleGirl::
	lock
	faceplayer
	msgbox MauvilleCity_MultipleHouses_Text_LittleGirl_Text_0
	release
	end


MauvilleCity_MultipleHouses_Text_OldMan::
	lock
	faceplayer
	msgbox MauvilleCity_MultipleHouses_Text_OldMan_Text_0
	release
	end


MauvilleCity_MultipleHouses_Text_Janitor::
	msgbox MauvilleCity_MultipleHouses_Text_Janitor_Text_0, MSGBOX_NPC
	end


MauvilleCity_MultipleHouses_Text_Man::
	msgbox MauvilleCity_MultipleHouses_Text_Man_Text_0, MSGBOX_NPC
	end


MauvilleCity_MultipleHouses_Text_LittleGirl_Text_0:
	.string "MAUVILLE is one of the best town\n"
	.string "in HOENN!\l"
	.string "There is the CYCLING ROAD south,\l"
	.string "the DAY CARE west, north is the\l"
	.string "BATTLETOWER and east is were you\l"
	.string "can find the AIRPORT and the BEACH\l"
	.string "SIDE!\l"
	.string "That's so nice!$"

MauvilleCity_MultipleHouses_Text_OldMan_Text_0:
	.string "Hey you!\n"
	.string "I saw you running inside the\l"
	.string "houses!\l"
	.string "Don't you have no shame?!$"

MauvilleCity_MultipleHouses_Text_Janitor_Text_0:
	.string "Wow wow! Be carefull I'm mopping the\nfloor$"

MauvilleCity_MultipleHouses_Text_Man_Text_0:
	.string "Oh wait! Where did you come from?!\nThe door huh?\lI need to remove that...\lWell scram!$"
