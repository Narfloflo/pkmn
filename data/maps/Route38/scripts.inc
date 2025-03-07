Route38_MapScripts::
	.byte 0


Route38_Text_Sailor::
	trainerbattle_single TRAINER_MADELINE_3, Route38_Text_Sailor_Text_0, Route38_Text_Sailor_Text_1
	msgbox Route38_Text_Sailor_Text_2, MSGBOX_NPC
	end


Route38_Text_Beauty::
	trainerbattle_single TRAINER_MADELINE_4, Route38_Text_Beauty_Text_0, Route38_Text_Beauty_Text_1
	msgbox Route38_Text_Beauty_Text_2, MSGBOX_NPC
	end


Route38_Text_Lass::
	trainerbattle_single TRAINER_JENNY_2, Route38_Text_Lass_Text_0, Route38_Text_Lass_Text_1
	msgbox Route38_Text_Lass_Text_2, MSGBOX_NPC
	end


Route38_Text_RematchBoy::
	lock
	faceplayer
	msgbox Route38_Text_RematchBoy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route38_Text_RematchBoy_2
	msgbox Route38_Text_RematchBoy_Text_2, MSGBOX_NPC
Route38_Text_RematchBoy_1:
	release
	end

Route38_Text_RematchBoy_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_MADELINE_3
	cleartrainerflag TRAINER_MADELINE_4
	cleartrainerflag TRAINER_JENNY_2
	cleartrainerflag TRAINER_JENNY_3
	cleartrainerflag TRAINER_JENNY_4
	cleartrainerflag TRAINER_DIANA_2
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox Route38_Text_RematchBoy_Text_1, MSGBOX_NPC
	goto Route38_Text_RematchBoy_1


Route38_Text_Sailor_Text_0:
	.string "I explore the seven seas with my\nPOKéMON.\lWe are unmatch!$"

Route38_Text_Sailor_Text_1:
	.string "What a formidable battle!$"

Route38_Text_Sailor_Text_2:
	.string "All kinds of people around the world\nlive happily with POKéMON.$"

Route38_Text_Beauty_Text_0:
	.string "Are you going to MOOMOO FARM too?$"

Route38_Text_Beauty_Text_1:
	.string "Oh wow, I need a break.$"

Route38_Text_Beauty_Text_2:
	.string "MOOMOO MILK is good for beauty and\nhealth.\lAnd it's cheaper than plastic surgery!$"

Route38_Text_Lass_Text_0:
	.string "Wanna see my POKéMON before I return to\nschool?$"

Route38_Text_Lass_Text_1:
	.string "I lost because I didn't listen in\nschool...$"

Route38_Text_Lass_Text_2:
	.string "When I see a POKéMON, it soothes my\nnerves.$"

Route38_Text_RematchBoy_Text_0:
	.string "Oh hello!\nYou want me to ask all the TRAINERS in\lRoute 38 and 39 to rematch you?$"

Route38_Text_RematchBoy_Text_1:
	.string "It's done! Fresh as new.$"

Route38_Text_RematchBoy_Text_2:
	.string "Oh huh okay!\nI'll get back to my homework then.$"
