PetalburgResto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgResto_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgResto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_DAY
	goto_if_eq PetalburgResto_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PetalburgResto_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, PetalburgResto_Event_Worker
	return


PetalburgResto_Event_Worker::
	removeobject 2
	end


PetalburgResto_Text_Man::
	msgbox PetalburgResto_Text_Man_Text_0, MSGBOX_NPC
	applymovement 8, PetalburgResto_Man_Mouvement
	waitmovement 0
	release
	end


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
	end


PetalburgResto_Text_OldWoman::
	lock
	faceplayer
	msgbox PetalburgResto_Text_OldWoman_Text_0
	release
	end


PetalburgResto_Text_Vendor::
	lock
	faceplayer
	message PetalburgResto_Text_Vendor_Text_0
	waitmessage
	pokemart PetalburgResto_PubItems
	msgbox PetalburgResto_Text_Vendor_Text_1
	release
	end


	.align 2
PetalburgResto_PubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

PetalburgResto_Text_Man_Text_0:
	.string "My problems are in my glass. And I'm\ndrinking them all.\lLeave me alone, it's a real man's task!$"

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
	.string "Welcome,\nDo you want a snack?$"

PetalburgResto_Text_Vendor_Text_1:
	.string "Don't mind the old drunk on the corner.\nSee you again!$"
