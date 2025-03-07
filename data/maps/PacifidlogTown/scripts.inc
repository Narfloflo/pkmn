PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "See, isn't it neat?\n"
	.string "These houses are on water!\p"
	.string "I was born here!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"

PacifidlogTown_Text_TownSign:
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"

PacifidlogTown_Text_Boy::
	lock
	faceplayer
	msgbox PacifidlogTown_Text_Boy_Text_0
	release
	end


PacifidlogTown_Text_Fisherman::
	lock
	faceplayer
	msgbox PacifidlogTown_Text_Fisherman_Text_0
	release
	end


PacifidlogTown_Text_Vendor::
	lock
	faceplayer
	message PacifidlogTown_Text_Vendor_Text_0
	waitmessage
	pokemart PacifidlogTown_Vendor
	msgbox PacifidlogTown_Text_Vendor_Text_1
	release
	end


	.align 2
PacifidlogTown_Vendor:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

PacifidlogTown_Text_Boy_Text_0:
	.string "Have you seen the DEEP WATERS all\n"
	.string "around? I wonder what is inside.$"

PacifidlogTown_Text_Fisherman_Text_0:
	.string "A long time ago PACIFIDLOG was\nconnected to the lands.\lBut one day a big earthquake\lobliterated everything around here.\lKABOOOM!!!\lAnd now we live on the sea.\lI'm pretty sure the rest of the old\lPACIFIDLOG must lie somewhere.\lBut hey! I'm just a FISHERMAN, what do\lI know!$"

PacifidlogTown_Text_Vendor_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

PacifidlogTown_Text_Vendor_Text_1:
	.string "Please come again!$"
