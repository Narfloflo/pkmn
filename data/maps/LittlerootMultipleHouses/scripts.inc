LittlerootMultipleHouses_MapScripts::
	.byte 0


LittlerootMultipleHouses_Text_ScientistF::
	lock
	faceplayer
	msgbox LittlerootMultipleHouses_Text_ScientistF_Text_0
	release
	end


LittlerootMultipleHouses_Text_Gentleman::
	lock
	faceplayer
	msgbox LittlerootMultipleHouses_Text_Gentleman_Text_0
	release
	end


LittlerootMultipleHouses_Text_ScientistF_Text_0:
	.string "Hello, you must be the new neighbor?\nWelcome in LITTLEROOT!\lI hope you will enjoy your life in\lHOENN!$"

LittlerootMultipleHouses_Text_Gentleman_Text_0:
	.string "Oh you must be NORMAN's child?\nI hope you are not as mischievious as\lBIRCH's kid!\lI would have to break your neck.\l{PLAYER}: I would like to see you try,\lold man!$"
