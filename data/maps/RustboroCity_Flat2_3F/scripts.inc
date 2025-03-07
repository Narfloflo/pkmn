RustboroCity_Flat2_3F_MapScripts::
	.byte 0

RustboroCity_Flat2_3F_EventScript_DevonEmployee::
	msgbox RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones, MSGBOX_NPC
	end

RustboroCity_Flat2_3F_EventScript_Woman::
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_NPC
	end

RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones:
	.string "DEVON's PRESIDENT likes to collect\n"
	.string "rare stones.$"

RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
	.string "I think the PRESIDENT's son also\n"
	.string "collects rare stones.$"

RustboroCity_Flat2_3F_Text_Janitor::
	lock
	faceplayer
	msgbox RustboroCity_Flat2_3F_Text_Janitor_Text_0
	release
	end


RustboroCity_Flat2_3F_Text_Janitor_Text_0:
	.string "Be careful around kid, I just mop\n"
	.string "the floor, it's still slippery.$"
