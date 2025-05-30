VioletMart_MapScripts::
	.byte 0


VioletCityMart_Text_Guy::
	lock
	faceplayer
	msgbox VioletCityMart_Text_Guy_Text_0
	release
	end


VioletCityMart_Text_Oldwoman::
	lock
	faceplayer
	msgbox VioletCityMart_Text_Oldwoman_Text_0
	release
	end


VioletCityMart_Text_Vendor::
	lock
	faceplayer
	message VioletCityMart_Text_Vendor_Text_0
	waitmessage
	pokemart VioletCityMartVendor
	msgbox VioletCityMart_Text_Vendor_Text_1
	release
	return


	.align 2
VioletCityMartVendor:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

VioletCityMart_Text_Guy_Text_0:
	.string "POKéMON can hold items like POTION and\n"
	.string "ANTIDOTE. Huh, you already knew about\l"
	.string "it ? Well sorry Einstein !$"

VioletCityMart_Text_Oldwoman_Text_0:
	.string "When you first catch a POKéMON, it may\n"
	.string "be weak. But it will eventually grow to\l"
	.string "be strong. Treat your POKéMON with\l"
	.string "love or become a ROCKET !$"

VioletCityMart_Text_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

VioletCityMart_Text_Vendor_Text_1:
	.string "Please come again!$"
