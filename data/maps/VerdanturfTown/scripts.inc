.set LOCALID_TWIN, 2

VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_AirCleanHere:
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

VerdanturfTown_Text_TownSign:
	.string "VERDANTURF TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse:
	.string "WANDA'S HOUSE$"

VerdanturfTown_Text_BattleTentSign:
	.string "BATTLE TENT VERDANTURF SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

VerdanturfTown_Text_Farmer::
	msgbox VerdanturfTown_Text_Farmer_Text_0, MSGBOX_NPC
	end


VerdandturfTown_Text_HospitalSign::
	lock
	msgbox VerdandturfTown_Text_HospitalSign_Text_0
	release
	end


VerdandturfTown_Text_Arome::
	lock
	faceplayer
	msgbox VerdandturfTown_Text_Arome_Text_0
	release
	end


VerdandturfTown_Text_SchoolBoyM::
	lock
	msgbox VerdandturfTown_Text_SchoolBoyM_Text_0
	release
	end


VerdandturfTown_Text_Girl::
	lock
	faceplayer
	msgbox VerdandturfTown_Text_Girl_Text_0
	release
	end


VerdandturfTown_Text_Gentleman::
	lock
	faceplayer
	msgbox VerdandturfTown_Text_Gentleman_Text_0
	release
	end


VerdandturfTown_Text_OldWoman::
	lock
	faceplayer
	msgbox VerdandturfTown_Text_OldWoman_Text_0
	release
	end


VerdandturfTown_Text_Ninja::
	lock
	faceplayer
	msgbox VerdandturfTown_Text_Ninja_Text_0
	release
	end


VerdanturfTown_Text_Farmer_Text_0:
	.string "This is the communal garden.\nI'm trying to scare the BUGS POKéMON\lusing REPEL.$"

VerdandturfTown_Text_HospitalSign_Text_0:
	.string "VERDANTURF TOWN HOSPITAL$"

VerdandturfTown_Text_Arome_Text_0:
	.string "VERDANTURF TOWN is really the best\n"
	.string "place for my sensitive nose! Such a\l"
	.string "pure air!$"

VerdandturfTown_Text_SchoolBoyM_Text_0:
	.string "There is a new RESTAURANT here??!\n"
	.string "I should ask my mom for some pocket\l"
	.string "money...$"

VerdandturfTown_Text_Girl_Text_0:
	.string "You know, before the TUNNEL was dug, we\n"
	.string "all went to play inside and yeld with\l"
	.string "the WHISMUR.$"

VerdandturfTown_Text_Gentleman_Text_0:
	.string "I hope I can buy a house here for my\n"
	.string "rainy days.$"

VerdandturfTown_Text_OldWoman_Text_0:
	.string "The BATTLE TENT bring so much\n"
	.string "TRAINERS, we have so much money. We\l"
	.string "could even open a restaurant !$"

VerdandturfTown_Text_Ninja_Text_0:
	.string "I heard that some bell shape POKéMON is\n"
	.string "living here. But I haven't seen it\l"
	.string "already.$"
