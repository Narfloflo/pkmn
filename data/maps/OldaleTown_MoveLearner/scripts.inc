OldaleTown_MoveLearner_MapScripts::
	.byte 0


OldaleTown_MoveLearner_Text_MoveRelearner::
	lockall
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, OldaleTown_MoveLearner_EventScript_AskTeachMove
	msgbox OldaleTown_MoveLearner_Text_MoveRelearner_Text_0, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto OldaleTown_MoveLearner_EventScript_AskTeachMove
	end


OldaleTown_MoveLearner_EventScript_AskTeachMove::
	goto_if_set FLAG_BADGE02_GET, OldaleTown_MoveLearner_EventScript_AskTeachMove_1
	msgbox OldaleTown_MoveLearner_EventScript_AskTeachMove_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_MoveLearner_EventScript_AskTeachMove_4
	goto OldaleTown_MoveLearner_EventScript_ComeBackAgain
	return

OldaleTown_MoveLearner_EventScript_AskTeachMove_1:
	goto OldaleTown_MoveLearner_EventScript_ComeBackWithHeartScale
	return

OldaleTown_MoveLearner_EventScript_AskTeachMove_4:
	goto OldaleTown_MoveLearner_EventScript_ChooseMon
	return


OldaleTown_MoveLearner_EventScript_ChooseMon::
	msgbox OldaleTown_MoveLearner_EventScript_ChooseMon_Text_0, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, OldaleTown_MoveLearner_EventScript_ComeBackAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, OldaleTown_MoveLearner_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, OldaleTown_MoveLearner_EventScript_NoMoveToTeachMon
	goto OldaleTown_MoveLearner_EventScript_ChooseMove
	end


OldaleTown_MoveLearner_EventScript_CantTeachEgg::
	msgbox OldaleTown_MoveLearner_EventScript_CantTeachEgg_Text_0
	goto OldaleTown_MoveLearner_EventScript_ChooseMon
	end


OldaleTown_MoveLearner_EventScript_ChooseMove::
	msgbox OldaleTown_MoveLearner_EventScript_ChooseMove_Text_0, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, OldaleTown_MoveLearner_EventScript_ChooseMon
	end


OldaleTown_MoveLearner_EventScript_NoMoveToTeachMon::
	msgbox OldaleTown_MoveLearner_EventScript_NoMoveToTeachMon_Text_0, MSGBOX_DEFAULT
	goto OldaleTown_MoveLearner_EventScript_ChooseMon
	end


OldaleTown_MoveLearner_EventScript_ComeBackWithHeartScale::
	msgbox OldaleTown_MoveLearner_EventScript_ComeBackWithHeartScale_Text_0, MSGBOX_DEFAULT
	releaseall
	end


OldaleTown_MoveLearner_EventScript_ComeBackAgain::
	msgbox OldaleTown_MoveLearner_EventScript_ComeBackAgain_Text_0, MSGBOX_DEFAULT
	releaseall
	end


OldaleTown_MoveLearner_Text_MoveRelearner_Text_0:
	.string "I'm the MOVE TUTOR MASTER.\nI know all the moves that POKéMON\llearn--every one of them--and I can\lteach POKéMON those moves.\lI can teach a move to a POKéMON of\lyours if you'd like.\lI'm doing it only if you are a rookie\lTRAINER though.$"

OldaleTown_MoveLearner_EventScript_AskTeachMove_Text_0:
	.string "Oh! You are a rookie TRAINER?\nLet me guess, you want me to teach\la move?$"

OldaleTown_MoveLearner_EventScript_ChooseMon_Text_0:
	.string "Which POKéMON needs tutoring?$"

OldaleTown_MoveLearner_EventScript_CantTeachEgg_Text_0:
	.string "Hunh? There isn't a single move that\nI can teach an EGG.$"

OldaleTown_MoveLearner_EventScript_ChooseMove_Text_0:
	.string "Which move should I teach?$"

OldaleTown_MoveLearner_EventScript_NoMoveToTeachMon_Text_0:
	.string "Sorry…\pIt doesn't appear as if I have any move\nI can teach that POKéMON.$"

OldaleTown_MoveLearner_EventScript_ComeBackWithHeartScale_Text_0:
	.string "If your POKéMON need to learn a move,\nyou should head to FALLARBOR and talk\lto my disciple.$"

OldaleTown_MoveLearner_EventScript_ComeBackAgain_Text_0:
	.string "No?\nWell come back if you change your mind.$"
