Dewford_Hotel_MapScripts::
	.byte 0


Dewford_Hotel_Text_OldLady::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_OldLady_Text_0
	release
	end


Dewford_Hotel_Text_Beauty::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_Beauty_Text_0
	release
	end


Dewford_Hotel_Text_Kid::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_Kid_Text_0
	release
	end


Dewford_Hotel_Text_Boy::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_Boy_Text_0
	release
	end


Dewford_Hotel_Text_Maniac::
	lock
	msgbox Dewford_Hotel_Text_Maniac_Text_0
	release
	end


Dewford_Hotel_Text_Fisherman::
	msgbox Dewford_Hotel_Text_Fisherman_Text_0, MSGBOX_NPC
	end


Dewford_Hotel_Text_Gentleman::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_Gentleman_Text_0
	release
	end


Dewford_Hotel_Text_Painter::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_Painter_Text_0
	release
	end


Dewford_Hotel_Text_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox Dewford_Hotel_Text_Azumarill_Text_0
	waitmoncry
	release
	end


Dewford_Hotel_Text_Woman::
	lock
	faceplayer
	msgbox Dewford_Hotel_Text_Woman_Text_0
	release
	end


Dewford_Hotel_Text_OldLady_Text_0:
	.string "It's full of tourists here. I hate them\n"
	.string "but they pay well. Anyway, you want a\l"
	.string "room ? Well scram dirty brat. It's for\l"
	.string "walking wallets here, not a good old\l"
	.string "HOENN TRAINER.$"

Dewford_Hotel_Text_Beauty_Text_0:
	.string "We came from KANTO with my son just to\n"
	.string "see the sea of HOENN. We couldn't book\l"
	.string "in times. Hope we still have some\l"
	.string "places...$"

Dewford_Hotel_Text_Kid_Text_0:
	.string "HOENN is fine, but there is too much\n"
	.string "water.$"

Dewford_Hotel_Text_Boy_Text_0:
	.string "Where are the ladies ? And the boys ?\p"
	.string "I need some fun !$"

Dewford_Hotel_Text_Maniac_Text_0:
	.string ".........\nWhat about this magazines\l.......\lOh dear!.......$"

Dewford_Hotel_Text_Fisherman_Text_0:
	.string "I wish to see what kind of fish there\nare in HOENN!\lIs there some various forms of\lMAGIKARP?$"

Dewford_Hotel_Text_Gentleman_Text_0:
	.string "I booked this Hotel about three months\n"
	.string "ago. It's great !$"

Dewford_Hotel_Text_Painter_Text_0:
	.string "My AZUMARILL is my muse. I'll paint the\n"
	.string "final masterpiece here. So excited !$"

Dewford_Hotel_Text_Azumarill_Text_0:
	.string "AZUUUUU ZUUU ZUUUUU!\n{PLAYER} : You really are a star right?$"

Dewford_Hotel_Text_Woman_Text_0:
	.string "I wonder what kind of room we will have.$"
