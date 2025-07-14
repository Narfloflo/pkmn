EcruteakPkmnCenter_MapScripts::
	.byte 0


EcruteakPkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox EcruteakPkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
	incrementgamestat GAME_STAT_USED_POKECENTER
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	applymovement 1, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	setrespawn HEAL_LOCATION_ECRUTEAK
	waitmessage
	release
	end


EcruteakPkmnCenter_Text_GymGuy::
	msgbox EcruteakPkmnCenter_Text_GymGuy_Text_0, MSGBOX_NPC
	end


EcruteakPkmnCenter_Text_FatMan::
	msgbox EcruteakPkmnCenter_Text_FatMan_Text_0, MSGBOX_NPC
	end


EcruteakPkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

EcruteakPkmnCenter_Text_GymGuy_Text_0:
	.string "BILL is always visiting his folks in\nGOLDENROD CITY.\lSometimes he gives POKéMON to the\lTRAINERS he meets.$"

EcruteakPkmnCenter_Text_FatMan_Text_0:
	.string "The way the KIMONO GIRLS dance is\nmarvelous.\lJust like the way they use their\lPOKéMON.$"
