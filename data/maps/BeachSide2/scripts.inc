BeachSide2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BeachSide2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BeachSide2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8003, TIME_NIGHT
	goto_if_eq BeachSide2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8003, TIME_MIDNIGHT
	goto_if_eq BeachSide2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BeachSide2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	call_if_set FLAG_TEMP_1, OlivineCity_Event_RemoveObject
	return


OlivineCity_Event_RemoveObject::
	removeobject 11
	end


OlivineCity_Text_SignHarbour::
	lock
	msgbox OlivineCity_Text_SignHarbour_Text_0
	release
	end


OlivineCity_Text_LighthouseSailor::
	lock
	faceplayer
	msgbox OlivineCity_Text_LighthouseSailor_Text_0
	release
	end


OlivineCity_Text_LighthouseSign::
	lock
	msgbox OlivineCity_Text_LighthouseSign_Text_0
	release
	end


OlivineCity_Text_PokedexBoy::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokedexBoy_Text_0
	release
	end


OlivineCity_Text_SignCity::
	lock
	msgbox OlivineCity_Text_SignCity_Text_0
	release
	end


OlivineCity_Text_Artist::
	lock
	faceplayer
	msgbox OlivineCity_Text_Artist_Text_0
	release
	end


OlivineCity_Text_OldHouse::
	lock
	faceplayer
	msgbox OlivineCity_Text_OldHouse_Text_0
	release
	end


OlivineCity_Text_OldMan::
	lock
	faceplayer
	msgbox OlivineCity_Text_OldMan_Text_0
	release
	end


OlivineCity_Text_Maniac::
	lock
	faceplayer
	msgbox OlivineCity_Text_Maniac_Text_0
	release
	end


OlivineCity_Text_LighthouseGuard::
	lock
	faceplayer
	msgbox OlivineCity_Text_LighthouseGuard_Text_0
	release
	end


OlivineCity_Text_Woman::
	lock
	faceplayer
	checktrainerflag TRAINER_NORMAN_2
	goto_if 1, OlivineCity_Text_Woman_2
	msgbox OlivineCity_Text_Woman_Text_1
OlivineCity_Text_Woman_1:
	release
	end

OlivineCity_Text_Woman_2:
	msgbox OlivineCity_Text_Woman_Text_0
	goto OlivineCity_Text_Woman_1


OlivineCity_Text_Girl::
	lock
	faceplayer
	checktrainerflag TRAINER_NORMAN_2
	goto_if 1, OlivineCity_Text_Girl_2
	msgbox OlivineCity_Text_Girl_Text_1
OlivineCity_Text_Girl_1:
	release
	end

OlivineCity_Text_Girl_2:
	msgbox OlivineCity_Text_Girl_Text_0
	goto OlivineCity_Text_Girl_1


OlivineCity_Text_Fisherman::
	lock
	faceplayer
	msgbox OlivineCity_Text_Fisherman_Text_0
	release
	end


OlivineCity_Text_Cook::
	lock
	faceplayer
	message OlivineCity_Text_Cook_Text_0
	waitmessage
	pokemart OlivineCityCook
	msgbox OlivineCity_Text_Cook_Text_1
	release
	return


	.align 2
OlivineCityCook:
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_NONE

OlivineCity_Text_MilkGuy::
	lock
	faceplayer
	message OlivineCity_Text_MilkGuy_Text_0
	waitmessage
	pokemart OlivineCityMilker
	msgbox OlivineCity_Text_Cook_Text_1
	release
	return


	.align 2
OlivineCityMilker:
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

OlivineCity_JasmineHouse::
	msgbox OlivineCity_JasmineHouse_Text_0, MSGBOX_NPC
	return


OlivineCity_Text_SignHarbour_Text_0:
	.string "OLIVINE PORT\p"
	.string "FAST SHIP PIER$"

OlivineCity_Text_LighthouseSailor_Text_0:
	.string "Dark roads are dangerouse at night.\p"
	.string "But in the pitchblack of night, the sea\n"
	.string "is even more treacherous!\p"
	.string "Without the beacon of the LIGHTHOUSE\n"
	.string "to guide it, no ship can sail.$"

OlivineCity_Text_LighthouseSign_Text_0:
	.string "OLIVINE LIGHTHOUSE\n"
	.string "Also known as the GLITTER LIGHTHOUSE$"

OlivineCity_Text_PokedexBoy_Text_0:
	.string "Wow, you have a POKéDEX!\n"
	.string "That is just so awesome.$"

OlivineCity_Text_SignCity_Text_0:
	.string "OLIVINE CITY\p"
	.string "The Port Closest to Foreign Lands$"

OlivineCity_Text_Artist_Text_0:
	.string "I love the sea at sunset! I can paint it\n"
	.string "all day long.$"

OlivineCity_Text_OldHouse_Text_0:
	.string "{PLAYER} : I used to live here... SIGH !\p"
	.string "What it has already been sold ?!$"

OlivineCity_Text_OldMan_Text_0:
	.string "Hello {PLAYER} ! It's been a while\n"
	.string "since you move in HOENN. How are you ?$"

OlivineCity_Text_Maniac_Text_0:
	.string "Hummm yes? Oh you want to have access\n"
	.string "to this GYM? Sorry but it's still under\l"
	.string "construction.$"

OlivineCity_Text_LighthouseGuard_Text_0:
	.string "Sorry but this area is restricted to\n"
	.string "authorized crew only.$"

OlivineCity_Text_Woman_Text_0:
	.string "{PLAYER}! JASMINE told me you\n"
	.string "defeated her? She said she still has a\l"
	.string "long way to become a GYM LEADER. But\l"
	.string "she won't give up!$"

OlivineCity_Text_Woman_Text_1:
	.string "Hey {PLAYER} it's been a while ! You\n"
	.string "know that JASMINE has been training\l"
	.string "really hard since you moved ? She\l"
	.string "missed you really much...$"

OlivineCity_Text_Girl_Text_0:
	.string "{PLAYER} you went to MONT MORTAR\n"
	.string "already?! What you defeat JASMINE?!\l"
	.string "Our plan was perfect! You must be\l"
	.string "really tough!$"

OlivineCity_Text_Girl_Text_1:
	.string "{PLAYER} you are back ! JASMINE is\n"
	.string "training in MONT MORTAR, I heard. You\l"
	.string "should try to meet her there !$"

OlivineCity_Text_Fisherman_Text_0:
	.string "Hmpfff! I went to the Restaurant and\n"
	.string "ate too much. I feel like a SNORLAX;\p"
	.string "I need to REST.$"

OlivineCity_Text_Cook_Text_0:
	.string "Hey there, I sell a few snacks.$"

OlivineCity_Text_Cook_Text_1:
	.string "Please come again!$"

OlivineCity_Text_MilkGuy_Text_0:
	.string "Hey there, I sell some MILK!$"

OlivineCity_JasmineHouse_Text_0:
	.string "JASMINE's House$"
