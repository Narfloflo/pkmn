Route4_MapScripts::
	.byte 0


Route4_Text_Picnicker::
	trainerbattle_single TRAINER_CAMERON_2, Route4_Text_Picnicker_Text_0, Route4_Text_Picnicker_Text_1
	msgbox Route4_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route4_Text_BlackBelt::
	trainerbattle_single TRAINER_CAMERON_3, Route4_Text_BlackBelt_Text_0, Route4_Text_BlackBelt_Text_1
	msgbox Route4_Text_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


Route4_Text_BlackBelt2::
	lock
	faceplayer
	msgbox Route4_Text_BlackBelt2_Text_0
	release
	end


Route4_Text_Picnicker_Text_0:
	.string "Hey, let's have a picnic and a battle !$"

Route4_Text_Picnicker_Text_1:
	.string "Oh, I guess my picnic was too distracting !$"

Route4_Text_Picnicker_Text_2:
	.string "Thanks for the battle! Let's enjoy the\n"
	.string "rest of the day with some snacks.$"

Route4_Text_BlackBelt_Text_0:
	.string "I'm in the middle of a KATA\nLet's have a break to destroy you !$"

Route4_Text_BlackBelt_Text_1:
	.string "Ahhhhh !!!!$"

Route4_Text_BlackBelt_Text_2:
	.string "I'm from the SAFFRON DOJO ! Our master\n"
	.string "have been defeated by a kid. So we all\l"
	.string "went out for training.$"

Route4_Text_BlackBelt2_Text_0:
	.string "I'm not a TRAINER anymore. I've been\n"
	.string "beaten so hard that I quit POKéMON to\l"
	.string "train myself here.$"
