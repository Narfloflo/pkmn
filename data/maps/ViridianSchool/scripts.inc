ViridianSchool_MapScripts::
	.byte 0


ViridianSchool_Text_Lass::
	msgbox ViridianSchool_Text_Lass_Text_0, MSGBOX_NPC
	end


ViridianSchool_Text_Teacher::
	msgbox ViridianSchool_Text_Teacher_Text_0, MSGBOX_NPC
	end


ViridianSchool_Text_Boy::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, ViridianSchool_Text_BoyJealous
	goto_if_eq VAR_RESULT, FEMALE, ViridianSchool_Text_BoyInterested
	end


ViridianSchool_Text_BoyInterested::
	msgbox ViridianSchool_Text_BoyInterested_Text_0, MSGBOX_NPC
	applymovement 5, ViridianSchool_Move_Girl
	waitmovement 0
	end


ViridianSchool_Text_BoyJealous::
	msgbox ViridianSchool_Text_BoyJealous_Text_0, MSGBOX_NPC
	end


ViridianSchool_Move_Girl:
	emote_exclamation_mark
	face_player
	step_end

ViridianSchool_Text_Girl::
	msgbox ViridianSchool_Text_Girl_Text_0, MSGBOX_NPC
	end


ViridianSchool_Text_Youngster::
	msgbox ViridianSchool_Text_Youngster_Text_0, MSGBOX_NPC
	end


ViridianSchool_Text_Lass_Text_0:
	.string "Pfouh! I'm trying to learn my lessons.$"

ViridianSchool_Text_Teacher_Text_0:
	.string "Alright!\nYou need to read carefully the board\lbefore leaving!\lHuh?\lSorry, you looked like a rookie\lTRAINER, but looks like I was wrong...$"

ViridianSchool_Text_BoyInterested_Text_0:
	.string "Oh hello there!\nDid anybody ever told you your eyes are\lblue as a LAPRAS?$"

ViridianSchool_Text_BoyJealous_Text_0:
	.string "Hey you!\nDon't get close to my girlfriend!\lMy RATTATA will bite you to death!$"

ViridianSchool_Text_Girl_Text_0:
	.string "The boy on my left is soooo anoying...\nHe spend his time saying I'm his wife,\lbut everytime he see a girl, he has to\lflirt!\lI can't believe it...$"

ViridianSchool_Text_Youngster_Text_0:
	.string "Tomorrow we have an exam about types\nweaknesses!\lYou can't deal with me!$"
