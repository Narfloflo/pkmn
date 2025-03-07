Route8_MapScripts::
	.byte 0


Route8_Text_Garcia::
	lock
	faceplayer
	checktrainerflag TRAINER_ROSE_3
	goto_if 0, Route8_Text_Garcia_2
	goto Route8_Text_GarciaRematch
Route8_Text_Garcia_1:
	release
	end

Route8_Text_Garcia_2:
	goto Route8_Text_GarciaFight
	goto Route8_Text_Garcia_1


Route8_Text_GarciaFight::
	msgbox Route8_Text_GarciaFight_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route8_Text_GarciaFight_2
	msgbox Route8_Text_GarciaFight_Text_3
Route8_Text_GarciaFight_1:
	release
	end

Route8_Text_GarciaFight_2:
	trainerbattle_single TRAINER_ROSE_3, Route8_Text_GarciaFight_Text_1, Route8_Text_GarciaFight_Text_2
	goto Route8_Text_GarciaFight_1


Route8_Text_GarciaRematch::
	msgbox Route8_Text_GarciaRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route8_Text_GarciaRematch_2
	msgbox Route8_Text_GarciaRematch_Text_2
Route8_Text_GarciaRematch_1:
	release
	end

Route8_Text_GarciaRematch_2:
	cleartrainerflag TRAINER_ROSE_3
	trainerbattle_single TRAINER_ROSE_3, Route8_Text_GarciaRematch_Text_1, Route8_Text_GarciaFight_Text_2
	goto Route8_Text_GarciaRematch_1


Route8_Text_Beauty::
	lock
	faceplayer
	msgbox Route8_Text_Beauty_Text_0
	release
	end


Route8_Text_Hiker::
	lock
	faceplayer
	msgbox Route8_Text_Hiker_Text_0
	release
	end


Route8_Text_Thug::
	trainerbattle_single TRAINER_TIMOTHY_2, Route8_Text_Thug_Text_0, Route8_Text_Thug_Text_1
	msgbox Route8_Text_Thug_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Text_Biker::
	trainerbattle_single TRAINER_TIMOTHY_3, Route8_Text_Biker_Text_0, Route8_Text_Biker_Text_1
	msgbox Route8_Text_Biker_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Text_Biker2::
	trainerbattle_single TRAINER_TIMOTHY_4, Route8_Text_Biker2_Text_0, Route8_Text_Biker2_Text_1
	msgbox Route8_Text_Biker2_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Text_Thug2::
	trainerbattle_single TRAINER_SHELBY_2, Route8_Text_Thug2_Text_0, Route8_Text_Thug2_Text_1
	msgbox Route8_Text_Thug2_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Text_Lass::
	trainerbattle_single TRAINER_SHELBY_3, Route8_Text_Lass_Text_0, Route8_Text_Lass_Text_1
	msgbox Route8_Text_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Text_Gambler::
	trainerbattle_single TRAINER_SHELBY_4, Route8_Text_Gambler_Text_0, Route8_Text_Gambler_Text_1
	msgbox Route8_Text_Gambler_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Text_Scientist::
	lock
	faceplayer
	msgbox Route8_Text_Scientist_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route8_Text_Scientist_2
Route8_Text_Scientist_1:
	release
	end

Route8_Text_Scientist_2:
	cleartrainerflag TRAINER_TIMOTHY_2
	cleartrainerflag TRAINER_TIMOTHY_3
	cleartrainerflag TRAINER_TIMOTHY_4
	cleartrainerflag TRAINER_SHELBY_2
	cleartrainerflag TRAINER_SHELBY_3
	cleartrainerflag TRAINER_SHELBY_4
	cleartrainerflag TRAINER_ANNA_AND_MEG_2
	cleartrainerflag TRAINER_ANNA_AND_MEG_3
	cleartrainerflag TRAINER_ANNA_AND_MEG_4
	cleartrainerflag TRAINER_MIGUEL_2
	cleartrainerflag TRAINER_MIGUEL_3
	cleartrainerflag TRAINER_MIGUEL_4
	playse SE_POKENAV_CALL
	waitse
	playse SE_POKENAV_OFF
	waitse
	msgbox Route8_Text_Scientist_Text_1
	goto Route8_Text_Scientist_1


