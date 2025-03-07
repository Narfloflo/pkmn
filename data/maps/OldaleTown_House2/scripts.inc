OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "If the POKéMON with you become\n"
	.string "stronger, you'll be able to go farther\l"
	.string "away from here.$"

OldaleTown_House2_Oldman::
	lock
	faceplayer
	msgbox OldaleTown_House2_Oldman_Text_0
	release
	end


OldaleTown_House2_Oldman_Text_0:
	.string "Some POKéMON can EVOLVE with a\n"
	.string "specific object.\l"
	.string "I heard that a place is selling those\l"
	.string "objects. But I don't remember\l"
	.string "where...$"
