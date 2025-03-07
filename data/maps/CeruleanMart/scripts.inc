CeruleanMart_MapScripts::
	.byte 0


CeruleanMart_Text_Man::
	lock
	faceplayer
	msgbox CeruleanMart_Text_Man_Text_0
	release
	end


CeruleanMart_Text_Beauty::
	lock
	faceplayer
	msgbox CeruleanMart_Text_Beauty_Text_0
	release
	end


CeruleanMart_Vendor::
	lock
	faceplayer
	msgbox CeruleanMart_Vendor_Text_0
	waitmessage
	pokemart CeruleanMartItems
	msgbox CeruleanMart_Vendor_Text_1
	release
	end


	.align 2
CeruleanMartItems:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

CeruleanMart_Text_Man_Text_0:
	.string "Use REPEL to keep bugs and weak\n"
	.string "POKéMON away. Put your strongest\l"
	.string "POKéMON at the top of the list for best\l"
	.string "results !$"

CeruleanMart_Text_Beauty_Text_0:
	.string "Have you seen any RARE CANDY ? It's\n"
	.string "supposed to make POKéMON go up one\l"
	.string "level !$"

CeruleanMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

CeruleanMart_Vendor_Text_1:
	.string "Please come again!$"
