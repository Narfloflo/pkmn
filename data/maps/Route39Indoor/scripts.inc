Route39Indoor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_DAY
	goto_if_eq Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8003, TIME_SUNSET
	goto_if_eq Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8003, TIME_DAWN
	goto_if_eq Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8003, TIME_NIGHTFALL
	goto_if_eq Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route39Indoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, Route39Indoor_Event_RemoveObjects
	return


Route39Indoor_Text_Man::
	msgbox Route39Indoor_Text_Man_Text_0, MSGBOX_NPC
	end


Route39Indoor_Event_RemoveObjects::
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	end


Route39Indoor_Text_Woman::
	msgbox Route39Indoor_Text_Woman_Text_0, MSGBOX_NPC
	end


Route39Indoor_Text_Twin1::
	msgbox Route39Indoor_Text_Twin1_Text_0, MSGBOX_NPC
	end


Route39Indoor_Text_Twin2::
	msgbox Route39Indoor_Text_Twin2_Text_0, MSGBOX_NPC
	end


Route39Indoor_Text_Man_Text_0:
	.string "Hello hello, welcome to the FARM!\nWhat you meet my cousin in HOENN?\lHaha nice!\lYou know I sell MILK during the day in\lOLIVINE. Come get a look once!$"

Route39Indoor_Text_Woman_Text_0:
	.string "We have a lot of MILTANK which assure\nus a lot of cash. But we are on a thin\lline, and if one of them get sick, it\lwould mean bankrupt for us.$"

Route39Indoor_Text_Twin1_Text_0:
	.string "I hope you treat you POKéMON well!$"

Route39Indoor_Text_Twin2_Text_0:
	.string "It's tiresome to run around the fields\nall days long.$"
