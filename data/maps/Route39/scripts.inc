Route39_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_NIGHT
	goto_if_eq Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8003, TIME_MIDNIGHT
	goto_if_eq Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, Route39_Event_RemoveObjects
	return


Route39_Text_Girl::
	lock
	faceplayer
	msgbox Route39_Text_Girl_Text_0
	release
	end


Route39_Event_RemoveObjects::
	removeobject 3
	removeobject 2
	removeobject 1
	removeobject 7
	end


Route39_Text_Cooltrainer::
	trainerbattle_single TRAINER_JENNY_3, Route39_Text_Cooltrainer_Text_0, Route39_Text_Cooltrainer_Text_1
	msgbox Route39_Text_Cooltrainer_Text_2, MSGBOX_NPC
	end


Route39_Text_Sailor::
	trainerbattle_single TRAINER_JENNY_4, Route39_Text_Cooltrainer_Text_0, Route39_Text_Cooltrainer_Text_1
	msgbox Route39_Text_Sailor_Text_0, MSGBOX_NPC
	end


Route39_Text_PokefanF::
	trainerbattle_single TRAINER_DIANA_2, Route39_Text_Cooltrainer_Text_0, Route39_Text_Cooltrainer_Text_1
	msgbox Route39_Text_PokefanF_Text_0, MSGBOX_NPC
	end


Route39_Text_RouteSign::
	msgbox Route39_Text_RouteSign_Text_0, MSGBOX_NPC
	end


Route39_Text_MoomooFarmSign::
	msgbox Route39_Text_MoomooFarmSign_Text_0, MSGBOX_NPC
	end


Route39_Text_Girl_Text_0:
	.string "Moomooh is the most productive MILTANK\n"
	.string "of the FARM, I hope she get well all her\l"
	.string "life.$"

Route39_Text_Cooltrainer_Text_0:
	.string "Hey$"

Route39_Text_Cooltrainer_Text_1:
	.string "Damn$"

Route39_Text_Cooltrainer_Text_2:
	.string "You know how POKéMON have different\nabilities?\lYes?\lWell looks like you went to school...$"

Route39_Text_Sailor_Text_0:
	.string "My POKéMON were caught and raised\noverseas.\lThey're my companions on those long\lvoyages.$"

Route39_Text_PokefanF_Text_0:
	.string "Do you know about baby POKéMON? I bet\nthey're just adorable!$"

Route39_Text_RouteSign_Text_0:
	.string "Route 39\nOLIVINE CITY - ECRUTEAK CITY$"

Route39_Text_MoomooFarmSign_Text_0:
	.string "Moomoo Farm\nEnjoy Our Fresh and Tasty Milk$"
