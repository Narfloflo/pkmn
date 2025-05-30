GoldenrodCity_MapScripts::
	.byte 0


GoldenrodCity_Text_Lass::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Lass_Text_0
	release
	end


GoldenrodCity_Text_GoldenroDptStore::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_GoldenroDptStore_Text_0
	release
	end


GoldenrodCity_Text_TownSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_TownSign_Text_0
	release
	end


GoldenrodCity_Text_CafeSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_CafeSign_Text_0
	release
	end


GoldenrodCity_Text_Guy::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Guy_Text_0
	release
	end


GoldenrodCity_Text_StoreSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_StoreSign_Text_0
	release
	end


GoldenrodCity_Text_StationSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_StationSign_Text_0
	release
	end


GoldenrodCity_Text_WorkerStation::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_WorkerStation_Text_0
	release
	end


GoldenrodCity_Text_ShadyGuy::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_ShadyGuy_Text_0
	release
	end


GoldenrodCity_Text_CasinoSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_CasinoSign_Text_0
	release
	end


GoldenrodCity_Text_CasinoGuy::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_Text_CasinoGuyNoCase
	msgbox GoldenrodCity_Text_CasinoGuy_Text_0
	release
	end


GoldenrodCity_Text_CasinoGuyNoCase::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_CasinoGuyNoCase_Text_0
	release
	end


GoldenrodCity_Text_OldMan::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_OldMan_Text_0
	release
	end


GoldenrodCity_Text_UndergroundSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_UndergroundSign_Text_0
	release
	end


GoldenrodCity_Text_BillGirlfriend::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_BillGirlfriend_Text_0
	release
	end


GoldenrodCity_Text_GoldenrodCityRadioSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_GoldenrodCityRadioSign_Text_0
	release
	end


GoldenrodCity_Text_FatMan::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_FatMan_Text_0
	release
	end


GoldenrodCity_Text_RadioGuard::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_RadioGuard_Text_0
	release
	end


GoldenrodCity_Text_RailwayWorker::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_RailwayWorker_Text_0
	release
	end


GoldenrodCity_Text_Camper::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Camper_Text_0
	release
	end


GoldenrodCity_Text_Lass2::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Lass2_Text_0
	release
	end


GoldenrodCity_Text_Youngster::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Youngster_Text_0
	release
	end


GoldenrodCity_Text_FlowerSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_FlowerSign_Text_0
	release
	end


GoldenrodCity_Text_Scientist::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Scientist_Text_0
	release
	end


GoldenrodCity_Text_GymSign::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_GymSign_Text_0
	release
	end


GoldenrodCity_Text_Thug::
	trainerbattle_single TRAINER_TRENT_4, GoldenrodCity_Text_Thug_Text_0, GoldenrodCity_Text_Thug_Text_1
	msgbox GoldenrodCity_Text_Thug_Text_2, MSGBOX_NPC
	end


GoldenrodCity_Text_Pokemaniac1::
	trainerbattle_single TRAINER_SAWYER_2, GoldenrodCity_Text_Thug_Text_0, GoldenrodCity_Text_Thug_Text_1
	msgbox GoldenrodCity_Text_Thug_Text_2, MSGBOX_NPC
	end


GoldenrodCity_Text_Pokemaniac2::
	trainerbattle_single TRAINER_SAWYER_3, GoldenrodCity_Text_Thug_Text_0, GoldenrodCity_Text_Thug_Text_1
	msgbox GoldenrodCity_Text_Thug_Text_2, MSGBOX_NPC
	end


GoldenrodCity_Text_BillHouseSign::
	msgbox GoldenrodCity_Text_BillHouseSign_Text_0, MSGBOX_SIGN
	end


GoldenrodCity_Text_Lass_Text_0:
	.string "The RADIO TOWER in GOLDENROD CITY is a\n"
	.string "landmark.$"

GoldenrodCity_Text_GoldenroDptStore_Text_0:
	.string "Full Selection of POKéMON Goods !\p"
	.string "GOLDENROD CITY DEPT. STORE$"

GoldenrodCity_Text_TownSign_Text_0:
	.string "GOLDENROD CITY\p"
	.string "The Festive City of Opulent Charm$"

GoldenrodCity_Text_CafeSign_Text_0:
	.string "GOLDENROD CITY CAFÉ$"

