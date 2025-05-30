FireIsland_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FireIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FireIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x02A, FireIsland_Event_OpenDoor
	end


FireIsland_Text_Hiker::
	goto_if_set FLAG_UNUSED_0x02A, FireIsland_Text_Hiker_1
	lock
	faceplayer
	msgbox FireIsland_Text_Hiker_Text_1
	release
	end

FireIsland_Text_Hiker_1:
	msgbox FireIsland_Text_Hiker_Text_0, MSGBOX_NPC
	end


FireIsland_Event_OpenDoor::
	setmetatile 35, 51, METATILE_General_CaveEntrance_Bottom, FALSE
	setmetatile 35, 50, METATILE_General_CaveEntrance_Top, FALSE
	return


FireIsland_Text_Hiker_Text_0:
	.string "Look! I managed to create an opening in\nthis mountain!\lBy the way, I don't know  why but this\lplace feel warmer now don't you think?$"

FireIsland_Text_Hiker_Text_1:
	.string "This mountain is intriguing!\nI'm pretty sure there is a way to dig\linside. But I need to know the perfect\lside to use my tools.\lIt may take some time...$"
