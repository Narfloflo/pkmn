Petalburg_Mines_MapScripts::
	.byte 0

PetalburMines_Text_Miner::
	lock
	faceplayer
	message PetalburMines_Text_Miner_Text_0
	waitmessage
	pokemart PetalburgMinesVendor
	msgbox PetalburMines_Text_Miner_Text_1
	release
	return


	.align 2
PetalburgMinesVendor:
	.2byte ITEM_CHARCOAL
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_NONE

PetalburgMines_Text_WorkingMiner::
	lock
	msgbox PetalburgMines_Text_WorkingMiner_Text_0
	release
	end


PetalburgMines_Text_Man1::
	lock
	faceplayer
	msgbox PetalburgMines_Text_Man1_Text_0
	release
	end


PetalburgMines_Text_Man2::
	lock
	faceplayer
	msgbox PetalburgMines_Text_Man2_Text_0
	release
	end


PetalburMines_Text_Miner_Text_0:
	.string "Hello young TRAINER, need anything?$"

PetalburMines_Text_Miner_Text_1:
	.string "Thanks you for your support!$"

PetalburgMines_Text_WorkingMiner_Text_0:
	.string "{PLAYER}: This man is digging. I\n"
	.string "should let him work.$"

PetalburgMines_Text_Man1_Text_0:
	.string "This mine used to employed a lot of\n"
	.string "person, but nowadays, we mostly use\l"
	.string "our POKéMON to work in accord with the\l"
	.string "environment.$"

PetalburgMines_Text_Man2_Text_0:
	.string "You can find some mushrooms here if you\n"
	.string "are lucky.$"
