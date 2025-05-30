PalletTownMart_MapScripts::
	.byte 0


PalletMart_Text_Woman::
	lock
	faceplayer
	msgbox PalletMart_Text_Woman_Text_0
	release
	end


PalletMart_Vendor::
	lock
	faceplayer
	msgbox PalletMart_Vendor_Text_0
	waitmessage
	pokemart PalletMartItems
	msgbox PalletMart_Vendor_Text_1
	release
	end


	.align 2
PalletMartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

PalletMart_Text_Woman_Text_0:
	.string "Wow this QUESTIONNAIRE is really hard...\n"
	.string "Four words, a random question... What am\l"
	.string "I able to do?$"

PalletMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

PalletMart_Vendor_Text_1:
	.string "Please come again!$"
