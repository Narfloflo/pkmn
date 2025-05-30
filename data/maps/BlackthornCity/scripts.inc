BlackthornCity_MapScripts::
	.byte 0


BlackthornCity_Text_TownSign::
	lock
	faceplayer
	msgbox BlackthornCity_Text_TownSign_Text_0
	release
	end


BlackthornCity_Text_BlackBelt::
	lock
	faceplayer
	msgbox BlackthornCity_Text_BlackBelt_Text_0
	release
	end


BlackthornCity_Text_Woman::
	lock
	faceplayer
	msgbox BlackthornCity_Text_Woman_Text_0
	release
	end


BlackthornCity_Text_Man::
	lock
	faceplayer
	msgbox BlackthornCity_Text_Man_Text_0
	release
	end


BlackthornCity_Text_Youngster::
	lock
	faceplayer
	msgbox BlackthornCity_Text_Youngster_Text_0
	release
	end


BlackthornCity_Text_GymSign::
	lock
	faceplayer
	msgbox BlackthornCity_Text_GymSign_Text_0
	release
	end


BlackthornCity_Text_DragonDenSign::
	lock
	faceplayer
	msgbox BlackthornCity_Text_DragonDenSign_Text_0
	release
	end


BlackthornCity_Text_OldMan::
	lock
	faceplayer
	msgbox BlackthornCity_Text_OldMan_Text_0
	release
	end


BlackthornCity_Text_Man2::
	checktrainerflag TRAINER_NORMAN_3
	goto_if 1, BlackthornCity_Text_Man2_1
	msgbox BlackthornCity_Text_Man2_Text_1, MSGBOX_NPC
	end

BlackthornCity_Text_Man2_1:
	msgbox BlackthornCity_Text_Man2_Text_0, MSGBOX_NPC
	end


BlackthornCity_Text_Dratini::
	lock
	faceplayer
	playmoncry SPECIES_DRATINI, CRY_MODE_NORMAL
	waitmoncry
	msgbox BlackthornCity_Text_Dratini_Text_0, MSGBOX_NPC
	release
	end


BlackthornCity_Text_TownSign_Text_0:
	.string "BLACKTHORN CITY\p"
	.string "A Quiet Mountain Retreat$"

BlackthornCity_Text_BlackBelt_Text_0:
	.string "I'm waiting for a signal for my RADIO...$"

BlackthornCity_Text_Woman_Text_0:
	.string "Wow, you came all the way here ? You\n"
	.string "must be a real hotshot TRAINER !$"

BlackthornCity_Text_Man_Text_0:
	.string "Are you going to make your POKéMON\n"
	.string "forget some MOVES ?$"

BlackthornCity_Text_Youngster_Text_0:
	.string "Got to prove my skill to get in the\n"
	.string "DRAGON's DEN... If only I had 8 BADGES...\l"
	.string "Or maybe I could just beat CLAIRE ?$"

BlackthornCity_Text_GymSign_Text_0:
	.string "BLACKTHORN CITY POKéMON GYM LEADER:\n"
	.string "CLAIR\n"
	.string "The Blessed User of Dragon PokéMon$"

BlackthornCity_Text_DragonDenSign_Text_0:
	.string "DRAGON's DEN AHEAD$"

BlackthornCity_Text_OldMan_Text_0:
	.string "Only those who have prove themselves\n"
	.string "can enter here.\p"
	.string "{PLAYER}: I rode a fucking RAYQUAZA,\n"
	.string "what do you want ?$"

BlackthornCity_Text_Man2_Text_0:
	.string "You defeated CLAIR?\nThat's amazing!\lI've never heard of her losing to\lanyone other than LANCE, her cousin.\lHeard about him?\lHe was beaten recently. I think he went\lto exil...$"

BlackthornCity_Text_Man2_Text_1:
	.string "Are you looking for CLAIR?\nI think she went to a CAVE somewhere to\ltrain.\lShe's so strong and fierce. Actually\lshe scares me a lot!$"

BlackthornCity_Text_Dratini_Text_0:
	.string "Graaor!$"
