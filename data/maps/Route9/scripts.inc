Route9_MapScripts::
	.byte 0


Route9_Text_Picnicker::
	trainerbattle_single TRAINER_WALTER_2, Route9_Text_Picnicker_Text_0, Route9_Text_Picnicker_Text_1
	msgbox Route9_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route9_Text_Camper::
	trainerbattle_single TRAINER_WALTER_3, Route9_Text_Camper_Text_0, Route9_Text_Camper_Text_1
	msgbox Route9_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route9_Text_Youngster::
	trainerbattle_single TRAINER_WALTER_4, Route9_Text_Youngster_Text_0, Route9_Text_Youngster_Text_1
	msgbox Route9_Text_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route9_Text_BugCatcher::
	trainerbattle_single TRAINER_KAREN_2, Route9_Text_BugCatcher_Text_0, Route9_Text_BugCatcher_Text_1
	msgbox Route9_Text_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


Route9_Text_Hiker1::
	trainerbattle_single TRAINER_KAREN_3, Route9_Text_Hiker1_Text_0, Route9_Text_Hiker1_Text_1
	msgbox Route9_Text_Hiker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route9_Text_Lass::
	trainerbattle_single TRAINER_KAREN_4, Route9_Text_Lass_Text_0, Route9_Text_Lass_Text_1
	msgbox Route9_Text_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


Route9_Text_Boy::
	msgbox Route9_Text_Boy_Text_0, MSGBOX_NPC
	end


Route9_Text_Hiker2::
	lock
	faceplayer
	msgbox Route9_Text_Hiker2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route9_Text_Hiker2_2
	msgbox Route9_Text_Hiker2_Text_2
Route9_Text_Hiker2_1:
	release
	end

Route9_Text_Hiker2_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_WALTER_2
	cleartrainerflag TRAINER_WALTER_3
	cleartrainerflag TRAINER_WALTER_4
	cleartrainerflag TRAINER_KAREN_2
	cleartrainerflag TRAINER_KAREN_3
	cleartrainerflag TRAINER_KAREN_4
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox Route9_Text_Hiker2_Text_1
	goto Route9_Text_Hiker2_1


Route9_Text_Picnicker_Text_0:
	.string "I'm ready for the ROCK TUNNEL !\nWould you check my team with me ?$"

Route9_Text_Picnicker_Text_1:
	.string "What but ?\nThat's not what I was asking for !$"

Route9_Text_Picnicker_Text_2:
	.string "Well at least I know my team isn't\n"
	.string "prepare for the ROCK TUNNEL. But that\l"
	.string "didn't meant that you were supposed to\l"
	.string "destroyed them !$"

Route9_Text_Camper_Text_0:
	.string "Oh wow a new face!\nReady for a lesson?$"

Route9_Text_Camper_Text_1:
	.string "I'm the student here...$"

Route9_Text_Camper_Text_2:
	.string "I need to go back to school in\n"
	.string "VIRIDIAN.$"

Route9_Text_Youngster_Text_0:
	.string "Where is he! WHERE IS HE !!!$"

Route9_Text_Youngster_Text_1:
	.string "Grumbll!$"

Route9_Text_Youngster_Text_2:
	.string "My brother pissed me off! I need to find\n"
	.string "him right now! WHERE ARE YOU!$"

Route9_Text_BugCatcher_Text_0:
	.string "Wow! So much bugs around here !\nAre you a bug too ?$"

Route9_Text_BugCatcher_Text_1:
	.string "Bzzzt bzzzt!$"

Route9_Text_BugCatcher_Text_2:
	.string "I think I spent too much time with bugs\n"
	.string "POKéMON...$"

Route9_Text_Hiker1_Text_0:
	.string "Gotcha hahaha!$"

Route9_Text_Hiker1_Text_1:
	.string "Such a strength!$"

Route9_Text_Hiker1_Text_2:
	.string "I love scaring people who jump here !\n"
	.string "Don't look at me like this ! Only ARCEUS\l"
	.string "can judge me !$"

Route9_Text_Lass_Text_0:
	.string "Hey ! You wanna go to the ROCK TUNNEL ?\nYou need FLASH you know ?$"

Route9_Text_Lass_Text_1:
	.string "I was giving you an advice !$"

Route9_Text_Lass_Text_2:
	.string "Some POKéMON know naturally FLASH. It's\n"
	.string "a good thing, I won't have to teach\l"
	.string "this to one of my POKéMON !$"

Route9_Text_Boy_Text_0:
	.string "I'm not a TRAINER. I'm hidding from my\n"
	.string "brother. I pet his favorite POKéMON,\l"
	.string "but now it is totally harmless. And my\l"
	.string "brother thinks only strong POKéMON\l"
	.string "count!$"

Route9_Text_Hiker2_Text_0:
	.string "Who I am ? Well just a happy, anonymous\n"
	.string "and not suspicious HIKER! Oh you want\l"
	.string "me to ask the TRAINER to fight you\l"
	.string "again?$"

Route9_Text_Hiker2_Text_1:
	.string "Well it's done! Happy to have a business\n"
	.string "with you. The HIKER CLU... I mean, me the\l"
	.string "random HIKER, wish you a goodbye !$"

Route9_Text_Hiker2_Text_2:
	.string "Really ? So you just wanted to greet a\n"
	.string "happy HIKER. So nice, ah ah ah ! Can you\l"
	.string "leave me now ?$"
