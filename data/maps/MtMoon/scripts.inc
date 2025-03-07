MtMoon_MapScripts::
	.byte 0


MtMoon_Text_Brock::
	lock
	faceplayer
	checktrainerflag TRAINER_ROXANNE_4
	goto_if 0, MtMoon_Text_Brock_2
	checktrainerflag TRAINER_ROXANNE_4
	goto_if 1, MtMoon_Text_Brock_3
MtMoon_Text_Brock_1:
	release
	end

MtMoon_Text_Brock_2:
	msgbox MtMoon_Text_Brock_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MtMoon_Text_Brock_6
	msgbox MtMoon_Text_Brock_Text_1
	goto MtMoon_Text_Brock_1

MtMoon_Text_Brock_3:
	goto MtMoon_Text_BrockRematch
	goto MtMoon_Text_Brock_1

MtMoon_Text_Brock_6:
	goto MtMoon_Text_BrockFight
	goto MtMoon_Text_Brock_1


MtMoon_Text_BrockFight::
	trainerbattle_single TRAINER_ROXANNE_4, MtMoon_Text_BrockFight_Text_0, MtMoon_Text_BrockFight_Text_1
	release
	end


MtMoon_Text_BrockRematch::
	msgbox MtMoon_Text_BrockRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MtMoon_Text_BrockRematch_2
	msgbox MtMoon_Text_Brock_Text_1
MtMoon_Text_BrockRematch_1:
	release
	end

MtMoon_Text_BrockRematch_2:
	cleartrainerflag TRAINER_ROXANNE_4
	trainerbattle_single TRAINER_ROXANNE_4, MtMoon_Text_BrockFight_Text_0, MtMoon_Text_BrockFight_Text_1
	goto MtMoon_Text_BrockRematch_1


MtMoon_Text_DiggingManiac::
	lock
	faceplayer
	msgbox MtMoon_Text_DiggingManiac_Text_0
	release
	end


MtMoon_Text_Lass::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, MtMoon_Text_Lass_Text_0, MtMoon_Text_Lass_Text_1
	msgbox MtMoon_Text_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


MtMoon_Text_Youngster::
	trainerbattle_single TRAINER_JOHN_AND_JAY_3, MtMoon_Text_Youngster_Text_0, MtMoon_Text_Youngster_Text_1
	msgbox MtMoon_Text_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


MtMoon_Text_Nerd::
	trainerbattle_single TRAINER_JOHN_AND_JAY_4, MtMoon_Text_Nerd_Text_0, MtMoon_Text_Nerd_Text_1
	msgbox MtMoon_Text_Nerd_Text_2, MSGBOX_AUTOCLOSE
	end


MtMoon_Text_BugCatcher::
	trainerbattle_single TRAINER_JEFFREY_2, MtMoon_Text_BugCatcher_Text_0, MtMoon_Text_BugCatcher_Text_1
	msgbox MtMoon_Text_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


MtMoon_Text_Lass2::
	trainerbattle_single TRAINER_JEFFREY_3, MtMoon_Text_Lass2_Text_0, MtMoon_Text_Lass2_Text_1
	msgbox MtMoon_Text_Lass2_Text_2, MSGBOX_AUTOCLOSE
	end


MtMoon_Text_Hiker::
	trainerbattle_single TRAINER_JEFFREY_4, MtMoon_Text_Hiker_Text_0, MtMoon_Text_Hiker_Text_1
	msgbox MtMoon_Text_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


MtMoon_Text_FossilGuy::
	lock
	faceplayer
	msgbox MtMoon_Text_FossilGuy_Text_0
	release
	end


MtMoon_Text_Brock_Text_0:
	.string "Hi, I'm looking for some FOSSILS. I heard\n"
	.string "we can find some here in MT. MOON. I've\l"
	.string "create a team to gather some. It's\l"
	.string "financed by CINNABAR LAB. Oh you are a\l"
	.string "TRAINER ? You want a quick battle ?$"

MtMoon_Text_Brock_Text_1:
	.string "No problem. I have to search for\n"
	.string "FOSSILS anyway.$"

MtMoon_Text_BrockFight_Text_0:
	.string "I'm always ready for that !$"

MtMoon_Text_BrockFight_Text_1:
	.string "You really are strong !$"

MtMoon_Text_BrockRematch_Text_0:
	.string "We didn't manage to find a lot of\n"
	.string "FOSSILS, but it's okay, we didn't had so\l"
	.string "much hope. Oh you want a rematch ?$"

MtMoon_Text_DiggingManiac_Text_0:
	.string "With BROCK we are looking for FOSSILS. I\n"
	.string "even check for some MOON STONES.$"

MtMoon_Text_Lass_Text_0:
	.string "Help ! Too much ZUBATS !!$"

MtMoon_Text_Lass_Text_1:
	.string "They were in my hair !$"

MtMoon_Text_Lass_Text_2:
	.string "I really hate these kids of vampire.\n"
	.string "Where are we ? Twilight ? Gosh !$"

MtMoon_Text_Youngster_Text_0:
	.string "I'm searching for ancient POKéMON FOSSILS !\nLet's battle first !$"

MtMoon_Text_Youngster_Text_1:
	.string "My fossil hunt took an unexpected turn...$"

MtMoon_Text_Youngster_Text_2:
	.string "My brother told me that in CINNABAR we\n"
	.string "can revive FOSSILS. So I'm looking for\l"
	.string "some !$"

MtMoon_Text_Nerd_Text_0:
	.string "I love rare and odd Pokémon!\nLet's see if yours are interesting!$"

MtMoon_Text_Nerd_Text_1:
	.string "That's quite an oddity !$"

MtMoon_Text_Nerd_Text_2:
	.string "I need to find stronger POKéMON !$"

MtMoon_Text_BugCatcher_Text_0:
	.string "I'm strong, I'll show you !$"

MtMoon_Text_BugCatcher_Text_1:
	.string "Mommy !!!$"

MtMoon_Text_BugCatcher_Text_2:
	.string "I not a bully, I swear !$"

MtMoon_Text_Lass2_Text_0:
	.string "I'm lost here can you help me ?$"

MtMoon_Text_Lass2_Text_1:
	.string "What ?!$"

MtMoon_Text_Lass2_Text_2:
	.string "How do I get out of here ? Now I don't\n"
	.string "even have a POKéMON to help me reach\l"
	.string "the exit !$"

MtMoon_Text_Hiker_Text_0:
	.string "Hold on! My GEODUDE can withstand any attack!$"

MtMoon_Text_Hiker_Text_1:
	.string "My GEODUDE couldn't hold on...$"

MtMoon_Text_Hiker_Text_2:
	.string "I'll keep training my rock-hard team\n"
	.string "until we become unstoppable!$"

MtMoon_Text_FossilGuy_Text_0:
	.string "Huh, hello. A prick stole my FOSSIL a few\n"
	.string "time ago. Then another girl stole the\l"
	.string "second one. I have nothing left. Leave\l"
	.string "me alone in my misery...$"
