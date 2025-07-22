Route112Pub_MapScripts::
	.byte 0


Route112_Pub_Text_Vendor::
	lock
	faceplayer
	message Route112_Pub_Text_Vendor_Text_0
	waitmessage
	pokemart Route112PubItems
	msgbox Route112_Pub_Text_Vendor_Text_1
	release
	return


	.align 2
Route112PubItems:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

Route11_Pub_Text_Picnicker::
	msgbox Route11_Pub_Text_Picnicker_Text_0, MSGBOX_NPC
	end


Route11_Pub_Text_Camper::
	msgbox Route11_Pub_Text_Camper_Text_0, MSGBOX_NPC
	end


Route11_Pub_Text_Numel::
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
	msgbox Route11_Pub_Text_Numel_Text_0, MSGBOX_NPC
	end


Route112_Pub_Text_Vendor_Text_0:
	.string "Oh a kid ! No booze for you.$"

Route112_Pub_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

Route11_Pub_Text_Picnicker_Text_0:
	.string "Wow that's really hot!\nMy NUMEL is having trouble eating this!$"

Route11_Pub_Text_Camper_Text_0:
	.string "You know that you can't run into\nLAVARIDGE like that?\lIf you wanna go inside, you need to go\lontop of MT. CHIMNEY. And if you wanna\lgo outside, you need to take a cave.$"

Route11_Pub_Text_Numel_Text_0:
	.string "NUMEL: Melllo!\p{PLAYER}: I've never seen a POKémON\nstuffing so much spice sauce in its\lmouth!$"
