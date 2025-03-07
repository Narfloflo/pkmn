LavaridgeResto_MapScripts::
	.byte 0


LavaridgeRest_Text_Vendor::
	lock
	faceplayer
	message LavaridgeRest_Text_Vendor_Text_0
	waitmessage
	pokemart LavaridgeRest_RestoPubItems
	msgbox LavaridgeRest_Text_Vendor_Text_1
	release
	return


	.align 2
LavaridgeRest_RestoPubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

LavaridgeRest_Text_Vendor_Text_0:
	.string "Oh a kid ! No booze for you.$"

LavaridgeRest_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"
