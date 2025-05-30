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
	.2byte ITEM_WHTICECREAM
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

LavaridgeRest_Text_Scientist1::
	msgbox LavaridgeRest_Text_Scientist1_Text_0, MSGBOX_NPC
	end


LavaridgeRest_Text_Scientist2::
	msgbox LavaridgeRest_Text_Scientist2_Text_0, MSGBOX_NPC
	end


LavaridgeRest_Text_Kindler::
	msgbox LavaridgeRest_Text_Kindler_Text_0, MSGBOX_NPC
	end


LavaridgeRest_Text_Vendor_Text_0:
	.string "Welcome, What can I do for you?$"

LavaridgeRest_Text_Vendor_Text_1:
	.string "Be careful in the VOLCANO.$"

LavaridgeRest_Text_Scientist1_Text_0:
	.string "This place is the best to study\nvolcanic activity.\lBut you have to be ready for the heat.\lAnd I hate that...$"

LavaridgeRest_Text_Scientist2_Text_0:
	.string "You should eat an ICE CREAM if you are\nwarm.\lMe? No, I'm fine, I just enjoy ICE\lCREAM because it's tasty!$"

LavaridgeRest_Text_Kindler_Text_0:
	.string "I'm fed up with the GYM's temperature. So\nI'm resting here.$"
