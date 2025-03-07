SaffronMart_MapScripts::
	.byte 0


SaffronMart_Text_Gentleman::
	lock
	faceplayer
	msgbox SaffronMart_Text_Gentleman_Text_0
	release
	end


SaffronMart_Vendor::
	lock
	faceplayer
	msgbox SaffronMart_Vendor_Text_0
	waitmessage
	pokemart SaffronMartItems
	msgbox SaffronMart_Vendor_Text_1
	release
	end


	.align 2
SaffronMartItems:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_NONE

SaffronMart_Text_Gentleman_Text_0:
	.string "Revive is costly but it revives fainted\n"
	.string "POKéMON!$"

SaffronMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

SaffronMart_Vendor_Text_1:
	.string "Please come again!$"
