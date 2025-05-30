MahoganyPkmnCenter_MapScripts::
	.byte 0


MahoganyPkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox MahoganyPkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_MAHOGANY
	waitmessage
	release
	end


MahoganyPkmnCenter_Text_Woman::
	msgbox MahoganyPkmnCenter_Text_Woman_Text_0, MSGBOX_NPC
	end


MahoganyPkmnCenter_Text_OldWoman::
	msgbox MahoganyPkmnCenter_Text_OldWoman_Text_0, MSGBOX_NPC
	end


MahoganyPkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

MahoganyPkmnCenter_Text_Woman_Text_0:
	.string "When POKéMON evolve, they are stronger\nbut learn moves slowly.$"

MahoganyPkmnCenter_Text_OldWoman_Text_0:
	.string "You know that PRYCE'S middle name is\nWILLOW?\lHis fighting style is as flexible as a\lwillow tree in winter!\lThat's why we call him the winter\ltrainer.$"
