Mossdeep__MapScripts::
	.byte 0

Mossdeep__EventScript_SpaceStation::
	lockall
	msgbox Mossdeep__EventScript_SpaceStation_Text_0
	releaseall
	return


Mossdeep__EventScript_MohaBattle::
	trainerbattle_single TRAINER_MOHA, Moha_Intro, Moha_Outro
	msgbox PostbattleMoha, MSGBOX_AUTOCLOSE
	waitmessage
	end


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
	.string "This ship is strictly reserved for none\n"
	.string "TRAINERS. We can't take you onboard.\p"
	.string "I'm sorry.$"

Moha_Intro::
	.string "I'm so fricking rich !$"

Moha_Outro::
	.string "But I'm so weak...$"

PostbattleMoha::
	.string "I'll ask my dad to buy me\na KYOGRE next time.$"
