DewfordSchool_MapScripts::
	.byte 0


DewfordSchool_Text_Tuber::
	msgbox DewfordSchool_Text_Tuber_Text_0, MSGBOX_NPC
	end


DewfordSchool_Text_LassJr::
	msgbox DewfordSchool_Text_LassJr_Text_0, MSGBOX_NPC
	end


DewfordSchool_Text_SchoolKidM::
	msgbox DewfordSchool_Text_SchoolKidM_Text_0, MSGBOX_NPC
	end


DewfordSchool_Text_SchoolKidF::
	msgbox DewfordSchool_Text_SchoolKidF_Text_0, MSGBOX_NPC
	end


DewfordSchool_Text_Teacher::
	lock
	msgbox DewfordSchool_Text_Teacher_Text_0
	release
	end


DewfordSchool_Text_Blackboard::
	msgbox DewfordSchool_Text_Blackboard_Text_0, MSGBOX_SIGN
	end


DewfordSchool_Text_Tuber_Text_0:
	.string "You know, the training grounds are the\nbest place to train againt FIGHT\lPOKéMON.$"

DewfordSchool_Text_LassJr_Text_0:
	.string "I think the GRANITE CAVE expand into\nthe training grounds and some says even\lin ROUTE 105.\lBut it's so dark there, so I don't know\lanybody who went there...$"

DewfordSchool_Text_SchoolKidM_Text_0:
	.string "There is a CAVE in the\ntraining grounds. An old hag is keep\lthe entry. She says that we have to\lbeat BRAWLY if we want to enter it...\l{PLAYER}: Is that how you speak of your\lelder?$"

DewfordSchool_Text_SchoolKidF_Text_0:
	.string "Shush!\nI'm listening to the teacher!\l...................\lNo I'm kidding, I'm bore...$"

DewfordSchool_Text_Teacher_Text_0:
	.string ".... And this is how you catch a\nMAGIKARP!\lRemember, patience is the clue!$"

DewfordSchool_Text_Blackboard_Text_0:
	.string "{PLAYER}: It's the\nblackboard....\lHmmmm....\lIt's written that when breeding, if I\lgive a parent an Everstone, the baby\lhas a higher chance to inherit its\lNature!\lI should keep that in mind!$"
