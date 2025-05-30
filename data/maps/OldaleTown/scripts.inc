.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4

OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0

OldaleTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_OLDALE_TOWN
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
	end

@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
OldaleTown_EventScript_SetOldaleState::
	setvar VAR_OLDALE_TOWN_STATE, 1
	return

OldaleTown_EventScript_BlockWestEntrance::
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return

OldaleTown_EventScript_MoveMartEmployee::
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
	end

OldaleTown_EventScript_GoToMartSouth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartNorth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartEast::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_ExplainPokemonMart::
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_Movement_EmployeeEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeSouth:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerEast:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerSouth:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_BlockedPath::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
	waitmovement 0
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end

OldaleTown_EventScript_NotBlockingPath::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_Rival::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_ShowRivalMessage::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
	end

OldaleTown_EventScript_ShowMayMessage::
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_ShowBrendanMessage::
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_RivalFinish::
	closemessage
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_RIVAL
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	releaseall
	end

OldaleTown_EventScript_DoExitMovement1::
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_EventScript_DoExitMovement2::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer2:
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer3:
	face_left
	step_end

OldaleTown_Movement_RivalExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_Movement_WatchRivalExit:
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

OldaleTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

OldaleTown_Text_SavingMyProgress:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_PotionExplanation:
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

OldaleTown_Text_WaitDontComeInHere:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_DiscoveredFootprints:
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "I finished sketching the footprints of\n"
	.string "a rare POKéMON.\p"
	.string "But it turns out they were only my\n"
	.string "own footprints…$"

OldaleTown_Text_MayLetsGoBack:
	.string "MAY: {PLAYER}{KUN}!\n"
	.string "Over here!\l"
	.string "Let's hurry home!$"

OldaleTown_Text_BrendanLetsGoBack:
	.string "BRENDAN: I'm heading back to my dad's\n"
	.string "LAB now.\l"
	.string "{PLAYER}, you should hustle back, too.$"

OldaleTown_Text_TownSign:
	.string "OLDALE TOWN\n"
	.string "“Where things start off scarce.”$"

OldaleTown_Text_Poochyena::
	lock
	faceplayer
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	waitmoncry
	msgbox OldaleTown_Text_Poochyena_Text_0
	release
	end


OldaleTown_Text_Farmer::
	goto_if_eq VAR_FORTREE_CITY_STATE, 5, OldaleTown_Text_FarmerQuestFailed
	goto_if_eq VAR_FORTREE_CITY_STATE, 4, OldaleTown_Text_FarmerTamed
	goto_if_eq VAR_FORTREE_CITY_STATE, 3, OldaleTown_Text_FarmerGavePokemon
	goto_if_eq VAR_FORTREE_CITY_STATE, 2, OldaleTown_Text_FarmerDoneQuest
	goto_if_eq VAR_FORTREE_CITY_STATE, 1, OldaleTown_Text_FarmerAcceptQuest
	goto_if_eq VAR_FORTREE_CITY_STATE, 0, OldaleTown_Text_FarmerAskingforHelp
	return


OldaleTown_Text_FarmerAskingforHelp::
	lock
	faceplayer
	msgbox OldaleTown_Text_FarmerAskingforHelp_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Text_FarmerAskingforHelp_2
	msgbox OldaleTown_Text_FarmerAskingforHelp_Text_2, MSGBOX_NPC
	end

OldaleTown_Text_FarmerAskingforHelp_1:
	release
	end

OldaleTown_Text_FarmerAskingforHelp_2:
	msgbox OldaleTown_Text_FarmerAskingforHelp_Text_1
	setvar VAR_FORTREE_CITY_STATE, 1
	goto OldaleTown_Text_FarmerAskingforHelp_1


OldaleTown_Text_FarmerAcceptQuest::
	msgbox OldaleTown_Text_FarmerAcceptQuest_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_FarmerDoneQuest::
	msgbox OldaleTown_Text_FarmerDoneQuest_Text_0, MSGBOX_NPC
	clearflag FLAG_UNUSED_0x02C
	setflag FLAG_UNUSED_0x02D
	switch VAR_STARTER_MON
	case 0, OldaleTown_Text_FarmerDoneQuest_3
	case 1, OldaleTown_Text_FarmerDoneQuest_4
	case 2, OldaleTown_Text_FarmerDoneQuest_5
