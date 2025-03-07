ElmLab_MapScripts::
	.byte 0


ElmLab_Text_ProfElm::
	goto_if_unset FLAG_UNUSED_0x028, ElmLab_Text_ProfElm_1
	msgbox ElmLab_Text_ProfElm_Text_2, MSGBOX_NPC
	end

ElmLab_Text_ProfElm_1:
	msgbox ElmLab_Text_ProfElm_Text_0, MSGBOX_NPC
	giveitem ITEM_TRI_PASS
	setflag FLAG_UNUSED_0x028
	msgbox ElmLab_Text_ProfElm_Text_1, MSGBOX_NPC
	end


ElmLab_Text_Scientist::
	msgbox ElmLab_Text_Scientist_Text_0, MSGBOX_NPC
	end


NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine::
	lockall
	msgbox NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine_2
NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine_1:
	releaseall
	return

NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine_2:
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	goto NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine_1


NewBarkTown_EventScript_Heal::
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	setrespawn HEAL_LOCATION_NEWBARK
	return


ElmLab_Text_ProfElm_Text_0:
	.string "Oh hello who are you?\n.....................\lSo you came all the way from HOENN,\lthrough KANTO?!\lWell since you are BIRCH assistant,\lI'll help you by giving you this.$"

ElmLab_Text_ProfElm_Text_1:
	.string "With this PASS you should be able to\ntake a SHIP in OLIVINE!\lIt will take you to a place close to\lMAUVILLE in HOENN.\lHOENN's authorities sent me this, but I\ldon't really remember why... Nothing\limportant I guess?$"

ElmLab_Text_ProfElm_Text_2:
	.string "I really really don't remember what I\nwas supposed to do in HOENN...\lThere is something about RUSTBORO, but\lthere is nothing important there right?$"

ElmLab_Text_Scientist_Text_0:
	.string "Elm and I are working on EVOLUTION.\nYou know BIRCH right?\lElm told me when they were students\lthat he loved slacking around...$"

NewBarkTown_ProfessorElmsLab_EventScript_HealingMachine_Text_0:
	.string "Would you like to heal your POKéMON?$"
