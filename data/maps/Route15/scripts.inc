Route15_MapScripts::
	.byte 0


Route15_Text_Teacher::
	lock
	faceplayer
	msgbox Route15_Text_Teacher_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route15_Text_Teacher_2
Route15_Text_Teacher_1:
	release
	end

Route15_Text_Teacher_2:
	cleartrainerflag TRAINER_VALERIE_2
	cleartrainerflag TRAINER_VALERIE_3
	cleartrainerflag TRAINER_VALERIE_4
	cleartrainerflag TRAINER_CINDY_2
	cleartrainerflag TRAINER_CINDY_3
	cleartrainerflag TRAINER_CINDY_4
	cleartrainerflag TRAINER_CINDY_5
	cleartrainerflag TRAINER_THALIA_2
	cleartrainerflag TRAINER_THALIA_3
	cleartrainerflag TRAINER_THALIA_4
	cleartrainerflag TRAINER_JESSICA_2
	playse SE_POKENAV_CALL
	waitse
	playse SE_POKENAV_OFF
	waitse
	msgbox Route15_Text_Teacher_Text_1
	goto Route15_Text_Teacher_1


Route15_Text_Picnicker::
	trainerbattle_single TRAINER_VALERIE_2, Route15_Text_Picnicker_Text_0, Route15_Text_Picnicker_Text_1
	msgbox Route15_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route15_Text_Youngster::
	trainerbattle_single TRAINER_VALERIE_3, Route15_Text_Youngster_Text_0, Route15_Text_Youngster_Text_1
	msgbox Route15_Text_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route15_Text_Camper::
	trainerbattle_single TRAINER_VALERIE_4, Route15_Text_Camper_Text_0, Route15_Text_Camper_Text_1
	msgbox Route15_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route15_Text_Teacher_Text_0:
	.string "Hello do you want me to ask the\n"
	.string "TRAINERS in ROUTE 15 and 13 to fight\l"
	.string "you again ?$"

Route15_Text_Teacher_Text_1:
	.string "It's done, just a quick call, it's like\n"
	.string "you never met them. That's my teacher\l"
	.string "job !$"

Route15_Text_Picnicker_Text_0:
	.string "Let see how strong you are.$"

Route15_Text_Picnicker_Text_1:
	.string "I'm totally wasted...$"

Route15_Text_Picnicker_Text_2:
	.string "I'll go train with weaker people.$"

Route15_Text_Youngster_Text_0:
	.string "Hey you, yeah you ! Battle !$"

Route15_Text_Youngster_Text_1:
	.string "Noooo ! Total disaster...$"

Route15_Text_Youngster_Text_2:
	.string "I don't think I'm fit for battles...$"

Route15_Text_Camper_Text_0:
	.string "Let's have a little battle shall we ?$"

Route15_Text_Camper_Text_1:
	.string "Ah come on !$"

Route15_Text_Camper_Text_2:
	.string "Winning, losing, it doesn't matter in the\n"
	.string "long run !$"