OldaleTown_Text_FarmerDoneQuest_1:
	end

OldaleTown_Text_FarmerDoneQuest_3:
	call OldaleTown_Text_FarmerGiveTorchic
	goto OldaleTown_Text_FarmerDoneQuest_1

OldaleTown_Text_FarmerDoneQuest_4:
	call OldaleTown_Text_FarmerGiveMudkip
	goto OldaleTown_Text_FarmerDoneQuest_1

OldaleTown_Text_FarmerDoneQuest_5:
	call OldaleTown_Text_FarmerGiveTreecko
	goto OldaleTown_Text_FarmerDoneQuest_1


OldaleTown_Text_FarmerGiveTreecko::
	givemon SPECIES_TREECKO, 10
	setvar VAR_FORTREE_CITY_STATE, 3
	msgbox OldaleTown_Text_FarmerGiveTreecko_Text_0, MSGBOX_NPC
	playfanfare MUS_OBTAIN_ITEM
	message OldaleTown_Text_FarmerGiveTreecko_Text_1
	waitfanfare
	release
	end


OldaleTown_Text_FarmerGiveTorchic::
	givemon SPECIES_TORCHIC, 10
	setvar VAR_FORTREE_CITY_STATE, 3
	msgbox OldaleTown_Text_FarmerGiveTreecko_Text_0, MSGBOX_NPC
	playfanfare MUS_OBTAIN_ITEM
	message OldaleTown_Text_FarmerGiveTreecko_Text_1
	waitfanfare
	release
	end


OldaleTown_Text_FarmerGiveMudkip::
	givemon SPECIES_MUDKIP, 10
	setvar VAR_FORTREE_CITY_STATE, 3
	msgbox OldaleTown_Text_FarmerGiveTreecko_Text_0, MSGBOX_NPC
	playfanfare MUS_OBTAIN_ITEM
	message OldaleTown_Text_FarmerGiveTreecko_Text_1
	waitfanfare
	release
	end


OldaleTown_Text_FarmerGavePokemon::
	msgbox OldaleTown_Text_FarmerGavePokemon_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_FarmerTamed::
	msgbox OldaleTown_Text_FarmerTamed_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_FarmerQuestFailed::
	msgbox OldaleTown_Text_FarmerQuestFailed_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_QuestFailedWontReturn::
	msgbox OldaleTown_Text_QuestFailedWontReturn_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Move_QuestFailedWontReturn
	waitmovement 0
	end


OldaleTown_Move_QuestFailedWontReturn:
	walk_down
	step_end

OldaleTown_Text_ExpertM::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OldaleTown_Text_ExpertM_GonnafightMay
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_Text_ExpertM_GonnafightBrendan
	end


OldaleTown_Text_ExpertM_GonnafightMay::
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_Text_ExpertM_GonnafightMay_1
	msgbox OldaleTown_Text_ExpertM_GonnafightMay_Text_0, MSGBOX_NPC
	end

OldaleTown_Text_ExpertM_GonnafightMay_1:
	switch VAR_STARTER_MON
	case 0, OldaleTown_Text_ExpertM_GonnafightMay_6
	case 1, OldaleTown_Text_ExpertM_GonnafightMay_7
	case 2, OldaleTown_Text_ExpertM_GonnafightMay_8
OldaleTown_Text_ExpertM_GonnafightMay_4:
	end

OldaleTown_Text_ExpertM_GonnafightMay_6:
	call OldaleTown_Text_ExpertM_GonnafightMayTreecko
	goto OldaleTown_Text_ExpertM_GonnafightMay_4

OldaleTown_Text_ExpertM_GonnafightMay_7:
	call OldaleTown_Text_ExpertM_GonnafightMayTorchic
	goto OldaleTown_Text_ExpertM_GonnafightMay_4

OldaleTown_Text_ExpertM_GonnafightMay_8:
	call OldaleTown_Text_ExpertM_GonnafightMayMudkip
	goto OldaleTown_Text_ExpertM_GonnafightMay_4


