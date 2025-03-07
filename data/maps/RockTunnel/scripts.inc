RockTunnel_MapScripts::
	.byte 0


RockTunnel_Text_Picnicker1::
	trainerbattle_single TRAINER_ANNA_AND_MEG_2, RockTunnel_Text_Picnicker1_Text_0, RockTunnel_Text_Picnicker1_Text_1
	msgbox RockTunnel_Text_Picnicker1_Text_2, MSGBOX_AUTOCLOSE
	end


RockTunnel_Text_Picnicker2::
	trainerbattle_single TRAINER_ANNA_AND_MEG_3, RockTunnel_Text_Picnicker2_Text_0, RockTunnel_Text_Picnicker2_Text_1
	msgbox RockTunnel_Text_Picnicker2_Text_2, MSGBOX_AUTOCLOSE
	end


RockTunnel_Text_Hiker1::
	trainerbattle_single TRAINER_ANNA_AND_MEG_4, RockTunnel_Text_Hiker1_Text_0, RockTunnel_Text_Hiker1_Text_1
	msgbox RockTunnel_Text_Hiker1_Text_2, MSGBOX_AUTOCLOSE
	end


RockTunnel_Text_Hiker2::
	trainerbattle_single TRAINER_MIGUEL_2, RockTunnel_Text_Hiker2_Text_0, RockTunnel_Text_Hiker2_Text_1
	msgbox RockTunnel_Text_Hiker2_Text_2, MSGBOX_AUTOCLOSE
	end


RockTunnel_Text_Camper::
	trainerbattle_single TRAINER_MIGUEL_3, RockTunnel_Text_Camper_Text_0, RockTunnel_Text_Camper_Text_1
	msgbox RockTunnel_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


RockTunnel_Text_BlackBelt::
	trainerbattle_single TRAINER_MIGUEL_4, RockTunnel_Text_BlackBelt_Text_0, RockTunnel_Text_BlackBelt_Text_1
	msgbox RockTunnel_Text_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


RockTunnel_Text_Worker1::
	lock
	faceplayer
	msgbox RockTunnel_Text_Worker1_Text_0
	release
	end


RockTunnel_Text_Worker2::
	lock
	faceplayer
	msgbox RockTunnel_Text_Worker2_Text_0
	release
	end


RockTunnel_Text_Picnicker1_Text_0:
	.string "You mind if we fight a little ?$"

RockTunnel_Text_Picnicker1_Text_1:
	.string "That's, well, a big defeat !$"

RockTunnel_Text_Picnicker1_Text_2:
	.string "$"

RockTunnel_Text_Picnicker2_Text_0:
	.string "There is so much humidity here !$"

RockTunnel_Text_Picnicker2_Text_1:
	.string "Koff koff !$"

RockTunnel_Text_Picnicker2_Text_2:
	.string "I'm pretty sure I got something stuck\n"
	.string "in tmy throat ! That's why I lost !$"

RockTunnel_Text_Hiker1_Text_0:
	.string "Well well a fresh blood !$"

RockTunnel_Text_Hiker1_Text_1:
	.string "My my ! I lost !$"

RockTunnel_Text_Hiker1_Text_2:
	.string "The HIKER CLUB sent me here to train my\n"
	.string "POKéMON. But I'm not strong enough yet\l"
	.string "!$"

RockTunnel_Text_Hiker2_Text_0:
	.string "AHHHH ! you scared me !$"

RockTunnel_Text_Hiker2_Text_1:
	.string "I wet my pants...$"

RockTunnel_Text_Hiker2_Text_2:
	.string "I thought you were some kind of ghost\n"
	.string "or something. You aren't right ?$"

RockTunnel_Text_Camper_Text_0:
	.string "There's a lot of sand.\nToo bad for camping !$"

RockTunnel_Text_Camper_Text_1:
	.string "Oh! I have sand in my shoes !$"

RockTunnel_Text_Camper_Text_2:
	.string "Don't think I'm camping in the ROCK\n"
	.string "TUNNEL just for fun, it's a challenge !$"

RockTunnel_Text_BlackBelt_Text_0:
	.string "Will you help me improve my technics ?$"

RockTunnel_Text_BlackBelt_Text_1:
	.string "Mmmmh...\nI'm not good enough !$"

RockTunnel_Text_BlackBelt_Text_2:
	.string "My master ask us to train all around\n"
	.string "KANTO, and to face the real world. Being\l"
	.string "in a DOJO is not good enough\l"
	.string "apparently.$"

RockTunnel_Text_Worker1_Text_0:
	.string "We should build a dam here, so we are\n"
	.string "trying to see if that's a good spot !$"

RockTunnel_Text_Worker2_Text_0:
	.string "You know being a worker in KANTO is\n"
	.string "really something : there is a lot of job\l"
	.string "to do since TEAM ROCKET was disband !$"
