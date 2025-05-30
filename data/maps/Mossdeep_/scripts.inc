Mossdeep__MapScripts::
	.byte 0

Mossdeep__EventScript_SpaceStation::
	lockall
	msgbox Mossdeep__EventScript_SpaceStation_Text_0
	releaseall
	return


Mossdeep__Text_Seagate::
	lock
	msgbox Mossdeep__Text_Seagate_Text_0
	release
	end


Mossdeep__Text_Guard::
	lock
	faceplayer
	msgbox Mossdeep__Text_Guard_Text_0
	release
	end


Mossdeep__Text_Lady::
	lock
	faceplayer
	msgbox Mossdeep__Text_Lady_Text_0
	releaseall
	end


Mossdeep__Text_Sailor::
	lock
	faceplayer
	msgbox Mossdeep__Text_Sailor_Text_0
	releaseall
	end


Mossdeep__Text_Attendant::
	lock
	faceplayer
	msgbox Mossdeep__Text_Attendant_Text_0
	releaseall
	end


Mossdeep__Text_School::
	lock
	msgbox Mossdeep__Text_School_Text_0
	release
	end


Mossdeep__Event_SchoolClosed::
	gettime
	compare VAR_0x8003, TIME_NIGHT
	goto_if_eq Mossdeep__Event_SchoolClosed_2
	compare VAR_0x8003, TIME_MIDNIGHT
	goto_if_eq Mossdeep__Event_SchoolClosed_2
	release
	end

Mossdeep__Event_SchoolClosed_2:
	lock
	msgbox Mossdeep__Event_SchoolClosed_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Mossdeep__Move_Stepback
	waitmovement 0
	release
	end


Mossdeep__Move_Stepback:
	walk_down
	step_end

Mossdeep__EventScript_SpaceStation_Text_0:
	.string "Space Stations.\nBe Aware of the wild Pokemons !$"

Mossdeep__Text_Seagate_Text_0:
	.string "Gate to the MOSSDEEP docks$"

Mossdeep__Text_Guard_Text_0:
	.string "Hello, this area is restricted. It's the\n"
	.string "residency of the SPACE STATION staff.$"

Mossdeep__Text_Lady_Text_0:
	.string "I just arrived here in MOSSDEEP CITY\n"
	.string "with the FERRY.\p"
	.string "I came from far away to see the SPACE\n"
	.string "STATION.$"

Mossdeep__Text_Sailor_Text_0:
	.string "So they build a passage through the\n"
	.string "stone to get to the docks huh?\p"
	.string "Impressive!$"

Mossdeep__Text_Attendant_Text_0:
	.string "Hello.\p"
	.string "This ship is strictly reserved for\n"
	.string "regular persons. We can't take you\l"
	.string "onboard.\p"
	.string "I'm sorry.$"

Mossdeep__Text_School_Text_0:
	.string "MOSSDEEP SCHOOL$"

Mossdeep__Event_SchoolClosed_Text_0:
	.string "{PLAYER}: The SCHOOL is closed during\nthe night...$"
