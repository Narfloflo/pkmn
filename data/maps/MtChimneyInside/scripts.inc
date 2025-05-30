MtChimneyInside_MapScripts::
	.byte 0


MtChimneyInside_Text_Hiker::
	trainerbattle_single TRAINER_WILTON_4, MtChimneyInside_Text_Hiker_Text_0, MtChimneyInside_Text_Hiker_Text_1
	msgbox MtChimneyInside_Text_Hiker_Text_2
	release
	end


MtChimneyInside_Text_MagmaGrunt::
	lock
	faceplayer
	msgbox MtChimneyInside_Text_MagmaGrunt_Text_0
	release
	end


MtChimneyInside_Text_Hiker_Text_0:
	.string "You enjoy heating places too ?$"

MtChimneyInside_Text_Hiker_Text_1:
	.string "I'm sweating so much !$"

MtChimneyInside_Text_Hiker_Text_2:
	.string "A friend of mine told me that it\n"
	.string "refreshing to spent some time in a very\l"
	.string "hot place. But I think he was talking\l"
	.string "about a SPA or something like that !$"

MtChimneyInside_Text_MagmaGrunt_Text_0:
	.string "Huh, I ran away from TEAM MAGMA. I mean,\n"
	.string "putting some oil into a volcano ?! I\l"
	.string "just thought that we would increase\l"
	.string "the land mass because of the melting\l"
	.string "poles. But no... I'm so dumb...$"
