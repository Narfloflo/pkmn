.set LOCALID_BIRCH, 2
.set LOCALID_ZIGZAGOON, 4

Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0

Route101_OnTransition:
	call ProfBirch_EventScript_UpdateLocation
	end

Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_StartBirchRescue::
	lockall
	playbgm MUS_HELP, TRUE
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_BIRCH, 0, 45
	setobjectxy LOCALID_ZIGZAGOON, 0, 46
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
	waitmovement 0
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_ROUTE101_STATE, 2
	releaseall
	end

Route101_EventScript_PreventExitSouth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitWest::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitNorth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
	waitmovement 0
	releaseall
	end

Route101_Movement_PreventExitSouth:
	walk_up
	step_end

Route101_Movement_PreventExitWest:
	walk_right
	step_end

Route101_Movement_PreventExitNorth:
	walk_down
	step_end

Route101_Movement_ZigzagoonChaseInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_ZigzagoonChase1:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_ZigzagoonFaceBirch:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Route101_Movement_EnterScene:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_left
	step_end

Route101_Movement_BirchRunInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_BirchRunAway1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_BirchFaceZigzagoon:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route101_Movement_Unused1:
	walk_up
	walk_up
	step_end

Route101_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 43
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	waitmovement 0
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Movement_BirchApproachPlayer:
	walk_right
	step_end

Route101_Text_HelpMe:
	.string "H-help me!$"

Route101_Text_PleaseHelp:
	.string "Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my BAG!\n"
	.string "There's a POKé BALL!$"

Route101_Text_DontLeaveMe:
	.string "Wh-Where are you going?!\n"
	.string "Don't leave me like this!$"

Route101_Text_YouSavedMe:
	.string "PROF. BIRCH: Whew…\p"
	.string "I was in the tall grass studying wild\n"
	.string "POKéMON when I was jumped.\p"
	.string "You saved me.\n"
	.string "Thanks a lot!\p"
	.string "Oh?\p"
	.string "Hi, you're {PLAYER}{KUN}!\p"
	.string "This is not the place to chat, so come\n"
	.string "by my POKéMON LAB later, okay?$"

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There's a POKéMON CENTER in OLDALE\n"
	.string "TOWN right close by.$"

Route101_Text_WildPokemonInTallGrass:
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign:
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_Text_PondKid::
	lock
	faceplayer
	msgbox Route101_Text_PondKid_Text_0
	release
	end


Route101_Text_Jenkins::
	lock
	faceplayer
	checktrainerflag TRAINER_GRUNT_UNUSED
	goto_if 1, Route101_Text_Jenkins_1
	msgbox Route101_Text_Jenkins_Text_1
	applymovement 7, JenkinsFarmMove
	waitmovement 7
	applymovement OBJ_EVENT_ID_PLAYER, JenkinsKick
	playse SE_EFFECTIVE
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 7, JenkinsReturn
	waitmovement 7
	release
	end

Route101_Text_Jenkins_1:
	msgbox Route101_Text_Jenkins_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, JenkinsLeave
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


Route101_Text_Jenkins2::
	lock
	faceplayer
	checktrainerflag TRAINER_GRUNT_UNUSED
	goto_if 1, Route101_Text_Jenkins2_1
	msgbox Route101_Text_Jenkins_Text_1
	applymovement 7, JenkinsFarmMove2
	waitmovement 7
	applymovement OBJ_EVENT_ID_PLAYER, JenkinsKick
	playse SE_EFFECTIVE
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 7, JenkinsReturn2
	waitmovement 7
	release
	end

Route101_Text_Jenkins2_1:
	msgbox Route101_Text_Jenkins_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, JenkinsLeave
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


JenkinsFarmMove:
	walk_up
	walk_up
	face_player
	step_end

JenkinsFarmMove2:
	walk_right
	walk_up
	walk_up
	face_player
	step_end

JenkinsKick:
	jump_up
	face_up
	step_end

JenkinsReturn:
	walk_down
	walk_down
	step_end

JenkinsReturn2:
	walk_left
	walk_down
	walk_down
	step_end

JenkinsLeave:
	walk_up
	step_end

Route101_Text_SignFarmJenkins::
	lock
	faceplayer
	msgbox Route101_Text_SignFarmJenkins_Text_0
	release
	end


Route101_Text_SignSchool::
	lock
	faceplayer
	msgbox Route101_Text_SignSchool_Text_0
	release
	end


