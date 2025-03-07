IlexForest_MapScripts::
	.byte 0


IlexForest_Text_Farfetchd::
	lock
	faceplayer
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Farfetchd_Text_0
	release
	end


IlexForest_EventScript_Tree::
	lock
	goto_if_set FLAG_UNUSED_0x026, IlexForest_EventScript_Tree_2
	checkitem ITEM_GS_BALL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq IlexForest_EventScript_Tree_5
	msgbox IlexForest_EventScript_Tree_Text_1
IlexForest_EventScript_Tree_4:
	release
	end

IlexForest_EventScript_Tree_2:
	msgbox IlexForest_EventScript_Tree_Text_0
	release
	end

IlexForest_EventScript_Tree_5:
	goto IlexForest_EventScript_TriggerCelebi
	goto IlexForest_EventScript_Tree_4


IlexForest_EventScript_TriggerCelebi::
	lock
	msgbox IlexForest_EventScript_TriggerCelebi_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne IlexForest_EventScript_TriggerCelebi_2
	msgbox IlexForest_EventScript_TriggerCelebi_Text_2
IlexForest_EventScript_TriggerCelebi_1:
	release
	end

IlexForest_EventScript_TriggerCelebi_2:
	msgbox IlexForest_EventScript_TriggerCelebi_Text_1
	call WarpToCelebi
	goto IlexForest_EventScript_TriggerCelebi_1


WarpToCelebi::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_CELEBI_CHAMBER, 5, 4
	fadescreen FADE_FROM_BLACK
	return


IlexForest_Text_CutMaster::
	msgbox IlexForest_Text_CutMaster_Text_0, MSGBOX_NPC
	end


IlexForest_Text_Farfetchd_Text_0:
	.string "Kwaa!$"

IlexForest_EventScript_Tree_Text_0:
	.string "This is the SHRINE of the guardian of\n"
	.string "the FOREST.\l"
	.string "Well I should say it was the shrine of\l"
	.string "CELEBI huhu!$"

IlexForest_EventScript_Tree_Text_1:
	.string "This is the SHRINE of the guardian of\n"
	.string "the FOREST.$"

IlexForest_EventScript_TriggerCelebi_Text_0:
	.string "{PLAYER}: Huh?\n"
	.string "Looks like the GS BALL can fit here.\l"
	.string "Maybe I can try to put it in?$"

IlexForest_EventScript_TriggerCelebi_Text_1:
	.string "{PLAYER}: What?!$"

IlexForest_EventScript_TriggerCelebi_Text_2:
	.string "Humm... Not today so.$"

IlexForest_Text_CutMaster_Text_0:
	.string "I'm cutting trees with my FARFETCH'D.\nBut I try not to cut to much.\lMy disciples are growing trees.\lSo we respect the balance of the\lforest.$"
