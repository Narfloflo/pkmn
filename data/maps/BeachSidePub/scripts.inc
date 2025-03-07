BeachSidePub_MapScripts::
	.byte 0


BeachSidePub_Text_Vendor::
	lock
	faceplayer
	message BeachSidePub_Text_Vendor_Text_0
	waitmessage
	pokemart BeachSidePub_RestoPubItems
	msgbox BeachSidePub_Text_Vendor_Text_1
	release
	end


	.align 2
BeachSidePub_RestoPubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

BeachSidePub_Text_Vendor_Text_0:
	.string "Welcome!\n"
	.string "I only sell ICE CREAM. The best of\l"
	.string "HOENN!$"

BeachSidePub_Text_Vendor_Text_1:
	.string "See you again!$"