Route101_Text_SignFarm::
	lock
	faceplayer
	msgbox Route101_Text_SignFarm_Text_0
	release
	end


Route101_Text_Teacher::
	lock
	faceplayer
	msgbox Route101_Text_Teacher_Text_0
	release
	end


Route101_Text_Farmer::
	lock
	faceplayer
	msgbox Route101_Text_Farmer_Text_0
	release
	end


Route101_Text_Woman::
	lock
	faceplayer
	msgbox Route101_Text_Woman_Text_0
	release
	end


Route101_Text_JenkinsTrainer::
	trainerbattle_single TRAINER_GRUNT_UNUSED, Route101_Text_JenkinsIntro, Route101_Text_JenkinsOutro
	msgbox Route101_Text_JenkinsTrainer_Text_0
	release
	end


Route101_Text_SchoolKid::
	lock
	faceplayer
	msgbox Route101_Text_SchoolKid_Text_0
	release
	end


Route101_Text_Girl::
	lock
	faceplayer
	msgbox Route101_Text_Girl_Text_0
	release
	end


Route101_Text_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, Route101_Text_OldWoman_1
	msgbox Route101_Text_OldWoman_Text_2
	release
	end

Route101_Text_OldWoman_1:
	msgbox Route101_Text_OldWoman_Text_0
	waitmessage
	pokemart Route101Mart
	msgbox Route101_Text_OldWoman_Text_1
	release
	end


	.align 2
Route101Mart:
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_SANDWICH
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route101_Text_PondKid_Text_0:
	.string "The existence is nothing but a mere\n"
	.string "joke on which the Gods are playing our\l"
	.string "fate as if it was a simple game...\p"
	.string "{PLAYER} : How old are you ?!$"

Route101_Text_Jenkins_Text_0:
	.string "Leave !$"

Route101_Text_Jenkins_Text_1:
	.string "Look kid, here is my property. If you\n"
	.string "don't get out here quickly, I'll spank\l"
	.string "your ass so hard, you'll need surgery.\p"
	.string "{PLAYER}: I have a creature call a\n"
	.string "POKEMON. I don't think you scare me.\p"
	.string "JENKINS: What? How dare you speak to\n"
	.string "me like that !?\p"
	.string "Dirty brat!...\p"
	.string "GET OUT !$"

Route101_Text_SignFarmJenkins_Text_0:
	.string "PRIVATE PROPERTY OF MR. JENKINS\p"
	.string "MOVE OR I'LL MAKE YOU MOVE !$"

Route101_Text_SignSchool_Text_0:
	.string "LITTLEROOT TOWN SCHOOL$"

Route101_Text_SignFarm_Text_0:
	.string "COMMUNAL FARM$"

Route101_Text_Teacher_Text_0:
	.string "Yes this building is a SCHOOL.\p"
	.string "What you thought that every TRAINER\n"
	.string "went to RUSTBORO CITY to learn the\l"
	.string "basic ?\n"
	.string "Oh come on !$"

Route101_Text_Farmer_Text_0:
	.string "Humpf...\n"
	.string "We are taking care of the crops\l"
	.string "and we are seeding some other fields\l"
	.string "too. But sometime WILD POKéMON jump on\l"
	.string "us.$"

Route101_Text_Woman_Text_0:
	.string "Hello young TRAINER !\n"
	.string "I heard a guy somewhere is willing to\l"
	.string "give a POKéMON.\p"
	.string "You should try to ask around !$"

Route101_Text_JenkinsTrainer_Text_0:
	.string "Leave me and my crops alone...$"

Route101_Text_SchoolKid_Text_0:
	.string "Mister JENKINS told me he could train\nme and turn me into a true man !\lBut as you can see I'm just in the\lGRASS looking for some seeds for his\lcrops...$"

Route101_Text_Girl_Text_0:
	.string "You will see that we manage to build\n"
	.string "some houses all around the roads.\p"
	.string "Yeah we are not all homeless people!$"

Route101_Text_OldWoman_Text_0:
	.string "My furnisher came back with a lot of\n"
	.string "supply. Have a look.$"

Route101_Text_OldWoman_Text_1:
	.string "Come back again!$"

Route101_Text_OldWoman_Text_2:
	.string "Hello rookie!\n"
	.string "I'm actually out of stocks. Come back\l"
	.string "later$"

Route101_Text_JenkinsIntro::
	.string "How ??\nHow did you get here ?!$"

Route101_Text_JenkinsOutro::
	.string "Yeah you can laugh...$"
