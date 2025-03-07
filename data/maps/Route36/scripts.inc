Route36_MapScripts::
	.byte 0


Route36_Text_FatGuy::
	lock
	faceplayer
	msgbox Route36_Text_FatGuy_Text_0
	release
	end


Route36_Text_Scientist1::
	lock
	faceplayer
	msgbox Route36_Text_Scientist1_Text_0
	release
	end


Route36_Text_Sage::
	lock
	faceplayer
	msgbox Route36_Text_Sage_Text_0
	release
	end


Route36_Text_Beauty::
	trainerbattle_double TRAINER_PABLO_3, Route36_Text_Beauty_Text_0, Route36_Text_Beauty_Text_1, Route36_Text_Beauty_Text_2
	msgbox Route36_Text_Beauty_Text_3, MSGBOX_NPC
	end


Route36_Text_Camper::
	trainerbattle_single TRAINER_PABLO_4, Route36_Text_Camper_Text_0, Route36_Text_Camper_Text_1
	msgbox Route36_Text_Camper_Text_2, MSGBOX_NPC
	end


Route36_Text_ReloadBoy::
	msgbox Route36_Text_ReloadBoy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route36_Text_ReloadBoy_2
	msgbox Route36_Text_ReloadBoy_Text_2, MSGBOX_NPC
Route36_Text_ReloadBoy_1:
	release
	end

Route36_Text_ReloadBoy_2:
	playse SE_POKENAV_CALL
	waitse
	cleartrainerflag TRAINER_PABLO_3
	cleartrainerflag TRAINER_PABLO_4
	cleartrainerflag TRAINER_NICOLAS_2
	cleartrainerflag TRAINER_NICOLAS_3
	cleartrainerflag TRAINER_NICOLAS_4
	playse SE_POKENAV_HANG_UP
	waitse
	msgbox Route36_Text_ReloadBoy_Text_1, MSGBOX_NPC
	goto Route36_Text_ReloadBoy_1


Route36_Text_FatGuy_Text_0:
	.string "Hey hey! I'm so strong I can SMASH\n"
	.string "ROCKS! Oh you already know this MOVE.\l"
	.string "Well Okay... I'm not so special...$"

Route36_Text_Scientist1_Text_0:
	.string "Sometime you can see a weird TREE\n"
	.string "around here. Well I think... I'm\l"
	.string "investigating !$"

Route36_Text_Sage_Text_0:
	.string "You saw the small shrine behing the\n"
	.string "trees? Well it's a replica from the one\l"
	.string "you can find in the ILEX FOREST.$"

Route36_Text_Beauty_Text_0:
	.string "I'll introduce you to my magnificient\nTEAM!$"

Route36_Text_Beauty_Text_1:
	.string "Oh such a grace!$"

Route36_Text_Beauty_Text_2:
	.string "Well looks like you don't have enough\nPOKéMON.\lCome later, I'll get you!$"

Route36_Text_Beauty_Text_3:
	.string "Your POKéMON are not only strong, but\ngraceful.\lYou should go to a beauty contest. You\lwould probably win!$"

Route36_Text_Camper_Text_0:
	.string "Oh a TRAINER!\nLet see how strong you are!$"

Route36_Text_Camper_Text_1:
	.string "Arg! You are strong enough!$"

Route36_Text_Camper_Text_2:
	.string "There is a shortcut here if you don't\nwant to cross the NATIONAL PARK.\lBut you'll have to cut a tree.$"

Route36_Text_ReloadBoy_Text_0:
	.string "Oh hey you!\nYou want me to call the TRAINERS on\lROUTE 36 and 37 to have a rematch with\lyou?$"

Route36_Text_ReloadBoy_Text_1:
	.string "Alright done! I asked them to pretend\nthey've never seen you before.$"

Route36_Text_ReloadBoy_Text_2:
	.string "Oh ok!\nI need to finish my homework anyway.$"
