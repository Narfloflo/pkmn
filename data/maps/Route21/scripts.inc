Route21_MapScripts::
	.byte 0


Route21_Text_Fisherman::
	call_if_unset FLAG_TEMP_1, Route21_Text_FishermanFight
	goto_if_set FLAG_TEMP_1, Route21_Text_Fisherman_1
	return

Route21_Text_Fisherman_1:
	faceplayer
	msgbox Route21_Text_Fisherman_Text_0
	release
	end


Route21_Text_FishermanFight::
	trainerbattle_single TRAINER_DYLAN_2, Route21_Text_FishermanFight_Text_0, Route21_Text_FishermanFight_Text_1
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end


Route21_Text_Fisherman2::
	call_if_unset FLAG_TEMP_2, Route21_Text_FishermanFight2
	goto_if_set FLAG_TEMP_2, Route21_Text_Fisherman2_1
	return

Route21_Text_Fisherman2_1:
	faceplayer
	msgbox Route21_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


Route21_Text_FishermanFight2::
	trainerbattle_single TRAINER_DYLAN_2, Route21_Text_FishermanFight_Text_0, Route21_Text_FishermanFight_Text_1
	setflag FLAG_TEMP_2
	cleartrainerflag TRAINER_DYLAN_2
	end


Route21_Text_SwimmerF::
	lock
	faceplayer
	msgbox Route21_Text_SwimmerF_Text_0
	release
	end


Route21_Text_Fisherman_Text_0:
	.string "I Was just angry that I couldn't catch\n"
	.string "anything.$"

Route21_Text_FishermanFight_Text_0:
	.string "Wanna see my fresh fishes ?$"

Route21_Text_FishermanFight_Text_1:
	.string "Plouff !$"

Route21_Text_Fisherman2_Text_0:
	.string "Oh wait ! I got a bite ! Yeah !$"

Route21_Text_SwimmerF_Text_0:
	.string "Where did you caught you POKéMON ? I\n"
	.string "caught all my mine at sea !$"
