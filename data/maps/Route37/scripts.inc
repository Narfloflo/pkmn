Route37_MapScripts::
	.byte 0


Route37_Text_Blackbelt::
	trainerbattle_single TRAINER_NICOLAS_2, Route37_Text_Blackbelt_Text_0, Route37_Text_Blackbelt_Text_1
	msgbox Route37_Text_Blackbelt_Text_2, MSGBOX_NPC
	end


Route37_Text_SchoolKid::
	trainerbattle_single TRAINER_NICOLAS_3, Route37_Text_SchoolKid_Text_0, Route37_Text_SchoolKid_Text_1
	msgbox Route37_Text_SchoolKid_Text_2, MSGBOX_NPC
	end


Route37_Text_Youngster::
	trainerbattle_single TRAINER_NICOLAS_4, Route37_Text_Youngster_Text_0, Route37_Text_Youngster_Text_1
	msgbox Route37_Text_Youngster_Text_2, MSGBOX_NPC
	end


Route37_Sign_Ecruteak::
	msgbox Route37_Sign_Ecruteak_Text_0, MSGBOX_SIGN
	end


Route37_Text_Blackbelt_Text_0:
	.string "Hey! Are you going to CIANWOOD ISLAND\nto see CHUCK?$"

Route37_Text_Blackbelt_Text_1:
	.string "Guooooh!$"

Route37_Text_Blackbelt_Text_2:
	.string "I came from SAFFRON's DOJO just to see\nCHUCK.\lI wanna improve myself greatly!$"

Route37_Text_SchoolKid_Text_0:
	.string "I was taught a few things at EARL'S\nSCHOOL.\lI'll show you.$"

Route37_Text_SchoolKid_Text_1:
	.string "Wow! You should be a teacher!$"

Route37_Text_SchoolKid_Text_2:
	.string "I'm too scare to jump. But if I stay\nhere, nothing would happen.\lSo, I'm block...$"

Route37_Text_Youngster_Text_0:
	.string "Be quiet!\nI'm looking for a STANTLER!$"

Route37_Text_Youngster_Text_1:
	.string "Oh no! We made to much noises!$"

Route37_Text_Youngster_Text_2:
	.string "I'm looking for a few POKéMON.\nStantler is the next on my list. But\lthey are too fast for me.\lI should ask KURT for a FAST BALL!$"

Route37_Sign_Ecruteak_Text_0:
	.string "ECRUTEAK CITY ahead$"
