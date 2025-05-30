Vermilion_Center_Shop_MapScripts::
	.byte 0


Vermilion_Center_OnTransition::
	return


Vermilion_Center_Text_Nurse::
	lock
	faceplayer
	msgbox Vermilion_Center_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
	incrementgamestat GAME_STAT_USED_POKECENTER
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	applymovement 5, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	setrespawn HEAL_LOCATION_VERMILION
	waitmessage
	release
	end


KantoCenter_Text_Chansey::
	lock
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox KantoCenter_Text_Chansey_Text_0
	release
	end


Vermilion_Center_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

KantoCenter_Text_Chansey_Text_0:
	.string "Chan Chan !$"
