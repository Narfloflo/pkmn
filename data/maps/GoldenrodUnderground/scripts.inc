GoldenrodUnderground_MapScripts::
	.byte 0


GoldenrodCity_Underground_EventScript_OlderHaircutBrother::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x920, GoldenrodCity_Underground_EventScript_OlderHaircutBrother_2
	showmoneybox 0, 0, FALSE
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GoldenrodCity_Underground_EventScript_OlderHaircutBrother_6
	call GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Rejected
GoldenrodCity_Underground_EventScript_OlderHaircutBrother_5:
	hidemoneybox
GoldenrodCity_Underground_EventScript_OlderHaircutBrother_1:
	release
	return

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_2:
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_0
	goto GoldenrodCity_Underground_EventScript_OlderHaircutBrother_1

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_6:
	checkmoney 500, FALSE
	compare VAR_RESULT, TRUE
	goto_if_eq GoldenrodCity_Underground_EventScript_OlderHaircutBrother_9
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_5
	goto GoldenrodCity_Underground_EventScript_OlderHaircutBrother_5

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_9:
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_2
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 0xFF
	goto_if_ne GoldenrodCity_Underground_EventScript_OlderHaircutBrother_12
	call GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Rejected
	goto GoldenrodCity_Underground_EventScript_OlderHaircutBrother_5

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_12:
	removemoney 500, FALSE
	showmoneybox 0, 0, FALSE
	playse SE_RG_SHOP
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_3
	closemessage
	hidemoneybox
	fadescreen FADE_TO_BLACK
	special OlderHaircutBrother
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_4
	call GoldenrodCity_Underground_EventScript_Haircut_Result
	setflag FLAG_UNUSED_0x920
	goto GoldenrodCity_Underground_EventScript_OlderHaircutBrother_5


GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Rejected::
	msgbox GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Rejected_Text_0
	return


GoldenrodCity_Underground_EventScript_YoungerHaircutBrother::
	msgbox GoldenrodCity_Underground_EventScript_YoungerHaircutBrother_Text_0, MSGBOX_NPC
	end


GoldenrodCity_Underground_EventScript_Haircut_Result::
	bufferpartymonnick 0, VAR_0x8004
	special PlayChosenMonCry
	switch VAR_RESULT
	case 0, GoldenrodCity_Underground_EventScript_Haircut_Result_3
	case 1, GoldenrodCity_Underground_EventScript_Haircut_Result_4
	case 2, GoldenrodCity_Underground_EventScript_Haircut_Result_5
GoldenrodCity_Underground_EventScript_Haircut_Result_1:
	waitmoncry
	return

GoldenrodCity_Underground_EventScript_Haircut_Result_3:
	msgbox GoldenrodCity_Underground_EventScript_Haircut_Result_Text_0
	goto GoldenrodCity_Underground_EventScript_Haircut_Result_1

GoldenrodCity_Underground_EventScript_Haircut_Result_4:
	msgbox GoldenrodCity_Underground_EventScript_Haircut_Result_Text_1
	goto GoldenrodCity_Underground_EventScript_Haircut_Result_1

GoldenrodCity_Underground_EventScript_Haircut_Result_5:
	msgbox GoldenrodCity_Underground_EventScript_Haircut_Result_Text_2
	goto GoldenrodCity_Underground_EventScript_Haircut_Result_1


GoldenrodCity_Underground_EventScript_HerbMerchant::
	lock
	faceplayer
	msgbox GoldenrodCity_Underground_EventScript_HerbMerchant_Text_0
	waitmessage
	pokemart HerbMerchantItems
	msgbox GoldenrodCity_Underground_EventScript_HerbMerchant_Text_1
	release
	end


	.align 2
HerbMerchantItems:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

GoldenrodCity_Underground_EventScript_Gambler::
	msgbox GoldenrodCity_Underground_EventScript_Gambler_Text_0, MSGBOX_NPC
	end


GoldenrodCity_Underground_Sign_HerbMerchant::
	msgbox GoldenrodCity_Underground_Sign_HerbMerchant_Text_0, MSGBOX_SIGN
	end


GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_0:
	.string "I do only one haircut a day.\n"
	.string "I'm done for today.$"

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_1:
	.string "Welcome!\n"
	.string "I run the POKéMON SALON!\p"
	.string "I'm the older and better of the two\n"
	.string "HAIRCUT BROTHERS.\p"
	.string "I can make your POKéMON beautiful\n"
	.string "for just ¥500.\p"
	.string "Would you like me to do that?$"

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_2:
	.string "Which POKéMON should I work on?$"

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_3:
	.string "Okay!\n"
	.string "Watch it become beautiful!$"

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_4:
	.string "There!\n"
	.string "All done!$"

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Text_5:
	.string "You'll need more money than that.$"

GoldenrodCity_Underground_EventScript_OlderHaircutBrother_Rejected_Text_0:
	.string "Is that right?\n"
	.string "That's a shame!$"

GoldenrodCity_Underground_EventScript_YoungerHaircutBrother_Text_0:
	.string "My brother is the best at massaging\nPOKéMON!\lI'm learning the job because being here\lall the time is a real pain.\lMy bro is counting on me!$"

GoldenrodCity_Underground_EventScript_Haircut_Result_Text_0:
	.string "{STR_VAR_1} looks a little happier.$"

GoldenrodCity_Underground_EventScript_Haircut_Result_Text_1:
	.string "{STR_VAR_1} looks happy.$"

GoldenrodCity_Underground_EventScript_Haircut_Result_Text_2:
	.string "{STR_VAR_1} looks delighted!$"

GoldenrodCity_Underground_EventScript_HerbMerchant_Text_0:
	.string "Hello, dear.\n"
	.string "I sell inexpensive herbal medicine.\p"
	.string "They're good but a trifle bitter.\n"
	.string "Your POKéMON may not like them.\l"
	.string "Hehehehe…$"

GoldenrodCity_Underground_EventScript_HerbMerchant_Text_1:
	.string "Come again, dear.\n"
	.string "Hehehehe…$"

GoldenrodCity_Underground_EventScript_Gambler_Text_0:
	.string "I'm still thinking about my business\nmodel...\lSo yeah, not open!$"

GoldenrodCity_Underground_Sign_HerbMerchant_Text_0:
	.string "HERB MERCHANT\n“We don't refunds!”$"
