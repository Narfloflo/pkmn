PetalburgResto_MapScripts::
	.byte 0


PetalburgResto_Text_Man::
	lock
	faceplayer
	msgbox PetalburgResto_Text_Man_Text_0
	applymovement 8, PetalburgResto_Man_Mouvement
	waitmovement 0
	release
	return


PetalburgResto_Man_Mouvement:
	face_right
	step_end

PetalburgResto_Text_Miner::
	lock
	faceplayer
	msgbox PetalburgResto_Text_Miner_Text_0
	applymovement 4, PetalburgResto_Man_Mouvement
	waitmovement 0
	release
	return


PetalburgResto_Text_OldWoman::
	lock
	faceplayer
	msgbox PetalburgResto_Text_OldWoman_Text_0
	release
	return


PetalburgResto_Text_Vendor::
	lock
	faceplayer
	message PetalburgResto_Text_Vendor_Text_0
	waitmessage
	pokemart PetalburgResto_PubItems
	msgbox PetalburgResto_Text_Vendor_Text_1
	release
	return


	.align 2
PetalburgResto_PubItems:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

PetalburgResto_Text_Man_Text_0:
	.string "I'm drinking my troubles... Get lost !$"

PetalburgResto_Text_Miner_Text_0:
	.string "I love having a big plate of\n"
	.string "spaghetti after a long day in the\l"
	.string "mine!$"

PetalburgResto_Text_OldWoman_Text_0:
	.string "You know there is several places\n"
	.string "like this in all the other cities.\l"
	.string "You can also find some restaurants\l"
	.string "in the various routes of HOENN.\l"
	.string "Keep your eyes opened kid!$"

PetalburgResto_Text_Vendor_Text_0:
	.string "Oh a kid ! No booze for you.$"

PetalburgResto_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"
