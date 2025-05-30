AzaleaTown_MapScripts::
	.byte 0


AzaleaTown_Text_Slowpoke::
	lock
	faceplayer
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox AzaleaTown_Text_Slowpoke_Text_0
	release
	end


AzaleaTown_Text_Lass::
	lock
	faceplayer
	msgbox AzaleaTown_Text_Lass_Text_0
	release
	end


AzaleaTown_Text_Man::
	lock
	faceplayer
	msgbox AzaleaTown_Text_Man_Text_0
	release
	end


AzaleaTown_Text_BugCatcher::
	lock
	faceplayer
	msgbox AzaleaTown_Text_BugCatcher_Text_0
	release
	end


AzaleaTown_Text_BugCatcher2::
	lock
	faceplayer
	msgbox AzaleaTown_Text_BugCatcher2_Text_0
	release
	end


AzaleaTown_Sign_SlowpokeWell::
	msgbox AzaleaTown_Sign_SlowpokeWell_Text_0, MSGBOX_SIGN
	end


AzaleaTown_Sign_CharcoalKiln::
	msgbox AzaleaTown_Sign_CharcoalKiln_Text_0, MSGBOX_SIGN
	end


AzaleaTown_Sign_KurtHouse::
	msgbox AzaleaTown_Sign_KurtHouse_Text_0, MSGBOX_SIGN
	end


AzaleaTown_Sign_IlexForest::
	msgbox AzaleaTown_Sign_IlexForest_Text_0, MSGBOX_SIGN
	end


AzaleaTown_Sign_AzaleaDesc::
	msgbox AzaleaTown_Sign_AzaleaDesc_Text_0, MSGBOX_SIGN
	end


AzaleaTown_Text_Slowpoke_Text_0:
	.string "SLOWPOKE: .............................\n... ... ...\l... ... ... Yamn?$"

AzaleaTown_Text_Lass_Text_0:
	.string "I heard that the SLOWPOKE TAILS can be\n"
	.string "used to cure everything.\l"
	.string "But that can't be right?\l"
	.string "......................\l"
	.string "Right?$"

AzaleaTown_Text_Man_Text_0:
	.string "This place is a little secluded\n"
	.string "compare from others cities.\l"
	.string "But it's a nice place right?\l"
	.string "What? About the GYM?\l"
	.string "There is our famous guardian that will\l"
	.string "prevent you from entering inside.\l"
	.string "What it's an imbecile ?\l"
	.string "Ha ha ha!\l"
	.string "Of course! It's a SLOWPOKE!$"

AzaleaTown_Text_BugCatcher_Text_0:
	.string "Have you ever heard about BUGSY?\n"
	.string "He is a BUG CATCHER like us, but he\l"
	.string "is really strong!\l"
	.string "He should be appointed as AZALEA's\l"
	.string "new GYM LEADER soon.\l"
	.string "Finally BUG TYPE POKéMON will be\l"
	.string "represented!$"

AzaleaTown_Text_BugCatcher2_Text_0:
	.string "I wonder if a BUG CATCHING CONTEST\n"
	.string "would be a nice thing...$"

AzaleaTown_Sign_SlowpokeWell_Text_0:
	.string "SLOWPOKE WELL\nAlso known as the RAINMAKER WELL.\lLocals believe that a SLOWPOKE's yawn\lsummons rain.\lRecords show that a SLOWPOKE's yawn\lended a drought 400 years ago.$"

AzaleaTown_Sign_CharcoalKiln_Text_0:
	.string "CAHRCOAL KILN$"

AzaleaTown_Sign_KurtHouse_Text_0:
	.string "KURT'S HOUSE$"

AzaleaTown_Sign_IlexForest_Text_0:
	.string "ILEX FOREST\nEnter through the gate.$"

AzaleaTown_Sign_AzaleaDesc_Text_0:
	.string "AZALEA TOWN\nWhere People and POKéMON live in happy\lharmony$"
