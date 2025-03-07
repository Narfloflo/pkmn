PewterMart_MapScripts::
	.byte 0


Pewter_Mart_Youngster::
	lock
	faceplayer
	msgbox Pewter_Mart_Youngster_Text_0
	release
	end


PewterMart_Vendor::
	lock
	faceplayer
	msgbox PewterMart_Vendor_Text_0
	waitmessage
	pokemart PewterMartItems
	msgbox PewterMart_Vendor_Text_1
	release
	end


	.align 2
PewterMartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Pewter_Mart_Youngster_Text_0:
	.string "Wow! A shady guy got me to buy this\n"
	.string "really weird fish POKéMON! It's totally\l"
	.string "weak and it cost $500!$"

PewterMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

PewterMart_Vendor_Text_1:
	.string "Please come again!$"
