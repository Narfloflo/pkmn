Route2Doors_MapScripts::
	.byte 0


ViridianForest_Text_Oldman::
	lock
	faceplayer
	msgbox ViridianForest_Text_Oldman_Text_0
	release
	end


ViridianForest_Text_Woman::
	lock
	faceplayer
	msgbox ViridianForest_Text_Woman_Text_0
	release
	end


ViridianForest_Text_Oldman_Text_0:
	.string "I had an EEVEE, I thought it could\n"
	.string "evolve in a forest environment, but\l"
	.string "no...$"

ViridianForest_Text_Woman_Text_0:
	.string "VIRIDIAN FOREST is quite a natural\n"
	.string "maze. Be careful !$"
