ForgottenIsland_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ForgottenIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ForgottenIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x021, ForgottenIsland_Event_DoorEntei
	end


ForgottenIsland_Event_DoorEntei::
	setmetatile 60, 40, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, TRUE
	setmetatile 60, 41, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
	end


ForgottenIsland_Text_BlackBelt1::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x021, ForgottenIsland_Text_BlackBelt1_2
	msgbox ForgottenIsland_Text_BlackBelt1_Text_1
ForgottenIsland_Text_BlackBelt1_1:
	release
	end

ForgottenIsland_Text_BlackBelt1_2:
	msgbox ForgottenIsland_Text_BlackBelt1_Text_0
	goto ForgottenIsland_Text_BlackBelt1_1


ForgottenIsland_Text_CityTown::
	lock
	msgbox ForgottenIsland_Text_CityTown_Text_0
	release
	end


ForgottenIsland_Text_Woman::
	lock
	faceplayer
	msgbox ForgottenIsland_Text_Woman_Text_0
	release
	end


ForgottenIsland_Text_Woman2::
	lock
	faceplayer
	msgbox ForgottenIsland_Text_Woman2_Text_0
	release
	end


ForgottenIsland_Text_BlackBelt2::
	msgbox ForgottenIsland_Text_BlackBelt2_Text_0, MSGBOX_NPC
	end


ForgottenIsland_Text_NinjaKid::
	lock
	faceplayer
	checkitem ITEM_POKE_BALL
	compare VAR_RESULT, TRUE
	goto_if_eq ForgottenIsland_Text_NinjaKid_1
	msgbox ForgottenIsland_Text_NinjaKid_Text_0, MSGBOX_NPC
	release
	end

ForgottenIsland_Text_NinjaKid_1:
	goto ForgottenIsland_Text_NinjaKidYesNo
	return


ForgottenIsland_Text_NinjaKidYesNo::
	msgbox ForgottenIsland_Text_NinjaKidYesNo_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq ForgottenIsland_Text_NinjaKidYesNo_1
	msgbox ForgottenIsland_Text_NinjaKidYesNo_Text_2
	release
	end

ForgottenIsland_Text_NinjaKidYesNo_1:
	removeitem ITEM_POKE_BALL, 1
	msgbox ForgottenIsland_Text_NinjaKidYesNo_Text_1
	release
	end


ForgottenIsland_Text_LittleGirl::
	msgbox ForgottenIsland_Text_LittleGirl_Text_0, MSGBOX_NPC
	end


ForgottenIsland_Text_BlackBelt1_Text_0:
	.string "Woooh! An incredible POKéMON just blast\n"
	.string "into the tower at such speed, it\l"
	.string "destroyed the door !$"

ForgottenIsland_Text_BlackBelt1_Text_1:
	.string "This tower has been here for so long, I\n"
	.string "don't even know when it was built and\l"
	.string "by whom.$"

ForgottenIsland_Text_CityTown_Text_0:
	.string "The time erase what was written here...\n"
	.string "L...G...M..A B...L..L..S ?$"

ForgottenIsland_Text_Woman_Text_0:
	.string "This is a well. We's been using it for\n"
	.string "ages. The water is so pure anyway.$"

ForgottenIsland_Text_Woman2_Text_0:
	.string "The village is surrounded by tall grass.\n"
	.string "Perfect for training POKéMON.$"

ForgottenIsland_Text_BlackBelt2_Text_0:
	.string "Oh you have a devices to capture\nPOKéMON?\lHere we have to chase them using our\lstrength only!$"

ForgottenIsland_Text_NinjaKid_Text_0:
	.string "You know that I cannot leave the\nvillage, otherwise I can be attacked by\lsome wild POKéMON.$"

ForgottenIsland_Text_NinjaKidYesNo_Text_0:
	.string "Can you give me some of these BALLS?\nI want to capture one! Grandpa will be\lamazed!$"

ForgottenIsland_Text_NinjaKidYesNo_Text_1:
	.string "Thanks you!! I'm gonna be the toughest\nguy in here!\lThe'll cry for mercy!\l{PLAYER}: I don't know if it was a good\lidea...$"

ForgottenIsland_Text_NinjaKidYesNo_Text_2:
	.string "Oh I'm the saddest boy in the world...$"

ForgottenIsland_Text_LittleGirl_Text_0:
	.string "Grandpa is so strong! He took down\nTROPIUS all by himself!$"
