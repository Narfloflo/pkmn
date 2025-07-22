Route42_MapScripts::
	.byte 0


Route42_Text_Fisherman::
	goto_if_set FLAG_TEMP_1, Route42_Text_Fisherman_2
	trainerbattle_single TRAINER_DYLAN_2, Route42_Text_Fisherman_Text_1, Route42_Text_Fisherman_Text_2
	msgbox Route42_Text_Fisherman_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_TEMP_1
	cleartrainerflag TRAINER_DYLAN_2
	end

Route42_Text_Fisherman_2:
	msgbox Route42_Text_Fisherman_Text_0, MSGBOX_AUTOCLOSE
	end


Route42_Text_Monk::
	lock
	faceplayer
	msgbox Route42_Text_Monk_Text_0
	release
	end


Route42_Text_Pokemaniac::
	trainerbattle_single TRAINER_ERNEST_3, Route42_Text_Pokemaniac_Text_0, Route42_Text_Pokemaniac_Text_1
	msgbox Route42_Text_Pokemaniac_Text_2, MSGBOX_NPC
	end


Route42_Text_Hiker::
	trainerbattle_single TRAINER_ERNEST_4, Route42_Text_Hiker_Text_0, Route42_Text_Hiker_Text_1
	msgbox Route42_Text_Hiker_Text_2, MSGBOX_NPC
	end


Route42_Text_MtMortarSign::
	msgbox Route42_Text_MtMortarSign_Text_0, MSGBOX_SIGN
	end


Route42_Text_Fisherman_Text_0:
	.string "Hang on!\nMy line's snagged!$"

Route42_Text_Fisherman_Text_1:
	.string "Yeah!\nI got a bite here!$"

Route42_Text_Fisherman_Text_2:
	.string "Tch!\nJust a small fry…$"

Route42_Text_Fisherman_Text_3:
	.string "Hang on!\n"
	.string "My line's snagged!$"

Route42_Text_Monk_Text_0:
	.string "I'm meditating here because I'm suppose\n"
	.string "to be an hermit monk.$"

Route42_Text_Pokemaniac_Text_0:
	.string "Wanna see my rare POKéMON?$"

Route42_Text_Pokemaniac_Text_1:
	.string "How wow! What was that!$"

Route42_Text_Pokemaniac_Text_2:
	.string "You're working on a POKéDEX?\nWow, you must know some pretty rare\lPOKéMON!\lMay I please see it? Please?$"

Route42_Text_Hiker_Text_0:
	.string "I went through MT. MORTAR.\nI need a good fight!$"

Route42_Text_Hiker_Text_1:
	.string "Bwahahahah!\nThat's the spirit!$"

Route42_Text_Hiker_Text_2:
	.string "Losing feels insignificant if you look\nup at the big sky!$"

Route42_Text_MtMortarSign_Text_0:
	.string "MT. MORTAR Entrance$"
