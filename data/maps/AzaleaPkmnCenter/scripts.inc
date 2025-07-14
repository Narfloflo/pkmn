AzaleaPkmnCenter_MapScripts::
	.byte 0


AzaleaPkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox AzaleaPkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_AZALEA
	waitmessage
	release
	end


AzaleaPkmnCenter_Text_Woman::
	msgbox AzaleaPkmnCenter_Text_Woman_Text_0, MSGBOX_NPC
	end


AzaleaPkmnCenter_Text_Gentleman::
	msgbox AzaleaPkmnCenter_Text_Gentleman_Text_0, MSGBOX_NPC
	end


AzaleaPkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

AzaleaPkmnCenter_Text_Woman_Text_0:
	.string "Do you know about APRICORNS?\nWell it's not the season anymore. But,\lCrack one open, hollow it out and fit\lit with a special device.\lThen you can catch POKéMON with it.\pBefore POKéBALLS were invented,\leveryone used APRICORNS.$"

AzaleaPkmnCenter_Text_Gentleman_Text_0:
	.string "Do you use HM moves?\nYou know that POKéMON can use these\lmoves even if they are fainted.\pSo strange…\lI mean I could FLY with my fainted\lPIDGEOT.$"
