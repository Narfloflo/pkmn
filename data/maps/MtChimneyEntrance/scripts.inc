MtChimneyEntrance_MapScripts::
	.byte 0


MtChimneyEntrance_Text_Picknicker::
	trainerbattle_single TRAINER_WILTON_3, MtChimneyEntrance_Text_Picknicker_Text_0, MtChimneyEntrance_Text_Picknicker_Text_1
	msgbox MtChimneyEntrance_Text_Picknicker_Text_2
	release
	end


MtChimneyEntrance_Text_Picknicker_Text_0:
	.string "I went for a walk and end up here.\nSomething went wrong...$"

MtChimneyEntrance_Text_Picknicker_Text_1:
	.string "Oh you blast me !$"

MtChimneyEntrance_Text_Picknicker_Text_2:
	.string "I thought I could found a great valley,\n"
	.string "but there is only lava here...$"
