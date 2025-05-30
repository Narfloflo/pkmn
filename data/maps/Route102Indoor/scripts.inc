Route102Indoor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route102Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route102Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_DAY
	goto_if_eq Route102Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route102Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, Route102Indoor_Text_FarmerHidden
	return


Route102Indoor_Text_FarmerHidden::
	removeobject 4
	end


Route102Indoor_Text_Farmer::
	msgbox Route102Indoor_Text_Farmer_Text_0, MSGBOX_NPC
	end


Route102Indoor_Text_Woman::
	msgbox Route102Indoor_Text_Woman_Text_0, MSGBOX_NPC
	end


Route102Indoor_Text_Man::
	msgbox Route102Indoor_Text_Man_Text_0, MSGBOX_NPC
	end


Route102Indoor_Text_Skitty::
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox Route102Indoor_Text_Skitty_Text_0, MSGBOX_NPC
	waitmoncry
	end


Route102Indoor_Text_Farmer_Text_0:
	.string "I'm tired, but working as a farmer is\nthe best!$"

Route102Indoor_Text_Woman_Text_0:
	.string "My husband own a field outside.\nHe's really busy!$"

Route102Indoor_Text_Man_Text_0:
	.string "You need a POKéMON when you live in\nROUTE like here.\lI mean, I can get attacked when I want\lto go shopping in the nearby cities.$"

Route102Indoor_Text_Skitty_Text_0:
	.string "Graou!$"
