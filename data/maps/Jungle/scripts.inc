Jungle_MapScripts::
	.byte 0


Jungle_Text_RangerF::
	trainerbattle_single TRAINER_BROOKE_2, Jungle_Text_RangerF_Text_0, Jungle_Text_RangerF_Text_1
	msgbox Jungle_Text_RangerF_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Jungle_Text_BugCatcher::
	trainerbattle_single TRAINER_BROOKE_3, Jungle_Text_BugCatcher_Text_0, Jungle_Text_BugCatcher_Text_1
	msgbox Jungle_Text_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Jungle_Text_Scientist::
	lock
	faceplayer
	msgbox Jungle_Text_Scientist_Text_0
	release
	end


Jungle_Text_RangerM::
	trainerbattle_single TRAINER_BROOKE_4, Jungle_Text_RangerM_Text_0, Jungle_Text_RangerM_Text_1
	msgbox Jungle_Text_RangerF_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Jungle_Text_BugManiac::
	lock
	faceplayer
	msgbox Jungle_Text_BugManiac_Text_0
	release
	end


Jungle_Text_RangerF_Text_0:
	.string "Hey you ! I hope you are not a poacher !$"

Jungle_Text_RangerF_Text_1:
	.string "I think I mistake you...$"

Jungle_Text_RangerF_Text_2:
	.string "We rangers have to keep an eye on the\n"
	.string "poachers and every person who want to\l"
	.string "be really bad with POKéMON.$"

Jungle_Text_BugCatcher_Text_0:
	.string "The JUNGLE is a good place to train POKéMON.$"

Jungle_Text_BugCatcher_Text_1:
	.string "Gassssp... !$"

Jungle_Text_BugCatcher_Text_2:
	.string "I think I need to keep training.$"

Jungle_Text_Scientist_Text_0:
	.string "I'm studying the POKéMON around here.\n"
	.string "Oh you have a POKéDEX ? So you are a\l"
	.string "scientist like me in a way ? It's good\l"
	.string "to see young ones interested in the\l"
	.string "scientific field of work.$"

Jungle_Text_RangerM_Text_0:
	.string "Are you here to mistreat wild POKéMON ?$"

Jungle_Text_RangerM_Text_1:
	.string "Hummm... You're not bad.$"

Jungle_Text_BugManiac_Text_0:
	.string "I'm looking for BUGS, so please\n"
	.string "stop disturbing me!$"
