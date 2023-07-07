Route117Junction103_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route117Junction103_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route117Junction103_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_unset FLAG_IS_CHAMPION, Route117Junction103_EventScript_CaveDoor
	end


Route117Junction103_EventScript_CaveDoor::
	setmetatile 32, 9, METATILE_General_RockWall_GrassBase, TRUE
	setmetatile 32, 8, METATILE_General_RockWall_RockBase, TRUE
	return


Route117Junction103_Text_Sign::
	lock
	goto_if_set FLAG_IS_CHAMPION, Route117Junction103_Text_Sign_1
	msgbox Route117Junction103_Text_Sign_Text_1
	release
	end

Route117Junction103_Text_Sign_1:
	msgbox Route117Junction103_Text_Sign_Text_0
	release
	end


Route117Junction103_Text_Sign_Text_0:
	.string "“NO I'M NOT DIGGING INTO A CAVE!”\p"
	.string "But it's written in a very poor\n"
	.string "language...$"

Route117Junction103_Text_Sign_Text_1:
	.string "“IF YOU WANT TO SELL ME A SLOWPOKE\n"
	.string "TAIL, LEAVE! OTHERWISE LEAVE TOO!”\p"
	.string "Looks like a 10 years old kid wrote it.$"
