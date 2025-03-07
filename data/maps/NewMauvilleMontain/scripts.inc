NewMauvilleMontain_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NewMauvilleMontain_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewMauvilleMontain_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x863, NewMauvilleMontain_Event_OpenDoor
	end


NewMauvilleMontain_Event_OpenDoor::
	setmetatile 6, 5, METATILE_BikeShop_Wall_Top_Left, TRUE
	setmetatile 6, 6, METATILE_BikeShop_Wall_Bottom_Left, TRUE
	setmetatile 7, 5, METATILE_BikeShop_Floor_Shadow_Left, FALSE
	setmetatile 7, 6, METATILE_BikeShop_Floor_Shadow_Left, FALSE
	setmetatile 8, 5, METATILE_BikeShop_Wall_Top_Right, TRUE
	setmetatile 8, 6, METATILE_BikeShop_Wall_Bottom_Right, TRUE
	return

