SlateportDocks2_MapScripts::
	.byte 0


SlateportDocks_Text_Worker::
	lock
	faceplayer
	msgbox SlateportDocks_Text_Worker_Text_0
	release
	end


SlateportDocks_Text_Sailor::
	lock
	faceplayer
	msgbox SlateportDocks_Text_Sailor_Text_0
	release
	end


SlateportDocks_Text_Camper::
	lock
	faceplayer
	msgbox SlateportDocks_Text_Camper_Text_0
	release
	end


SlateportDocks_Text_Woman::
	lock
	faceplayer
	msgbox SlateportDocks_Text_Woman_Text_0
	release
	end


SlateportDocks_Text_Worker2::
	msgbox SlateportDocks_Text_Worker2_Text_0, MSGBOX_NPC
	end


SlateportDocks_Text_LighthouseSign::
	msgbox SlateportDocks_Text_LighthouseSign_Text_0, MSGBOX_SIGN
	end


SlateportDocks_Text_DocksSign::
	msgbox SlateportDocks_Text_DocksSign_Text_0, MSGBOX_SIGN
	end


SlateportDocks_Text_Worker_Text_0:
	.string "I have to fix the warehouse. Somehow,\n"
	.string "they decide to build it close to a WILD\l"
	.string "POKéMON nest!$"

SlateportDocks_Text_Sailor_Text_0:
	.string "This extension of SLATEPORT CITY was\n"
	.string "built to assure international shipping!$"

SlateportDocks_Text_Camper_Text_0:
	.string "Mmmpf! I was recruit to prevent WILD\n"
	.string "POKéMON from running into the CITY but\l"
	.string "all my TEAM is out...$"

SlateportDocks_Text_Woman_Text_0:
	.string "I really want to go to KANTO, but the\n"
	.string "SAILOR inside can't unless you are\l"
	.string "strong enough or have a TICKET. But\l"
	.string "They sold it all...$"

SlateportDocks_Text_Worker2_Text_0:
	.string "I'm sorry but I can't let you in the\nLIGHTHOUSE.$"

SlateportDocks_Text_LighthouseSign_Text_0:
	.string "SLATEPORT LIGHTHOUSE$"

SlateportDocks_Text_DocksSign_Text_0:
	.string "SLATPORT DOCKS\n“We will travel you to the world!”$"
