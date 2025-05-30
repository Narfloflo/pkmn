OlivinePkmnCenter_MapScripts::
	.byte 0


OlivinePkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox OlivinePkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_OLIVINE
	waitmessage
	release
	end


OlivinePkmnCenter_Text_Fisherman::
	msgbox OlivinePkmnCenter_Text_Fisherman_Text_0, MSGBOX_NPC
	end


OlivinePkmnCenter_Text_Man::
	msgbox OlivinePkmnCenter_Text_Man_Text_0, MSGBOX_NPC
	end


OlivinePkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

OlivinePkmnCenter_Text_Fisherman_Text_0:
	.string "Wow! You and your POKéMON are really\nclose!$"

OlivinePkmnCenter_Text_Man_Text_0:
	.string "In the OLIVINE CAFE next door they\nsometime are organizing binge contest!\lIt's too much for me!$"
