KantoUndergrounds_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KantoUndergrounds_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KantoUndergrounds_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_UNUSED_0x02C, KantoUndergrounds_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

KantoUndergrounds_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	playbgm MUS_RG_ROUTE1, TRUE
	setweather WEATHER_NONE
	end
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	return


KantoUndergrounds_Event_WestGate_CantGetThrough::
	lockall
	applymovement 8, KantoUndergrounds_Event_WestGate_PoliceStopYou
	waitmovement 0
	msgbox KantoUndergrounds_Event_WestGate_CantGetThrough_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, KantoUndergrounds_Event_WestGate_Stepback
	waitmovement 0
	releaseall
	end


KantoUndergrounds_Event_WestGate_PoliceStopYou:
	emote_exclamation_mark
	face_player
	step_end

KantoUndergrounds_Event_WestGate_Stepback:
	walk_left
	step_end

KantoUndergrounds_Event_EastGate_CantGetThrough::
	lockall
	applymovement 9, KantoUndergrounds_Event_EastGate_PoliceStopYou
	waitmovement 0
	msgbox KantoUndergrounds_Event_WestGate_CantGetThrough_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, KantoUndergrounds_Event_EastGate_Stepback
	waitmovement 0
	releaseall
	end


KantoUndergrounds_Event_EastGate_PoliceStopYou:
	emote_exclamation_mark
	face_player
	step_end

KantoUndergrounds_Event_EastGate_Stepback:
	walk_right
	step_end

KantoUndergrounds_Event_SouthGate_CantGetThrough::
	lockall
	applymovement 7, KantoUndergrounds_Event_SouthGate_PoliceStopYou
	waitmovement 0
	msgbox KantoUndergrounds_Event_WestGate_CantGetThrough_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, KantoUndergrounds_Event_SouthGate_Stepback
	waitmovement 0
	releaseall
	end


KantoUndergrounds_Event_SouthGate_PoliceStopYou:
	emote_exclamation_mark
	face_player
	step_end

KantoUndergrounds_Event_SouthGate_Stepback:
	walk_down
	step_end

KantoUndergrounds_Text_Policeman::
	msgbox KantoUndergrounds_Text_Policeman_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq KantoUndergrounds_Text_Policeman_1
	msgbox KantoUndergrounds_Text_Policeman_Text_2, MSGBOX_NPC
	end

KantoUndergrounds_Text_Policeman_1:
	msgbox KantoUndergrounds_Text_Policeman_Text_1, MSGBOX_NPC
	end


KantoUndergrounds_Text_Policeman2::
	return


KantoUndergrounds_Text_Rocket1::
	trainerbattle_single TRAINER_ROCKET_1, KantoUndergrounds_Text_Rocket1_Text_0, KantoUndergrounds_Text_Rocket1_Text_1, KantoUndergrounds_Text_Rocket1PostBattle
	end


KantoUndergrounds_Text_Rocket1PostBattle::
	msgbox KantoUndergrounds_Text_Rocket1PostBattle_Text_0, MSGBOX_NPC
	applymovement 4, KantoUndergrounds_Move_Rocket1PostBattle
	waitmovement 0
	end


KantoUndergrounds_Move_Rocket1PostBattle:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

KantoUndergrounds_Text_Rocket2::
	trainerbattle_single TRAINER_ROCKET_2, KantoUndergrounds_Text_Rocket2_Text_0, KantoUndergrounds_Text_Rocket2_Text_1, KantoUndergrounds_Text_Rocket2PostBattle
	end


KantoUndergrounds_Text_Rocket2PostBattle::
	msgbox KantoUndergrounds_Text_Rocket2PostBattle_Text_0, MSGBOX_NPC
	applymovement 3, KantoUndergrounds_Move_Rocket2PostBattle
	waitmovement 0
	end


KantoUndergrounds_Move_Rocket2PostBattle:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

KantoUndergrounds_Text_Rocket3::
	trainerbattle_single TRAINER_ROCKET_3, KantoUndergrounds_Text_Rocket3_Text_0, KantoUndergrounds_Text_Rocket3_Text_1, KantoUndergrounds_Text_Rocket3PostBattle
	end


KantoUndergrounds_Text_Rocket3PostBattle::
	msgbox KantoUndergrounds_Text_Rocket3PostBattle_Text_0, MSGBOX_NPC
	applymovement 1, KantoUndergrounds_Move_Rocket3PostBattle
	waitmovement 0
	end


KantoUndergrounds_Move_Rocket3PostBattle:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

KantoUndergrounds_Text_Rocket4::
	trainerbattle_single TRAINER_DYLAN_3, KantoUndergrounds_Text_Rocket4_Text_0, KantoUndergrounds_Text_Rocket4_Text_1, KantoUndergrounds_Text_Rocket4PostBattle
	end


KantoUndergrounds_Text_Rocket4PostBattle::
	msgbox KantoUndergrounds_Text_Rocket4PostBattle_Text_0, MSGBOX_NPC
	applymovement 2, KantoUndergrounds_Move_Rocket_Leaving
	msgbox KantoUndergrounds_Text_Rocket4PostBattle_Text_1, MSGBOX_NPC
	applymovement 11, KantoUndergrounds_Move_PolicetoPlayerNorth
	applymovement 10, KantoUndergrounds_Move_PolicetoPlayerNorth
	waitmovement 0
	msgbox KantoUndergrounds_Text_Rocket4PostBattle_Text_2, MSGBOX_NPC
	warp MAP_KANTO_UNDERGROUNDS, 33, 5
	setvar VAR_UNUSED_0x4091, 1
	setflag FLAG_UNUSED_0x02C
	end


