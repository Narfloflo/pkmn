RustboroCity_SchoolLobby_MapScripts::
	.byte 0


RustboroCitySchoolLobby_Text_Teacher::
	msgbox RustboroCitySchoolLobby_Text_Teacher_Text_0, MSGBOX_NPC
	end


RustboroCitySchoolLobby_Text_Lass::
	msgbox RustboroCitySchoolLobby_Text_Lass_Text_0, MSGBOX_NPC
	end


RustboroCitySchoolLobby_Text_SchoolKidF::
	msgbox RustboroCitySchoolLobby_Text_SchoolKidF_Text_0, MSGBOX_NPC
	end


RustboroCitySchoolLobby_Text_Youngster::
	lock
	msgbox RustboroCitySchoolLobby_Text_Youngster_Text_0
	release
	end


RustboroCitySchoolLobby_Text_LassJR::
	lock
	msgbox RustboroCitySchoolLobby_Text_LassJR_Text_0
	release
	end


RustboroCitySchoolLobby_Trigger_SchoolKidM::
	lock
	applymovement 6, RustboroCitySchoolLobby_Move_SchoolKidM
	waitmovement 6
	msgbox RustboroCitySchoolLobby_Trigger_SchoolKidM_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCitySchoolLobby_Move_Player
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


RustboroCitySchoolLobby_Move_Player:
	walk_down
	step_end

RustboroCitySchoolLobby_Move_SchoolKidM:
	face_original_direction
	jump_in_place_left
	step_end

RustboroCitySchoolLobby_Text_SchoolKidM::
	lock
	faceplayer
	msgbox RustboroCitySchoolLobby_Text_SchoolKidM_Text_0
	release
	end


RustboroCitySchoolLobby_Text_ClassSign::
	lock
	msgbox RustboroCitySchoolLobby_Text_ClassSign_Text_0
	release
	end


RustboroCitySchoolLobby_Text_Teacher_Text_0:
	.string "The stairs lead to the ADMINISTRATIVE\nfloor.\lIt is obviously forbidden for you and\levery students.$"

RustboroCitySchoolLobby_Text_Lass_Text_0:
	.string "I can't wait to study every forms of\nPOKéMON there are.\lI heard that in some REGIONS a same\lspecies have a different form than our.$"

RustboroCitySchoolLobby_Text_SchoolKidF_Text_0:
	.string "It's the BREEDING classroom. I heard\nthat a specialist of POKéMON EGGS\lshould come. What's his name again?\lELM I guess?\lI can't wait!$"

RustboroCitySchoolLobby_Text_Youngster_Text_0:
	.string "DRAGON TYPE is the best, except DRAGON\n"
	.string "and ICE MOVES, nothing can harm them!$"

RustboroCitySchoolLobby_Text_LassJR_Text_0:
	.string "Forget DRAGON TYPE. I'm pretty sure\n"
	.string "another TYPE that we don't even know\l"
	.string "can crush these beasts.$"

RustboroCitySchoolLobby_Trigger_SchoolKidM_Text_0:
	.string "Wait! This classroom isn't open yet. We\n"
	.string "can't go inside for the moment.$"

RustboroCitySchoolLobby_Text_SchoolKidM_Text_0:
	.string "This classroom isn't open yet. A\n"
	.string "specialist of POKéBALL crafting should\l"
	.string "intervene. But when...$"

RustboroCitySchoolLobby_Text_ClassSign_Text_0:
	.string "GENERAL TEACHINGS CLASSROOM$"
