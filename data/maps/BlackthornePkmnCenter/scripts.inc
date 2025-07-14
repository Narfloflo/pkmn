BlackthornePkmnCenter_MapScripts::
	.byte 0


BlackthornePkmnCenter_Text_Nurse::
	lock
	faceplayer
	msgbox BlackthornePkmnCenter_Text_Nurse_Text_0, MSGBOX_AUTOCLOSE
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
	setrespawn HEAL_LOCATION_BLACKTHORNE
	waitmessage
	release
	end


BlackthornePkmnCenter_Text_Woman::
	msgbox BlackthornePkmnCenter_Text_Woman_Text_0, MSGBOX_NPC
	end


BlackthornePkmnCenter_Text_Man::
	msgbox BlackthornePkmnCenter_Text_Man_Text_0, MSGBOX_NPC
	end


BlackthornePkmnCenter_Text_Gentleman::
	msgbox BlackthornePkmnCenter_Text_Gentleman_Text_0, MSGBOX_NPC
	end


BlackthornePkmnCenter_Text_Nurse_Text_0:
	.string "I'll take your POKéMON for a\nfew moments.$"

BlackthornePkmnCenter_Text_Woman_Text_0:
	.string "I taught a HM to my POKéMON, but he\ncouldn't forget it. So I went to the\lMOVE DELETER to it forget.$"

BlackthornePkmnCenter_Text_Man_Text_0:
	.string "Oh wow! You seem very close to your\nPOKéMON!$"

BlackthornePkmnCenter_Text_Gentleman_Text_0:
	.string "Deep inside far off INDIGO PLATEAU is\nthe POKéMON LEAGUE of KANTO.\lThe best TRAINERS gather there from\laroung JOHTO and KANTO.\pOh there is also a LEAGUE in HOENN?\lI've never been there.$"
