SeasideCyclingNew_MapScripts::
	.byte 0

Ranch_Text_Farmer::
	lock
	faceplayer
	msgbox Ranch_Text_Farmer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Ranch_Text_Farmer_1
	msgbox Ranch_Text_Farmer_Text_2
	release
	end

Ranch_Text_Farmer_1:
	msgbox Ranch_Text_Farmer_Text_1, MSGBOX_NPC
	release
	end


Ranch_Text_Vendor::
	lock
	faceplayer
	message Ranch_Text_Vendor_Text_0
	waitmessage
	pokemart Ranch
	msgbox Ranch_Text_Vendor_Text_1
	release
	end


	.align 2
Ranch:
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_NONE

Ranch_Text_Miltank::
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Ranch_Text_Miltank_Text_0
	release
	end


Ranch_Text_Farmer_Text_0:
	.string "Welcome welcome to the RANCH! Wanna\n"
	.string "know more about this location?$"

Ranch_Text_Farmer_Text_1:
	.string "Well...\nWe established this RANCH here\land move a few MILTANK and TAUROS to\lproduce milk. I have a relatives\ldoing that in JOHTO. I think it works\lwell for him.\lThis place is a little secluded but we\lmanage with the authorities to build a\lCYCLING ROAD through here. We are\lsupplying every restaurant in HOENN.\lYou probably saw that already right?$"

Ranch_Text_Farmer_Text_2:
	.string "Humm I see. Well goodbye then.$"

Ranch_Text_Vendor_Text_0:
	.string "Hi there!\pPlease have a look at our goods.$"

Ranch_Text_Vendor_Text_1:
	.string "Have a good day!$"

Ranch_Text_Miltank_Text_0:
	.string "MILTANK: Moooh$"
