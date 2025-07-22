Fallarbor_Indoor_MapScripts::
	.byte 0


Fallarbor_Indoor_Text_Expert::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_Expert_Text_0
	release
	end


Fallarbor_Indoor_Text_Abra::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_Abra_Text_0
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	msgbox Fallarbor_Indoor_Text_Abra_Text_1
	release
	end


Fallarbor_Indoor_Text_Farmer::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_Farmer_Text_0
	release
	end


Fallarbor_Indoor_Text_Woman::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_Woman_Text_0
	release
	end


Fallarbor_Indoor_Text_Boy::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_Boy_Text_0
	release
	end


Fallarbor_Indoor_Text_ScientistF::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_ScientistF_Text_0
	release
	end


Fallarbor_Indoor_Text_LassSr::
	lock
	faceplayer
	msgbox Fallarbor_Indoor_Text_LassSr_Text_0
	release
	end


Fallarbor_Indoor_Text_Expert_Text_0:
	.string "Heard about LANETTE?\n"
	.string "She took BILL's Storage System and\l"
	.string "improve it a lot!\l"
	.string "But she a total geek, living with\l"
	.string "her dolls.\l"
	.string "Creepy!$"

Fallarbor_Indoor_Text_Abra_Text_0:
	.string "{PLAYER}: Hope you won't just\n"
	.string "TELEPORT as I approach you.$"

Fallarbor_Indoor_Text_Abra_Text_1:
	.string "Braa-a!$"

Fallarbor_Indoor_Text_Farmer_Text_0:
	.string "A few years ago FALLARBOR was\n"
	.string "nothing but a small village with\l"
	.string "two shacks.\l"
	.string "Now we are the biggest producers\l"
	.string "of crops in HOENN!$"

Fallarbor_Indoor_Text_Woman_Text_0:
	.string "ZZzzzzzz…\n"
	.string "{PLAYER}: Well, looks like I have\l"
	.string "to let her sleep.$"

Fallarbor_Indoor_Text_Boy_Text_0:
	.string "There are some houses ROUTE 115.\n"
	.string "LANETTE lives there also.\l"
	.string "And after that, there is the\l"
	.string "METEOR FALLS.\l"
	.string "Some moon shaped POKéMON can be\l"
	.string "found there!$"

Fallarbor_Indoor_Text_ScientistF_Text_0:
	.string "Time to drink a coffee and I'm\n"
	.string "back to work!\l"
	.string "We are observing the sky to\l"
	.string "understand the future!\l"
	.string "{PLAYER}: You can admit you just\l"
	.string "have no job and you are spending\l"
	.string "your time doing nothing…\l"
	.string "I personally drop out of school to\l"
	.string "catch wild creatures, so…$"

Fallarbor_Indoor_Text_LassSr_Text_0:
	.string "I really want to be graduate and\n"
	.string "leave this place…\l"
	.string "Volcanic ashes are making me sick,\l"
	.string "I have to shower every hour!\l"
	.string "It's disgusting…$"
