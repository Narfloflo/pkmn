OlivineCityMart_MapScripts::
	.byte 0


OlivineCityMart_Text_Vendor::
	lock
	faceplayer
	message OlivineCityMart_Text_Vendor_Text_0
	waitmessage
	pokemart OlivineCityMartVendor
	msgbox OlivineCityMart_Text_Vendor_Text_1
	release
	return


	.align 2
OlivineCityMartVendor:
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

OlivineCityMart_Text_Girl1::
	lock
	faceplayer
	msgbox OlivineCityMart_Text_Girl1_Text_0
	release
	end


OlivineCityMart_Text_Girl2::
	lock
	faceplayer
	msgbox OlivineCityMart_Text_Girl2_Text_0
	release
	end


OlivineCityMart_Text_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

OlivineCityMart_Text_Vendor_Text_1:
	.string "Please come again!$"

OlivineCityMart_Text_Girl1_Text_0:
	.string "My BUTTERFREE came from my boyfriend\n"
	.string "overseas.\p"
	.string "It carried some MAIL from him. Want to\n"
	.string "know what it says?\p"
	.string "Let's see... Nope! It's a secret!$"

OlivineCityMart_Text_Girl2_Text_0:
	.string "Do your POKEMON already know the move\n"
	.string "for carrying people on water?$"
