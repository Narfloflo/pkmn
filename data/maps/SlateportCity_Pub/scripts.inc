SlateportCity_Pub_MapScripts::
	.byte 0


SlateportPub_Text_Vendor::
	lock
	faceplayer
	message SlateportPub_Text_Vendor_Text_0
	waitmessage
	pokemart SlateportPubItems
	msgbox SlateportPub_Text_Vendor_Text_1
	release
	return


	.align 2
SlateportPubItems:
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_SANDWICH
	.2byte ITEM_NONE

SlateportPub_Text_Vendor_Text_0:
	.string "Ahoy kiddo! What you'd eat?$"

SlateportPub_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"
