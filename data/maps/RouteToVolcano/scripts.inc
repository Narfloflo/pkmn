RouteToVolcano_MapScripts::
	.byte 0


RouteToVolcano_Text_Hiker::
	trainerbattle_single TRAINER_WILTON_2, RouteToVolcano_Text_Hiker_Text_0, RouteToVolcano_Text_Hiker_Text_1
	msgbox RouteToVolcano_Text_Hiker_Text_2
	release
	end


RouteToVolcano_Text_Hiker_Text_0:
	.string "Ah ! You too are looking for the\nvolcano ?$"

RouteToVolcano_Text_Hiker_Text_1:
	.string "You are burning like a volcano !$"

RouteToVolcano_Text_Hiker_Text_2:
	.string "Mt. CHIMNEY can be access this way, but\n"
	.string "be careful it's really hot inside.$"
