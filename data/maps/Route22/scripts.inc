Route22_MapScripts::
	.byte 0


Route22_Text_Cooltrainer::
	trainerbattle_single TRAINER_JESSICA_3, Route22_Text_Cooltrainer_Text_0, Route22_Text_Cooltrainer_Text_1
	msgbox Route22_Text_Cooltrainer_Text_2, MSGBOX_AUTOCLOSE
	end


Route22_Text_Youngster::
	lock
	faceplayer
	msgbox Route22_Text_Youngster_Text_0
	release
	end


Route22_Text_LeagueSign::
	lock
	msgbox Route22_Text_LeagueSign_Text_0
	release
	end


Route22_Text_Cooltrainer_Text_0:
	.string "I have to check if I'm ready for the\nPOKéMON LEAGUE$"

Route22_Text_Cooltrainer_Text_1:
	.string "Looks like I'm not strong enough$"

Route22_Text_Cooltrainer_Text_2:
	.string "Are you a CHAMPION or something ?\n"
	.string "Because you totally destroyed me.$"

Route22_Text_Youngster_Text_0:
	.string "I went to the building over there, but\n"
	.string "they kick me off because I have no\l"
	.string "BADGES. But for some reasons, the GYM\l"
	.string "are closed...$"

Route22_Text_LeagueSign_Text_0:
	.string "POKéMON LEAGUE\n"
	.string "Front Gate$"
