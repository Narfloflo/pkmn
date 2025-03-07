CianwoodCity_MapScripts::
	.byte 0


CianwoodCity_Text_WarriorF::
	lock
	faceplayer
	msgbox CianwoodCity_Text_WarriorF_Text_0
	release
	end


CianwoodCity_Text_Fisherman::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Fisherman_Text_0
	applymovement 4, CianwoodCity_Text_Fisherman_Move
	waitmovement 0
	release
	end


CianwoodCity_Text_Fisherman_Move:
	face_original_direction
	end
	step_end

CianwoodCity_Text_Elvis::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Elvis_Text_0
	release
	end


CianwoodCity_Text_Blackbelt::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Blackbelt_Text_0
	release
	end


CianwoodCity_Text_ChuckWife::
	lock
	faceplayer
	msgbox CianwoodCity_Text_ChuckWife_Text_0
	release
	end


CianwoodCity_Text_Man::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Man_Text_0
	release
	end


CianwoodCity_Text_SignPhotografer::
	lock
	msgbox CianwoodCity_Text_SignPhotografer_Text_0
	release
	end


CianwoodCity_Text_CitySign::
	lock
	msgbox CianwoodCity_Text_CitySign_Text_0
	release
	end


CianwoodCity_Text_CityGym::
	lock
	msgbox CianwoodCity_Text_CityGym_Text_0
	release
	end


CianwoodCity_Text_Pharmacy::
	lock
	msgbox CianwoodCity_Text_Pharmacy_Text_0
	release
	end


CianwoodCity_Text_WarriorF_Text_0:
	.string "It's the cave where we all train to\nget stronger.\lYeah.\lEven the kids!$"

CianwoodCity_Text_Fisherman_Text_0:
	.string "I spent the whole day fishing. The\n"
	.string "water's calming, and the fish are biting\l"
	.string "today!$"

CianwoodCity_Text_Elvis_Text_0:
	.string "We should build a FERRY DOCKS. This\n"
	.string "island is too secluded. We only have a\l"
	.string "PHARMACY and some guy taking pictures.$"

CianwoodCity_Text_Blackbelt_Text_0:
	.string "{PLAYER} : I guess the GYM is closed\n"
	.string "right ?\p"
	.string "BLACK BELT : Yeah the GYM LEADER CHUCK\n"
	.string "is Training in the cave above ! He got\l"
	.string "smash really bad by his old disciple,\l"
	.string "BLUE.$"

CianwoodCity_Text_ChuckWife_Text_0:
	.string "My husband is taking care of his body\n"
	.string "and I'm happy. I'm afraid He get plump\l"
	.string "with the years...$"

CianwoodCity_Text_Man_Text_0:
	.string "Have you seen the islands eastward ? We\n"
	.string "used to sent the bad kids there. And\l"
	.string "you know what? I love the old ways, so\l"
	.string "I sent me kid away. Hahahahaha !$"

CianwoodCity_Text_SignPhotografer_Text_0:
	.string "CIANWOOD CITY PHOTOGRAPHER$"

CianwoodCity_Text_CitySign_Text_0:
	.string "CIANWOOD CITY\n"
	.string "A Port Surrounded by Rough Seas$"

CianwoodCity_Text_CityGym_Text_0:
	.string "CIANWOOD CITY\n"
	.string "POKéMON GYM\l"
	.string "Leader: CHUCK\l"
	.string "His Roaring Fists Do the Talking$"

CianwoodCity_Text_Pharmacy_Text_0:
	.string "500 Years of Tradition\n"
	.string "CIANWOD CITY PHARMACY\l"
	.string "We await you medicinal queries$"
