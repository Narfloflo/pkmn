MauvilleCity_House1_MapScripts::
	.byte 0

MauvilleCity_House1_EventScript_RockSmashDude::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM06, MauvilleCity_House1_EventScript_ReceivedRockSmash
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_HM06
	setflag FLAG_RECEIVED_HM06
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_EventScript_ReceivedRockSmash::
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
	.string "Woohoo!\p"
	.string "I hear people call me the ROCK SMASH\n"
	.string "GUY, but I find that sort of degrading.\p"
	.string "I think I deserve a bit more respect,\n"
	.string "like maybe the ROCK SMASH DUDE.\p"
	.string "Woohoo!\p"
	.string "Anyways, your POKéMON look pretty\n"
	.string "strong.\p"
	.string "I like that!\n"
	.string "Here, take this HIDDEN MACHINE!$"

MauvilleCity_House1_Text_ExplainRockSmash:
	.string "That HM contains ROCK SMASH.\p"
	.string "If you come across large boulders\n"
	.string "that block your path…\p"
	.string "Well, use that HM move and smash\n"
	.string "them right out of your way!\p"
	.string "Yes, sir! Smash rocks aside, I say!\n"
	.string "Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
	.string "could come flying out of hiding.\p"
	.string "Woohoo!$"

MauvilleCity_House1_Text_PokefanM::
	lock
	faceplayer
	msgbox MauvilleCity_House1_Text_PokefanM_Text_0
	release
	end


MauvilleCity_House1_Text_Pikachu::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	waitmoncry
	msgbox MauvilleCity_House1_Text_Pikachu_Text_0
	release
	end


MauvilleCity_House1_Text_PikachuDoll::
	lock
	faceplayer
	msgbox MauvilleCity_House1_Text_PikachuDoll_Text_0
	release
	end


MauvilleCity_House1_Text_PokefanM_Text_0:
	.string "You know the MALL in MAUVILLE got three\nfloor:\lIn the first one you can get the\lclassical objects from a MALL.\lIn the second one, you can have more\lrare objects and even some TM!\lAnd in the last floor is the\lrestaurant.$"

MauvilleCity_House1_Text_Pikachu_Text_0:
	.string "Pika?$"

MauvilleCity_House1_Text_PikachuDoll_Text_0:
	.string "{PLAYER}: Looks like the PIKACHU is\n"
	.string "confused by this doll...\l"
	.string "I admit that it looks like a PIKACHU\l"
	.string "from a retro world in which it follows\l"
	.string "you.$"
