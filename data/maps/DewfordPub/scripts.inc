DewfordPub_MapScripts::
	.byte 0


DewfordPub_Text_Fisherman::
	lock
	faceplayer
	msgbox DewfordPub_Text_Fisherman_Text_0
	release
	return


DewfordPub_Text_Vendor::
	lock
	faceplayer
	message DewfordPub_Text_Vendor_Text_0
	waitmessage
	pokemart DewfordPubItems
	msgbox DewfordPub_Text_Vendor_Text_1
	release
	return


	.align 2
DewfordPubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_LEMONADE
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_STBRICECREAM
	.2byte ITEM_BLKICECREAM
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_NONE

DewfordPub_Text_TuberM::
	msgbox DewfordPub_Text_TuberM_Text_0, MSGBOX_NPC
	end


DewfordPub_Text_TuberF::
	msgbox DewfordPub_Text_TuberF_Text_0, MSGBOX_NPC
	end


DewfordPub_Text_Fisherman_Text_0:
	.string "I'm supplying this place, so I got\n"
	.string "to eat for free!$"

DewfordPub_Text_Vendor_Text_0:
	.string "Oh a kid! No booze for you.$"

DewfordPub_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

DewfordPub_Text_TuberM_Text_0:
	.string "I love having a date here. It's such a\nromantic place.\l{PLAYER}: ?!$"

DewfordPub_Text_TuberF_Text_0:
	.string "I wish they had sundaes here!\nAll this place is providing is fish...$"