Route8_Text_GarciaFight_Text_0:
	.string "There are a lots of PUNKS around here.\n"
	.string "Since TEAM ROCKET was disband, It's a\l"
	.string "real mayhem in KANTO. Anyway, wanna\l"
	.string "have a quick battle ?$"

Route8_Text_GarciaFight_Text_1:
	.string "You are defying the authorities ?$"

Route8_Text_GarciaFight_Text_2:
	.string "I'll keep an eye on you punk !$"

Route8_Text_GarciaFight_Text_3:
	.string "Well I'm still on duty anyway.$"

Route8_Text_GarciaRematch_Text_0:
	.string "Hey you, I'm bored. The PUNKS around\n"
	.string "here are so dumb... Do you wanna fight ?$"

Route8_Text_GarciaRematch_Text_1:
	.string "I can't lose again !$"

Route8_Text_GarciaRematch_Text_2:
	.string "Yeah yeah, I still have these PUNKS to\n"
	.string "beat.$"

Route8_Text_Beauty_Text_0:
	.string "I'm not gonna lie, I'm happy the TEAM\n"
	.string "ROCKET is disbanded since now the cops\l"
	.string "can take care of all these bastards !$"

Route8_Text_Hiker_Text_0:
	.string "I think this way leads to the ROCK\n"
	.string "TUNNEL. But I can't see a damn thing in\l"
	.string "the dark, so I haven't explore it yet.$"

Route8_Text_Thug_Text_0:
	.string "Oh oh ! A young TRAINER\nI'll crush you !$"

Route8_Text_Thug_Text_1:
	.string "Wow wow ! Kid calm down !$"

Route8_Text_Thug_Text_2:
	.string "I'm a real THUG, so I won't be pissed. You\n"
	.string "show me your strength. I respect that !$"

Route8_Text_Biker_Text_0:
	.string "Beep beep !\nMove around !$"

Route8_Text_Biker_Text_1:
	.string "My bike !!$"

Route8_Text_Biker_Text_2:
	.string "Our fight was so intense, it broke my\n"
	.string "bike. So basically I gave you money\l"
	.string "because you won, and I have to pay to\l"
	.string "fix my shit ! Incredible !$"

Route8_Text_Biker2_Text_0:
	.string "Oh my ARCEUS ! I hate kids so much\nI have to punch you !$"

Route8_Text_Biker2_Text_1:
	.string "Huh what ? Beaten by a kid ?!$"

Route8_Text_Biker2_Text_2:
	.string "Leave my, I hate the way you talk, the\n"
	.string "way you look, the way you breath. Yeah\l"
	.string "I hate kids !$"

Route8_Text_Thug2_Text_0:
	.string "I lost my POKéDOLL !\nI need to take out on you !$"

Route8_Text_Thug2_Text_1:
	.string "AHHHHH ! My more mad now !$"

Route8_Text_Thug2_Text_2:
	.string "I really love CLEFAIRY. What you gonna\n"
	.string "do about it ?$"

Route8_Text_Lass_Text_0:
	.string "Would you fight a nice girl like me ?$"

Route8_Text_Lass_Text_1:
	.string "Hey ! That's not nice !$"

Route8_Text_Lass_Text_2:
	.string "I need to be stronger if I want to be\n"
	.string "part of CELADON GYM.$"

Route8_Text_Gambler_Text_0:
	.string "I bet you can't beat me !$"

Route8_Text_Gambler_Text_1:
	.string "Arf ! Here is my money...$"

Route8_Text_Gambler_Text_2:
	.string "I wonder why so many kids are stronger\n"
	.string "than us adults. I mean, I'm TRAINING my\l"
	.string "POKéMON for 25 years ! What about you\l"
	.string "? You started just last week right ?$"

Route8_Text_Scientist_Text_0:
	.string "I developped a new device that makes\n"
	.string "the TRAINERS forgetting you just\l"
	.string "defeated them. It can work on this\l"
	.string "Route and the ROCK TUNNEL too. You\l"
	.string "want me to use it ?$"

Route8_Text_Scientist_Text_1:
	.string "I love science ! Come see me if you want\n"
	.string "me to do it again !$"
