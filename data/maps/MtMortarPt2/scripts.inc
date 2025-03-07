MtMortarPt2_MapScripts::
	.byte 0


MtMortarPt2_Text_Maniac1::
	trainerbattle_single TRAINER_EDWIN_2, MtMortarPt2_Text_Maniac1_Text_0, MtMortarPt2_Text_Maniac1_Text_1
	msgbox MtMortarPt2_Text_Maniac1_Text_2, MSGBOX_NPC
	end


MtMortarPt2_Text_Maniac2::
	trainerbattle_single TRAINER_EDWIN_3, MtMortarPt2_Text_Maniac1_Text_0, MtMortarPt2_Text_Maniac1_Text_1
	msgbox MtMortarPt2_Text_Maniac1_Text_2, MSGBOX_NPC
	end


MtMortarPt2_Text_Maniac1_Text_0:
	.string "Hey$"

MtMortarPt2_Text_Maniac1_Text_1:
	.string "Damn$"

MtMortarPt2_Text_Maniac1_Text_2:
	.string "I lost!$"
