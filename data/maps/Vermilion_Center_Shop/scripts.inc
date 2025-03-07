Vermilion_Center_Shop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Vermilion_Center_OnTransition
	.byte 0


Vermilion_Center_OnTransition::
	setrespawn HEAL_LOCATION_VERMILION
	end


Vermilion_Center_Text_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


KantoCenter_Text_Chansey::
	lock
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox KantoCenter_Text_Chansey_Text_0
	release
	end


KantoCenter_Text_Chansey_Text_0:
	.string "Chan Chan !$"
