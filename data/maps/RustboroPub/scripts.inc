RustboroPub_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_NIGHT
	goto_if_eq RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_0x8003, TIME_DAY
	goto_if_eq RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, RustboroPub_Event_SchoolGirls
	goto RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroPub_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_2, RustboroPub_Event_Salaryman
	return


RustboroPub_Text_Vendor::
	lock
	faceplayer
	message RustboroPub_Text_Vendor_Text_0
	waitmessage
	pokemart RustboroPub_PubItems
	msgbox RustboroPub_Text_Vendor_Text_1
	release
	return


	.align 2
RustboroPub_PubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

RustboroPub_Event_SchoolGirls::
	removeobject 2
	removeobject 3
	end


RustboroPub_Event_Salaryman::
	removeobject 4
	end


RustboroPub_Text_Lassjr::
	msgbox RustboroPub_Text_Lassjr_Text_0, MSGBOX_NPC
	end


RustboroPub_Text_Lasssr::
	msgbox RustboroPub_Text_Lasssr_Text_0, MSGBOX_NPC
	end


RustboroPub_Text_Salaryman::
	msgbox RustboroPub_Text_Salaryman_Text_0, MSGBOX_NPC
	end


RustboroPub_Text_Vendor_Text_0:
	.string "Oh a kid!\pNo booze for you.$"

RustboroPub_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

RustboroPub_Text_Lassjr_Text_0:
	.string "What?\nNo I'm not skipping class. I'm actually\lstudying while eating.\lClever huh?$"

RustboroPub_Text_Lasssr_Text_0:
	.string "I'm trying to figure the best way to\nchase after a POOCHYENA without noise.\lIt's for my fieldsearch class!$"

RustboroPub_Text_Salaryman_Text_0:
	.string "Sigh... I'm so fed up with my job...\nIt's exhausting...$"
