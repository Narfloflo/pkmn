DarkCave_MapScripts::
	.byte 0


DarkCave_Text_Clair::
	lock
	faceplayer
	checktrainerflag TRAINER_NORMAN_3
	goto_if 0, DarkCave_Text_Clair_2
	checktrainerflag TRAINER_NORMAN_3
	goto_if 1, DarkCave_Text_Clair_3
DarkCave_Text_Clair_1:
	release
	end

DarkCave_Text_Clair_2:
	msgbox DarkCave_Text_Clair_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DarkCave_Text_Clair_6
	msgbox DarkCave_Text_Clair_Text_1, MSGBOX_NPC
	end

DarkCave_Text_Clair_3:
	goto DarkCave_Text_ClairRematch
	goto DarkCave_Text_Clair_1

DarkCave_Text_Clair_6:
	goto DarkCave_Text_ClairFight
	goto DarkCave_Text_Clair_1


DarkCave_Text_ClairFight::
	trainerbattle_single TRAINER_NORMAN_3, DarkCave_Text_ClairFight_Text_0, DarkCave_Text_ClairFight_Text_1
	release
	end


DarkCave_Text_ClairRematch::
	msgbox DarkCave_Text_ClairRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DarkCave_Text_ClairRematch_2
	msgbox DarkCave_Text_Clair_Text_1
DarkCave_Text_ClairRematch_1:
	release
	end

DarkCave_Text_ClairRematch_2:
	cleartrainerflag TRAINER_NORMAN_3
	trainerbattle_single TRAINER_NORMAN_3, DarkCave_Text_ClairFight_Text_0, DarkCave_Text_ClairFight_Text_1
	goto DarkCave_Text_ClairRematch_1


DarkCave_Text_Pokemaniac::
	trainerbattle_single TRAINER_TRENT_3, DarkCave_Text_Pokemaniac_Text_0, DarkCave_Text_Pokemaniac_Text_1
	msgbox DarkCave_Text_Pokemaniac_Text_2, MSGBOX_NPC
	end


DarkCave_Text_Clair_Text_0:
	.string "Who are you?\n"
	.string ".......................................\l"
	.string "Ok {PLAYER}, so you are a tough\l"
	.string "TRAINER\l"
	.string "right?\l"
	.string "I need to verify that myself.\l"
	.string "Are you ready?$"

DarkCave_Text_Clair_Text_1:
	.string "Pfff leave me alone then!$"

DarkCave_Text_ClairFight_Text_0:
	.string "I'll smash you, whimp!$"

DarkCave_Text_ClairFight_Text_1:
	.string "I need to keep training!$"

DarkCave_Text_ClairRematch_Text_0:
	.string "You were lucky the first time.\n"
	.string "I'll change my strategy you'll see\l"
	.string "that!\l"
	.string "Ok let's get started!$"

DarkCave_Text_Pokemaniac_Text_0:
	.string "Are you in a hurry?\nNo?\lWell, let's fight!$"

DarkCave_Text_Pokemaniac_Text_1:
	.string "Outch outch! Sorry...$"

DarkCave_Text_Pokemaniac_Text_2:
	.string "AZALEA is just a few miles away. You\ncan't really miss it.\lWhat's good to see?\lHmmm... The well and KURT I think?$"