KantoUndergrounds_Move_Rocket_Leaving:
	walk_fast_down
	walk_fast_down
	emote_exclamation_mark
	step_end

KantoUndergrounds_Move_PolicetoPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_player
	step_end

KantoUndergrounds_Event_NorthGateYesNo::
	call KantoUndergrounds_Event_NorthGatePoliceCheckIn
	end


KantoUndergrounds_Event_Nope::
	end


KantoUndergrounds_Event_NorthGatePoliceCheckIn::
	applymovement 5, KantoUndergrounds_Move_NorthGatePoliceCheckInMove
	waitmovement 0
	msgbox KantoUndergrounds_Event_NorthGatePoliceCheckIn_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq KantoUndergrounds_Event_NorthGatePoliceCheckIn_1
	msgbox KantoUndergrounds_Event_NorthGatePoliceCheckIn_Text_2, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, KantoUndergrounds_Move_NorthGatePlayerRefuse
	waitmovement 0
	release
	end

KantoUndergrounds_Event_NorthGatePoliceCheckIn_1:
	msgbox KantoUndergrounds_Event_NorthGatePoliceCheckIn_Text_1, MSGBOX_NPC
	cleartrainerflag TRAINER_DYLAN_3
	setvar VAR_UNUSED_0x409B, 1
	release
	end


KantoUndergrounds_Move_NorthGatePoliceCheckInMove:
	face_player
	step_end

KantoUndergrounds_Move_NorthGatePlayerRefuse:
	walk_up
	step_end

KantoUndergrounds_Text_PoliceGoBack::
	msgbox KantoUndergrounds_Text_PoliceGoBack_Text_0, MSGBOX_NPC
	end


KantoUndergrounds_Event_WestGate_CantGetThrough_Text_0:
	.string "Hey you! Please step back. The remnants\nof the TEAM ROCKET are crowded here.\lIf you want to help , go at the\lentrance in ROUTE 5.$"

KantoUndergrounds_Text_Policeman_Text_0:
	.string "A bunch of ROCKETS members are\ngathering here.\lUnfortunatly we don't have enough units\lavailable at the moment to fight them\lall...\lCan you give us a hand?$"

KantoUndergrounds_Text_Policeman_Text_1:
	.string "Thanks you young TRAINER!\nI hope you can beat them well!$"

KantoUndergrounds_Text_Policeman_Text_2:
	.string "Me too I'm too scared and unprepared\nfor that...$"

KantoUndergrounds_Text_Rocket1_Text_0:
	.string "Well a kid!\nIt's gonna be my day if I beat you!$"

KantoUndergrounds_Text_Rocket1_Text_1:
	.string "What? Noooo!$"

KantoUndergrounds_Text_Rocket1PostBattle_Text_0:
	.string "Hummf!\nI can't believe I've been beaten by a\lkid! Again!$"

KantoUndergrounds_Text_Rocket2_Text_0:
	.string "What do you want brat?\nBeat us?\lAh ah! No!$"

KantoUndergrounds_Text_Rocket2_Text_1:
	.string "Seriously?!$"

KantoUndergrounds_Text_Rocket2PostBattle_Text_0:
	.string "I'll never forget you for what you've\ndone.\lGIOVANNI! Save us!$"

KantoUndergrounds_Text_Rocket3_Text_0:
	.string "What?! We look like a team of hobbos?!\nI'll make you regret that!$"

KantoUndergrounds_Text_Rocket3_Text_1:
	.string "I may be a hobbo, but I'm giving you my\nmoney.\lMakes you thinks right?$"

KantoUndergrounds_Text_Rocket3PostBattle_Text_0:
	.string "I used to be a BIRDKEEPER, but I a had\ngambling addiction and made the worst\lchoices...\lDon't ever EVER go to a GAME CORNER!\lI can't believe kids are allowed in\lthese places.$"

KantoUndergrounds_Text_Rocket4_Text_0:
	.string "Oh ARCEUS!\nOur retreat is under attack!$"

KantoUndergrounds_Text_Rocket4_Text_1:
	.string "Are we doomed to be defeated?$"

KantoUndergrounds_Text_Rocket4PostBattle_Text_0:
	.string "I think I should move to JOHTO to\nretire.\lI'm sick of being a punchingball.\lI wish in an alternate dimension this\lkid RED was on our side.\lMay GIRATINA hear me...$"

KantoUndergrounds_Text_Rocket4PostBattle_Text_1:
	.string "Stop right there you criminal scum!$"

KantoUndergrounds_Text_Rocket4PostBattle_Text_2:
	.string "You are cornered ARCHIE! There is no\nway to escape now! Surrender!\lSince your HIDEOUT in SEVII's been shut\ldown by GREEN, there is no way for you\lto escape!\lGRUNT: Damn it! That's not fair!\lI'll be back, I swear on my name!$"

KantoUndergrounds_Event_NorthGatePoliceCheckIn_Text_0:
	.string "Oh you came to give us a hand?$"

KantoUndergrounds_Event_NorthGatePoliceCheckIn_Text_1:
	.string "Great!\nWell there are four ROCKETS leaving\lhere, but my TEAM is not strong enough\lto beat them all.\lYou have to defeat them in one row to\lbuy enough time for my colleagues to\larrest them all.$"

KantoUndergrounds_Event_NorthGatePoliceCheckIn_Text_2:
	.string "Oh ok I understand.\nWell we can manage to get them one way\lor another right?$"

KantoUndergrounds_Text_PoliceGoBack_Text_0:
	.string "Hey you, it's not safe here. But if you\nreally want to help, go to the\lUNDERGROUND from ROUTE 5!$"
