LakeofRage_MapScripts::
	.byte 0


LakeofRage_Text_FishingGuruSign::
	lock
	faceplayer
	msgbox LakeofRage_Text_FishingGuruSign_Text_0
	release
	end


LakeofRage_Text_OldMan::
	msgbox LakeofRage_Text_OldMan_Text_0, MSGBOX_NPC
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
	goto_if_set FLAG_TEMP_A, LakeofRage_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, LakeofRage_Text_Fisherman_Text_1, LakeofRage_Text_Fisherman_Text_2
	msgbox LakeofRage_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_A
	cleartrainerflag TRAINER_DYLAN_2
	end

LakeofRage_Text_Fisherman_2:
	msgbox LakeofRage_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


LakeofRage_Text_Fisherman2::
	goto_if_set FLAG_TEMP_B, LakeofRage_Text_Fisherman2_2
	trainerbattle_single TRAINER_DYLAN_2, LakeofRage_Text_Fisherman2_Text_1, LakeofRage_Text_Fisherman2_Text_2
	msgbox LakeofRage_Text_Fisherman2_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_B
	cleartrainerflag TRAINER_DYLAN_2
	end

LakeofRage_Text_Fisherman2_2:
	msgbox LakeofRage_Text_Fisherman2_Text_0, MSGBOX_AUTOCLOSE
	end


LakeofRage_Text_FishingGuruSign_Text_0:
	.string "Fishing Guru's HOUSE\p"
	.string "We except a list of RECORDS here!$"

LakeofRage_Text_OldMan_Text_0:
	.string "Hahaha!\pThe MAGIKARP are bitting!$"

LakeofRage_Text_Man_Text_0:
	.string "There is a strange guy inside this\n"
	.string "house. He says things like HIDDEN\l"
	.string "POWER or stuff like that…$"

LakeofRage_Text_Lass_Text_0:
	.string "I'm pretty sure you can encounter\n"
	.string "GYARADOS in the water. Legends says\l"
	.string "that. But I can only see MAGIKARP…$"

LakeofRage_Text_Camper_Text_0:
	.string "I heard that there were a real place\n"
	.string "here with houses and stuff. But some\l"
	.string "GYARADOS went mad and destroyed this\l"
	.string "place. The RAIN that came after flood\l"
	.string "the place and create the LAKE OF RAGE.\l"
	.string "Maybe if we could DIVE we could see\l"
	.string "some ruins…$"

LakeofRage_Text_Fisherman_Text_0:
	.string "OK I have some good POKéMON. But now I\ncan't catch any good one…$"

LakeofRage_Text_Fisherman_Text_1:
	.string "No matter what I do, I sometime caught\nalways the same POKéMON…$"

LakeofRage_Text_Fisherman_Text_2:
	.string "It's tragic but that's life…$"

LakeofRage_Text_Fisherman_Text_3:
	.string "OK I have some good POKéMON. But now I\n"
	.string "can't catch any good one…$"

LakeofRage_Text_Fisherman2_Text_0:
	.string "I won't lose as an angler! I catch\nPOKéMON all day.$"

LakeofRage_Text_Fisherman2_Text_1:
	.string "Hey there are only MAGIKARP here!$"

LakeofRage_Text_Fisherman2_Text_2:
	.string "I might be an expert angler, but I\nstink as a POKéMON TRAINER…$"

LakeofRage_Text_Fisherman2_Text_3:
	.string "I won't lose as an angler! I catch\n"
	.string "POKéMON all day.$"
