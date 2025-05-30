Route120_BirdsCave_MapScripts::
	.byte 0


CeladonCenter_Text_AnnounceSign::
	lock
	msgbox CeladonCenter_Text_AnnounceSign_Text_0
	release
	end


CeladonDept_Text_1fHostess::
	lock
	faceplayer
	msgbox CeladonDept_Text_1fHostess_Text_0
	release
	end


CeladonDept_Text_2FVendor1::
	lock
	faceplayer
	message CeladonDept_Text_2FVendor1_Text_0
	waitmessage
	pokemart CeladonDept_Mart_2FVendor1
	msgbox CeladonDept_Text_2FVendor1_Text_1
	release
	return


	.align 2
CeladonDept_Mart_2FVendor1:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

CeladonDept_Text_2FVendor2::
	lock
	faceplayer
	message CeladonDept_Text_2FVendor1_Text_0
	waitmessage
	pokemart CeladonDept_Mart_2FVendor2
	msgbox CeladonDept_Text_2FVendor1_Text_1
	release
	return


	.align 2
CeladonDept_Mart_2FVendor2:
	.2byte ITEM_TM05_ROAR
	.2byte ITEM_TM24_THUNDERBOLT
	.2byte ITEM_TM28_DIG
	.2byte ITEM_TM31_BRICK_BREAK
	.2byte ITEM_TM02_DRAGON_CLAW
	.2byte ITEM_NONE

CeladonDept_Text_2fLass::
	lock
	faceplayer
	msgbox CeladonDept_Text_2fLass_Text_0
	release
	end


CeladonDept_Text_2fWoman::
	lock
	faceplayer
	msgbox CeladonDept_Text_2fWoman_Text_0
	release
	end


CeladonDept_Text_3FVendor::
	lock
	faceplayer
	message CeladonDept_Text_2FVendor1_Text_0
	waitmessage
	pokemart CeladonDept_Mart_3FVendor
	msgbox CeladonDept_Text_2FVendor1_Text_1
	release
	return


	.align 2
CeladonDept_Mart_3FVendor:
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_UP_GRADE
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_NONE

CeladonDept_Text_3fGBAKid1::
	lock
	faceplayer
	msgbox CeladonDept_Text_3fGBAKid1_Text_0
	release
	end


CeladonDept_Text_3fSNES::
	lock
	faceplayer
	msgbox CeladonDept_Text_3fSNES_Text_0
	release
	end


CeladonDept_Text_3fTV1::
	lock
	faceplayer
	msgbox CeladonDept_Text_3fTV1_Text_0
	release
	end


CeladonDept_Text_3fTV2::
	lock
	faceplayer
	msgbox CeladonDept_Text_3fTV2_Text_0
	release
	end


CeladonDept_Text_3fTV3::
	lock
	faceplayer
	msgbox CeladonDept_Text_3fTV3_Text_0
	release
	end


CeladonDept_Text_3fTV4::
	lock
	faceplayer
	msgbox CeladonDept_Text_3fTV4_Text_0
	release
	end


CeladonDept_Text_3FKidPlaying::
	lock
	faceplayer
	msgbox CeladonDept_Text_3FKidPlaying_Text_0
	release
	end


CeladonDept_Text_3FKidPlaying2::
	lock
	faceplayer
	msgbox CeladonDept_Text_3FKidPlaying2_Text_0
	release
	end


CeladonDept_Text_3FGirl::
	lock
	faceplayer
	msgbox CeladonDept_Text_3FGirl_Text_0
	release
	end


CeladonDept_Text_4FVendor::
	lock
	faceplayer
	message CeladonDept_Text_2FVendor1_Text_0
	waitmessage
	pokemart CeladonDept_Mart_4FVendor
	msgbox CeladonDept_Text_2FVendor1_Text_1
	release
	return


	.align 2
CeladonDept_Mart_4FVendor:
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

CeladonDept_Text_4FGuy::
	lock
	faceplayer
	msgbox CeladonDept_Text_4FGuy_Text_0
	release
	end


CeladonDept_Text_4FYoungster::
	lock
	faceplayer
	msgbox CeladonDept_Text_4FYoungster_Text_0
	release
	end


CeladonDept_Text_5FVendor::
	lock
	faceplayer
	message CeladonDept_Text_2FVendor1_Text_0
	waitmessage
	pokemart CeladonDept_Mart_5FVendor
	msgbox CeladonDept_Text_2FVendor1_Text_1
	release
	return


	.align 2
CeladonDept_Mart_5FVendor:
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_NONE

CeladonDept_Text_5FVendor2::
	lock
	faceplayer
	message CeladonDept_Text_2FVendor1_Text_0
	waitmessage
	pokemart CeladonDept_Mart_5FVendor2
	msgbox CeladonDept_Text_2FVendor1_Text_1
	release
	return


	.align 2
CeladonDept_Mart_5FVendor2:
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_CALCIUM
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

