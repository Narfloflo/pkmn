Vermilion_Shop_MapScripts::
	.byte 0


Vendor_Vermilion::
	lock
	faceplayer
	msgbox Vendor_Vermilion_Text_0
	waitmessage
	pokemart MartItems
	msgbox Vendor_Vermilion_Text_1
	release
	end


	.align 2
MartItems:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Vermilion_Mart_Rocket::
	lock
	faceplayer
	msgbox Vermilion_Mart_Rocket_Text_0
	release
	end


Vermilion_Mart_MonsBadorGood::
	lock
	faceplayer
	msgbox Vermilion_Mart_MonsBadorGood_Text_0
	release
	end


Vermilion_Mart_Wanderer::
	lock
	faceplayer
	msgbox Vermilion_Mart_Wanderer_Text_0
	release
	end


Vendor_Vermilion_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

Vendor_Vermilion_Text_1:
	.string "Please come again!$"

Vermilion_Mart_Rocket_Text_0:
	.string "There were wicked people who used\n"
	.string "POKEMON for criminals acts.\p"
	.string "TEAM ROCKET used to traffic in rare\n"
	.string "POKEMON.\p"
	.string "But I heard some TRAINER called RED\n"
	.string "kicked them out of KANTO.$"

Vermilion_Mart_MonsBadorGood_Text_0:
	.string "I think POKEMON can be good or bad.\n"
	.string "Depends on the TRAINER.$"

Vermilion_Mart_Wanderer_Text_0:
	.string "Is there some SODA POP here ?$"