OldaleTown_Text_ExpertM_GonnafightMayTreecko::
	msgbox OldaleTown_Text_ExpertM_GonnafightMayTreecko_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_ExpertM_GonnafightMayTorchic::
	msgbox OldaleTown_Text_ExpertM_GonnafightMayTorchic_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_ExpertM_GonnafightMayMudkip::
	msgbox OldaleTown_Text_ExpertM_GonnafightMayMudkip_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_ExpertM_GonnafightBrendan::
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_Text_ExpertM_GonnafightBrendan_1
	msgbox OldaleTown_Text_ExpertM_GonnafightMay_Text_0, MSGBOX_NPC
	end

OldaleTown_Text_ExpertM_GonnafightBrendan_1:
	switch VAR_STARTER_MON
	case 0, OldaleTown_Text_ExpertM_GonnafightBrendan_6
	case 1, OldaleTown_Text_ExpertM_GonnafightBrendan_7
	case 2, OldaleTown_Text_ExpertM_GonnafightBrendan_8
OldaleTown_Text_ExpertM_GonnafightBrendan_4:
	end

OldaleTown_Text_ExpertM_GonnafightBrendan_6:
	call OldaleTown_Text_ExpertM_GonnafightBrendanTreecko
	goto OldaleTown_Text_ExpertM_GonnafightBrendan_4

OldaleTown_Text_ExpertM_GonnafightBrendan_7:
	call OldaleTown_Text_ExpertM_GonnafightBrendanTorchic
	goto OldaleTown_Text_ExpertM_GonnafightBrendan_4

OldaleTown_Text_ExpertM_GonnafightBrendan_8:
	call OldaleTown_Text_ExpertM_GonnafightBrendanMudkip
	goto OldaleTown_Text_ExpertM_GonnafightBrendan_4


OldaleTown_Text_ExpertM_GonnafightBrendanTreecko::
	msgbox OldaleTown_Text_ExpertM_GonnafightBrendanTreecko_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_ExpertM_GonnafightBrendanTorchic::
	msgbox OldaleTown_Text_ExpertM_GonnafightBrendanTorchic_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_ExpertM_GonnafightBrendanMudkip::
	msgbox OldaleTown_Text_ExpertM_GonnafightBrendanMudkip_Text_0, MSGBOX_NPC
	end


OldaleTown_Text_Boy::
	goto_if_set FLAG_IS_CHAMPION, OldaleTown_Text_Boy_1
	goto_if_set FLAG_BADGE05_GET, OldaleTown_Text_Boy_2
	msgbox OldaleTown_Text_Boy_Text_2, MSGBOX_NPC
	end

OldaleTown_Text_Boy_1:
	msgbox OldaleTown_Text_Boy_Text_0, MSGBOX_NPC
	end

OldaleTown_Text_Boy_2:
	msgbox OldaleTown_Text_Boy_Text_1, MSGBOX_NPC
	end


OldaleTown_Text_MoveLearnerSign::
	msgbox OldaleTown_Text_MoveLearnerSign_Text_0, MSGBOX_SIGN
	end


OldaleTown_EventScript_FarmerQuestnotComplete::
	compare VAR_FORTREE_CITY_STATE, 2
	goto_if_eq OldaleTown_EventScript_FarmerQuestnotComplete_2
	release
	end

	release
	end

OldaleTown_EventScript_FarmerQuestnotComplete_2:
	lock
	msgbox OldaleTown_EventScript_FarmerQuestnotComplete_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_EventScript_FarmerQuestnotCompleteMovePlayer
	waitmovement 0
	releaseall
	end


OldaleTown_EventScript_FarmerQuestnotCompleteMovePlayer:
	walk_left
	step_end

OldaleTown_Text_Poochyena_Text_0:
	.string "Booh!\p"
	.string "{PLAYER}: This POOCHYENA is GROWLING\n"
	.string "to scare the WILD POKéMON.$"

OldaleTown_Text_FarmerAskingforHelp_Text_0:
	.string "Hey you! I, had a beautiful POKéMON\nbut it went crazy in my house!\lCan you go and calm it please?$"

OldaleTown_Text_FarmerAskingforHelp_Text_1:
	.string "Oh thanks you!\nIt should help a rookie like you!$"

OldaleTown_Text_FarmerAskingforHelp_Text_2:
	.string "Ah ok, well I think it could help a\nrookie like you but anyway...$"

OldaleTown_Text_FarmerAcceptQuest_Text_0:
	.string "My house is just here above.$"

