RustboroCity_Flat1_1F_MapScripts::
	.byte 0

RustboroCity_Flat1_1F_EventScript_Man::
	msgbox RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_EventScript_Woman::
	msgbox RustboroCity_Flat1_1F_Text_PokemonStrange, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility:
	.string "Every POKéMON has a special ability\n"
	.string "that it can use.$"

RustboroCity_Flat1_1F_Text_PokemonStrange:
	.string "POKéMON are such strange creatures.$"

RustboroCity_Flat1_1F_Text_Littlegirl::
	lock
	faceplayer
	msgbox RustboroCity_Flat1_1F_Text_Littlegirl_Text_0
	release
	end


RustboroCity_Flat1_1F_Text_Littlegirl_Text_0:
	.string "Hey! Why are you coming inside the\n"
	.string "flats? Are you homeless?$"
