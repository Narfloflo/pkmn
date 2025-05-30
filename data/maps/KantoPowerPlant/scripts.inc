KantoPowerPlant_MapScripts::
	.byte 0


PowerPlant_Text_LtSurge::
	lock
	faceplayer
	checktrainerflag TRAINER_ROXANNE_3
	goto_if 1, PowerPlant_Text_LtSurge_2
	msgbox PowerPlant_Text_LtSurge_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq PowerPlant_Text_LtSurge_5
	goto PowerPlant_Text_LtSurgeFight
PowerPlant_Text_LtSurge_1:
	release
	end

PowerPlant_Text_LtSurge_2:
	goto PowerPlant_Text_LtSurgeRematch
	goto PowerPlant_Text_LtSurge_1

PowerPlant_Text_LtSurge_5:
	msgbox PowerPlant_Text_LtSurge_Text_1
	goto PowerPlant_Text_LtSurge_1


PowerPlant_Text_LtSurgeFight::
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
	trainerbattle_single TRAINER_ROXANNE_3, PowerPlant_Text_LtSurgeFight_Text_0, PowerPlant_Text_LtSurgeFight_Text_1, PowerPlant_Text_LtSurgeAfterBattle, FALSE
	return


PowerPlant_Text_LtSurgeAfterBattle::
	msgbox PowerPlant_Text_LtSurgeAfterBattle_Text_0, MSGBOX_AUTOCLOSE
	playmoncry SPECIES_ZAPDOS, CRY_MODE_NORMAL
	waitmoncry
	applymovement 1, PowerPlant_Text_LtSurgeMovement
	waitmovement 30
	setflag FLAG_UNUSED_0x863
	goto PowerPlant_Text_LtSurgeDefeated
	return


PowerPlant_Text_LtSurgeDefeated::
	lock
	faceplayer
	msgbox PowerPlant_Text_LtSurgeDefeated_Text_0
	release
	end


PowerPlant_Text_LtSurgeRematch::
	lock
	faceplayer
	msgbox PowerPlant_Text_LtSurgeRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq PowerPlant_Text_LtSurgeRematch_2
	msgbox PowerPlant_Text_LtSurgeRematch_Text_3
PowerPlant_Text_LtSurgeRematch_1:
	release
	end

PowerPlant_Text_LtSurgeRematch_2:
	cleartrainerflag TRAINER_ROXANNE_3
	trainerbattle_single TRAINER_ROXANNE_3, PowerPlant_Text_LtSurgeRematch_Text_1, PowerPlant_Text_LtSurgeRematch_Text_2
	goto PowerPlant_Text_LtSurgeRematch_1


PowerPlant_Text_LtSurgeMovement:
	emote_exclamation_mark
	face_left
	face_up
	face_down
	face_player
	step_end

PowerPlant_Text_Worker1::
	lock
	faceplayer
	msgbox PowerPlant_Text_Worker1_Text_0
	release
	end


PowerPlant_Text_Worker2::
	lock
	faceplayer
	msgbox PowerPlant_Text_Worker2_Text_0
	release
	end


PowerPlant_Text_Worker3::
	lock
	faceplayer
	msgbox PowerPlant_Text_Worker3_Text_0
	release
	end


PowerPlant_Text_LtSurge_Text_0:
	.string "Howdie kid, who are you?\n"
	.string ".......................................\l"
	.string "{PLAYER}?..............................\l"
	.string "Hummm...\l"
	.string "You know it's adult work here?$"

PowerPlant_Text_LtSurge_Text_1:
	.string "Good, well leave us do the work here.$"

PowerPlant_Text_LtSurgeFight_Text_0:
	.string "Well don't cry after you get spanked.$"

PowerPlant_Text_LtSurgeFight_Text_1:
	.string "Really ?! Well you're not so bad...$"

PowerPlant_Text_LtSurgeAfterBattle_Text_0:
	.string "Ok I'll talk:\nWe are renovating the POWER PLANT for\lthe MAGNET TRAIN. But we have an issue.\lA lot of POKéMON are living here, so we\lhave to be really careful.\lAnd I think there is a ZAPDOS\laround here. I hope our BATTLE didn't\lfrightened them.$"

PowerPlant_Text_LtSurgeDefeated_Text_0:
	.string "Looks like ZAPDOS flew away...\nHe flew SOUTH.\lPretty sure he went to HOENN.\lHow do I know that?\lI know WATTSON and his NEW MAUVILLE\lproject. You should investigate there.$"

PowerPlant_Text_LtSurgeRematch_Text_0:
	.string "Looks like ZAPDOS flew away...\n"
	.string "He flew SOUTH.\l"
	.string "Pretty sure he went to HOENN.\l"
	.string "How do I know that?\l"
	.string "I know WATTSON and his NEW MAUVILLE\l"
	.string "project. You should investigate there.\l"
	.string "Anyway want a rematch?$"

PowerPlant_Text_LtSurgeRematch_Text_1:
	.string "Oh yeah, that remind of me the WAR!$"

PowerPlant_Text_LtSurgeRematch_Text_2:
	.string "Good game kid, good game.$"

PowerPlant_Text_LtSurgeRematch_Text_3:
	.string "Humpf... Whimp...$"

PowerPlant_Text_Worker1_Text_0:
	.string "We have to be careful, some POKéMON are\n"
	.string "really pissed at us !$"

PowerPlant_Text_Worker2_Text_0:
	.string "Fortunatly LT. SURGE is taking care of\n"
	.string "our security !$"

PowerPlant_Text_Worker3_Text_0:
	.string "Hey kid ! We can't let you get around\n"
	.string "freely. It's dangerous.$"