CeladonDept_Text_5FSailor::
	lock
	faceplayer
	msgbox CeladonDept_Text_5FSailor_Text_0
	release
	end


CeladonDept_Text_5FGentleman::
	lock
	faceplayer
	msgbox CeladonDept_Text_5FGentleman_Text_0
	release
	end


CeladonDept_Text_RoofGuy::
	lock
	faceplayer
	msgbox CeladonDept_Text_RoofGuy_Text_0
	release
	end


CeladonDept_Text_RoofGirl::
	lock
	faceplayer
	msgbox CeladonDept_Text_RoofGirl_Text_0
	release
	end


CeladonCenter_Text_AnnounceSign_Text_0:
	.string "1F: Service Counter\n"
	.string "2F: Trainer's Market\p"
	.string "3F: TV Game Shop\n"
	.string "4F: Wiseman Gifts\p"
	.string "5F: Drug Store\n"
	.string "Rooftop Square: Vending Machines$"

CeladonDept_Text_1fHostess_Text_0:
	.string "Hello ! Welcome to CELADON DEPT.\n"
	.string "STORE. The board on the right\l"
	.string "describes the store layout.$"

CeladonDept_Text_2FVendor1_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

CeladonDept_Text_2FVendor1_Text_1:
	.string "Please come again!$"

CeladonDept_Text_2fLass_Text_0:
	.string "For long outings, you should buy\n"
	.string "REVIVE.$"

CeladonDept_Text_2fWoman_Text_0:
	.string "I'm not a TRAINER but I really enjoy\n"
	.string "wandering in this floor, looking for\l"
	.string "some item. I really wish I could be a\l"
	.string "TRAINER...$"

CeladonDept_Text_3fGBAKid1_Text_0:
	.string "Captured POKéMON are registered\n"
	.string "with an ID No. and OT, the name of\l"
	.string "the Original Trainer that caught\l"
	.string "it !$"

CeladonDept_Text_3fSNES_Text_0:
	.string "{PLAYER}: Why is there an SNES here ?\n"
	.string "What era are they living in ? Is this\l"
	.string "the RETRO convention ?$"

CeladonDept_Text_3fTV1_Text_0:
	.string "{PLAYER}: Oh that's CHRONO TRIGGER !\n"
	.string "Best RPG ever. Won't change my mind !$"

CeladonDept_Text_3fTV2_Text_0:
	.string "{PLAYER}: Wow this kid basically beat\n"
	.string "Mr. Sandman like it was nothing !$"

CeladonDept_Text_3fTV3_Text_0:
	.string "{PLAYER}: Super Mario... I remember\n"
	.string "using YOSHI to make a super jump above\l"
	.string "a pit. Poor dino...$"

CeladonDept_Text_3fTV4_Text_0:
	.string "{PLAYER}: Ahah ! You forgot to get\n"
	.string "the Moon Pearl. You'll live like a bunny\l"
	.string "all your life ! Haha !$"

CeladonDept_Text_3FKidPlaying_Text_0:
	.string "I need to stay focus ! I'll get to the\n"
	.string "third DUNGEON soon !$"

CeladonDept_Text_3FKidPlaying2_Text_0:
	.string "I entered my nickname when I got the\n"
	.string "best score : MUK, but in reverse. It\l"
	.string "sound fun !$"

CeladonDept_Text_3FGirl_Text_0:
	.string "I wanted to play some ARCADE, but there\n"
	.string "is only SNES here. That's lame !$"

CeladonDept_Text_4FGuy_Text_0:
	.string "I've got a POKéDOLL for my girlfriend.\n"
	.string "But when I came back to her in SAFFRON,\l"
	.string "some boy already gave her her\l"
	.string "favourite doll ! I'm so pissed !$"

CeladonDept_Text_4FYoungster_Text_0:
	.string "You know you can distracted a POKéMON\n"
	.string "and running from a Battle by throwing a\l"
	.string "POKéDOLL to a wild POKéMON?$"

CeladonDept_Text_5FSailor_Text_0:
	.string "I'm here for POKéMON ability enhancers.\n"
	.string "I wonder if I eat some PROTEIN, will I\l"
	.string "be able to lift 1000lb like a MACHOP?$"

CeladonDept_Text_5FGentleman_Text_0:
	.string "POkéMON Ability enhancers can be\n"
	.string "purchase only here.\n"
	.string "{PLAYER}: Well I can buy some in\l"
	.string "SLATEPORT CITY Market. So you're wrong\l"
	.string "!$"

CeladonDept_Text_RoofGuy_Text_0:
	.string "My sister is a genius... She trade TM for\n"
	.string "cheap drinks... She drives me nuts\l"
	.string "because I bought it for her !$"

CeladonDept_Text_RoofGirl_Text_0:
	.string "BURP !!\n"
	.string "I drank too much SODA I think !$"
