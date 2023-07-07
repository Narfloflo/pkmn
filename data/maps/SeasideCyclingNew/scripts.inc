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
	msgbox Ranch_Text_Farmer_Text_1
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

Ranch_Text_Farmer_Text_0:
	.string "Welcome welcome to the RANCH! Wanna\n"
	.string "know more about this location?$"

Ranch_Text_Farmer_Text_1:
	.string "Well... We established this RANCH here\n"
	.string "and move a few MILTANK and TAUROS\l"
	.string "here to produce milk. I have a relatives\l"
	.string "doing that in JOHTO. I think it works\l"
	.string "well there.\p"
	.string "This place is a little secluded but we\n"
	.string "manage with the authorities to build a\l"
	.string "CYCLING ROAD through here. We can\l"
	.string "expect a lot of customers!$"

Ranch_Text_Farmer_Text_2:
	.string "Humm I see. Well goodbye then.$"

Ranch_Text_Vendor_Text_0:
	.string "Hi there!\pPlease have a look at our goods.$"

Ranch_Text_Vendor_Text_1:
	.string "Have a good day!$"
