VictoryRoad_3F_MapScripts::
	.byte 0


VictoryRoad_3F_Text_Kindler::
	trainerbattle_single TRAINER_CRISTIN_4, VictoryRoad_3F_Text_Kindler_Text_0, VictoryRoad_3F_Text_Kindler_Text_1
	msgbox VictoryRoad_3F_Text_Kindler_Text_2, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_Text_Kindler_Text_0:
	.string "It's so hot here ! Let's sweat\na little$"

VictoryRoad_3F_Text_Kindler_Text_1:
	.string "Sweating doesn't changed anything...$"

VictoryRoad_3F_Text_Kindler_Text_2:
	.string "I don't know why I'm not moving from\n"
	.string "here...$"
