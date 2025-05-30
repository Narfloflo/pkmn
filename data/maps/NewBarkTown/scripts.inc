NewBarkTown_MapScripts::
	.byte 0


NewBarkTown_Text_Sign::
	lock
	faceplayer
	msgbox NewBarkTown_Text_Sign_Text_0
	release
	end


NewBarkTown_Text_ElmHouse::
	lock
	faceplayer
	msgbox NewBarkTown_Text_ElmHouse_Text_0
	release
	end


NewBarkTown_Text_GoldHouse::
	lock
	faceplayer
	msgbox NewBarkTown_Text_GoldHouse_Text_0
	release
	end


NewBarkTown_Text_Lab::
	lock
	faceplayer
	msgbox NewBarkTown_Text_Lab_Text_0
	release
	end


NewBarkTown_Text_GoldFriend::
	lock
	faceplayer
	msgbox NewBarkTown_Text_GoldFriend_Text_0
	release
	end


NewBarkTown_Text_LittleGirl::
	lock
	faceplayer
	msgbox NewBarkTown_Text_LittleGirl_Text_0
	face_original_direction
	release
	end


NewBarkTown_Text_LittleBoy::
	lock
	faceplayer
	msgbox NewBarkTown_Text_LittleBoy_Text_0
	release
	end


NewBarkTown_Text_Sign_Text_0:
	.string "NEW BARK TOWN\p"
	.string "The Town where the Winds of a New\n"
	.string "Beginning Blow$"

NewBarkTown_Text_ElmHouse_Text_0:
	.string "ELM's HOUSE$"

NewBarkTown_Text_GoldHouse_Text_0:
	.string "GOLD's HOUSE$"

NewBarkTown_Text_Lab_Text_0:
	.string "ELM POKéMON LAB$"

NewBarkTown_Text_GoldFriend_Text_0:
	.string "Me and my friend GOLD are going to be\n"
	.string "the next CHAMPION of the REGION !$"

NewBarkTown_Text_LittleGirl_Text_0:
	.string "..............\nI'm just shy...\l..............$"

NewBarkTown_Text_LittleBoy_Text_0:
	.string "If your POKéMON are injured, I think\nyou can heal them in ELM's LAB.$"
