SproutTower_MapScripts::
	.byte 0


SproutTower_Text_Falkner::
	lock
	faceplayer
	checktrainerflag TRAINER_WINONA_2
	goto_if 0, SproutTower_Text_Falkner_2
	checktrainerflag TRAINER_WINONA_2
	goto_if 1, SproutTower_Text_Falkner_3
SproutTower_Text_Falkner_1:
	release
	end

SproutTower_Text_Falkner_2:
	msgbox SproutTower_Text_Falkner_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SproutTower_Text_Falkner_6
	msgbox SproutTower_Text_Falkner_Text_1, MSGBOX_NPC
	end

SproutTower_Text_Falkner_3:
	goto SproutTower_Text_FalknerRematch
	goto SproutTower_Text_Falkner_1

SproutTower_Text_Falkner_6:
	goto SproutTower_Text_FalknerFight
	goto SproutTower_Text_Falkner_1


SproutTower_Text_FalknerFight::
	trainerbattle_single TRAINER_WINONA_2, SproutTower_Text_FalknerFight_Text_0, SproutTower_Text_FalknerFight_Text_1
	release
	end


SproutTower_Text_FalknerRematch::
	msgbox SproutTower_Text_FalknerRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SproutTower_Text_FalknerRematch_2
	msgbox SproutTower_Text_FalknerRematch_Text_1
SproutTower_Text_FalknerRematch_1:
	release
	end

SproutTower_Text_FalknerRematch_2:
	cleartrainerflag TRAINER_WINONA_2
	trainerbattle_single TRAINER_WINONA_2, SproutTower_Text_FalknerFight_Text_0, SproutTower_Text_FalknerFight_Text_1
	goto SproutTower_Text_FalknerRematch_1


SproutTower_Text_BellsprooutFrame::
	msgbox SproutTower_Text_BellsprooutFrame_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SproutTower_Text_BellsprooutFrame_1
	msgbox SproutTower_Text_BellsprooutFrame_Text_1, MSGBOX_DEFAULT
	end

SproutTower_Text_BellsprooutFrame_1:
	warpteleport MAP_SPROUT_TOWER, 8, 57
	return


SproutTower_Text_Sage1::
	trainerbattle_single TRAINER_BENJAMIN_3, SproutTower_Text_Sage1_Text_0, SproutTower_Text_Sage1_Text_1
	msgbox SproutTower_Text_Sage1_Text_2, MSGBOX_NPC
	end


SproutTower_Text_Sage2::
	trainerbattle_single TRAINER_BENJAMIN_4, SproutTower_Text_Sage1_Text_0, SproutTower_Text_Sage1_Text_1
	msgbox SproutTower_Text_Sage1_Text_2, MSGBOX_NPC
	end


SproutTower_Text_Sage3::
	trainerbattle_single TRAINER_PABLO_2, SproutTower_Text_Sage1_Text_0, SproutTower_Text_Sage1_Text_1
	msgbox SproutTower_Text_Sage1_Text_2, MSGBOX_NPC
	end


SproutTower_Text_Falkner_Text_0:
	.string "Hi!\n"
	.string "I came to SPROUT TOWER to train my\l"
	.string "POKéMON.\l"
	.string "Oh you want to enter VIOLET's GYM?\l"
	.string "Unfortunatly it's closed.\l"
	.string "My dad went to a journey and left me\l"
	.string "his POKéMON.\l"
	.string "I'm supposed to take the lead, but I'm\l"
	.string "not ready yet.\l"
	.string "Well if you want we can have a match\l"
	.string "though.\l"
	.string "What do you think?$"

SproutTower_Text_Falkner_Text_1:
	.string "Oh ok!\n"
	.string "Well I'll keep training with the MONKS\l"
	.string "then!$"

SproutTower_Text_FalknerFight_Text_0:
	.string "Nice!\nHere we go!$"

SproutTower_Text_FalknerFight_Text_1:
	.string "I need to keep training!$"

SproutTower_Text_FalknerRematch_Text_0:
	.string "I keep training but I'm not totally\n"
	.string "synchronized with my POKéMON.\l"
	.string "It's a bit frustrating.\l"
	.string "Mmmmh maybe you can help me being\l"
	.string "closer to my team?$"

SproutTower_Text_FalknerRematch_Text_1:
	.string "You know where to find me if you change\n"
	.string "your mind.$"

SproutTower_Text_BellsprooutFrame_Text_0:
	.string "{PLAYER}: Oh there is something hidden\nbehind this frame...\lSome kind of mecanism.\l“It will lead you to the entrance”\lShould I activate that?$"

SproutTower_Text_BellsprooutFrame_Text_1:
	.string "{PLAYER}: Humm... I better not.$"

SproutTower_Text_Sage1_Text_0:
	.string "Welcome to SPROUT TOWER.\nWe are here to test you.$"

SproutTower_Text_Sage1_Text_1:
	.string "Humm... You are good!$"

SproutTower_Text_Sage1_Text_2:
	.string "This place is dedicated to training and\nmeditation. Don't disturb our peace\lplease.$"
