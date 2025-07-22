Route21_MapScripts::
	.byte 0


Route21_Text_Fisherman::
	goto_if_set FLAG_TEMP_1, Route21_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, Route21_Text_Fisherman_Text_1, Route21_Text_Fisherman_Text_2
	msgbox Route21_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route21_Text_Fisherman_2:
	msgbox Route21_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route21_Text_Fisherman2::
	goto_if_set FLAG_TEMP_2, Route21_Text_Fisherman2_2
	trainerbattle_single TRAINER_DYLAN_2, Route21_Text_Fisherman_Text_1, Route21_Text_Fisherman_Text_2
	msgbox Route21_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_2
	cleartrainerflag TRAINER_DYLAN_2
	end

Route21_Text_Fisherman2_2:
	msgbox Route21_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route21_Text_SwimmerF::
	lock
	faceplayer
	msgbox Route21_Text_SwimmerF_Text_0
	release
	end


Route21_Text_Fisherman_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route21_Text_Fisherman_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route21_Text_Fisherman_Text_2:
	.string "Tch!\nJust a small fry…$"

Route21_Text_Fisherman_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"

Route21_Text_SwimmerF_Text_0:
	.string "Where did you caught you POKéMON ? I\n"
	.string "caught all my mine at sea !$"
