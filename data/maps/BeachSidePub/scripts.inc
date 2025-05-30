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
	.2byte ITEM_STBRICECREAM
	.2byte ITEM_BLKICECREAM
	.2byte ITEM_WHTICECREAM
	.2byte ITEM_NONE

BeachSidePub_Text_Swimmer::
	msgbox BeachSidePub_Text_Swimmer_Text_0, MSGBOX_NPC
	end


BeachSidePub_Text_Sailor::
	lock
	msgbox BeachSidePub_Text_Sailor_Text_0
	faceplayer
	msgbox BeachSidePub_Text_Sailor_Text_1
	end


BeachSidePub_Text_Tuber::
	msgbox BeachSidePub_Text_Tuber_Text_0, MSGBOX_NPC
	end


BeachSidePub_Text_Vendor_Text_0:
	.string "Welcome!\n"
	.string "I only sell ICE CREAM. The best of\l"
	.string "HOENN!$"

BeachSidePub_Text_Vendor_Text_1:
	.string "See you again!$"

BeachSidePub_Text_Swimmer_Text_0:
	.string "I'm taking a break to eat an ICE CREAM!$"

BeachSidePub_Text_Sailor_Text_0:
	.string "Budweiser... No, too lame..\nCider... Pffft I'm not from GALAR!\l...........$"

BeachSidePub_Text_Sailor_Text_1:
	.string "...........\lWould you mind?\lI'm chosing my drink.$"

BeachSidePub_Text_Tuber_Text_0:
	.string "You know where the best ICE CREAM are\nmade?\lYeah me neither...\lThat's a big debate here!$"
