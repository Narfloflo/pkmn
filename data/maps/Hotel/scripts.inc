Hotel_MapScripts::
	.byte 0

Hotel_Text_Receptionnist::
	lock
	faceplayer
	msgbox Hotel_Text_Receptionnist_Text_0
	release
	end


Hotel_Text_Salaryman::
	lock
	msgbox Hotel_Text_Salaryman_Text_0
	release
	end


Hotel_Text_Gentleman::
	lock
	faceplayer
	msgbox Hotel_Text_Gentleman_Text_0
	release
	end


Hotel_Text_OldWoman::
	lock
	faceplayer
	msgbox Hotel_Text_OldWoman_Text_0
	release
	end


Hotel_Text_Artist::
	lock
	faceplayer
	msgbox Hotel_Text_Artist_Text_0
	release
	end


Hotel_Text_Receptionnist_Text_0:
	.string "Oh you are a TRAINER ? Sorry but the\n"
	.string "POKéMON are not allowed in this HOTEL.\l"
	.string "You can stay in the lobby but can't\l"
	.string "move upstairs.$"

Hotel_Text_Salaryman_Text_0:
	.string "There is no more room for me ?! But I\n"
	.string "booked two weeks ago a room ! I'm so\l"
	.string "frustrated I can lift a SNORLAX !$"

Hotel_Text_Gentleman_Text_0:
	.string "Hello youngster, I guess you are a\n"
	.string "TRAINER ? I will give you an advice\l"
	.string "then : LEAVE THE PEOPLE ALONE !$"

Hotel_Text_OldWoman_Text_0:
	.string "This is the most luxious place in HOENN.\n"
	.string "I'll take my time in the jacuzzi and the\l"
	.string "sauna today.$"

Hotel_Text_Artist_Text_0:
	.string "Two exhibitions in two days ! One in\n"
	.string "KANTO, another one here in HOENN. I'm\l"
	.string "exhausted...$"
