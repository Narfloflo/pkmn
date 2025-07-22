Route20_MapScripts::
	.byte 0


Route20_Text_Picnicker::
	trainerbattle_single TRAINER_NOB_2, Route20_Text_Picnicker_Text_0, Route20_Text_Picnicker_Text_1
	msgbox Route20_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route20_Text_Camper::
	trainerbattle_single TRAINER_NOB_3, Route20_Text_Camper_Text_0, Route20_Text_Camper_Text_1
	msgbox Route20_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route20_Text_Swimmer1::
	trainerbattle_single TRAINER_NOB_4, Route20_Text_Swimmer1_Text_0, Route20_Text_Swimmer1_Text_1
	msgbox Route20_Text_Swimmer1_Text_2, MSGBOX_AUTOCLOSE
	end


Route20_Text_Swimmer2::
	trainerbattle_single TRAINER_KOJI_2, Route20_Text_Swimmer2_Text_0, Route20_Text_Swimmer2_Text_1
	msgbox Route20_Text_Swimmer2_Text_2, MSGBOX_AUTOCLOSE
	end


Route20_Text_Fisherman::
	goto_if_set FLAG_TEMP_1, Route20_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, Route20_Text_Fisherman_Text_1, Route20_Text_Fisherman_Text_2
	msgbox Route20_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route20_Text_Fisherman_2:
	msgbox Route20_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route20_Text_Picnicker_Text_0:
	.string "I'm planning to have a little snack around here.\nWanna join me ?$"

Route20_Text_Picnicker_Text_1:
	.string "We were supposed to eat !!$"

Route20_Text_Picnicker_Text_2:
	.string "My lunch is a mess because of you...\n"
	.string "Thanks !$"

Route20_Text_Camper_Text_0:
	.string "My girlfriend is somewhere else. But I have to\ncross the SEAFOAM ISLANDS$"

Route20_Text_Camper_Text_1:
	.string "Brrrr... It's so cold here !$"

Route20_Text_Camper_Text_2:
	.string "I lost because I was cold and I couldn't\n"
	.string "focus.$"

Route20_Text_Swimmer1_Text_0:
	.string "I swim every morning to train my body !$"

Route20_Text_Swimmer1_Text_1:
	.string "Oh ! A cramp !$"

Route20_Text_Swimmer1_Text_2:
	.string "I should've been buffing up my POKéMON,\n"
	.string "not me !$"

Route20_Text_Swimmer2_Text_0:
	.string "Oh oh ! You're approaching me ?$"

Route20_Text_Swimmer2_Text_1:
	.string "I'm drowning now !$"

Route20_Text_Swimmer2_Text_2:
	.string "SEAFOAM used to be one Island !$"

Route20_Text_Fisherman_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route20_Text_Fisherman_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route20_Text_Fisherman_Text_2:
	.string "Tch!\nJust a small fry…$"

Route20_Text_Fisherman_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"
