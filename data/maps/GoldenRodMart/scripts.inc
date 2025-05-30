GoldenRodMart_MapScripts::
	.byte 0


GoldenRodMart_Text_Vendor5F::
	lock
	faceplayer
	message GoldenRodMart_Text_Vendor5F_Text_0
	waitmessage
	pokemartdecoration GoldenRodMartDecorVendor
	msgbox GoldenRodMart_Text_Vendor5F_Text_1, MSGBOX_DEFAULT
	release
	return


	.align 2
GoldenRodMartDecorVendor:
	.2byte DECOR_MUD_BALL
	.2byte DECOR_FENCE_LENGTH
	.2byte DECOR_FENCE_WIDTH
	.2byte DECOR_TIRE
	.2byte DECOR_BREAKABLE_DOOR
	.2byte DECOR_SOLID_BOARD
	.2byte DECOR_SAND_ORNAMENT
	.2byte DECOR_STAND
	.2byte DECOR_SLIDE
	.2byte DECOR_TV
	.2byte DECOR_ROUND_TV
	.2byte DECOR_CUTE_TV
	.2byte DECOR_WAILMER_DOLL
	.2byte DECOR_RHYDON_DOLL
	.2byte ITEM_NONE

GoldenRodMart_Text_Boy::
	msgbox GoldenRodMart_Text_Boy_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_ReceptionLady::
	msgbox GoldenRodMart_Text_ReceptionLady_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_3FGentleman::
	msgbox GoldenRodMart_Text_3FGentleman_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_3FCooltrainer::
	msgbox GoldenRodMart_Text_3FCooltrainer_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_Beauty::
	msgbox GoldenRodMart_Text_Beauty_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_OldMan::
	msgbox GoldenRodMart_Text_OldMan_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_2FSpeedBugManiac::
	msgbox GoldenRodMart_Text_2FSpeedBugManiac_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_2FSpecialBugManiac::
	msgbox GoldenRodMart_Text_2FSpecialBugManiac_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_6FMan::
	msgbox GoldenRodMart_Text_6FMan_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_6FLass::
	msgbox GoldenRodMart_Text_6FLass_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_6FGBAKid::
	msgbox GoldenRodMart_Text_6FGBAKid_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_5FYoungster::
	msgbox GoldenRodMart_Text_5FYoungster_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_5FMan::
	msgbox GoldenRodMart_Text_5FMan_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_4FSailor::
	msgbox GoldenRodMart_Text_4FSailor_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_1FSign::
	msgbox GoldenRodMart_Text_1FSign_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_2FSign::
	msgbox GoldenRodMart_Text_2FSign_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_3FSign::
	msgbox GoldenRodMart_Text_3FSign_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_4FSign::
	msgbox GoldenRodMart_Text_4FSign_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_5FSign::
	msgbox GoldenRodMart_Text_5FSign_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_6FSign::
	msgbox GoldenRodMart_Text_6FSign_Text_0, MSGBOX_NPC
	end


GoldenRodMart_Text_Vendor2F::
	lock
	faceplayer
	message GoldenRodMart_Text_Vendor5F_Text_0
	waitmessage
	pokemartdecoration GoldenRodMart2FVendor
	msgbox GoldenRodMart_Text_Vendor5F_Text_1, MSGBOX_DEFAULT
	release
	return


	.align 2
GoldenRodMart2FVendor:
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

GoldenRodMart_Text_Vendor2F2::
	lock
	faceplayer
	message GoldenRodMart_Text_Vendor5F_Text_0
	waitmessage
	pokemartdecoration GoldenRodMart2F2Vendor
	msgbox GoldenRodMart_Text_Vendor5F_Text_1, MSGBOX_DEFAULT
	release
	return


	.align 2
GoldenRodMart2F2Vendor:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FAB_MAIL
	.2byte ITEM_NONE

GoldenRodMart_Text_Vendor3F::
	lock
	faceplayer
	message GoldenRodMart_Text_Vendor5F_Text_0
	waitmessage
	pokemartdecoration GoldenRodMart3FVendor
	msgbox GoldenRodMart_Text_Vendor5F_Text_1, MSGBOX_DEFAULT
	release
	return


	.align 2
