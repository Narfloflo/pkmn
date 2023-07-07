Labs_MapScripts::
	.byte 0

Labs_Text_ScientistUpgrader::
	goto_if_set FLAG_SYS_POKEDEX_GET, Labs_Text_ScientistUpgrader_4
Labs_Text_ScientistUpgrader_3:
	lock
	faceplayer
	msgbox Labs_Text_ScientistUpgrader_Text_1
	applymovement 2, Scientist_Mouvement2
	waitmovement 0
	release
	return

Labs_Text_ScientistUpgrader_2:
	lock
	faceplayer
	msgbox Labs_Text_ScientistUpgrader_Text_0
	call UpgradeNationalDex
	release
	end

Labs_Text_ScientistUpgrader_4:
	goto_if_unset FLAG_SYS_NATIONAL_DEX, Labs_Text_ScientistUpgrader_2
	goto Labs_Text_ScientistUpgrader_3


UpgradeNationalDex::
	lock
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
	waitmessage
	waitfanfare
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	closemessage
	release
	return


Labs_Text_PrgmScientist::
	lock
	faceplayer
	msgbox Labs_Text_PrgmScientist_Text_0
	applymovement 1, Scientist_Mouvement
	waitmovement 0
	release
	return


Scientist_Mouvement:
	face_left
	step_end

Scientist_Mouvement2:
	face_up
	step_end

Labs_Text_ScientistUpgrader_Text_0:
	.string "Oh my ARCEUS ! Prof. BIRCH totally\n"
	.string "forgot to upgrade your POKEDEX. What a\l"
	.string "bad scientist. Let me do that for you....$"

Labs_Text_ScientistUpgrader_Text_1:
	.string "That should be better now. Go and catch\n"
	.string "them all {PLAYER} !$"

Labs_Text_PrgmScientist_Text_0:
	.string "So basically I'm developing a tool that\n"
	.string "can help TRAINERS to spot a specific\l"
	.string "POKEMON...... But it's not really working\l"
	.string "currently...$"
