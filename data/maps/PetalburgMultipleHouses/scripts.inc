PetalburgMultipleHouses_MapScripts::
	.byte 0


PetalburgMultipleHouses_Text_OldMan::
	lock
	faceplayer
	msgbox PetalburgMultipleHouses_Text_OldMan_Text_0
	release
	end


PetalburgMultipleHouses_Text_Youngster::
	lock
	faceplayer
	msgbox PetalburgMultipleHouses_Text_Youngster_Text_0
	release
	end


PetalburgMultipleHouses_Text_PokefanF::
	lock
	faceplayer
	msgbox PetalburgMultipleHouses_Text_PokefanF_Text_0
	applymovement 1, PetalburgMultipleHouses_Move_Youngster
	waitmovement 1
	msgbox PetalburgMultipleHouses_Text_PokefanF_Text_1
	release
	end


PetalburgMultipleHouses_Move_Youngster:
	emote_exclamation_mark
	face_up
	step_end

PetalburgMultipleHouses_Text_Girl::
	lock
	faceplayer
	msgbox PetalburgMultipleHouses_Text_Girl_Text_0
	release
	end


PetalburgMultipleHouses_Trigger_Intruder::
	lock
	faceplayer
	applymovement 5, PetalburgMultipleHouses_Move_Aroma
	waitmovement 5
	msgbox PetalburgMultipleHouses_Trigger_Intruder_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMultipleHouses_Move_Player
	waitmovement 0
	release
	end


PetalburgMultipleHouses_Move_Aroma:
	emote_exclamation_mark
	face_down
	step_end

PetalburgMultipleHouses_Move_Player:
	walk_fast_down
	step_end

PetalburgMultipleHouses_Trigger_Stairs::
	lock
	faceplayer
	msgbox PetalburgMultipleHouses_Trigger_Stairs_Text_0, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMultipleHouses_Move_Player
	waitmovement 0
	release
	end


PetalburgMultipleHouses_Text_OldMan_Text_0:
	.string "When I was younger, I used to be a\n"
	.string "really good miner!\l"
	.string "I mined 102 tons of coal in less\l"
	.string "than 6 hours!\l"
	.string "A record that a MACHAMP cannot\l"
	.string "achieve easily!$"

PetalburgMultipleHouses_Text_Youngster_Text_0:
	.string "My mom want me to go to SCHOOL.\n"
	.string "But I have a bunch of ZIGZAGOON,\l"
	.string "so I should be fine in the wild\l"
	.string "right?$"

PetalburgMultipleHouses_Text_PokefanF_Text_0:
	.string "My son is dumb...$"

PetalburgMultipleHouses_Text_PokefanF_Text_1:
	.string "He think he is safe with his\n"
	.string "lvl.5 team...\l"
	.string "But he don't know that he will be\l"
	.string "crush by some strategist TRAINERS\l"
	.string "who will build a team in order to\l"
	.string "be the very best!$"

PetalburgMultipleHouses_Text_Girl_Text_0:
	.string "Some of my friends got a TM to\n"
	.string "create a SECRET BASE!\l"
	.string "I'm so jealous!$"

PetalburgMultipleHouses_Trigger_Intruder_Text_0:
	.string "Wow wow!\n"
	.string "What are you doing?\l"
	.string "Your mom didn't taught you to know\l"
	.string "on a door before entering?\l"
	.string "Get out!$"

PetalburgMultipleHouses_Trigger_Stairs_Text_0:
	.string "I better not go upstairs...$"