GoldenrodCity_Text_Guy_Text_0:
	.string "I heard this is a new STORE that has\n"
	.string "been built, but I think it's still empty.$"

GoldenrodCity_Text_StoreSign_Text_0:
	.string "TO SELL\n"
	.string "If you are interested, please call the\l"
	.string "555-XXX-XXX and ask for DAVID\l"
	.string "GOODENOUGH$"

GoldenrodCity_Text_StationSign_Text_0:
	.string "GOLDENROD CITY STATION$"

GoldenrodCity_Text_WorkerStation_Text_0:
	.string "Hi, the STATION is not opened yet, we\n"
	.string "are still building the RAILWAY...$"

GoldenrodCity_Text_ShadyGuy_Text_0:
	.string "Eheheh ! You know that the UNDERGROUND\n"
	.string "of GOLDENROD CITY are full of shady\l"
	.string "guys ? You can get in trouble if you are\l"
	.string "not careful.$"

GoldenrodCity_Text_CasinoSign_Text_0:
	.string "You Playground !\n"
	.string "GOLDENROD CITY GAME CORNER$"

GoldenrodCity_Text_CasinoGuy_Text_0:
	.string "Psst. I'm selling a COIN CASE if you need\n"
	.string "one. Oh you already have one ? Damn it !$"

GoldenrodCity_Text_CasinoGuyNoCase_Text_0:
	.string "Oh you don't want one because you can\n"
	.string "get one for free ?! Well scram wanker !$"

GoldenrodCity_Text_OldMan_Text_0:
	.string "Whew ! This is one big town. I don't know\n"
	.string "where anything is.$"

GoldenrodCity_Text_UndergroundSign_Text_0:
	.string "UNDERGROUND ENTRANCE$"

GoldenrodCity_Text_BillGirlfriend_Text_0:
	.string "My boyfriend BILL's family is living\n"
	.string "here. But BILL is nowhere to be found...$"

GoldenrodCity_Text_GoldenrodCityRadioSign_Text_0:
	.string "GOLDENROD CITY RADIO TOWER$"

GoldenrodCity_Text_FatMan_Text_0:
	.string "Pretty sure that if we SURF forward, we\n"
	.string "can reach OLIVINE CITY.$"

GoldenrodCity_Text_RadioGuard_Text_0:
	.string "Here is the RADIO TOWER. Every radio\n"
	.string "show you can listen is recorded here.\l"
	.string "What you don't have a RADIO ? Pfff,\l"
	.string "where are you from...$"

GoldenrodCity_Text_RailwayWorker_Text_0:
	.string "Yeah we are digging a lot here. It's a\n"
	.string "tough work but we are connecting\l"
	.string "people here !$"

GoldenrodCity_Text_Camper_Text_0:
	.string "WHITNEY stomp me like five time with her\n"
	.string "MILTANK. But I'll manage to beat here\l"
	.string "with my new team !$"

GoldenrodCity_Text_Lass2_Text_0:
	.string "I want to be a GYM TRAINER. I hope\n"
	.string "WHITNEY will think I'm good enough for\l"
	.string "the GYM...$"

GoldenrodCity_Text_Youngster_Text_0:
	.string "People are all in line, so there must be\n"
	.string "something good here no ?$"

GoldenrodCity_Text_FlowerSign_Text_0:
	.string "Blooming Beautiful\n"
	.string "FLOWER SHOP$"

GoldenrodCity_Text_Scientist_Text_0:
	.string "I'm here to survey the RAILWAY\n"
	.string "construction. I need to measure if\l"
	.string "there is to much noises and if it\l"
	.string "disturb the neighborhood.$"

GoldenrodCity_Text_GymSign_Text_0:
	.string "GOLDENROD CITY POKéMON GYM LEADER:\n"
	.string "WHITNEY\n"
	.string "The Incredibly Strong MILTANK !$"

GoldenrodCity_Text_Thug_Text_0:
	.string "Are you in a hurry?\nNo?\lWell, let's fight!$"

GoldenrodCity_Text_Thug_Text_1:
	.string "Outch outch! Sorry...$"

GoldenrodCity_Text_Thug_Text_2:
	.string "AZALEA is just a few miles away. You\ncan't really miss it.\lWhat's good to see?\lHmmm... The well and KURT I think?$"

GoldenrodCity_Text_BillHouseSign_Text_0:
	.string "BILL's HOUSE$"
