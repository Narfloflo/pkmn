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
	setflag FLAG_UNUSED_0x020
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

DewfordTrainingField_Text_KarateGuard_Text_0:
	.string "Huh? You defeat BRAWLY?\p"
	.string "..................... Ok I'll let you go.$"

DewfordTrainingField_Text_KarateGuard_Text_1:
	.string "Defeat BRAWLY and I'll let you go. Haha,\n"
	.string "a small fry like you will be smash!$"
