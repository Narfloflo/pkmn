mauvillectrcomm1_MapScripts::
	.byte 0

MauvilleUnderground_Text_Roberto::
	lock
	faceplayer
	checktrainerflag TRAINER_ISABEL_2
	goto_if 0, MauvilleUnderground_Text_Roberto_2
MauvilleUnderground_Text_Roberto_1:
	checktrainerflag TRAINER_ISABEL_2
	goto_if 1, MauvilleUnderground_Text_Roberto_5
MauvilleUnderground_Text_Roberto_4:
	release
	end

MauvilleUnderground_Text_Roberto_2:
	trainerbattle_single TRAINER_ISABEL_2, MauvilleUnderground_Text_Roberto_Text_0, MauvilleUnderground_Text_Roberto_Text_1
	goto MauvilleUnderground_Text_Roberto_1

MauvilleUnderground_Text_Roberto_5:
	goto MauvilleUnderground_Text_RobertoRematch
	goto MauvilleUnderground_Text_Roberto_4


MauvilleUnderground_Text_RobertoRematch::
	lock
	faceplayer
	msgbox MauvilleUnderground_Text_RobertoRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleUnderground_Text_RobertoRematch_2
	msgbox MauvilleUnderground_Text_RobertoRematch_Text_3
MauvilleUnderground_Text_RobertoRematch_1:
	release
	end

MauvilleUnderground_Text_RobertoRematch_2:
	cleartrainerflag TRAINER_ISABEL_2
	trainerbattle_single TRAINER_ISABEL_2, MauvilleUnderground_Text_RobertoRematch_Text_1, MauvilleUnderground_Text_RobertoRematch_Text_2
	goto MauvilleUnderground_Text_RobertoRematch_1


MauvilleUnderground_Text_Roberta::
	lock
	faceplayer
	checktrainerflag TRAINER_ISABEL_3
	goto_if 0, MauvilleUnderground_Text_Roberta_2
MauvilleUnderground_Text_Roberta_1:
	checktrainerflag TRAINER_ISABEL_3
	goto_if 1, MauvilleUnderground_Text_Roberta_5
MauvilleUnderground_Text_Roberta_4:
	release
	end

MauvilleUnderground_Text_Roberta_2:
	trainerbattle_single TRAINER_ISABEL_3, MauvilleUnderground_Text_Roberta_Text_0, MauvilleUnderground_Text_Roberta_Text_1
	goto MauvilleUnderground_Text_Roberta_1

MauvilleUnderground_Text_Roberta_5:
	goto MauvilleUnderground_Text_RobertaRematch
	goto MauvilleUnderground_Text_Roberta_4


MauvilleUnderground_Text_RobertaRematch::
	lock
	faceplayer
	msgbox MauvilleUnderground_Text_RobertaRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleUnderground_Text_RobertaRematch_2
	msgbox MauvilleUnderground_Text_RobertaRematch_Text_3
MauvilleUnderground_Text_RobertaRematch_1:
	release
	end

MauvilleUnderground_Text_RobertaRematch_2:
	cleartrainerflag TRAINER_ISABEL_3
	trainerbattle_single TRAINER_ISABEL_3, MauvilleUnderground_Text_RobertaRematch_Text_1, MauvilleUnderground_Text_RobertaRematch_Text_2
	goto MauvilleUnderground_Text_RobertaRematch_1


MauvilleUnderground_Text_Worker::
	lock
	faceplayer
	msgbox MauvilleUnderground_Text_Worker_Text_0
	release
	end


MauvilleUnderground_Text_ScientistF::
	lock
	faceplayer
	msgbox MauvilleUnderground_Text_ScientistF_Text_0
	release
	end


MauvilleUnderground_Text_ScientistM::
	lock
	faceplayer
	msgbox MauvilleUnderground_Text_ScientistM_Text_0
	release
	end


MauvilleUnderground_Text_Worker2::
	lock
	faceplayer
	msgbox MauvilleUnderground_Text_Worker2_Text_0
	release
	end


MauvilleUnderground_Text_Machop::
	lock
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox MauvilleUnderground_Text_Machop_Text_0
	playse SE_EFFECTIVE
	waitse
	msgbox MauvilleUnderground_Text_Machop_Text_1
	release
	end


