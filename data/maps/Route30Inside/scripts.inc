Route30Inside_MapScripts::
	.byte 0


Route30Inside_Text_BerryMaster::
	lock
	faceplayer
	msgbox Route30Inside_Text_BerryMaster_Text_0
	release
	end


Route30Inside_Text_BugCatcher::
	lock
	faceplayer
	msgbox Route30Inside_Text_BugCatcher_Text_0
	release
	end


Route30Inside_Text_MrPokemon::
	lock
	faceplayer
	msgbox Route30Inside_Text_MrPokemon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route30Inside_Text_MrPokemon_2
	msgbox Route30Inside_Text_MrPokemon_Text_2
Route30Inside_Text_MrPokemon_1:
	release
	end

Route30Inside_Text_MrPokemon_2:
	msgbox Route30Inside_Text_MrPokemon_Text_1
	goto Route30Inside_Text_MrPokemon_1


Route30Inside_Text_BerryMaster_Text_0:
	.string "You can find some BERRY on the floor\n"
	.string "sometimes. It's weird I always thought\l"
	.string "it came from trees, but I've never saw\l"
	.string "them myself...$"

Route30Inside_Text_BugCatcher_Text_0:
	.string "I'm pretty sure there is a TV program\n"
	.string "about BUG CATCHING CONTEST. At least\l"
	.string "we should have that !$"

Route30Inside_Text_MrPokemon_Text_0:
	.string "Hello I'm mister POKéMON. Do you know\n"
	.string "PROF. OAK ? He's an old friend.$"

Route30Inside_Text_MrPokemon_Text_1:
	.string "Yeah, you should ask for a fight ! He\n"
	.string "may got rusty be he's still a good\l"
	.string "TRAINER !$"

Route30Inside_Text_MrPokemon_Text_2:
	.string "No ? Oh you are a disciple of PROF.\n"
	.string "BIRCH ? That lazy bastard you mean ?\p"
	.string "I don't know what he's specialization is\n"
	.string "about... Not the biggest fan here.$"
