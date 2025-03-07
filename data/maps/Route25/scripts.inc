Route25_MapScripts::
	.byte 0


Route25_Text_Youngster::
	trainerbattle_single TRAINER_CAMERON_4, Route25_Text_Youngster_Text_0, Route25_Text_Youngster_Text_1
	msgbox Route25_Text_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route25_Text_Camper::
	trainerbattle_single TRAINER_JACKI_2, Route25_Text_Camper_Text_0, Route25_Text_Camper_Text_1
	msgbox Route25_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route25_Text_Picnicker::
	trainerbattle_single TRAINER_JACKI_3, Route25_Text_Picnicker_Text_0, Route25_Text_Picnicker_Text_1
	msgbox Route25_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route25_Text_Hiker::
	trainerbattle_single TRAINER_JACKI_4, Route25_Text_Hiker_Text_0, Route25_Text_Hiker_Text_1
	msgbox Route25_Text_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route25_Text_VillaSign::
	lock
	msgbox Route25_Text_VillaSign_Text_0
	release
	end


Route25_Text_Girl::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route25_Text_GirlIfBoy
	goto_if_eq VAR_RESULT, FEMALE, Route25_Text_GirlIfGirl
	end


Route25_Text_GirlIfGirl::
	msgbox Route25_Text_GirlIfGirl_Text_0
	release
	end


Route25_Text_GirlIfBoy::
	lock
	msgbox Route25_Text_GirlIfBoy_Text_0, MSGBOX_AUTOCLOSE
	applymovement 5, Route25_Move
	playse SE_M_ATTRACT
	waitse
	goto Route_Text_BeenKissed
	release
	end


Route25_Move:
	emote_heart
	step_end

Route_Text_BeenKissed::
	lock
	msgbox Route_Text_BeenKissed_Text_0
	release
	end


Route25_Text_Youngster_Text_0:
	.string "I've been training hard on Route 25!\nLet's see how strong you are !$"

Route25_Text_Youngster_Text_1:
	.string "Wow, your POKéMON are unbeatable !$"

Route25_Text_Youngster_Text_2:
	.string "I'll keep pushing my limits and become\n"
	.string "an even stronger TRAINER !$"

Route25_Text_Camper_Text_0:
	.string "Camping out here is great!\nA battle will make it even better !$"

Route25_Text_Camper_Text_1:
	.string "My camping trip didn't go as planned...$"

Route25_Text_Camper_Text_2:
	.string "I'll continue my journey, and maybe find\n"
	.string "a better camping spot !$"

Route25_Text_Picnicker_Text_0:
	.string "My boyfriend and I broke up recently.\nHe was so lame !$"

Route25_Text_Picnicker_Text_1:
	.string "What what what ?!$"

Route25_Text_Picnicker_Text_2:
	.string "I lost but my boyfriend is way weaker\n"
	.string "than me. But he keep bragging around\l"
	.string "as if he was a top TRAINER !$"

Route25_Text_Hiker_Text_0:
	.string "Boooh ! You haven't seen me right ?$"

Route25_Text_Hiker_Text_1:
	.string "I haven't seen my defeat...$"

Route25_Text_Hiker_Text_2:
	.string "I'm training around here. I heard there\n"
	.string "are some rare POKéMON around here !$"

Route25_Text_VillaSign_Text_0:
	.string "SEA COTTAGE\n"
	.string "BILL leaves here !\p"
	.string "But there is also written that BILL\n"
	.string "left for SEVII ISLANDS$"

Route25_Text_GirlIfGirl_Text_0:
	.string "You know this place is where lovers are\n"
	.string "meeting each other. I'm telling you\l"
	.string "just in case. Now leave, I'm waiting for\l"
	.string "my prince ! He should be a great\l"
	.string "TRAINER !$"

Route25_Text_GirlIfBoy_Text_0:
	.string "Oh my ! You beat all those TRAINERS ?\n"
	.string "You really are skilled ! You deserve a\l"
	.string "kiss !$"

Route_Text_BeenKissed_Text_0:
	.string "You are my prince !$"