OldaleTown_Text_FarmerDoneQuest_Text_0:
	.string "Oh! You beat my ZIGZAGOON?\nThanks you!\lOh wait here is a reward for you!$"

OldaleTown_Text_FarmerGiveTreecko_Text_0:
	.string "I found this one around, but I'm not a\ngood TRAINER, so you should have it.$"

OldaleTown_Text_FarmerGiveTreecko_Text_1:
	.string "{PLAYER} received a POKéMON$"

OldaleTown_Text_FarmerGavePokemon_Text_0:
	.string "Hey {PLAYER}! How is my little guy?\nI'm sure he is stronger with you now.$"

OldaleTown_Text_FarmerTamed_Text_0:
	.string "My POKéMON went wild but I finally\ncould calm him down!$"

OldaleTown_Text_FarmerQuestFailed_Text_0:
	.string "What you ran away?\nYou left my Ziggy? But it was a simple\ltask!\lAnyway. I'll do it myself...$"

OldaleTown_Text_QuestFailedWontReturn_Text_0:
	.string "{PLAYER}: I better not go back there\nyet...$"

OldaleTown_Text_ExpertM_GonnafightMay_Text_0:
	.string "Hello {PLAYER}!\nHope you enjoy your life in LITTLEROOT!$"

OldaleTown_Text_ExpertM_GonnafightMayTreecko_Text_0:
	.string "Oh you are {PLAYER}? You want an\nadvice?\lYour TREECKO won't last long against\lTORCHIC and MUDKIP MAY has in her team.\lYeah, it's great to be BIRCH's\ldaughter.$"

OldaleTown_Text_ExpertM_GonnafightMayTorchic_Text_0:
	.string "Oh you are {PLAYER}? You want an\nadvice?\lYour TORCHIC won't last long against\lthe TREECKO and MUDKIP MAY has in her\lteam.\lYeah, it's great to be BIRCH's\ldaughter.$"

OldaleTown_Text_ExpertM_GonnafightMayMudkip_Text_0:
	.string "Oh you are {PLAYER}? You want an\nadvice?\lI think you can fight MAY without\ldifficulties with your MUDKIP\lagainst her TORCHIC and TREECKO.\lYeah, it's great to be BIRCH's\ldaughter.\lBut I hope you'll beat this spoiled\lbrat!$"

OldaleTown_Text_ExpertM_GonnafightBrendanTreecko_Text_0:
	.string "Oh you are {PLAYER}? You want an\nadvice?\lYour TREECKO won't last long against\lTORCHIC and MUDKIP BRENDAN has in his team.\lYeah, it's great to be BIRCH's son .$"

OldaleTown_Text_ExpertM_GonnafightBrendanTorchic_Text_0:
	.string "Oh you are {PLAYER}? You want an\nadvice?\lYour TORCHIC won't last long against\lthe TREECKO and MUDKIP BRENDAN has in his\lteam.\lYeah, it's great to be BIRCH's son.$"

OldaleTown_Text_ExpertM_GonnafightBrendanMudkip_Text_0:
	.string "Oh you are {PLAYER}? You want an\nadvice?\lI think you can fight BRENDAN without\ldifficulties with your MUDKIP\lagainst her TORCHIC and TREECKO.\lYeah, it's great to be BIRCH's son.\lBut I hope you'll beat this spoiled\lbrat!$"

OldaleTown_Text_Boy_Text_0:
	.string "Hey! Heard about the old lady who lives\na bit north from here? I heard she left\lher home finally to dig somewhere...$"

OldaleTown_Text_Boy_Text_1:
	.string "Hey! You got PETALBURG's BADGE?\nThat means now you can use SURF!\lWhy don't you check a bit north, there\lis a river that leads to ROUTE 117!$"

OldaleTown_Text_Boy_Text_2:
	.string "Hey! Oldale is a pretty boring city.\nBut it's at the junction bitween ROUTE\l102 and 103. There are a few places\laround that are not reachable yet!\lI won't tell you more now haha!$"

OldaleTown_Text_MoveLearnerSign_Text_0:
	.string "MOVE LEARNER's HOUSE$"

OldaleTown_EventScript_FarmerQuestnotComplete_Text_0:
	.string "{PLAYER}: Oh wait, I should get back to\nthe farmer!$"
