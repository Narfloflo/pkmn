GoldenrodPkmnCenter_MapScripts::
	.byte 0


GoldenrodPkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox GoldenrodPkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_GOLDENROD
	waitmessage
	release
	end


GoldenrodPkmnCenter_Text_Kid::
	msgbox GoldenrodPkmnCenter_Text_Kid_Text_0, MSGBOX_NPC
	end


GoldenrodPkmnCenter_Text_Lass::
	msgbox GoldenrodPkmnCenter_Text_Lass_Text_0, MSGBOX_NPC
	end


GoldenrodPkmnCenter_Text_Kimono::
	msgbox GoldenrodPkmnCenter_Text_Kimono_Text_0, MSGBOX_NPC
	end


GoldenrodPkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

GoldenrodPkmnCenter_Text_Kid_Text_0:
	.string "I'm trying to level up because my\nfriends and I are meeting in a\lCOLOSSEUM BATTLE!$"

GoldenrodPkmnCenter_Text_Lass_Text_0:
	.string "A higher level POKéMON doesn't always\nwin.\lAfter all, it may have a type\ldis-advantage.\pI don't think there is a single POKéMON\lthat is the toughest.\p{PLAYER}: You should see\lRAYQUAZA…$"

GoldenrodPkmnCenter_Text_Kimono_Text_0:
	.string "Oh my, your pack looks so heavy!\nOh! Do you happen to have something\lnamed EON MAIL?\lWhat, they don't produce it anymore?\lMy daughter will be disappointed…$"
