CherrygroveCity_MapScripts::
	.byte 0


CherrygroveCity_Text_Youngster::
	lock
	faceplayer
	msgbox CherrygroveCity_Text_Youngster_Text_0
	release
	end


CherrygroveCity_Text_CitySign::
	lock
	msgbox CherrygroveCity_Text_CitySign_Text_0
	release
	end


CherrygroveCity_Text_GuideSign::
	lock
	msgbox CherrygroveCity_Text_GuideSign_Text_0
	release
	end


CherrygroveCity_Text_RestoSign::
	lock
	msgbox CherrygroveCity_Text_RestoSign_Text_0
	release
	end


CherrygroveCity_Text_Kid::
	lock
	faceplayer
	msgbox CherrygroveCity_Text_Kid_Text_0
	release
	end


CherrygroveCity_Text_Lass::
	lock
	faceplayer
	msgbox CherrygroveCity_Text_Lass_Text_0
	release
	end


CherrygroveCity_Text_Man::
	lock
	faceplayer
	msgbox CherrygroveCity_Text_Man_Text_0
	release
	end


CherrygroveCity_Text_Fisherman::
	lock
	faceplayer
	msgbox CherrygroveCity_Text_Fisherman_Text_0
	release
	end


CherrygroveCity_Text_Wooper::
	lock
	faceplayer
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
	msgbox CherrygroveCity_Text_Wooper_Text_0
	release
	end


CherrygroveCity_Text_Youngster_Text_0:
	.string "Hey ! They built this recently. I think\n"
	.string "they are selling ICE CREAMS !$"

CherrygroveCity_Text_CitySign_Text_0:
	.string "CHERRYGROVE CITY\n"
	.string "The City of Cute, Fragrant Flowers.$"

CherrygroveCity_Text_GuideSign_Text_0:
	.string "GUIDE GENT'S HOUSE$"

CherrygroveCity_Text_RestoSign_Text_0:
	.string "CHERRYGROVE SEASIDE RESTAURANT$"

CherrygroveCity_Text_Kid_Text_0:
	.string "I love contemplating the sea... If we\n"
	.string "SURF throught it, I'm sure we can reach\l"
	.string "VIOLET CITY.$"

CherrygroveCity_Text_Lass_Text_0:
	.string "It would be great if POKéMON could\n"
	.string "follow us.$"

CherrygroveCity_Text_Man_Text_0:
	.string "We built this area because we didn't had\n"
	.string "enough houses. People were living in\l"
	.string "VIOLET CITY.$"

CherrygroveCity_Text_Fisherman_Text_0:
	.string "In CHERRYGROVE we can fish good\n"
	.string "POKéMON. No I'm not doing this to eat\l"
	.string "them ! Except if it looks like a shrimp...$"

CherrygroveCity_Text_Wooper_Text_0:
	.string "{PLAYER}: ... THIS ?$"
