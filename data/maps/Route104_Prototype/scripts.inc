Route104_Prototype_MapScripts::
	.byte 0

CianwoodCave_Text_WarriorM::
	lock
	faceplayer
	msgbox CianwoodCave_Text_WarriorM_Text_0
	release
	end


CianwoodCave_Text_WarriorF::
	lock
	faceplayer
	msgbox CianwoodCave_Text_WarriorF_Text_0
	release
	end


CianwoodCave_Text_BlackBelt::
	lock
	msgbox CianwoodCave_Text_BlackBelt_Text_0
	release
	end


CianwoodCave_Text_BlackBelt2::
	lock
	msgbox CianwoodCave_Text_BlackBelt2_Text_0
	release
	end


CianwoodCave_Text_WarriorF2::
	lock
	faceplayer
	msgbox CianwoodCave_Text_WarriorF2_Text_0
	release
	end


CianwoodCave_Text_LittleGirl::
	lock
	faceplayer
	msgbox CianwoodCave_Text_LittleGirl_Text_0
	release
	end


CianwoodCave_Text_LittleBoy::
	lock
	faceplayer
	msgbox CianwoodCave_Text_LittleBoy_Text_0
	release
	end


CianwoodCave_Text_LittleBoy2::
	lock
	faceplayer
	msgbox CianwoodCave_Text_LittleBoy2_Text_0
	release
	end


CianwoodCave_Text_Chuck::
	lock
	faceplayer
	checktrainerflag TRAINER_FLANNERY_4
	goto_if 0, CianwoodCave_Text_Chuck_2
	checktrainerflag TRAINER_FLANNERY_4
	goto_if 1, CianwoodCave_Text_Chuck_3
CianwoodCave_Text_Chuck_1:
	release
	end

CianwoodCave_Text_Chuck_2:
	msgbox CianwoodCave_Text_Chuck_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CianwoodCave_Text_Chuck_6
	msgbox CianwoodCave_Text_Chuck_Text_1
	goto CianwoodCave_Text_Chuck_1

CianwoodCave_Text_Chuck_3:
	goto CianwoodCave_Text_ChuckRematch
	goto CianwoodCave_Text_Chuck_1

CianwoodCave_Text_Chuck_6:
	goto CianwoodCave_Text_ChuckFight
	goto CianwoodCave_Text_Chuck_1


CianwoodCave_Text_ChuckFight::
	trainerbattle_single TRAINER_FLANNERY_4, CianwoodCave_Text_ChuckFight_Text_0, CianwoodCave_Text_ChuckFight_Text_1
	release
	end


CianwoodCave_Text_ChuckRematch::
	msgbox CianwoodCave_Text_ChuckRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CianwoodCave_Text_ChuckRematch_2
	msgbox CianwoodCave_Text_ChuckRematch_Text_3
CianwoodCave_Text_ChuckRematch_1:
	release
	end

CianwoodCave_Text_ChuckRematch_2:
	cleartrainerflag TRAINER_FLANNERY_4
	trainerbattle_single TRAINER_FLANNERY_4, CianwoodCave_Text_ChuckRematch_Text_1, CianwoodCave_Text_ChuckRematch_Text_2
	goto CianwoodCave_Text_ChuckRematch_1


CianwoodCave_Text_WarriorM_Text_0:
	.string "CHUCK is in a incredible shape. Pretty\n"
	.string "sure he can fight against a MACHOKE\l"
	.string "and probably win !$"

CianwoodCave_Text_WarriorF_Text_0:
	.string "I'm amazed of how CHUCK managed to\n"
	.string "move from his defeat against BLUE. He\l"
	.string "is now motivated like never !$"

CianwoodCave_Text_BlackBelt_Text_0:
	.string "Such strength ! I'm voiceless$"

CianwoodCave_Text_BlackBelt2_Text_0:
	.string "I wish I could do the same...$"

CianwoodCave_Text_WarriorF2_Text_0:
	.string "Humpff... At his age I could do much\n"
	.string "more. Ask PROF. OAK and KURT, they can\l"
	.string "tell you.\p"
	.string "{PLAYER} : No thank you....$"

CianwoodCave_Text_LittleGirl_Text_0:
	.string "We are suppose to train ourself against\n"
	.string "the POKéMON of the area... WITH OUR\l"
	.string "BARE HANDS !$"

CianwoodCave_Text_LittleBoy_Text_0:
	.string "I'm dizzy, a GEODUDE slapped me because\n"
	.string "I try to throw it away.$"

CianwoodCave_Text_LittleBoy2_Text_0:
	.string "We are suppose to SURVIVE HERE ! I'm 5\n"
	.string "!! Who am I ? SON GOHAN ???!$"

CianwoodCave_Text_Chuck_Text_0:
	.string "Wahhhhhh!\n"
	.string "I'm training really hard! My\l"
	.string "master BRUNO taught me that a\l"
	.string "daily training is the only way to\l"
	.string "improve yourself!\l"
	.string "What they told you I've been\l"
	.string "beaten by a kid?!!\l"
	.string "Oh come on! I'll show you that I'm\l"
	.string "not that weak!$"

CianwoodCave_Text_Chuck_Text_1:
	.string "Yeah! go train yourself and when\n"
	.string "you are stronger come back to me!$"

CianwoodCave_Text_ChuckFight_Text_0:
	.string "You'll know who is the champion\nhere!$"

CianwoodCave_Text_ChuckFight_Text_1:
	.string "What what what?!!!$"

CianwoodCave_Text_ChuckRematch_Text_0:
	.string "Are you a bully? You want to\n"
	.string "disturb my training again?!$"

CianwoodCave_Text_ChuckRematch_Text_1:
	.string "Seriously, I'll kick your ass!!!$"

CianwoodCave_Text_ChuckRematch_Text_2:
	.string "Damn it?!!$"

CianwoodCave_Text_ChuckRematch_Text_3:
	.string "Grumbl, you are like BLUE...\n"
	.string "Annoying brat!$"
