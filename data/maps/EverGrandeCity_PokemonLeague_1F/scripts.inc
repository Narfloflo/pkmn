.set LOCALID_NURSE, 1
.set LOCALID_GUARD_1, 3
.set LOCALID_GUARD_2, 4

EverGrandeCity_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_GUARD_1, 9, 2
	setobjectxyperm LOCALID_GUARD_2, 10, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 120
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
	closemessage
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	copyobjectxytoperm LOCALID_GUARD_1
	copyobjectxytoperm LOCALID_GUARD_2
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
	playse SE_FAILURE
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth:
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"

EverGrandeCity_PokemonLeague_1F_Text_Hiker::
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_Text_Hiker_1
	lock
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Hiker_Text_1
	release
	end

EverGrandeCity_PokemonLeague_1F_Text_Hiker_1:
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Hiker_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_PoliceUP::
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_PoliceUP_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_PoliceDown::
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_PoliceDown_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_TVSign::
	lock
	msgbox EverGrandeCity_PokemonLeague_1F_Text_TVSign_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_Warrior::
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Warrior_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_Man::
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_Text_Man_1
	lock
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Man_Text_1
	release
	end

EverGrandeCity_PokemonLeague_1F_Text_Man_1:
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Man_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_Woman::
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_Text_Woman_1
	lock
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Woman_Text_1
	release
	end

EverGrandeCity_PokemonLeague_1F_Text_Woman_1:
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Woman_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_Aroma::
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_Text_Aroma_1
	lock
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Aroma_Text_1
	release
	end

EverGrandeCity_PokemonLeague_1F_Text_Aroma_1:
	lock
	faceplayer
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Aroma_Text_0
	release
	end


EverGrandeCity_PokemonLeague_1F_Text_Hiker_Text_0:
	.string "Your BATTLE against GLACIA was so\n"
	.string "thriving ! I hope you will give us\l"
	.string "another round like this !$"

EverGrandeCity_PokemonLeague_1F_Text_Hiker_Text_1:
	.string "Ahah ! The opponent was totally\n"
	.string "destroyed by DRAKES' TEAM !$"

EverGrandeCity_PokemonLeague_1F_Text_PoliceUP_Text_0:
	.string "This ELEVATOR is where the way the\n"
	.string "LOSERS takes when they are smash by\l"
	.string "the ELITE FOUR.\p"
	.string "I'll see you there in a few minutes I\n"
	.string "guess.\n"
	.string "Wahahahaha !$"

EverGrandeCity_PokemonLeague_1F_Text_PoliceDown_Text_0:
	.string "This ELEVATOR lead to a SHIP. The public\n"
	.string "is taking it whenever they want to see\l"
	.string "the ELITE FOUR destroyed everybody.\p"
	.string "Since you are a TRAINER no have no use\n"
	.string "of this.$"

EverGrandeCity_PokemonLeague_1F_Text_TVSign_Text_0:
	.string "{PLAYER} : This is an ELITE FOUR\n"
	.string "member fighting against a TRAINER.\n"
	.string "... ... ... ... ... ... ... ... ... ... Great strategy.$"

EverGrandeCity_PokemonLeague_1F_Text_Warrior_Text_0:
	.string "This HALL is where we can see you\n"
	.string "against the ELITE FOUR. Give us some\l"
	.string "entertainment kid !$"

EverGrandeCity_PokemonLeague_1F_Text_Man_Text_0:
	.string "Hey {PLAYER} ! Are you here to give us\n"
	.string "some blood again ?$"

EverGrandeCity_PokemonLeague_1F_Text_Man_Text_1:
	.string "What a MOVE ! What was that ?$"

EverGrandeCity_PokemonLeague_1F_Text_Woman_Text_0:
	.string "{PLAYER}, if you fight again, please\n"
	.string "don't do this thing like the other time.\l"
	.string "Lame MOVE...$"

EverGrandeCity_PokemonLeague_1F_Text_Woman_Text_1:
	.string "Why did he used a FULL RESTORE now ?\n"
	.string "You will get destroyed !$"

EverGrandeCity_PokemonLeague_1F_Text_Aroma_Text_0:
	.string "You gave us a good fight the other time\n"
	.string "! I hope you will keep beating them with\l"
	.string "style !$"

EverGrandeCity_PokemonLeague_1F_Text_Aroma_Text_1:
	.string "Where are PLANT TYPES TRAINERS ?$"
