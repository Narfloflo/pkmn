Route17_MapScripts::
	.byte 0


Route17_Text_CafeSign::
	lock
	msgbox Route17_Text_CafeSign_Text_0
	release
	end


Route17_Text_Biker1::
	trainerbattle_single TRAINER_ISAIAH_2, Route17_Text_Biker1_Text_0, Route17_Text_Biker1_Text_1
	msgbox Route17_Text_Biker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route17_Text_Biker2::
	trainerbattle_single TRAINER_ISAIAH_3, Route17_Text_Biker2_Text_0, Route17_Text_Biker2_Text_1
	msgbox Route17_Text_Biker2_Text_2, MSGBOX_AUTOCLOSE
	end


Route17_Text_Biker3::
	trainerbattle_single TRAINER_ISAIAH_4, Route17_Text_Biker3_Text_0, Route17_Text_Biker3_Text_1
	msgbox Route17_Text_Biker3_Text_2, MSGBOX_AUTOCLOSE
	end


Route17_Text_Biker4::
	trainerbattle_single TRAINER_MARIA_2, Route17_Text_Biker4_Text_0, Route17_Text_Biker4_Text_1
	msgbox Route17_Text_Biker4_Text_2, MSGBOX_AUTOCLOSE
	end


Route17_Text_TriathleteF::
	trainerbattle_single TRAINER_MARIA_3, Route17_Text_TriathleteF_Text_0, Route17_Text_TriathleteF_Text_1
	msgbox Route17_Text_TriathleteF_Text_2, MSGBOX_AUTOCLOSE
	end


Route17_Text_TriathleteM::
	trainerbattle_single TRAINER_MARIA_4, Route17_Text_TriathleteM_Text_0, Route17_Text_TriathleteM_Text_1
	msgbox Route17_Text_TriathleteM_Text_2, MSGBOX_AUTOCLOSE
	end


Route17_Text_RedoBiker::
	lock
	faceplayer
	msgbox Route17_Text_RedoBiker_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route17_Text_RedoBiker_2
Route17_Text_RedoBiker_1:
	release
	end

Route17_Text_RedoBiker_2:
	cleartrainerflag TRAINER_ISAIAH_2
	cleartrainerflag TRAINER_ISAIAH_3
	cleartrainerflag TRAINER_ISAIAH_4
	cleartrainerflag TRAINER_MARIA_2
	cleartrainerflag TRAINER_MARIA_3
	cleartrainerflag TRAINER_MARIA_4
	cleartrainerflag TRAINER_ELLIOT_3
	cleartrainerflag TRAINER_ELLIOT_4
	playse SE_POKENAV_CALL
	waitse
	playse SE_POKENAV_OFF
	waitse
	msgbox Route17_Text_RedoBiker_Text_1
	goto Route17_Text_RedoBiker_1


Route17_Text_CheckBike::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Route17_Text_NoBike
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end


Route17_Text_NoBike::
	lock
	applymovement 8, ExclamationSolo
	waitmovement 0
	msgbox Route17_Text_NoBike_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route17_Move_NoBike
	waitmovement 0
	releaseall
	end


Route17_Move_NoBike:
	walk_up
	step_end

Route17_Text_ThugOnFoot::
	lock
	msgbox Route17_Text_ThugOnFoot_Text_0, MSGBOX_NPC
	end


Route17_Text_CafeSign_Text_0:
	.string "CYCLING ROAD CAFÉ\n"
	.string "“We brew the la cream de la cream\l"
	.string "inside with love!”$"

Route17_Text_Biker1_Text_0:
	.string "Wow wow kid !\nThis place is for adult only !$"

Route17_Text_Biker1_Text_1:
	.string "Outch !\n You are a tough one !$"

Route17_Text_Biker1_Text_2:
	.string "We don't fight in the Café. Yet... It's\n"
	.string "just a question of time before one of\l"
	.string "my boy get pissed about how classy the\l"
	.string "things are inside !$"

Route17_Text_Biker2_Text_0:
	.string "Hey, punk!\nThis route ain't for the weak!$"

Route17_Text_Biker2_Text_1:
	.string "Gah! You're tougher than you look!$"

Route17_Text_Biker2_Text_2:
	.string "Watch out, kid! This route's no walk in\n"
	.string "the park.$"

Route17_Text_Biker3_Text_0:
	.string "Oi, you think you can handle\nthe speed of my BIKE ?$"

Route17_Text_Biker3_Text_1:
	.string "Whoa, slow down!\nYou're too fast for me!$"

Route17_Text_Biker3_Text_2:
	.string "Biking on Route 17 requires speed and\n"
	.string "skill. You've got potential.$"

Route17_Text_Biker4_Text_0:
	.string "Buenos dias kid.\nMeet my friend.\pThey love punching kids !$"

Route17_Text_Biker4_Text_1:
	.string "That's no good !$"

Route17_Text_Biker4_Text_2:
	.string "You've been to the Café already ? Hard\n"
	.string "to sip some liquor when you can't get\l"
	.string "off your bike ?$"

Route17_Text_TriathleteF_Text_0:
	.string "Looking for a challenge, huh?\nLet's battle!$"

Route17_Text_TriathleteF_Text_1:
	.string "Impressive!\nYou've got some serious skills.$"

Route17_Text_TriathleteF_Text_2:
	.string "Since they reduce the slope here, it's\n"
	.string "easier to ride around.$"

Route17_Text_TriathleteM_Text_0:
	.string "Ready for a triathlon battle?\nLet's dive in!$"

Route17_Text_TriathleteM_Text_1:
	.string "You're a strong competitor!\nGreat race!$"

Route17_Text_TriathleteM_Text_2:
	.string "The POLICE made quite the effort to\n"
	.string "tame the GANGS of BIKERS. It became\l"
	.string "safe to take your BIKE here !$"

Route17_Text_RedoBiker_Text_0:
	.string "Hold on ! I saw you beating my friends !\n"
	.string "I'm not really good at POKéMON battles.\l"
	.string "Anyway. If you want I can call them for\l"
	.string "a rematch ?$"

Route17_Text_RedoBiker_Text_1:
	.string "Go on and kick their ass again. That will\n"
	.string "teach them to not mess with the kids.\l"
	.string "(What is this world...)$"

Route17_Text_NoBike_Text_0:
	.string "Hey kid!\n"
	.string "Get back on your BIKE or you'll get\l"
	.string "hurt !\l"
	.string "Geez, I swear kids nowadays...$"

Route17_Text_ThugOnFoot_Text_0:
	.string "It's a pedestrian area here.\nYou can leave your bike and get inside\lthe café without your bike.$"
