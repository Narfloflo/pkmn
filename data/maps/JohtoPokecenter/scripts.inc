JohtoPokecenter_MapScripts::
	.byte 0


CherrygrovePkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox CherrygrovePkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_CHERRYGROVE
	waitmessage
	release
	end


CherrygrovePkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"
