LilycoveResto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveResto_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveResto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveResto_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LilycoveResto_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	removeobject 3
	end


LilycoveResto_Text_Vendor::
	lock
	faceplayer
	message LilycoveResto_Text_Vendor_Text_0
	waitmessage
	pokemart LilycoveResto_PubItems
	msgbox LilycoveResto_Text_Vendor_Text_1
	release
	return


	.align 2
LilycoveResto_PubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

LilycoveResto_Text_OldMan::
	msgbox LilycoveResto_Text_OldMan_Text_0, MSGBOX_NPC
	applymovement 4, Exclamation
	waitmovement 0
	message LilycoveResto_Text_OldMan_Text_1
	end


LilycoveResto_Text_Sailor1::
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveResto_Text_Sailor1_2
	msgbox LilycoveResto_Text_Sailor1_Text_1, MSGBOX_NPC
	end

LilycoveResto_Text_Sailor1_2:
	msgbox LilycoveResto_Text_Sailor1_Text_0
	end


LilycoveResto_Text_Sailor2::
	msgbox LilycoveResto_Text_Sailor2_Text_0, MSGBOX_NPC
	end


LilycoveResto_Text_LassJr::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LilycoveResto_Text_LassJrLeavemeAlone
	goto_if_eq VAR_RESULT, FEMALE, LilycoveResto_Text_LassJrBastard
	return


LilycoveResto_Text_LassJrLeavemeAlone::
	msgbox LilycoveResto_Text_LassJrLeavemeAlone_Text_0, MSGBOX_NPC
	end


LilycoveResto_Text_LassJrBastard::
	msgbox LilycoveResto_Text_LassJrBastard_Text_0, MSGBOX_NPC
	end


LilycoveResto_Text_Youngster::
	msgbox LilycoveResto_Text_Youngster_Text_0, MSGBOX_NPC
	end


LilycoveResto_Text_KidM::
	msgbox LilycoveResto_Text_KidM_Text_0, MSGBOX_NPC
	end


LilycoveResto_Text_Vendor_Text_0:
	.string "Welcome!\nOh a kid! No booze for you.$"

LilycoveResto_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

LilycoveResto_Text_OldMan_Text_0:
	.string "Eating this plate make me feel young\nagain!\lI can't stop eating!$"

LilycoveResto_Text_OldMan_Text_1:
	.string "Arg! A heart attack!\n……………………………………\l……………………………………\lI'll be fine$"

LilycoveResto_Text_Sailor1_Text_0:
	.string "My mate from KANTO is gone…\nI'm a bit sad, but that's the sailor\llife you know.$"

LilycoveResto_Text_Sailor1_Text_1:
	.string "My mate here is going back to KANTO\nsoon!\lSo we're celebrating his last days here!$"

LilycoveResto_Text_Sailor2_Text_0:
	.string "Soon I'll be gone… hic\nI miss my land!… hic\lYou cannot understand… hic$"

LilycoveResto_Text_LassJrLeavemeAlone_Text_0:
	.string "Oh come on! You guys can't leave me\nalone?$"

LilycoveResto_Text_LassJrBastard_Text_0:
	.string "Oh my ARCEUS.\nThe boy over there is such a prick!\lHe's so obsessed by me! I can't…\lI need a strong POKéMON to punch him.$"

LilycoveResto_Text_Youngster_Text_0:
	.string "This girl over there is my waifu, but\nshe don't know that yet.$"

LilycoveResto_Text_KidM_Text_0:
	.string "I ate too much sugar! I can't stop\nrunning!$"
