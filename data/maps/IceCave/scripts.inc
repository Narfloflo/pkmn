IceCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, IceCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IceCave_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_UNUSED_0x025, IceCave_Event_OpenDoor
	end


IceCave_Event_OpenDoor::
	setmetatile 7, 12, METATILE_General_CaveEntrance_Bottom, FALSE
	setmetatile 7, 11, METATILE_General_CaveEntrance_Top, FALSE
	return

