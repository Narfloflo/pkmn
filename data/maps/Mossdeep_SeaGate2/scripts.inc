Mossdeep_SeaGate2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Mossdeep_SeaGate2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Mossdeep_SeaGate2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_DAY
	goto_if_eq Mossdeep_SeaGate2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Mossdeep_SeaGate2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, MossdeepCityIndoor_Event_Worker
	return


MossdeepCityIndoor_Text_Worker::
	msgbox MossdeepCityIndoor_Text_Worker_Text_0, MSGBOX_NPC
	end


MossdeepCityIndoor_Event_Worker::
	removeobject 3
	end


MossdeepCityIndoor_Text_Medicham::
	playmoncry SPECIES_MEDICHAM, CRY_MODE_NORMAL
	msgbox MossdeepCityIndoor_Text_Medicham_Text_0, MSGBOX_NPC
	end


MossdeepCityIndoor_Text_Boy::
	goto_if_set FLAG_BADGE07_GET, MossdeepCityIndoor_Text_Boy_1
	msgbox MossdeepCityIndoor_Text_Boy_Text_1, MSGBOX_NPC
	end

MossdeepCityIndoor_Text_Boy_1:
	msgbox MossdeepCityIndoor_Text_Boy_Text_0, MSGBOX_NPC
	end


MossdeepCityIndoor_Text_Man::
	msgbox MossdeepCityIndoor_Text_Man_Text_0, MSGBOX_NPC
	end


MossdeepCityIndoor_Text_Worker_Text_0:
	.string "I work in the SPACE STATION.\nI'm not in the house during the day.\lThere is so much work to do there!$"

MossdeepCityIndoor_Text_Medicham_Text_0:
	.string "Cha chamm!$"

MossdeepCityIndoor_Text_Boy_Text_0:
	.string "So you beat LIZA & TATE right?\nI know my clues led you to victory!\l{PLAYER}: Actually I know my Types\lChart so...$"

MossdeepCityIndoor_Text_Boy_Text_1:
	.string "You want tips to beat LIZA & TATE?\nBe a sneaky beast, or try to ghost\lthem.\lThey hate that!$"

MossdeepCityIndoor_Text_Man_Text_0:
	.string "This island is very peaceful.\nLot of flowers, a few kids around.\lBut sometime, in the middle of the\lnight:\lKABOOM!\lThey launch their rocket into space\lwithout warning.\lI'm pretty sure I have PTSD because of\lthat...$"
