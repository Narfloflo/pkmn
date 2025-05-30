ViridianMart_MapScripts::
	.byte 0


ViridianMart_Vendor::
	lock
	faceplayer
	msgbox ViridianMart_Vendor_Text_0
	waitmessage
	pokemart ViridianMartItems
	msgbox ViridianMart_Vendor_Text_1
	release
	end


	.align 2
ViridianMartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

ViridianMart_Text_BugCatcher::
	lock
	faceplayer
	msgbox ViridianMart_Text_BugCatcher_Text_0
	release
	end


ViridianMart_Text_Oldman::
	lock
	faceplayer
	msgbox ViridianMart_Text_Oldman_Text_0
	release
	end


ViridianMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

ViridianMart_Vendor_Text_1:
	.string "Please come again!$"

ViridianMart_Text_BugCatcher_Text_0:
	.string "This shop sells many ANTIDOTES! Great\n"
	.string "because I need to go throught\l"
	.string "VIRIDIAN FOREST!$"

ViridianMart_Text_Oldman_Text_0:
	.string "They refilled the stocks!\n"
	.string "We now have a lot of POTIONS$"
