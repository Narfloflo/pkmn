Route26_MapScripts::
	.byte 0


Route26_Text_CooltrainerM::
	trainerbattle_single TRAINER_JESSICA_4, Route26_Text_CooltrainerM_Text_0, Route26_Text_CooltrainerM_Text_1
	msgbox Route26_Text_CooltrainerM_Text_2, MSGBOX_AUTOCLOSE
	end


Route26_Text_CooltrainerF::
	trainerbattle_single TRAINER_WINSTON_2, Route26_Text_CooltrainerF_Text_0, Route26_Text_CooltrainerF_Text_1
	msgbox Route26_Text_CooltrainerF_Text_2, MSGBOX_AUTOCLOSE
	end


Route26_Text_Hiker::
	trainerbattle_single TRAINER_STEVE_4, Route26_Text_Hiker_Text_0, Route26_Text_Hiker_Text_1
	msgbox Route26_Text_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route26_Text_Man::
	lock
	faceplayer
	msgbox Route26_Text_Man_Text_0
	release
	end


Route26_Text_Fisherman::
	call_if_unset FLAG_TEMP_1, Route26_Text_FishermanFight
	goto_if_set FLAG_TEMP_1, Route26_Text_Fisherman_1
	return

Route26_Text_Fisherman_1:
	msgbox Route26_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route26_Text_FishermanFight::
	trainerbattle_single TRAINER_DYLAN_2, Route26_Text_FishermanFight_Text_0, Route26_Text_FishermanFight_Text_1
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end


Route26_Text_CooltrainerM_Text_0:
	.string "Hey are you going to the POKéMON LEAGUE ?$"

Route26_Text_CooltrainerM_Text_1:
	.string "Wow ! That was powerful !$"

Route26_Text_CooltrainerM_Text_2:
	.string "Throught the gate north we can go to\n"
	.string "the POKéMON LEAGUE. YEAH the LEAGUE\l"
	.string "of KANTO, not HOENN obviously.$"

Route26_Text_CooltrainerF_Text_0:
	.string "I don't get it, we are in KANTO right ?$"

Route26_Text_CooltrainerF_Text_1:
	.string "I'm so lost here.$"

Route26_Text_CooltrainerF_Text_2:
	.string "I crossed a few water in NEW BARK TOWN\n"
	.string "and then we are in KANTO. But when we\l"
	.string "want to take a ship to move in KANTO,\l"
	.string "it's taking so much time. I don't get it.$"

Route26_Text_Hiker_Text_0:
	.string "I'm not a rookie trainer !$"

Route26_Text_Hiker_Text_1:
	.string "I feel like a rookie...$"

Route26_Text_Hiker_Text_2:
	.string "The HIKER CLUB sent me to MT. SILVER.\n"
	.string "It's a place really dangerous and not\l"
	.string "registred on any maps !$"

Route26_Text_Man_Text_0:
	.string "Huh oh ! You want to say a goodbye to a\n"
	.string "kind guy ? Well hello !$"

Route26_Text_Fisherman_Text_0:
	.string "I know I know...$"

Route26_Text_FishermanFight_Text_0:
	.string "Wanna see my fresh fishes ?$"

Route26_Text_FishermanFight_Text_1:
	.string "Plouff !$"
