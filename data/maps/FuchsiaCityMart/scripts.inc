FuchsiaCityMart_MapScripts::
	.byte 0


FuchsiaCityMart_Text_Lass::
	lock
	faceplayer
	msgbox FuchsiaCityMart_Text_Lass_Text_0
	release
	end


FuchsiaCityMart_Vendor::
	lock
	faceplayer
	msgbox FuchsiaCityMart_Vendor_Text_0
	waitmessage
	pokemart FuchsiaCityMartItems
	msgbox FuchsiaCityMart_Vendor_Text_1
	release
	end


	.align 2
FuchsiaCityMartItems:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

FuchsiaCityMart_Text_Lass_Text_0:
	.string "Did you try X SPEED ? It speeds up a\nPOKéMON in battle !$"

FuchsiaCityMart_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

FuchsiaCityMart_Vendor_Text_1:
	.string "Please come again!$"
