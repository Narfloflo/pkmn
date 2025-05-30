HoennAirport_MapScripts::
	.byte 0

HoennAirport_Text_AirportSign::
	lock
	msgbox HoennAirport_Text_AirportSign_Text_0
	release
	end


HoennAirport_Text_HotelSign::
	lock
	msgbox HoennAirport_Text_HotelSign_Text_0
	release
	end


HoennAirport_Text_BusDriver::
	lock
	faceplayer
	msgbox HoennAirport_Text_BusDriver_Text_0
	release
	end


HoennAirport_Text_ShipReceptionist::
	lock
	faceplayer
	goto_if_set FLAG_CAUGHT_MEW, HoennAirport_Text_ShipReceptionist_2
HoennAirport_Text_ShipReceptionist_1:
	checkitem ITEM_OLD_SEA_MAP, 1
	compare VAR_RESULT, 1
	goto_if_eq HoennAirport_Text_ShipReceptionist_5
HoennAirport_Text_ShipReceptionist_4:
	msgbox HoennAirport_Text_ShipReceptionist_Text_1
	release
	end

HoennAirport_Text_ShipReceptionist_2:
	goto HoennAirport_Text_MewCaught
	goto HoennAirport_Text_ShipReceptionist_1

HoennAirport_Text_ShipReceptionist_5:
	msgbox HoennAirport_Text_ShipReceptionist_Text_0
	applymovement 4, HoennAirport_Move_Sailor
	waitmovement 4
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, HoennAirport_Move_Player
	waitmovement 0
	call HoennAirport_Text_MoveBoat
	goto HoennAirport_Text_ShipReceptionist_4


HoennAirport_Move_Sailor:
	walk_down
	set_invisible
	step_end

HoennAirport_Move_Player:
	walk_down
	walk_down
	set_invisible
	step_end

HoennAirport_Text_MoveBoat::
	fadescreen FADE_TO_BLACK
	playse SE_RG_SS_ANNE_HORN
	delay 60
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
	fadescreen FADE_FROM_BLACK
	return


HoennAirport_Text_MewCaught::
	lock
	faceplayer
	msgbox HoennAirport_Text_MewCaught_Text_0
	release
	end


HoennAirport_Text_Judge::
	lock
	faceplayer
	msgbox HoennAirport_Text_Judge_Text_0
	release
	end


HoennAirport_Text_Sailor::
	lock
	faceplayer
	msgbox HoennAirport_Text_Sailor_Text_0
	release
	end


HoennAirport_Text_PokefanF::
	lock
	faceplayer
	msgbox HoennAirport_Text_PokefanF_Text_0
	release
	end


HoennAirport_Text_Beauty3::
	lock
	faceplayer
	msgbox HoennAirport_Text_Beauty3_Text_0
	release
	end


HoennAirport_Text_Salaryman::
	lock
	faceplayer
	msgbox HoennAirport_Text_Salaryman_Text_0
	release
	end


HoennAirport_Text_Man::
	lock
	faceplayer
	msgbox HoennAirport_Text_Man_Text_0
	release
	end


HoennAirport_Text_LittleGirl::
	lock
	faceplayer
	msgbox HoennAirport_Text_LittleGirl_Text_0
	release
	end


HoennAirport_Text_BusDriver2::
	lock
	faceplayer
	msgbox HoennAirport_Text_BusDriver2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq HoennAirport_Text_BusDriver2_2
	msgbox HoennAirport_Text_BusDriver2_Text_2
HoennAirport_Text_BusDriver2_1:
	release
	end

HoennAirport_Text_BusDriver2_2:
	msgbox HoennAirport_Text_BusDriver2_Text_1
	call HoennAirport_Event_WarpToAirport
	goto HoennAirport_Text_BusDriver2_1


HoennAirport_Event_WarpToAirport::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_BEACH_SIDE, 14, 22
	fadescreen FADE_FROM_BLACK
	return


HoennAirport_Text_AirportSign_Text_0:
	.string "HOENN AIRPORT\p"
	.string "ABRA TELEPORTER SERVICE will take you\n"
	.string "to any place!$"

HoennAirport_Text_HotelSign_Text_0:
	.string "AIRPORT HOTEL\p"
	.string "One of the best place in HOENN!$"

HoennAirport_Text_BusDriver_Text_0:
	.string "I'm driving buses all around\n"
	.string "HOENN for the people who are not\l"
	.string "TRAINER.\l"
	.string "..............................\l"
	.string "What you haven't seen any of\l"
	.string "those bus anywhere? Well, I'm\l"
	.string "very busy! Scram!$"

HoennAirport_Text_ShipReceptionist_Text_0:
	.string "Oh my ARCEUS! This is the OLD SEA MAP ?!\n"
	.string "Please come in !$"

HoennAirport_Text_ShipReceptionist_Text_1:
	.string "Hello!\p"
	.string "......................\n"
	.string "Huh, I don't think you have a TICKET for\l"
	.string "using the SHIP. Sorry.$"

HoennAirport_Text_MewCaught_Text_0:
	.string "What a trip we had, right ?$"

HoennAirport_Text_Judge_Text_0:
	.string "I love the fact that even if the HOTEL\n"
	.string "is close to the AIRPORT STATION we are\l"
	.string "not disturbed by any plane.$"

HoennAirport_Text_Sailor_Text_0:
	.string "Yet another great day to ship !$"

HoennAirport_Text_PokefanF_Text_0:
	.string "I hope the BUS can take us to LILYCOVE\n"
	.string "CITY. I want to see a contest !$"

HoennAirport_Text_Beauty3_Text_0:
	.string "I came here but I don't know what to\n"
	.string "do...\n"
	.string "Is there a SPA or something ?$"

HoennAirport_Text_Salaryman_Text_0:
	.string "What's the best way to go to RUSTOBORO\n"
	.string "CITY ? Going through a tunnel in a\l"
	.string "mountain ? Arf !$"

HoennAirport_Text_Man_Text_0:
	.string "There is a kid here, she's unsupervised.\n"
	.string "I'm sure her parents are going to take\l"
	.string "her back.$"

HoennAirport_Text_LittleGirl_Text_0:
	.string "I think my dad left me here...\p"
	.string "Nevermind, I don't want to see his wife\n"
	.string "ever again !\n"
	.string "Plus the HOTEL gave me free stuff.$"

HoennAirport_Text_BusDriver2_Text_0:
	.string "Hi, I can bring you to the BEACH\nRESORT.\lDo you wanna take the bus?$"

HoennAirport_Text_BusDriver2_Text_1:
	.string "Please, come in !$"

HoennAirport_Text_BusDriver2_Text_2:
	.string "Another time then !$"
