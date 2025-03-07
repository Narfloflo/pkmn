Route2_MapScripts::
	.byte 0


Route2_Text_Picnicker::
	trainerbattle_single TRAINER_KOJI_4, Route2_Text_Picnicker_Text_0, Route2_Text_Picnicker_Text_1
	msgbox Route2_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route2_Text_Youngster::
	trainerbattle_single TRAINER_FERNANDO_2, Route2_Text_Youngster_Text_0, Route2_Text_Picnicker_Text_1
	msgbox Route2_Text_Youngster_Text_1, MSGBOX_AUTOCLOSE
	end


Route2_Text_Picnicker_Text_0:
	.string "I cut all the trees, I hate the forest.$"

Route2_Text_Picnicker_Text_1:
	.string "I'm out of energy$"

Route2_Text_Picnicker_Text_2:
	.string "We can skip the VIRIDIAN FOREST thanks\n"
	.string "to me. You're welcome.$"

Route2_Text_Youngster_Text_0:
	.string "I'm on my way to DIGLETTS CAVE !$"

Route2_Text_Youngster_Text_1:
	.string "My friends are all in VIRIDIAN FOREST.\n"
	.string "But the real deal is in the DIGLETTS\l"
	.string "CAVE !$"
