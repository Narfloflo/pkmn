Route5_MapScripts::
	.byte 0


Route5_Text_Bikers::
	lock
	faceplayer
	msgbox Route5_Text_Bikers_Text_0
	release
	end


Route5_Text_BlackBelt::
	lock
	faceplayer
	msgbox Route5_Text_BlackBelt_Text_0
	release
	end


Route5_Text_Bikers_Text_0:
	.string "Oh no ! I'm not a TRAINER. I don't want\n"
	.string "to be beaten by a kid. Sorry for you;\l"
	.string "You won't have my money !$"

Route5_Text_BlackBelt_Text_0:
	.string "You know I'm thinking about open a\n"
	.string "restaurant instead of studying martial\l"
	.string "arts on my own.$"
