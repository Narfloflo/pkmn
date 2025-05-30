LakeofRage_MapScripts::
	.byte 0


LakeofRage_Text_FishingGuruSign::
	lock
	faceplayer
	msgbox LakeofRage_Text_FishingGuruSign_Text_0
	release
	end


LakeofRage_Text_OldMan::
	lock
	faceplayer
	msgbox LakeofRage_Text_OldMan_Text_0
	release
	end


LakeofRage_Text_Man::
	lock
	faceplayer
	msgbox LakeofRage_Text_Man_Text_0
	release
	end


LakeofRage_Text_Lass::
	lock
	faceplayer
	msgbox LakeofRage_Text_Lass_Text_0
	release
	end


LakeofRage_Text_Camper::
	lock
	faceplayer
	msgbox LakeofRage_Text_Camper_Text_0
	release
	end


LakeofRage_Text_Fisherman::
	goto_if_set FLAG_TEMP_A, LakeofRage_Text_Fisherman_1
	call_if_unset FLAG_TEMP_A, LakeofRage_Text_FishermanFight
	return

LakeofRage_Text_Fisherman_1:
	msgbox LakeofRage_Text_Fisherman_Text_0, MSGBOX_NPC
	end


LakeofRage_Text_FishermanFight::
	trainerbattle_single TRAINER_DYLAN_2, LakeofRage_Text_FishermanFight_Text_0, LakeofRage_Text_FishermanFight_Text_1
	setflag FLAG_TEMP_A
	cleartrainerflag TRAINER_DYLAN_2
	end


LakeofRage_Text_Fisherman2::
	call_if_unset FLAG_TEMP_B, LakeofRage_Text_FishermanFight2
	goto_if_set FLAG_TEMP_B, LakeofRage_Text_Fisherman2_1
	return

LakeofRage_Text_Fisherman2_1:
	msgbox LakeofRage_Text_Fisherman2_Text_0, MSGBOX_NPC
	end


LakeofRage_Text_FishermanFight2::
	trainerbattle_single TRAINER_DYLAN_2, LakeofRage_Text_FishermanFight2_Text_0, LakeofRage_Text_FishermanFight2_Text_1
	setflag FLAG_TEMP_B
	cleartrainerflag TRAINER_DYLAN_2
	end


LakeofRage_Text_FishingGuruSign_Text_0:
	.string "Fishing Guru's HOUSE\p"
	.string "We except a list of RECORDS here !$"

LakeofRage_Text_OldMan_Text_0:
	.string "Hahaha ! The MAGIKARP are bitting !$"

LakeofRage_Text_Man_Text_0:
	.string "There is a strange guy inside this\n"
	.string "house. He says things like HIDDEN\l"
	.string "POWER or stuff like that...$"

LakeofRage_Text_Lass_Text_0:
	.string "I'm pretty sure you can encounter\n"
	.string "GYARADOS in the water. Legends says\l"
	.string "that. But I can only see MAGIKARP...$"

LakeofRage_Text_Camper_Text_0:
	.string "I heard that there were a real place\n"
	.string "here with houses and stuff. But some\l"
	.string "GYARADOS went mad and destroyed this\l"
	.string "place. The RAIN that came after flood\l"
	.string "the place and create the LAKE OF RAGE.\l"
	.string "Maybe if we could DIVE we could see\l"
	.string "some ruins...$"

LakeofRage_Text_Fisherman_Text_0:
	.string "Yeah I used SURF to get here.\n"
	.string "Like you did actually no?$"

LakeofRage_Text_FishermanFight_Text_0:
	.string "How did I get here?\nWell...\lMagic?$"

LakeofRage_Text_FishermanFight_Text_1:
	.string "I'm drowning!$"

LakeofRage_Text_Fisherman2_Text_0:
	.string "I know I know...$"

LakeofRage_Text_FishermanFight2_Text_0:
	.string "Wanna see my fresh fishes ?$"

LakeofRage_Text_FishermanFight2_Text_1:
	.string "Plouff !$"
