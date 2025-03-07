Route12_MapScripts::
	.byte 0


Route12_Text_Fisherman1::
	goto_if_set FLAG_TEMP_1, Route12_Text_Fisherman1_1
	goto Route12_Text_Fisherman1Fight
	return

Route12_Text_Fisherman1_1:
	msgbox Route12_Text_Fisherman1_Text_0, MSGBOX_NPC
	end


Route12_Text_Fisherman1Fight::
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1Fight_Text_0, Route12_Text_Fisherman1Fight_Text_1
	setflag FLAG_TEMP_1
	end


Route12_Text_Fisherman2::
	call_if_unset FLAG_TEMP_2, Route12_Text_Fisherman2Fight
	goto_if_set FLAG_TEMP_2, Route12_Text_Fisherman2_1
	return

Route12_Text_Fisherman2_1:
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman2Fight::
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1Fight_Text_0, Route12_Text_Fisherman1Fight_Text_1
	setflag FLAG_TEMP_2
	cleartrainerflag TRAINER_DYLAN_2
	end


Route12_Text_Fisherman3::
	call_if_unset FLAG_TEMP_3, Route12_Text_Fisherman3Fight
	goto_if_set FLAG_TEMP_3, Route12_Text_Fisherman3_1
	return

Route12_Text_Fisherman3_1:
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman3Fight::
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1Fight_Text_0, Route12_Text_Fisherman1Fight_Text_1
	setflag FLAG_TEMP_3
	cleartrainerflag TRAINER_DYLAN_2
	end


Route12_Text_Fisherman4::
	call_if_unset FLAG_TEMP_4, Route12_Text_Fisherman4Fight
	goto_if_set FLAG_TEMP_4, Route12_Text_Fisherman4_1
	return

Route12_Text_Fisherman4_1:
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman4Fight::
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1Fight_Text_0, Route12_Text_Fisherman1Fight_Text_1
	setflag FLAG_TEMP_4
	cleartrainerflag TRAINER_DYLAN_2
	end


Route12_Text_Fisherman5::
	call_if_unset FLAG_TEMP_5, Route12_Text_Fisherman5Fight
	goto_if_set FLAG_TEMP_5, Route12_Text_Fisherman5_1
	return

Route12_Text_Fisherman5_1:
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman5Fight::
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1Fight_Text_0, Route12_Text_Fisherman1Fight_Text_1
	setflag FLAG_TEMP_5
	cleartrainerflag TRAINER_DYLAN_2
	end


Route12_Text_Fisherman6::
	call_if_unset FLAG_TEMP_6, Route12_Text_Fisherman6Fight
	goto_if_set FLAG_TEMP_6, Route12_Text_Fisherman6_1
	return

Route12_Text_Fisherman6_1:
	msgbox Route12_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route12_Text_Fisherman6Fight::
	trainerbattle_single TRAINER_DYLAN_2, Route12_Text_Fisherman1Fight_Text_0, Route12_Text_Fisherman1Fight_Text_1
	setflag FLAG_TEMP_6
	cleartrainerflag TRAINER_DYLAN_2
	end


Route12_Text_Fisherman1_Text_0:
	.string "I know I know, they are not fresh...$"

Route12_Text_Fisherman1Fight_Text_0:
	.string "Wanna see my fresh fishes ?$"

Route12_Text_Fisherman1Fight_Text_1:
	.string "Plouff !$"

Route12_Text_Fisherman2_Text_0:
	.string "I know I know...$"
