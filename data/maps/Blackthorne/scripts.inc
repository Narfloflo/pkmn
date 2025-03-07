Blackthorne_MapScripts::
	.byte 0


Blackthorne_Text_Vendor::
	lock
	faceplayer
	msgbox Blackthorne_Text_Vendor_Text_0
	waitmessage
	pokemart Blackthorne_MartItems
	msgbox Blackthorne_Text_Vendor_Text_1
	release
	end


	.align 2
Blackthorne_MartItems:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

BlackthornInside_Text_OldLady::
	msgbox BlackthornInside_Text_OldLady_Text_0, MSGBOX_NPC
	end


BlackthornInside_Text_BlackBelt::
	msgbox BlackthornInside_Text_BlackBelt_Text_0, MSGBOX_NPC
	end


BlackthornInside_Text_Man::
	msgbox BlackthornInside_Text_Man_Text_0, MSGBOX_NPC
	end


BlackthornInside_Text_Lass::
	msgbox BlackthornInside_Text_Lass_Text_0, MSGBOX_NPC
	end


BlackthornInside_Text_Lady::
	msgbox BlackthornInside_Text_Lady_Text_0, MSGBOX_NPC
	end


Blackthorne_Text_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

Blackthorne_Text_Vendor_Text_1:
	.string "Please come again!$"

BlackthornInside_Text_OldLady_Text_0:
	.string "A clan of TRAINERS who can freely\ncommand DRAGONS live right here in\lBLACKTHORN.\lAs a result, there are many legends\labout DRAGONS in this town.$"

BlackthornInside_Text_BlackBelt_Text_0:
	.string "Max Repel keeps weak POKéMON away from\nyou.\lI need a lot of that to cross the ICE\lPATH.$"

BlackthornInside_Text_Man_Text_0:
	.string "The towns in JOHTO are all named after\nplants.\lDid you ever notice?$"

BlackthornInside_Text_Lass_Text_0:
	.string "I wish I had a JYNX.\nBut I don't even have a POKéMON to\ltrade...$"

BlackthornInside_Text_Lady_Text_0:
	.string "We are all a descendants of various\nDRAGON clans.\lBut CLAIR belongs to the strongest one.\lShe used to train in DRAGON DEN. But\lnow she is not around.\lTry maybe the DARK CAVE?$"
