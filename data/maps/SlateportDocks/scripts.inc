SlateportDocks_MapScripts::
	.byte 0


EcruteakMart_Text_Vendor::
	lock
	faceplayer
	message EcruteakMart_Text_Vendor_Text_0
	waitmessage
	pokemart EcruteakMartVendor
	msgbox EcruteakMart_Text_Vendor_Text_1
	release
	return


	.align 2
EcruteakMartVendor:
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

EcruteakMart_Text_Man::
	msgbox EcruteakMart_Text_Man_Text_0, MSGBOX_NPC
	end


EcruteakMart_Text_Lass::
	msgbox EcruteakMart_Text_Lass_Text_0, MSGBOX_NPC
	end


EcruteakMart_Text_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

EcruteakMart_Text_Vendor_Text_1:
	.string "Please come again!$"

EcruteakMart_Text_Man_Text_0:
	.string "I just hatched a EEVEE!\nBut now I don't know if I should let\lhim stay like this or use a STONE to\levolve him.$"

EcruteakMart_Text_Lass_Text_0:
	.string "Do you think the MAGNET TRAIN will\nincrease the amount of stuff we have\lhere?\lI mean, it's pretty lowkey here...$"
