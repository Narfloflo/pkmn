EcruteakGates_MapScripts::
	.byte 0


IlexForestGates_Text_Policeman2::
	msgbox IlexForestGates_Text_Policeman2_Text_0, MSGBOX_NPC
	end


IlexForestGates_Text_Woman::
	msgbox IlexForestGates_Text_Woman_Text_0, MSGBOX_NPC
	end


IlexForestGates_Text_Butterfree::
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	waitmoncry
	msgbox IlexForestGates_Text_Butterfree_Text_0, MSGBOX_NPC
	end


IlexForestGates_Text_Policeman::
	msgbox IlexForestGates_Text_Policeman_Text_0, MSGBOX_NPC
	end


IlexForestGates_Text_OldWoman::
	msgbox IlexForestGates_Text_OldWoman_Text_0, MSGBOX_NPC
	end


IlexForestGates_Text_Policeman2_Text_0:
	.string "The north gate will lead you to ROUTE\n34.\lThere are a few TRAINERS but also the\lDAYCARE.\lAn after is GOLDENROD CITY.$"

IlexForestGates_Text_Woman_Text_0:
	.string "Wooh! My METAPOD just evolve in\nBUTTERFREE!\lI knew that in the end, a disgusting\lbug wasn't that useless!$"

IlexForestGates_Text_Butterfree_Text_0:
	.string "Teeee!$"

IlexForestGates_Text_Policeman_Text_0:
	.string "ILEX FOREST is big!\nBig careful not to get lost!$"

IlexForestGates_Text_OldWoman_Text_0:
	.string "The FOREST is watch over by its\nprotector.\lStay out of mischief!$"