GoldenRodMart3FVendor:
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

GoldenRodMart_Text_Vendor4F::
	lock
	faceplayer
	message GoldenRodMart_Text_Vendor5F_Text_0
	waitmessage
	pokemartdecoration GoldenRodMart4FVendor
	msgbox GoldenRodMart_Text_Vendor5F_Text_1, MSGBOX_DEFAULT
	release
	return


	.align 2
GoldenRodMart4FVendor:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

GoldenRodMart_Text_Vendor5F_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

GoldenRodMart_Text_Vendor5F_Text_1:
	.string "Please come again!$"

GoldenRodMart_Text_Boy_Text_0:
	.string "My mom is upstairs trying to bargains.\nShe always have good deals!$"

GoldenRodMart_Text_ReceptionLady_Text_0:
	.string "Welcome to GOLDENROD Dept. Store.$"

GoldenRodMart_Text_3FGentleman_Text_0:
	.string "This Dept. Store makes me realize that\nGOLDENROD is a big city.\lThe selection here is unmatched\lanywhere else.\l{PLAYER}: Not even in HOENN or\lKANTO?...$"

GoldenRodMart_Text_3FCooltrainer_Text_0:
	.string "You know that the best prizes are at\nthe GAME CORNER?\lTMs and POKéMON also!$"

GoldenRodMart_Text_Beauty_Text_0:
	.string "Yes... huh huh... Wait!\nYou can't see I on the phone?\lOh ARCEUS!$"

GoldenRodMart_Text_OldMan_Text_0:
	.string "Hum.. The elevator is broken?\nArf...$"

GoldenRodMart_Text_2FSpeedBugManiac_Text_0:
	.string "I, I, I'm really impatient!\nI use X SPEED in battle to speed up my\lPOKéMON.$"

GoldenRodMart_Text_2FSpecialBugManiac_Text_0:
	.string "= Hey! When you battle, do you use X\nSPECIAL?\lIt's awesome. It really jack up SPECIAL\lATTACK!$"

GoldenRodMart_Text_6FMan_Text_0:
	.string "If you're tired, try the vending\nmachine's drinks.\lYour POKéMON will love them too.$"

GoldenRodMart_Text_6FLass_Text_0:
	.string "Do you listen to LUCKY CHANNEL?\nNo? You don't have a RADIO? Seriously?!$"

GoldenRodMart_Text_6FGBAKid_Text_0:
	.string "I'm playing with a friend who's on the\nFirst floor. But the connexion is\lreally aweful.$"

GoldenRodMart_Text_5FYoungster_Text_0:
	.string "I come from HOENN to visit some family.\nSo we can buy some stuff here.$"

GoldenRodMart_Text_5FMan_Text_0:
	.string "I hate going shopping... But my\ndaughter will kill me if I don't bring\lhere some stuff.$"

GoldenRodMart_Text_4FSailor_Text_0:
	.string "You can't rename a POKéMON you get in a\ntrade.\lSo I have a POKéMON called JIJI and\lBABY.\lIt's cringe...$"

GoldenRodMart_Text_1FSign_Text_0:
	.string "1F Service Counter\n2F Trainer's Market\l3F Battle Collection\l4F Medicine Box\l5F Decoration Corner\l6F Tranquil Square$"

GoldenRodMart_Text_2FSign_Text_0:
	.string "Your Travel Companion\n2F Trainer's Market$"

GoldenRodMart_Text_3FSign_Text_0:
	.string "For Victory Seekers\n3F Battle Collection$"

GoldenRodMart_Text_4FSign_Text_0:
	.string "Let Us Pump Up Your POKéMON!\n4F Medicine Box$"

GoldenRodMart_Text_5FSign_Text_0:
	.string "Decorate your Home\n5F Decoration Corner$"

GoldenRodMart_Text_6FSign_Text_0:
	.string "Take a Break from Shopping!\n6F Tranquil Square$"
