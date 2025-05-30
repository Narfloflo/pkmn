FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_Text_Farmer::
	lock
	faceplayer
	msgbox FallarborTown_Text_Farmer_Text_0
	release
	end


FallarborTown_Text_Lady::
	lock
	faceplayer
	msgbox FallarborTown_Text_Lady_Text_0
	release
	end


FallarborTown_Text_Farmer2::
	lock
	faceplayer
	msgbox FallarborTown_Text_Farmer2_Text_0
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_MENTAL_HERB, 1
	waitfanfare
	release
	end


FallarborTown_Text_LassSr::
	lock
	msgbox FallarborTown_Text_LassSr_Text_0, MSGBOX_NPC
	end


FallarborTown_Text_LassJr::
	lock
	faceplayer
	msgbox FallarborTown_Text_LassJr_Text_0, MSGBOX_NPC
	release
	end


FallarborTown_Text_BreederF::
	lock
	faceplayer
	msgbox FallarborTown_Text_BreederF_Text_0
	release
	end


FallarborTown_Text_Judge::
	lock
	faceplayer
	msgbox FallarborTown_Text_Judge_Text_0
	release
	end


FallarborTown_Text_BugCatcher::
	lock
	faceplayer
	msgbox FallarborTown_Text_BugCatcher_Text_0
	release
	end


FallarborTown_Text_Man::
	lock
	faceplayer
	msgbox FallarborTown_Text_Man_Text_0
	release
	end


FallarborTown_Text_Man2::
	lock
	faceplayer
	msgbox FallarborTown_Text_Man2_Text_0
	release
	end


FallarborTown_Text_PokefanM::
	lock
	faceplayer
	msgbox FallarborTown_Text_PokefanM_Text_0
	release
	end


FallarborTown_Text_Aroma::
	lock
	faceplayer
	msgbox FallarborTown_Text_Aroma_Text_0
	release
	end


FallarborTown_Text_SchoolSign::
	lock
	msgbox FallarborTown_Text_SchoolSign_Text_0
	release
	end


FallarborTown_Text_PokefanF::
	lock
	faceplayer
	msgbox FallarborTown_Text_PokefanF_Text_0
	release
	end


FallarborTown_Text_ScientistManDialogue::
	lock
	msgbox FallarborTown_Text_ScientistManDialogue_Text_0
	release
	end


FallarborTown_Text_MarketSign::
	msgbox FallarborTown_Text_MarketSign_Text_0, MSGBOX_NPC
	end


FallarborTown_Event_SchoolClosed::
	gettime
	compare VAR_0x8003, TIME_NIGHT
	goto_if_eq FallarborTown_Event_SchoolClosed_2
	compare VAR_0x8003, TIME_MIDNIGHT
	goto_if_eq FallarborTown_Event_SchoolClosed_2
	release
	end

FallarborTown_Event_SchoolClosed_2:
	lock
	msgbox FallarborTown_Event_SchoolClosed_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Move_Stepback
	waitmovement 0
	release
	end


FallarborTown_Move_Stepback:
	walk_down
	step_end

FallarborTown_Text_Farmer_Text_0:
	.string "The soil is so rich here. We have all the\n"
	.string "best crops of HOENN.\p"
	.string "It's all thanks to the volcanic ashes !$"

FallarborTown_Text_Lady_Text_0:
	.string "I'm bored of farming. I want to move\n"
	.string "somewhere else. But I have no\l"
	.string "POKéMON...$"

FallarborTown_Text_Farmer2_Text_0:
	.string "Wanna taste some LOCAL PRODUCTS ?\n"
	.string "Here have it !$"

FallarborTown_Text_LassSr_Text_0:
	.string "Hello, you are a student too ?\nNo?\pYou are so lucky...$"

FallarborTown_Text_LassJr_Text_0:
	.string "I'm suppose to run some errands :\nA new eyelash, some shoes, a ribbon and\la sandwich.\pIt doesn't look like\lSCHOOL material...$"

FallarborTown_Text_BreederF_Text_0:
	.string "It looks like you are taking care of\n"
	.string "your POKéMON correctly. I like it !$"

FallarborTown_Text_Judge_Text_0:
	.string "I'm pretty sure there is a CONTEST HALL\n"
	.string "here no ?\p"
	.string "What it's in LILYCOVE ??! I'm totally\n"
	.string "lost then...$"

FallarborTown_Text_BugCatcher_Text_0:
	.string "No I'm not taking care of crops here, I'm\n"
	.string "digging for GOLD NUGGET !$"

FallarborTown_Text_Man_Text_0:
	.string "La la-la, my cabbages are the best !\n"
	.string "NOTHING TO DO WITH MY NEIGHBORS !$"

FallarborTown_Text_Man2_Text_0:
	.string "My cabbages are big and delicious !\n"
	.string "Nobody is complaining about it.$"

FallarborTown_Text_PokefanM_Text_0:
	.string "Have you seen, there is this small\n"
	.string "COMMERCIAL PLACE that just opened.\p"
	.string "I hope we will have some tourist with it.$"

FallarborTown_Text_Aroma_Text_0:
	.string "I love the smell of this town. So\n"
	.string "refreashing ! And the vegetables are\l"
	.string "the best !$"

FallarborTown_Text_SchoolSign_Text_0:
	.string "FALLARBOR TOWN SCHOOL$"

FallarborTown_Text_PokefanF_Text_0:
	.string "My kids are in SCHOOL so I can be all day\n"
	.string "with my PIKACHU.$"

FallarborTown_Text_ScientistManDialogue_Text_0:
	.string "...\nYes obviously...\lWe can invest into that technology...\lWhat about this processor?\l...\lDEVON can grant you some funds\l...\l{PLAYER}: They look busy.$"

FallarborTown_Text_MarketSign_Text_0:
	.string "FALLARBOR LOCAL MARKET\n“We have local products and TRAINERS'\lITEMS too!”$"

FallarborTown_Event_SchoolClosed_Text_0:
	.string "{PLAYER}: The SCHOOL is closed during\nthe night...$"
