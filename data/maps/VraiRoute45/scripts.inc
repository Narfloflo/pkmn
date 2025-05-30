VraiRoute45_MapScripts::
	.byte 0


BlackthornInside_Text_RoadSign::
	msgbox BlackthornInside_Text_RoadSign_Text_0, MSGBOX_AUTOCLOSE
	end


Route45_Text_Hiker1::
	trainerbattle_single TRAINER_GABRIELLE_4, Route45_Text_Hiker1_Text_0, Route45_Text_Hiker1_Text_1
	msgbox Route45_Text_Hiker1_Text_2, MSGBOX_NPC
	end


Route45_Text_Hiker2::
	trainerbattle_single TRAINER_CATHERINE_2, Route45_Text_Hiker1_Text_0, Route45_Text_Hiker1_Text_1
	msgbox Route45_Text_Hiker1_Text_2, MSGBOX_NPC
	end


Route45_Text_Hiker3::
	trainerbattle_single TRAINER_CATHERINE_3, Route45_Text_Hiker1_Text_0, Route45_Text_Hiker1_Text_1
	msgbox Route45_Text_Hiker1_Text_2, MSGBOX_NPC
	end


Route45_Text_Cooltrainer::
	trainerbattle_single TRAINER_CATHERINE_4, Route45_Text_Hiker1_Text_0, Route45_Text_Hiker1_Text_1
	msgbox Route45_Text_Hiker1_Text_2, MSGBOX_NPC
	end


Route45_Text_Camper::
	trainerbattle_single TRAINER_JACKSON_2, Route45_Text_Hiker1_Text_0, Route45_Text_Hiker1_Text_1
	msgbox Route45_Text_Hiker1_Text_2, MSGBOX_NPC
	end


Route45_Text_Blackbelt::
	trainerbattle_single TRAINER_JACKSON_3, Route45_Text_Hiker1_Text_0, Route45_Text_Hiker1_Text_1
	msgbox Route45_Text_Hiker1_Text_2, MSGBOX_NPC
	end


BlackthornInside_Text_RoadSign_Text_0:
	.string "ROUTE 45\nMOUNTAIN RD. Ahead$"

Route45_Text_Hiker1_Text_0:
	.string "Hey there young lad!\nWanna fight?$"

Route45_Text_Hiker1_Text_1:
	.string "I'm still weak...$"

Route45_Text_Hiker1_Text_2:
	.string "I'll head back to BLACKTHORN's ICE PATH\nand train some more.$"
