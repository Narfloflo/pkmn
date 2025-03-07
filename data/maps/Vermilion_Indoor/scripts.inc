Vermilion_Indoor_MapScripts::
	.byte 0


VermilionIndoor_Text_Boy::
	lock
	faceplayer
	msgbox VermilionIndoor_Text_Boy_Text_0
	release
	end


VermilionIndoor_Text_Pidgey::
	lock
	faceplayer
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	waitmoncry
	msgbox VermilionIndoor_Text_Pidgey_Text_0
	release
	end


VermilionIndoor_Text_Man1::
	lock
	faceplayer
	msgbox VermilionIndoor_Text_Man1_Text_0
	release
	end


VermilionIndoor_Text_Gentleman::
	lock
	faceplayer
	msgbox VermilionIndoor_Text_Gentleman_Text_0
	release
	end


VermilionIndoor_Text_Pikachu::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	waitmoncry
	msgbox VermilionIndoor_Text_Pikachu_Text_0
	release
	end


VermilionIndoor_Text_Camper::
	lock
	faceplayer
	msgbox VermilionIndoor_Text_Camper_Text_0
	release
	end


VermilionIndoor_Text_Boy_Text_0:
	.string "I'm getting my PIDGEY to fly a letter to\n"
	.string "SAFFRON in the north !$"

VermilionIndoor_Text_Pidgey_Text_0:
	.string "Kukuroooo !$"

VermilionIndoor_Text_Man1_Text_0:
	.string "My son is writing a letter to some girl in\n"
	.string "SAFFRON. I didn't know he was such a\l"
	.string "casanova...$"

VermilionIndoor_Text_Gentleman_Text_0:
	.string "This house belong to LT. SURGE. I think\n"
	.string "he is in the POWER PLANTS in ROUTE 10.\l"
	.string "Me ? I'm guarding his house. What about\l"
	.string "you, intruder ?$"

VermilionIndoor_Text_Pikachu_Text_0:
	.string "Pika ! Chu-chu !$"

VermilionIndoor_Text_Camper_Text_0:
	.string "POKéBALLS, check\n"
	.string "Hat, check\p"
	.string "POKéMON, check\n"
	.string "Courage, missing... I'll start my journey\l"
	.string "tomorrow...$"
