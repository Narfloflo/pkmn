Mauville_BigMart_MapScripts::
	.byte 0

    SCRIPT_SelfTrade_V1::
	lock
	faceplayer
	msgbox SCRIPT_SelfTrade_Text_IllTradeIfYouWant, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SCRIPT_SelfTrade_DeclineTrade
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq SCRIPT_SelfTrade_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	setvar VAR_0x8004, 6
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SCRIPT_SelfTrade_Text_ComeBack, MSGBOX_DEFAULT
	release
	end

SCRIPT_SelfTrade_V2::
	lock
	faceplayer
	msgbox SCRIPT_SelfTrade_Text_IllTradeIfYouWant, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SCRIPT_SelfTrade_DeclineTrade
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq SCRIPT_SelfTrade_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	setvar VAR_0x8004, 7
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setvar VAR_0x8004, 8
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SCRIPT_SelfTrade_Text_ComeBack, MSGBOX_DEFAULT
	release
	end

SCRIPT_SelfTrade_DeclineTrade::
	msgbox SCRIPT_SelfTrade_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

SCRIPT_SelfTrade_Text_IllTradeIfYouWant:
	.string "I will help you to trade a pokemon\n"
	.string "with yourself!$"

SCRIPT_SelfTrade_Text_ComeBack:
	.string "Come back anytime.$"

SCRIPT_SelfTrade_Text_YouDontWantToThatsOkay:
	.string "You dont want to?\n"
    .string "Okay come back anytime$"

NewVendor1::
	lock
	faceplayer
	message NewVendor1_Text_0
	waitmessage
	pokemart Vendor1
	msgbox NewVendor1_Text_1
	release
	return


	.align 2
Vendor1:
	.2byte ITEM_TM35
	.2byte ITEM_TM47
	.2byte ITEM_TM23
	.2byte ITEM_TM27
	.2byte ITEM_NONE

NewVendor2::
	lock
	faceplayer
	message NewVendor1_Text_0
	waitmessage
	pokemart Vendor2
	msgbox NewVendor1_Text_1
	release
	return


	.align 2
Vendor2:
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_063
	.2byte ITEM_064
	.2byte ITEM_NONE

NewVendor1_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

NewVendor1_Text_1:
	.string "Please come again!$"
