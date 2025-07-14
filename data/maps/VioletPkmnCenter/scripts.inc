VioletPkmnCenter_MapScripts::
	.byte 0


VioletPkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox VioletPkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_VIOLET
	waitmessage
	release
	end


VioletPkmnCenter_Text_Gentleman::
	msgbox VioletPkmnCenter_Text_Gentleman_Text_0, MSGBOX_NPC
	end


VioletPkmnCenter_Text_Kid::
	msgbox VioletPkmnCenter_Text_Kid_Text_0, MSGBOX_NPC
	end


VioletPkmnCenter_Text_Youngster::
	msgbox VioletPkmnCenter_Text_Youngster_Text_0, MSGBOX_NPC
	end


VioletPkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

VioletPkmnCenter_Text_Gentleman_Text_0:
	.string "Justice will always prevail!\nNever forget that.$"

VioletPkmnCenter_Text_Kid_Text_0:
	.string "A guy named BILL create the PC STORAGE\nSYSTEM.\lWhat? A woman named LANETTE improved\lit?\pI never knew that!$"

VioletPkmnCenter_Text_Youngster_Text_0:
	.string "Oh wahoo!\nYou have a lot of BADGES! Pretty sure\lyour POKéMON always obeys you!$"
