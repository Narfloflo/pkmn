SootopolisResto_MapScripts::
	.byte 0


SootopolisResto_Text_Vendor::
	lock
	faceplayer
	message SootopolisResto_Text_Vendor_Text_0
	waitmessage
	pokemart SootopolisResto_RestoPubItems
	msgbox SootopolisResto_Text_Vendor_Text_1
	release
	return


	.align 2
SootopolisResto_RestoPubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_BLKICECREAM
	.2byte ITEM_WHTICECREAM
	.2byte ITEM_STBRICECREAM
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

SootopolisResto_Text_ExpertM::
	msgbox SootopolisResto_Text_ExpertM_Text_0, MSGBOX_NPC
	end


SootopolisResto_Text_ExpertF::
	msgbox SootopolisResto_Text_ExpertF_Text_0, MSGBOX_NPC
	end


SootopolisResto_Text_Artist::
	msgbox SootopolisResto_Text_Artist_Text_0, MSGBOX_NPC
	end


SootopolisResto_Text_Beauty::
	msgbox SootopolisResto_Text_Beauty_Text_0, MSGBOX_NPC
	end


SootopolisResto_Text_Vendor_Text_0:
	.string "Welcome,\n"
	.string "What will you order?$"

SootopolisResto_Text_Vendor_Text_1:
	.string "Please, have a good day!$"

SootopolisResto_Text_ExpertM_Text_0:
	.string "As an old person, it's a real challenge\nto get here.\lBut it's worth it$"

SootopolisResto_Text_ExpertF_Text_0:
	.string "SOOTOPOLIS was a volcano one, but is\nnow unactive.\lIt's a real luck for us!$"

SootopolisResto_Text_Artist_Text_0:
	.string "The best landscapes of HOENN are here\nin this very city!$"

SootopolisResto_Text_Beauty_Text_0:
	.string "Do you know where is the hotel here?\nWhat there is no hotel?!\lReally?!$"
