CinnabarMart_MapScripts::
	.byte 0


CinnabarMart_Vendor::
	lock
	faceplayer
	msgbox CinnabarMart_Vendor_Text_0
	waitmessage
	pokemart CinnabarMartItems
	msgbox CinnabarMart_Vendor_Text_1
	release
	end


	.align 2
CinnabarMartItems:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

CinnabarMart_Text_Scientist::
	lock
	faceplayer
	msgbox CinnabarMart_Text_Scientist_Text_0
	release
	end


CinnabarMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

CinnabarMart_Vendor_Text_1:
	.string "Please come again!$"

CinnabarMart_Text_Scientist_Text_0:
	.string "It never hurts to have extra items!$"
