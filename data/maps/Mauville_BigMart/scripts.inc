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

MauvilleBigMart_Text_NewVendor1::
	lock
	faceplayer
	message MauvilleBigMart_Text_NewVendor1_Text_0
	waitmessage
	pokemart MauvilleBigMart_Mart_NewVendor1
	msgbox MauvilleBigMart_Text_NewVendor1_Text_1
	release
	return


	.align 2
MauvilleBigMart_Mart_NewVendor1:
	.2byte ITEM_TM35
	.2byte ITEM_TM47
	.2byte ITEM_TM23
	.2byte ITEM_TM27
	.2byte ITEM_NONE

MauvilleBigMart_Text_NewVendor2::
	lock
	faceplayer
	message MauvilleBigMart_Text_NewVendor1_Text_0
	waitmessage
	pokemart MauvilleBigMart_Mart_NewVendor2
	msgbox MauvilleBigMart_Text_NewVendor1_Text_1
	release
	return


	.align 2
MauvilleBigMart_Mart_NewVendor2:
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_NONE

MauvilleBigMart_Text_NewVendor3::
	lock
	faceplayer
	msgbox MauvilleBigMart_Text_NewVendor3_Text_0
	goto_if_set FLAG_BADGE08_GET, MauvilleBigMart_Text_NewVendor3_2
	goto_if_set FLAG_BADGE07_GET, MauvilleBigMart_Text_NewVendor3_3
	goto_if_set FLAG_BADGE06_GET, MauvilleBigMart_Text_NewVendor3_4
	goto_if_set FLAG_BADGE05_GET, MauvilleBigMart_Text_NewVendor3_5
	goto_if_set FLAG_BADGE04_GET, MauvilleBigMart_Text_NewVendor3_6
	goto_if_set FLAG_BADGE03_GET, MauvilleBigMart_Text_NewVendor3_7
	pokemart Badge2Vendor
MauvilleBigMart_Text_NewVendor3_1:
	msgbox MauvilleBigMart_Text_NewVendor1_Text_1
	release
	end

MauvilleBigMart_Text_NewVendor3_2:
	pokemart Bagde8Vendor
	goto MauvilleBigMart_Text_NewVendor3_1

MauvilleBigMart_Text_NewVendor3_3:
	pokemart Bagde7Vendor
	goto MauvilleBigMart_Text_NewVendor3_1

MauvilleBigMart_Text_NewVendor3_4:
	pokemart Bagde6Vendor
	goto MauvilleBigMart_Text_NewVendor3_1

MauvilleBigMart_Text_NewVendor3_5:
	pokemart Bagde5Vendor
	goto MauvilleBigMart_Text_NewVendor3_1

MauvilleBigMart_Text_NewVendor3_6:
	pokemart Bagde4Vendor
	goto MauvilleBigMart_Text_NewVendor3_1

MauvilleBigMart_Text_NewVendor3_7:
	pokemart Bagde3Vendor
	goto MauvilleBigMart_Text_NewVendor3_1


	.align 2
Badge2Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_NONE

	.align 2
Bagde3Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_NONE

	.align 2
Bagde4Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_TM50_OVERHEAT
	.2byte ITEM_NONE

	.align 2
Bagde5Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_TM50_OVERHEAT
	.2byte ITEM_TM42_FACADE
	.2byte ITEM_NONE

	.align 2
Bagde6Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_TM50_OVERHEAT
	.2byte ITEM_TM42_FACADE
	.2byte ITEM_TM40_AERIAL_ACE
	.2byte ITEM_NONE

	.align 2
Bagde7Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_TM50_OVERHEAT
	.2byte ITEM_TM42_FACADE
	.2byte ITEM_TM40_AERIAL_ACE
	.2byte ITEM_TM04_CALM_MIND
	.2byte ITEM_NONE

	.align 2
Bagde8Vendor:
	.2byte ITEM_TM39_ROCK_TOMB
	.2byte ITEM_TM08_BULK_UP
	.2byte ITEM_TM34_SHOCK_WAVE
	.2byte ITEM_TM50_OVERHEAT
	.2byte ITEM_TM42_FACADE
	.2byte ITEM_TM40_AERIAL_ACE
	.2byte ITEM_TM04_CALM_MIND
	.2byte ITEM_TM03_WATER_PULSE
	.2byte ITEM_NONE

MauvilleNewMart_Text_Artist::
	lock
	faceplayer
	msgbox MauvilleNewMart_Text_Artist_Text_0
	release
	end


MauvilleBigMart_Text_NewVendor1_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

MauvilleBigMart_Text_NewVendor1_Text_1:
	.string "Please come again!$"

MauvilleBigMart_Text_NewVendor3_Text_0:
	.string "Welcome!\n"
	.string "Let me check your BADGES\p"
	.string "How may I serve you?$"

MauvilleNewMart_Text_Artist_Text_0:
	.string "Yo ! I want a SODA, but my bill is stuck\n"
	.string "in the machine !$"
