Vermilion_Shop_MapScripts::
	.byte 0


VermilionShop_Vendor::
	lock
	faceplayer
	msgbox VermilionShop_Vendor_Text_0
	waitmessage
	pokemart VermilionMartItems
	msgbox VermilionShop_Vendor_Text_1
	release
	end


	.align 2
VermilionMartItems:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Vermilion_Mart_Lass::
	lock
	faceplayer
	msgbox Vermilion_Mart_Lass_Text_0
	release
	end


Vermilion_Mart_Man::
	lock
	faceplayer
	msgbox Vermilion_Mart_Man_Text_0
	release
	end


VermilionShop_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

VermilionShop_Vendor_Text_1:
	.string "Please come again!$"

Vermilion_Mart_Lass_Text_0:
	.string "I think POKEMON can be good or bad.\n"
	.string "Depends on the TRAINER.$"

Vermilion_Mart_Man_Text_0:
	.string "Is there some SODA POP here ?$"
