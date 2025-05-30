PacifidlogDungeon_Underwater_MapScripts::
	.byte 0


EcruteakCianwood_Text_OldMan::
	lock
	faceplayer
	msgbox EcruteakCianwood_Text_OldMan_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakCianwood_Text_OldMan_2
	msgbox EcruteakCianwood_Text_OldMan_Text_2
EcruteakCianwood_Text_OldMan_1:
	release
	end

EcruteakCianwood_Text_OldMan_2:
	msgbox EcruteakCianwood_Text_OldMan_Text_1
	goto EcruteakCianwood_Text_OldMan_1


EcruteakCianwood_Text_LittleGirl::
	lock
	faceplayer
	msgbox EcruteakCianwood_Text_LittleGirl_Text_0
	release
	end


EcruteakCianwood_Text_Man1::
	lock
	faceplayer
	msgbox EcruteakCianwood_Text_Man1_Text_0
	release
	end


EcruteakCianwood_Text_Man2::
	msgbox EcruteakCianwood_Text_Man2_Text_0, MSGBOX_NPC
	end


EcruteakCianwood_Text_Kimono::
	msgbox EcruteakCianwood_Text_Kimono_Text_0, MSGBOX_NPC
	end


EcruteakCianwood_Text_ItemfinderMan::
	msgbox EcruteakCianwood_Text_ItemfinderMan_Text_0, MSGBOX_NPC
	end


EcruteakCianwood_Text_Kid::
	msgbox EcruteakCianwood_Text_Kid_Text_0, MSGBOX_NPC
	end


EcruteakCianwood_Text_Monk::
	msgbox EcruteakCianwood_Text_Monk_Text_0, MSGBOX_NPC
	end


EcruteakCianwood_Text_OldMan_Text_0:
	.string "Hello kiddo. You did come here because\n"
	.string "you wanted to know more about\l"
	.string "ECRUTEAK CITY History ?$"

EcruteakCianwood_Text_OldMan_Text_1:
	.string "Ok, listen then :\n"
	.string "In ECRUTEAK, there were two towers.\l"
	.string "Each tower was the roost of powerful\l"
	.string "flying POKéMON. But one of the towers\l"
	.string "burned to the ground. The two POKéMON\l"
	.string "haven't been seen since... ECRUTEAK was\l"
	.string "also home to three POKéMON that raced\l"
	.string "around the town. They were said to\l"
	.string "have been born of water, lightning and\l"
	.string "fire. But they could not contain their\l"
	.string "excessive poser. So they say the three\l"
	.string "ran like the wind off into the\l"
	.string "grassland.$"

EcruteakCianwood_Text_OldMan_Text_2:
	.string "Humm I see. Well GET OUT MY HOUSE !$"

EcruteakCianwood_Text_LittleGirl_Text_0:
	.string "Grandpa knows a lot about ECRUTEAK\n"
	.string "History. But he is also really grumpy.$"

EcruteakCianwood_Text_Man1_Text_0:
	.string "Is there a POKéMON this big that can\n"
	.string "use the BELL TOWER as a perch ? If it's\l"
	.string "the case, it should be strong !$"

EcruteakCianwood_Text_Man2_Text_0:
	.string "I will always cherish the time I spent\nwith POKéMON.$"

EcruteakCianwood_Text_Kimono_Text_0:
	.string "Fashions change over the years, but\nECRUTEAK remains as traditional as\lever.$"

EcruteakCianwood_Text_ItemfinderMan_Text_0:
	.string "I wish I had an object to find objects\nlying on the ground.\lWhat? You have that? An ITEMFINDER?\lWell, I need to build that for me!$"

EcruteakCianwood_Text_Kid_Text_0:
	.string "A TV program shows that the LAKE OF\nRAGE is full of MAGIKARP.\lBut sometime a GYARADOS can appear.\lI wish I could see that!$"

EcruteakCianwood_Text_Monk_Text_0:
	.string "Hello child. I hope you'll behave well\nwith your POKéMON and cherish them.\lAmitabha.$"
