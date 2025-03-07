Route24_MapScripts::
	.byte 0


Route24_Text_BugCatcherBridge::
	trainerbattle_single TRAINER_RICKY_2, Route24_Text_BugCatcherBridge_Text_0, Route24_Text_BugCatcherBridge_Text_1
	msgbox Route24_Text_BugCatcherBridge_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Route24_Text_LassBridge::
	trainerbattle_single TRAINER_RICKY_3, Route24_Text_LassBridge_Text_0, Route24_Text_LassBridge_Text_1
	msgbox Route24_Text_LassBridge_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Route24_Text_YoungsterBridge::
	trainerbattle_single TRAINER_RICKY_4, Route24_Text_YoungsterBridge_Text_0, Route24_Text_YoungsterBridge_Text_1
	msgbox Route24_Text_YoungsterBridge_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Route24_Text_PicnicBridge::
	trainerbattle_single TRAINER_DUSTY_2, Route24_Text_PicnicBridge_Text_0, Route24_Text_PicnicBridge_Text_1
	msgbox Route24_Text_PicnicBridge_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Route24_Text_CamperBridge::
	trainerbattle_single TRAINER_DUSTY_3, Route24_Text_CamperBridge_Text_0, Route24_Text_CamperBridge_Text_1
	msgbox Route24_Text_CamperBridge_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Route24_Text_CamperShy::
	lock
	faceplayer
	checktrainerflag TRAINER_DUSTY_4
	goto_if 0, Route24_Text_CamperShy_2
	goto Route24_Text_CamperRematch
Route24_Text_CamperShy_1:
	release
	end

Route24_Text_CamperShy_2:
	goto Route24_Text_FightCamper
	goto Route24_Text_CamperShy_1


Route24_Text_FightCamper::
	msgbox Route24_Text_FightCamper_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route24_Text_FightCamper_2
	msgbox Route24_Text_FightCamper_Text_3
Route24_Text_FightCamper_1:
	release
	end

Route24_Text_FightCamper_2:
	trainerbattle_single TRAINER_DUSTY_4, Route24_Text_FightCamper_Text_1, Route24_Text_FightCamper_Text_2
	goto Route24_Text_FightCamper_1


Route24_Text_CamperRematch::
	msgbox Route24_Text_CamperRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route24_Text_CamperRematch_2
	msgbox Route24_Text_FightCamper_Text_3
Route24_Text_CamperRematch_1:
	release
	end

Route24_Text_CamperRematch_2:
	cleartrainerflag TRAINER_DUSTY_4
	trainerbattle_single TRAINER_DUSTY_4, Route24_Text_CamperRematch_Text_1, Route24_Text_CamperRematch_Text_2
	goto Route24_Text_CamperRematch_1


Route24_Text_BridgeGuy::
	lock
	faceplayer
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq Route24_Text_BridgeGuy_2
	goto Route24_Text_BridgeGuyRematch
Route24_Text_BridgeGuy_1:
	release
	end

Route24_Text_BridgeGuy_2:
	msgbox Route24_Text_BridgeGuy_Text_0
	giveitem ITEM_GANLON_BERRY, 3
	setvar VAR_DEWFORD_TOWN_STATE, 1
	goto Route24_Text_BridgeGuy_1


Route24_Text_BridgeGuyRematch::
	msgbox Route24_Text_BridgeGuyRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route24_Text_BridgeGuyRematch_2
	msgbox Route24_Text_BridgeGuyRematch_Text_2
Route24_Text_BridgeGuyRematch_1:
	release
	end

Route24_Text_BridgeGuyRematch_2:
	msgbox Route24_Text_BridgeGuyRematch_Text_1
	cleartrainerflag TRAINER_RICKY_2
	cleartrainerflag TRAINER_RICKY_3
	cleartrainerflag TRAINER_RICKY_4
	cleartrainerflag TRAINER_DUSTY_2
	cleartrainerflag TRAINER_DUSTY_3
	fadescreen FADE_TO_BLACK
	delay 20
	warp MAP_ROUTE24, 15, 38
	fadescreen FADE_FROM_BLACK
	goto Route24_Text_BridgeGuyRematch_1


Route24_Text_Guy::
	lock
	faceplayer
	msgbox Route24_Text_Guy_Text_0
	release
	end


Route24_Text_BugCatcherBridge_Text_0:
	.string "Welcome on the NUGGET BRIDGE sucker !$"

Route24_Text_BugCatcherBridge_Text_1:
	.string "Damn it !$"

Route24_Text_BugCatcherBridge_Text_2:
	.string "You are strong, but I'm just the first\n"
	.string "one !$"

Route24_Text_LassBridge_Text_0:
	.string "I'm number two, it's gonna be\ntough !$"

Route24_Text_LassBridge_Text_1:
	.string "Ahah you are strong !$"

Route24_Text_LassBridge_Text_2:
	.string "Keep going, let's see how far you can go.$"

Route24_Text_YoungsterBridge_Text_0:
	.string "Three, it's were trouble begins !$"

Route24_Text_YoungsterBridge_Text_1:
	.string "You cheated I saw it !$"

Route24_Text_YoungsterBridge_Text_2:
	.string "I don't want to talk about it anymore...$"

Route24_Text_PicnicBridge_Text_0:
	.string "What are you looking four ?$"

Route24_Text_PicnicBridge_Text_1:
	.string "Oh what a mess you did.$"

Route24_Text_PicnicBridge_Text_2:
	.string "I was too busy making puns...$"

Route24_Text_CamperBridge_Text_0:
	.string "I'm the last one. You ready ?$"

Route24_Text_CamperBridge_Text_1:
	.string "Ah ! That's a good one !$"

Route24_Text_CamperBridge_Text_2:
	.string "Go talk to the guy there, he'll give you\n"
	.string "something.$"

Route24_Text_FightCamper_Text_0:
	.string "... I'm shy but you want a BATTLE ?$"

Route24_Text_FightCamper_Text_1:
	.string "Well, humm... Ok !$"

Route24_Text_FightCamper_Text_2:
	.string "................$"

Route24_Text_FightCamper_Text_3:
	.string "Leave me alone please...$"

Route24_Text_CamperRematch_Text_0:
	.string "What you still want a BATTLE with me ?\n"
	.string "But I'm lame !$"

Route24_Text_CamperRematch_Text_1:
	.string "I'll do my best$"

Route24_Text_CamperRematch_Text_2:
	.string "SIGH...$"

Route24_Text_BridgeGuy_Text_0:
	.string "Yo!\n"
	.string "Looks like you defeated all the\l"
	.string "trainers of the bridge. I'm suppose to\l"
	.string "give you a NUGGET but.. The mine that\l"
	.string "is furnishing us is deplete...\l"
	.string "Instead take this !$"

Route24_Text_BridgeGuyRematch_Text_0:
	.string "Hey I guess you enjoy challenge right ?\n"
	.string "Wanna rematch the trainers ?$"

Route24_Text_BridgeGuyRematch_Text_1:
	.string "Perfect ! Well just go to the start of\n"
	.string "the bridge.$"

Route24_Text_BridgeGuyRematch_Text_2:
	.string "Ahah, you are afraid right ?$"

Route24_Text_Guy_Text_0:
	.string "A few months ago, a guy named RED beat\n"
	.string "the trainers on the bridge and a\l"
	.string "ROCKET member tried to recruit him. I\l"
	.string "wonder what would have happened if he\l"
	.string "accepted...$"
