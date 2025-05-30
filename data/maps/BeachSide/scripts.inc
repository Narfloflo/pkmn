BeachSide_MapScripts::
	.byte 0

SailorToJohto::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, SailorToJohto_2
	msgbox SailorToJohto_Text_3
SailorToJohto_1:
	release
	end

SailorToJohto_2:
	msgbox SailorToJohto_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SailorToJohto_5
	msgbox SailorToJohto_Text_2
	goto SailorToJohto_1

SailorToJohto_5:
	msgbox SailorToJohto_Text_1
	call WarpToJohto
	goto SailorToJohto_1


WarpToJohto::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_OLIVINE_CITY_PORT, 6, 16
	fadescreen FADE_FROM_BLACK
	return


BeachSide_Text_Beauty::
	lock
	faceplayer
	msgbox BeachSide_Text_Beauty_Text_0
	release
	end


BeachSide_Text_Sign::
	lock
	faceplayer
	msgbox BeachSide_Text_Sign_Text_0
	release
	end


BeachSide_Text_TuberF::
	lock
	faceplayer
	msgbox BeachSide_Text_TuberF_Text_0
	release
	end


BeachSide_Text_Sailor::
	lock
	faceplayer
	msgbox BeachSide_Text_Sailor_Text_0
	release
	end


BeachSide_Text_SwimmerF::
	lock
	faceplayer
	msgbox BeachSide_Text_SwimmerF_Text_0
	release
	end


BeachSide_Text_Sailor2::
	lock
	faceplayer
	msgbox BeachSide_Text_Sailor2_Text_0
	release
	end


BeachSide_Text_SwimmerF2::
	lock
	faceplayer
	msgbox BeachSide_Text_SwimmerF2_Text_0
	release
	end


BeachSide_Text_TuberM::
	lock
	faceplayer
	msgbox BeachSide_Text_TuberM_Text_0
	release
	end


BeachSide_Text_OldMan::
	lock
	faceplayer
	msgbox BeachSide_Text_OldMan_Text_0
	release
	end


BeachSide_Text_BusDriver::
	lock
	faceplayer
	msgbox BeachSide_Text_BusDriver_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq BeachSide_Text_BusDriver_2
	msgbox SailorToJohto_Text_2
BeachSide_Text_BusDriver_1:
	release
	end

BeachSide_Text_BusDriver_2:
	msgbox SailorToJohto_Text_1
	call BeachSide_Event_WarpToAirport
	goto BeachSide_Text_BusDriver_1


BeachSide_Event_WarpToAirport::
	fadescreen FADE_TO_BLACK
	delay 5
	warp MAP_HOENN_AIRPORT, 39, 19
	fadescreen FADE_FROM_BLACK
	return


SailorToJohto_Text_0:
	.string "Looks like you have everything in\norder.\lGood I can take you to JOHTO.\lAre you in ?$"

SailorToJohto_Text_1:
	.string "Please, come in !$"

SailorToJohto_Text_2:
	.string "Another time then !$"

SailorToJohto_Text_3:
	.string "Hello there! Can I see your\n"
	.string "ticket?\l"
	.string "........................\l"
	.string "Well looks you don't have it...\l"
	.string "Come back with it, I'll take you\l"
	.string "to JOHTO!$"

BeachSide_Text_Beauty_Text_0:
	.string "Here is the BEACH SIDE in which\n"
	.string "everybody come to relax. There are also\l"
	.string "some WILD POKéMON around, but that's\l"
	.string "not a big deal. You are here to keep us\l"
	.string "safe right ?$"

BeachSide_Text_Sign_Text_0:
	.string "BEACH SIDE\p"
	.string "Perfect place to bath and take a break.$"

BeachSide_Text_TuberF_Text_0:
	.string "I will build the biggest sandcastle and\n"
	.string "bring a CHARIZARD to be it's guardian.\l"
	.string "My parents are moving to JOHTO to meet\l"
	.string "Prof. TREE or something like that and\l"
	.string "ask for a POKéMON !$"

BeachSide_Text_Sailor_Text_0:
	.string "I saw a SIREN I'm pretty sure about\n"
	.string "this ! Or maybe it was a WAILORD... I\l"
	.string "don't remember...$"

BeachSide_Text_SwimmerF_Text_0:
	.string "This place is so relaxing, nobody will\n"
	.string "disturb you. Hey ! Get out the sun, I\l"
	.string "can't tan properly !$"

BeachSide_Text_Sailor2_Text_0:
	.string "The FERRY here takes you to OLIVINE\n"
	.string "CITY in JOHTO. I'm sure there was a way\l"
	.string "to buy tickets, but I don't remember\l"
	.string "how. Unless you are famous, there is no\l"
	.string "way to travel freely.\p"
	.string "Yeah, capitalism is a bitch.$"

BeachSide_Text_SwimmerF2_Text_0:
	.string "Blmmbbll ! No I'm not drowning. Blmmblll !\p"
	.string "........................................\p"
	.string "Ok I admit, I'm learning how to swim.$"

BeachSide_Text_TuberM_Text_0:
	.string "I'm happy my grandpa brought me here\n"
	.string "instead of DEWFORD TOWN. There are way\l"
	.string "to much people, I hate that !$"

BeachSide_Text_OldMan_Text_0:
	.string "My grandkid is happy I brought him here.\n"
	.string "I wanted to go to DEWFORD TOWN but\l"
	.string "when I saw the prices.\p"
	.string "SIGH...$"

BeachSide_Text_BusDriver_Text_0:
	.string "Hi, I can bring you to the AIRPORT\nDo you wanna take the bus?$"
