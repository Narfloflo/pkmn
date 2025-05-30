Verdanturf_Hospital_MapScripts::
	.byte 0


Verdanturf_Hospital_Nurse::
	lock
	faceplayer
	msgbox Verdanturf_Hospital_Nurse_Text_0
	release
	end


Verdanturf_Hospital_Azurill::
	lockall
	msgbox Verdanturf_Hospital_Azurill_Text_0
	releaseall
	return


Verdanturf_Hospital_Cook::
	lockall
	msgbox Verdanturf_Hospital_Cook_Text_0
	releaseall
	return


Verdanturf_Hospital_OldWoman::
	lock
	faceplayer
	msgbox Verdanturf_Hospital_OldWoman_Text_0
	release
	end


Verdanturf_Hospital_SecondNurse::
	lock
	faceplayer
	msgbox Verdanturf_Hospital_SecondNurse_Text_0
	release
	end


Verdanturf_Hospital_Sick::
	lockall
	msgbox Verdanturf_Hospital_Sick_Text_0
	releaseall
	return


Verdanturf_Hospital_ChanseyGuy::
	lock
	faceplayer
	msgbox Verdanturf_Hospital_ChanseyGuy_Text_0
	showmonpic SPECIES_CHANSEY, 10, 3
	delay 100
	hidemonpic
	release
	end


Verdanturf_Hospital_Lady::
	lock
	faceplayer
	msgbox Verdanturf_Hospital_Lady_Text_0
	release
	end


Verdanturf_Hospital_Door::
	lockall
	msgbox Verdanturf_Hospital_Door_Text_0
	releaseall
	return


Verdanturf_Hospital_Nurse_Text_0:
	.string "This is the Verdanturf Town Hospital.\n"
	.string "Please remain quiet while you are here.\p"
	.string "Thanks you.$"

Verdanturf_Hospital_Azurill_Text_0:
	.string "{PLAYER}: This POKEMON is taking care\n"
	.string "of it's trainer.\p"
	.string "Kinda cute.$"

Verdanturf_Hospital_Cook_Text_0:
	.string "Cook some potatoes, then some tomatoes...\pGrumbl...$"

Verdanturf_Hospital_OldWoman_Text_0:
	.string "The Nurse owe my a few bucks. I can wait\n"
	.string "all day long to have it back.\p"
	.string "What a MIGHTYENA she is!$"

Verdanturf_Hospital_SecondNurse_Text_0:
	.string "Sigh...This is what happened to trainers\n"
	.string "who are rumbling in the wild with an\l"
	.string "under trained team.\p"
	.string "Pathetic!$"

Verdanturf_Hospital_Sick_Text_0:
	.string "...I'm dying...$"

Verdanturf_Hospital_ChanseyGuy_Text_0:
	.string "I'm looking for a book about a POKEMON\n"
	.string "that help and take care of the people.\p"
	.string "It's a fat pink stuff.$"

Verdanturf_Hospital_Lady_Text_0:
	.string "I'm here for a date.\pI don't think I'm at the right place.$"

Verdanturf_Hospital_Door_Text_0:
	.string "{PLAYER}: It's closed.$"
