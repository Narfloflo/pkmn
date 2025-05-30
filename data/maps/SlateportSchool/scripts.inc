SlateportSchool_MapScripts::
	.byte 0


SlateportSchool_Text_GoodStudent::
	lock
	msgbox SlateportSchool_Text_GoodStudent_Text_0
	release
	end


SlateportSchool_Text_DisturbingGirl1::
	lock
	msgbox SlateportSchool_Text_DisturbingGirl1_Text_0
	release
	end


SlateportSchool_Text_DisturbingGirl2::
	lock
	msgbox SlateportSchool_Text_DisturbingGirl2_Text_0
	release
	end


SlateportSchool_Text_StudentF::
	msgbox SlateportSchool_Text_StudentF_Text_0, MSGBOX_NPC
	end


SlateportSchool_Text_StudentM::
	msgbox SlateportSchool_Text_StudentM_Text_0, MSGBOX_NPC
	end


SlateportSchool_Text_Teacher::
	msgbox SlateportSchool_Text_Teacher_Text_0, MSGBOX_NPC
	end


SlateportSchool_Text_Blackboard::
	msgbox SlateportSchool_Text_Blackboard_Text_0, MSGBOX_NPC
	end


SlateportSchool_Text_GoodStudent_Text_0:
	.string "And to cure a POKEMON from being\npoisoned, we can use an ANTIDOTE.\lPlease! Can I read about sleeping\lstatus ?$"

SlateportSchool_Text_DisturbingGirl1_Text_0:
	.string "YEAH! Smash that button and finish him!$"

SlateportSchool_Text_DisturbingGirl2_Text_0:
	.string "Use fatality pleeeeeease, I want some\n"
	.string "blood!$"

SlateportSchool_Text_StudentF_Text_0:
	.string "It's not that it's boring, but\nhonestly, why would I pay attention to\lsomething I already know :\lWhen you are poisoned, you lose HP.\lOh come on, I want to catch a LEGENDARY\lPOKEMON or something...$"

SlateportSchool_Text_StudentM_Text_0:
	.string "When I'll grow up, I will ride a lot\nof GYARADOS and ravage the\lworld. Nobody would defy\lme.\l{PLAYER}: OKAY... Well I'm leaving...$"

SlateportSchool_Text_Teacher_Text_0:
	.string "Want to become a Pokémon Champion?\nLearn how to control the weather.\lThere's more than just rain and sun\ltry sandstorms or hail too!$"

SlateportSchool_Text_Blackboard_Text_0:
	.string "{PLAYER}: Hmmm...\nNothing valuable is written on the\lblackboard.$"
