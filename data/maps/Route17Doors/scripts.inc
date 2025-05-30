Route17Doors_MapScripts::
	.byte 0


Route17Doors_Text_Guard::
	lock
	msgbox Route17Doors_Text_Guard_Text_0, MSGBOX_NPC
	end


Route17Doors_Text_GuardBike::
	lock
	msgbox Route17Doors_Text_GuardBike_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route17Doors_Move_NoBike
	waitmovement 0
	releaseall
	end


Route17Doors_Move_NoBike:
	walk_right
	step_end

Route17Doors_Text_CheckBike::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Route17Doors_Text_GuardBike
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end


Route17Doors_Text_ClearBike::
	lockall
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	releaseall
	end


Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend::
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend_Text_0, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes::
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes_Text_0, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore::
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore_Text_0, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_Text_LongPathOverWater::
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater_Text_0, MSGBOX_NPC
	end


Route17_Text_FlyMaster::
	msgbox Route17_Text_FlyMaster_Text_0, MSGBOX_NPC
	end


Route17_Text_Pidgeot::
	msgbox Route17_Text_Pidgeot_Text_0, MSGBOX_NPC
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	end


Route17Doors_Text_Guard_Text_0:
	.string "CYCLING ROAD is a downhill course\nby the sea. It's a great ride.$"

Route17Doors_Text_GuardBike_Text_0:
	.string "Hey ! you can't go there without a BIKE\n"
	.string "(or a MOTOCYCLE...) ! That's the rule !$"

Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend_Text_0:
	.string "I'm on a relaxing ride on my new\nbike with my girlfriend.$"

Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes_Text_0:
	.string "We're going riding together on our\nnew bikes.$"

Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore_Text_0:
	.string "Let's see what the binoculars have\nto show…\pIt's the CELADON DEPT. STORE!$"

Route16_NorthEntrance_2F_Text_LongPathOverWater_Text_0:
	.string "Let's see what the binoculars have\nto show…\pThere's a long path over water far\naway.$"

Route17_Text_FlyMaster_Text_0:
	.string "They call me the FLYING Master!\nMy sister give all my HM to trainers...\lOh you already know how to fly?\lPerfect! You are a fellow FLYING GURU!$"

Route17_Text_Pidgeot_Text_0:
	.string "Dooji!$"
