Route117Junction103_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route117Junction103_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route117Junction103_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_unset FLAG_IS_CHAMPION, Route117Junction103_EventScript_CaveDoor
	end


Route117Junction103_EventScript_CaveDoor::
	setmetatile 32, 9, METATILE_General_RockWall_GrassBase, TRUE
	setmetatile 32, 8, METATILE_General_RockWall_RockBase, TRUE
	return


Route117Junction103_Text_Sign::
	lock
	goto_if_set FLAG_IS_CHAMPION, Route117Junction103_Text_Sign_1
	msgbox Route117Junction103_Text_Sign_Text_1
	release
	end

Route117Junction103_Text_Sign_1:
	msgbox Route117Junction103_Text_Sign_Text_0
	release
	end


Route117Junction103_EventScript_RunningWoman::
	lock
	faceplayer
	msgbox Route117Junction103_EventScript_RunningWoman_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Route117Junction103_EventScript_RunningWoman_1
	msgbox Route117Junction103_EventScript_RunningWoman_Text_2
	release
	end

Route117Junction103_EventScript_RunningWoman_1:
	message Route117Junction103_EventScript_RunningWoman_Text_1
	call Route117Junction103_EventScript_ChooseMonRand
	release
	end


Route117Junction103_EventScript_ChooseMonRand::
	random 3
	switch VAR_RESULT
	case 0, Route117Junction103_EventScript_ChooseMonRand_3
	case 1, Route117Junction103_EventScript_ChooseMonRand_4
	case 2, Route117Junction103_EventScript_ChooseMonRand_5
Route117Junction103_EventScript_ChooseMonRand_1:
	return

Route117Junction103_EventScript_ChooseMonRand_3:
	call Route117Junction103_EventScript_Medicham
	goto Route117Junction103_EventScript_ChooseMonRand_1

Route117Junction103_EventScript_ChooseMonRand_4:
	call Route117Junction103_EventScript_Hariyama
	goto Route117Junction103_EventScript_ChooseMonRand_1

Route117Junction103_EventScript_ChooseMonRand_5:
	call Route117Junction103_EventScript_Machamp
	goto Route117Junction103_EventScript_ChooseMonRand_1


Route117Junction103_EventScript_Medicham::
	playmoncry SPECIES_MEDICHAM, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_MEDICHAM, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route117Junction103_EventScript_Medicham_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route117Junction103_EventScript_Medicham_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route117Junction103_EventScript_Medicham_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route117Junction103_EventScript_Medicham_5
Route117Junction103_EventScript_Medicham_1:
	return

Route117Junction103_EventScript_Medicham_2:
	msgbox Route117Junction103_EventScript_Medicham_Text_0
	goto Route117Junction103_EventScript_Medicham_1

Route117Junction103_EventScript_Medicham_3:
	msgbox Route117Junction103_EventScript_Medicham_Text_1
	goto Route117Junction103_EventScript_Medicham_1

Route117Junction103_EventScript_Medicham_4:
	msgbox Route117Junction103_EventScript_Medicham_Text_2
	goto Route117Junction103_EventScript_Medicham_1

Route117Junction103_EventScript_Medicham_5:
	msgbox Route117Junction103_EventScript_Medicham_Text_2
	goto Route117Junction103_EventScript_Medicham_1


Route117Junction103_EventScript_Hariyama::
	playmoncry SPECIES_HARIYAMA, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_HARIYAMA, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route117Junction103_EventScript_Hariyama_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route117Junction103_EventScript_Hariyama_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route117Junction103_EventScript_Hariyama_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route117Junction103_EventScript_Hariyama_5
Route117Junction103_EventScript_Hariyama_1:
	return

Route117Junction103_EventScript_Hariyama_2:
	msgbox Route117Junction103_EventScript_Hariyama_Text_0
	goto Route117Junction103_EventScript_Hariyama_1

Route117Junction103_EventScript_Hariyama_3:
	msgbox Route117Junction103_EventScript_Medicham_Text_1
	goto Route117Junction103_EventScript_Hariyama_1

