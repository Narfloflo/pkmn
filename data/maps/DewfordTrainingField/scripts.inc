DewfordTrainingField_MapScripts::
	.byte 0


DewfordTrainingField_Text_KarateGuard::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTrainingField_Text_KarateGuard_1
	msgbox DewfordTrainingField_Text_KarateGuard_Text_1
	release
	end

DewfordTrainingField_Text_KarateGuard_1:
	applymovement 1, ExclamationSolo
	msgbox DewfordTrainingField_Text_KarateGuard_Text_0
	applymovement 1, KarateMove
	waitmovement 0
	release
	end


KarateMove:
	jump_up
	walk_up
	face_down
	step_end

ExclamationSolo:
	emote_exclamation_mark
	step_end

DewfordTrainingField_Text_BlackBelt::
	lock
	faceplayer
	msgbox DewfordTrainingField_Text_BlackBelt_Text_0
	release
	end


DewfordTrainingField_Text_RunningWoman::
	lock
	faceplayer
	msgbox DewfordTrainingField_Text_RunningWoman_Text_0
	release
	end


DewfordTrainingField_Text_RunningMan::
	lock
	faceplayer
	msgbox DewfordTrainingField_Text_RunningMan_Text_0
	release
	end


DewfordTrainingField_Text_Meditite::
	playmoncry SPECIES_MEDITITE, CRY_MODE_NORMAL
	msgbox DewfordTrainingField_Text_Meditite_Text_0, MSGBOX_NPC
	end


DewfordTrainingField_Text_KarateGuard_Text_0:
	.string "Huh? You defeat BRAWLY?\p"
	.string "..................... Ok I'll let you go.$"

DewfordTrainingField_Text_KarateGuard_Text_1:
	.string "Defeat BRAWLY and I'll let you go. Haha,\n"
	.string "a small fry like you will be smash!$"

DewfordTrainingField_Text_BlackBelt_Text_0:
	.string "BRAWLY recommend me this training !\p"
	.string "I'm starting to feel my muscles getting\n"
	.string "bigger. Or It's because I'm tired.$"

DewfordTrainingField_Text_RunningWoman_Text_0:
	.string "I trained myself here since I'm a kid.\n"
	.string "After 15 years, I'm certain I can beat\l"
	.string "BRAWLY !$"

DewfordTrainingField_Text_RunningMan_Text_0:
	.string "Please I'm training !! Move !$"

DewfordTrainingField_Text_Meditite_Text_0:
	.string "Medidi!$"
