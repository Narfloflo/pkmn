Route3_MapScripts::
	.byte 0


Route3_Text_Lass::
	trainerbattle_single TRAINER_DALTON_4, Route3_Text_Lass_Text_0, Route3_Text_Lass_Text_1
	msgbox Route3_Text_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_Youngster::
	trainerbattle_single TRAINER_BERNIE_2, Route3_Text_Youngster_Text_0, Route3_Text_Youngster_Text_1
	msgbox Route3_Text_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_Youngster2::
	trainerbattle_single TRAINER_BERNIE_3, Route3_Text_Youngster2_Text_0, Route3_Text_Youngster2_Text_1
	msgbox Route3_Text_Youngster2_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_Picnicker::
	trainerbattle_single TRAINER_BERNIE_4, Route3_Text_Picnicker_Text_0, Route3_Text_Picnicker_Text_1
	msgbox Route3_Text_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_Camper::
	trainerbattle_single TRAINER_ETHAN_2, Route3_Text_Camper_Text_0, Route3_Text_Camper_Text_1
	msgbox Route3_Text_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_BugCatcher::
	trainerbattle_single TRAINER_ETHAN_3, Route3_Text_BugCatcher_Text_0, Route3_Text_BugCatcher_Text_1
	msgbox Route3_Text_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_Youngster3::
	trainerbattle_single TRAINER_ETHAN_4, Route3_Text_Youngster3_Text_0, Route3_Text_Youngster3_Text_1
	msgbox Route3_Text_Youngster3_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Text_Hiker::
	lock
	faceplayer
	msgbox Route3_Text_Hiker_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route3_Text_Hiker_2
	msgbox Route3_Text_Hiker_Text_2
Route3_Text_Hiker_1:
	release
	end

Route3_Text_Hiker_2:
	playse SE_POKENAV_CALL
	waitse
	playse SE_POKENAV_HANG_UP
	waitse
	cleartrainerflag TRAINER_BERNIE_2
	cleartrainerflag TRAINER_BERNIE_3
	cleartrainerflag TRAINER_BERNIE_4
	cleartrainerflag TRAINER_ETHAN_2
	cleartrainerflag TRAINER_ETHAN_3
	cleartrainerflag TRAINER_ETHAN_4
	msgbox Route3_Text_Hiker_Text_1
	goto Route3_Text_Hiker_1


Route3_Text_MtMoonSign::
	lock
	msgbox Route3_Text_MtMoonSign_Text_0
	release
	end


Route3_Text_RouteSign::
	lock
	msgbox Route3_Text_RouteSign_Text_0
	release
	end


Route3_Text_Lass_Text_0:
	.string "Hey what do you want, my picture ?$"

Route3_Text_Lass_Text_1:
	.string "Oh no...$"

Route3_Text_Lass_Text_2:
	.string "Stop staring at me, I don't like that.$"

Route3_Text_Youngster_Text_0:
	.string "I LOVE SHORTS !!!!$"

Route3_Text_Youngster_Text_1:
	.string "I DON'T WANT TO WEAR JEANS !$"

Route3_Text_Youngster_Text_2:
	.string "In a few years I'll open a shop to sell\n"
	.string "shorts. It will be called SHORTS !$"

Route3_Text_Youngster2_Text_0:
	.string "Hop hop, you have some minutes for a fight !$"

Route3_Text_Youngster2_Text_1:
	.string "Ah ! I'm out of here now...$"

Route3_Text_Youngster2_Text_2:
	.string "Wilds POKéMON are weaker than POKéMON\n"
	.string "own by TRAINERS.$"

Route3_Text_Picnicker_Text_0:
	.string "Are you in a hurry ?$"

Route3_Text_Picnicker_Text_1:
	.string "Oh my ARCEUS...$"

Route3_Text_Picnicker_Text_2:
	.string "MT. MOON is just a few step ahead. BROCK\n"
	.string "is leading an investigation there : He\l"
	.string "is looking for FOSSILS !$"

Route3_Text_Camper_Text_0:
	.string "Hey, you look like a tough trainer!$"

Route3_Text_Camper_Text_1:
	.string "But I'm tough too...$"

Route3_Text_Camper_Text_2:
	.string "Even though I lost, I'll continue my\n"
	.string "training !$"

Route3_Text_BugCatcher_Text_0:
	.string "I love BUG Pokémon!\nLet's see which ones are stronger!$"

Route3_Text_BugCatcher_Text_1:
	.string "My BUG Pokémon need more training!$"

Route3_Text_BugCatcher_Text_2:
	.string "Maybe I should catch more BUG Pokémon\n"
	.string "to build a stronger team !$"

Route3_Text_Youngster3_Text_0:
	.string "Hey, do you know what?\nI saw a RATTATA in the grass!$"

Route3_Text_Youngster3_Text_1:
	.string "Oh no! My RATTATA TEAM lost?!$"

Route3_Text_Youngster3_Text_2:
	.string "I have to train more and become the\n"
	.string "greatest POKéMON TRAINER !$"

Route3_Text_Hiker_Text_0:
	.string "I'm not a TRAINER just a happy HICKER,\n"
	.string "and totally not from the HIKERS club !\l"
	.string "Huh you want me to convince all the\l"
	.string "TRAINERS to fight you again ?$"

Route3_Text_Hiker_Text_1:
	.string "Well it's done. It's a great power we the\n"
	.string "HIKERS MAFI... I mean a simple HIKER\l"
	.string "wandering can do.$"

Route3_Text_Hiker_Text_2:
	.string "Well if you change your mind, I'm right\n"
	.string "here !$"

Route3_Text_MtMoonSign_Text_0:
	.string "MT. MOON entrance$"

Route3_Text_RouteSign_Text_0:
	.string "ROUTE 3\n"
	.string "PEWTER CITY - MT. MOON$"