Route117Junction103_EventScript_Hariyama_4:
	msgbox Route117Junction103_EventScript_Medicham_Text_2
	goto Route117Junction103_EventScript_Hariyama_1

Route117Junction103_EventScript_Hariyama_5:
	msgbox Route117Junction103_EventScript_Medicham_Text_2
	goto Route117Junction103_EventScript_Hariyama_1


Route117Junction103_EventScript_Machamp::
	playmoncry SPECIES_MACHAMP, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_MACHAMP, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route117Junction103_EventScript_Machamp_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route117Junction103_EventScript_Machamp_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route117Junction103_EventScript_Machamp_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route117Junction103_EventScript_Machamp_5
Route117Junction103_EventScript_Machamp_1:
	return

Route117Junction103_EventScript_Machamp_2:
	msgbox Route117Junction103_EventScript_Machamp_Text_0
	goto Route117Junction103_EventScript_Machamp_1

Route117Junction103_EventScript_Machamp_3:
	msgbox Route117Junction103_EventScript_Medicham_Text_1
	goto Route117Junction103_EventScript_Machamp_1

Route117Junction103_EventScript_Machamp_4:
	msgbox Route117Junction103_EventScript_Medicham_Text_2
	goto Route117Junction103_EventScript_Machamp_1

Route117Junction103_EventScript_Machamp_5:
	msgbox Route117Junction103_EventScript_Medicham_Text_2
	goto Route117Junction103_EventScript_Machamp_1


Route117Junction103_Text_Machamp::
	lock
	faceplayer
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
	waitmoncry
	msgbox Route117Junction103_Text_Machamp_Text_0, MSGBOX_AUTOCLOSE
	end


Route117Junction103_Text_Medicham::
	lock
	faceplayer
	playmoncry SPECIES_MEDICHAM, CRY_MODE_NORMAL
	waitmoncry
	msgbox Route117Junction103_Text_Medicham_Text_0, MSGBOX_AUTOCLOSE
	end


Route117Junction103_Text_Hariyama::
	lock
	faceplayer
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
	waitmoncry
	msgbox Route117Junction103_Text_Hariyama_Text_0, MSGBOX_AUTOCLOSE
	end


Route117Junction103_Text_Sign_Text_0:
	.string "“NO I'M NOT DIGGING INTO A CAVE!”\p"
	.string "But it's written in a very poor\n"
	.string "language...$"

Route117Junction103_Text_Sign_Text_1:
	.string "“IF YOU WANT TO SELL ME A SLOWPOKE\n"
	.string "TAIL, LEAVE! OTHERWISE LEAVE TOO!”\p"
	.string "Looks like a 10 years old kid wrote it.$"

Route117Junction103_EventScript_RunningWoman_Text_0:
	.string "So you just think you can stop me from\n"
	.string "my training? You have to pay for this!\l"
	.string "Wanna try your strength?$"

Route117Junction103_EventScript_RunningWoman_Text_1:
	.string "Oh you are so dead!$"

Route117Junction103_EventScript_RunningWoman_Text_2:
	.string "Pfff you so weak, so weak!$"

Route117Junction103_EventScript_Medicham_Text_0:
	.string "YOU CHEATED! MEDICHAM IS THE BEST$"

Route117Junction103_EventScript_Medicham_Text_1:
	.string "... Yeah, you were just lucky...$"

Route117Junction103_EventScript_Medicham_Text_2:
	.string "AH! I knew you were weak!$"

Route117Junction103_EventScript_Hariyama_Text_0:
	.string "YOU CHEATED! HARIYAMA IS THE BEST$"

Route117Junction103_EventScript_Machamp_Text_0:
	.string "YOU CHEATED! MACHAMP IS THE BEST$"

Route117Junction103_Text_Machamp_Text_0:
	.string "Chu chu!$"

Route117Junction103_Text_Medicham_Text_0:
	.string "Di di!$"

Route117Junction103_Text_Hariyama_Text_0:
	.string "Ya ya! Riii!$"
