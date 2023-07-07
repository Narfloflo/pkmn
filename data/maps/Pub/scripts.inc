Pub_MapScripts::
	.byte 0

Pub_Text_Vendor::
	lock
	message Pub_Text_Vendor_Text_0
	waitmessage
	pokemart PubItems
	msgbox Pub_Text_Vendor_Text_1
	release
	return


	.align 2
PubItems:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

Pub_Text_Man::
	lock
	faceplayer
	msgbox Pub_Text_Man_Text_0
	applymovement 8, Man_Mouvement
	waitmovement 0
	release
	return


Man_Mouvement:
	face_right
	step_end

Pub_Text_Menu::
	lock
	faceplayer
	msgbox Pub_Text_Menu_Text_0
	release
	end


Pub_Text_Vendor_Text_0:
	.string "Oh a kid ! No booze for you.$"

Pub_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

Pub_Text_Man_Text_0:
	.string "I'm drinking my troubles... Get lost !$"

Pub_Text_Menu_Text_0:
	.string "{PLAYER} : Let's have a look at the\n"
	.string "drinks : HEINEBLAZIKEN,\l"
	.string "LUDICOL'HOEGAARDEN, STANGELA ARTOIS,\l"
	.string "CORONATU Beer.... Wonder if they have\l"
	.string "some PINECO GRIS wine.$"
