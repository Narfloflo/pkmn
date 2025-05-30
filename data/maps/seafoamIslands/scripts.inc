seafoamIslands_MapScripts::
	.byte 0


seafoamIslands_Text_Blaine::
	lock
	faceplayer
	checktrainerflag TRAINER_FLANNERY_2
	goto_if 1, seafoamIslands_Text_Blaine_2
	msgbox seafoamIslands_Text_Blaine_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq seafoamIslands_Text_Blaine_5
	goto seafoamIslands_Text_BlaineFight
seafoamIslands_Text_Blaine_1:
	release
	end

seafoamIslands_Text_Blaine_2:
	goto seafoamIslands_Text_BlaineRematch
	goto seafoamIslands_Text_Blaine_1

seafoamIslands_Text_Blaine_5:
	msgbox seafoamIslands_Text_Blaine_Text_1
	goto seafoamIslands_Text_Blaine_1


seafoamIslands_Text_BlaineFight::
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
	trainerbattle_single TRAINER_FLANNERY_2, seafoamIslands_Text_BlaineFight_Text_0, seafoamIslands_Text_BlaineFight_Text_1, seafoamIslands_Text_BlaineAfterBattle, FALSE
	return


seafoamIslands_Text_BlaineAfterBattle::
	msgbox seafoamIslands_Text_BlaineAfterBattle_Text_0
	setflag FLAG_UNUSED_0x025
	release
	end


seafoamIslands_Text_BlaineRematch::
	lock
	faceplayer
	msgbox seafoamIslands_Text_BlaineRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq seafoamIslands_Text_BlaineRematch_2
	msgbox seafoamIslands_Text_BlaineRematch_Text_3
seafoamIslands_Text_BlaineRematch_1:
	release
	end

seafoamIslands_Text_BlaineRematch_2:
	cleartrainerflag TRAINER_FLANNERY_2
	trainerbattle_single TRAINER_FLANNERY_2, seafoamIslands_Text_BlaineRematch_Text_1, seafoamIslands_Text_BlaineRematch_Text_2
	goto seafoamIslands_Text_BlaineRematch_1


seafoamIslands_Text_Blaine_Text_0:
	.string "I'm BLAINE.\n"
	.string "I'm CINNABAR Gym Leader.\l"
	.string "I'm investigating this\l"
	.string "cave because I heard some strong\l"
	.string "POKéMON is living here. But it\l"
	.string "seems it left for another frosty\l"
	.string "cave. Maybe south... Oh you wanna\l"
	.string "fight me ?$"

seafoamIslands_Text_Blaine_Text_1:
	.string "I'm pretty sure I'll find more clue about\n"
	.string "this POKéMON.$"

seafoamIslands_Text_BlaineFight_Text_0:
	.string "Let's warm this place up !$"

seafoamIslands_Text_BlaineFight_Text_1:
	.string "Ahah! such a burning desire !$"

seafoamIslands_Text_BlaineAfterBattle_Text_0:
	.string "Oh look at this feather! I'm sure an\n"
	.string "ARTICUNO has a nest here! Maybe it's\l"
	.string "not here because of its seasonal\l"
	.string "migration? I don't really know much\l"
	.string "about birds, but they tend to flew\l"
	.string "south. I'm pretty sure you'll find this\l"
	.string "POKéMON there... What me ? No I'm a FIRE\l"
	.string "TYPE master. I don't care about an ICE\l"
	.string "POKéMON. I'm more interested in that\l"
	.string "place actually than in ARTICUNO. I'll\l"
	.string "let you hunt it if you want.$"

seafoamIslands_Text_BlaineRematch_Text_0:
	.string "I hope your investigation are doing\n"
	.string "well. Oh! You want another fight?$"

seafoamIslands_Text_BlaineRematch_Text_1:
	.string "Let's burn this place up!$"

seafoamIslands_Text_BlaineRematch_Text_2:
	.string "Remind me when I was in the jungle south...$"

seafoamIslands_Text_BlaineRematch_Text_3:
	.string "All right, well don't freeze here!$"