MauvilleUnderground_Text_Hole::
	compare VAR_TEMP_0, 0
	goto_if_eq MauvilleUnderground_Text_Hole_2
	call MauvilleUnderground_Text_Hole_North
MauvilleUnderground_Text_Hole_1:
	end

MauvilleUnderground_Text_Hole_2:
	call MauvilleUnderground_Text_Hole_South
	goto MauvilleUnderground_Text_Hole_1


MauvilleUnderground_Text_Hole_North::
	msgbox MauvilleUnderground_Text_Hole_North_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleUnderground_Text_Hole_North_1
	msgbox MauvilleUnderground_Text_Hole_North_Text_1, MSGBOX_AUTOCLOSE
	end

MauvilleUnderground_Text_Hole_North_1:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleUnderground_Text_Hole_NorthJump
	setvar VAR_TEMP_0, 0
	end


MauvilleUnderground_Text_Hole_NorthJump:
	jump_2_up
	step_end

MauvilleUnderground_Text_Hole_South::
	msgbox MauvilleUnderground_Text_Hole_North_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleUnderground_Text_Hole_South_1
	msgbox MauvilleUnderground_Text_Hole_North_Text_1, MSGBOX_AUTOCLOSE
	end

MauvilleUnderground_Text_Hole_South_1:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleUnderground_Text_Hole_SouthJump
	setvar VAR_TEMP_0, 1
	end


MauvilleUnderground_Text_Hole_SouthJump:
	jump_2_down
	step_end

MauvilleUnderground_Text_Roberto_Text_0:
	.string "You know, a kid is not suppose to run\naround here ?$"

MauvilleUnderground_Text_Roberto_Text_1:
	.string "Oh damn !$"

MauvilleUnderground_Text_RobertoRematch_Text_0:
	.string "Want a rematch kiddo ?$"

MauvilleUnderground_Text_RobertoRematch_Text_1:
	.string "This time I'll get you$"

MauvilleUnderground_Text_RobertoRematch_Text_2:
	.string "Damn it, again !$"

MauvilleUnderground_Text_RobertoRematch_Text_3:
	.string "Oh I see.$"

MauvilleUnderground_Text_Roberta_Text_0:
	.string "I need to keep the wild POKéMON away\nfrom the workers.\pBut I have some time for a battle !$"

MauvilleUnderground_Text_Roberta_Text_1:
	.string "Well, thanks for the break !$"

MauvilleUnderground_Text_RobertaRematch_Text_0:
	.string "Want a rematch ?$"

MauvilleUnderground_Text_RobertaRematch_Text_1:
	.string "I can't lose again !$"

MauvilleUnderground_Text_RobertaRematch_Text_2:
	.string "Oh my ARCEUS...$"

MauvilleUnderground_Text_RobertaRematch_Text_3:
	.string "I don't have the time either.$"

MauvilleUnderground_Text_Worker_Text_0:
	.string "You know the daft WATTSON guy wanted\n"
	.string "to improve the capacities of MAUVILLE\l"
	.string "CITY with an underground GENERATOR. It\l"
	.string "was before his NEW MAUVILLE Project.$"

MauvilleUnderground_Text_ScientistF_Text_0:
	.string "WATTSON gave us the job to maintained\n"
	.string "the electricity flowing in MAUVILLE.\l"
	.string "This place is taking the electricity\l"
	.string "generated in NEW MAUVILLE and\l"
	.string "distribute it in the entire city!$"

MauvilleUnderground_Text_ScientistM_Text_0:
	.string "This place is decaying really fast!\n"
	.string "I wish we could have a modern way to\l"
	.string "generate electricity, like a wind\l"
	.string "turbine for example.\l"
	.string "A friend of mine in SINNOH told me they\l"
	.string "have that!$"

MauvilleUnderground_Text_Worker2_Text_0:
	.string "This turbine is totally rusty.\n"
	.string "We need the strength of a hundred\l"
	.string "person, so my MACHOP is helping me!$"

MauvilleUnderground_Text_Machop_Text_0:
	.string "Chooo Chammm!$"

MauvilleUnderground_Text_Machop_Text_1:
	.string "This POKéMON is taking all his strength\nto activate the turbine$"

MauvilleUnderground_Text_Hole_North_Text_0:
	.string "It's a big hole.\nI can try jump over it?$"

MauvilleUnderground_Text_Hole_North_Text_1:
	.string "Nevermind.$"
