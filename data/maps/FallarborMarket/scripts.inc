FallarborMarket_MapScripts::
	.byte 0

FallarborMarket_Text_Vendor1::
	lock
	faceplayer
	message FallarborMarket_Text_Vendor1_Text_0
	waitmessage
	pokemart FallarborMarketVendor1
	msgbox FallarborMarket_Text_Vendor1_Text_1
	release
	return


FallarborMarket_Text_Vendor2::
	lock
	faceplayer
	message FallarborMarket_Text_Vendor1_Text_0
	waitmessage
	pokemart FallarborMarketVendor2
	msgbox FallarborMarket_Text_Vendor1_Text_1
	release
	return


FallarborMarket_Text_Vendor3::
	lock
	faceplayer
	message FallarborMarket_Text_Vendor1_Text_0
	waitmessage
	pokemart FallarborMarketVendor3
	msgbox FallarborMarket_Text_Vendor1_Text_1
	release
	return


	.align 2
FallarborMarketVendor1:
	.2byte ITEM_MAGNET
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_NONE

	.align 2
FallarborMarketVendor2:
	.2byte ITEM_TM27_RETURN
	.2byte ITEM_TM48_SKILL_SWAP
	.2byte ITEM_TM49_SNATCH
	.2byte ITEM_TM02_DRAGON_CLAW
	.2byte ITEM_TM46_THIEF
	.2byte ITEM_NONE

	.align 2
FallarborMarketVendor3:
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

FallarborMarket_Text_Girl::
	lock
	faceplayer
	msgbox FallarborMarket_Text_Girl_Text_0
	release
	end


FallarborMarket_Text_OldMan::
	lock
	faceplayer
	msgbox FallarborMarket_Text_OldMan_Text_0
	release
	end


FallarborMarket_Text_Kirlia::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
	msgbox FallarborMarket_Text_Kirlia_Text_0
	waitmoncry
	release
	end


FallarborMarket_Text_Vendor1_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

FallarborMarket_Text_Vendor1_Text_1:
	.string "Please come again!$"

FallarborMarket_Text_Girl_Text_0:
	.string "I'm glad we have a market here in\n"
	.string "FALLARBORTOWN.\p"
	.string "It has nothing to do with the one in\n"
	.string "LILYCOVECITY, but it's fine.$"

FallarborMarket_Text_OldMan_Text_0:
	.string "Wahaha! Welcome kid, welcome! I'm the\n"
	.string "owner of the FALLARBORTOWN market! It\l"
	.string "opened recently, and we have some\l"
	.string "pretty rare ITEMS that are great for a\l"
	.string "TRAINER like you.\p"
	.string "Have a good look at our ITEMS!$"

FallarborMarket_Text_Kirlia_Text_0:
	.string "Lia! Li li!\p"
	.string "{PLAYER}: There is something strange\n"
	.string "between this POKEMON and the old man...$"
