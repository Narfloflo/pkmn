MossdeepCity_Gate_MapScripts::
	.byte 0


MossdeepCity_Gate_Text_Policeman::
	msgbox MossdeepCity_Gate_Text_Policeman_Text_0, MSGBOX_NPC
	end


MossdeepCity_Gate_Text_Man::
	msgbox MossdeepCity_Gate_Text_Man_Text_0, MSGBOX_NPC
	end


MossdeepCity_Gate_Text_Scientist1::
	lock
	faceplayer
	msgbox MossdeepCity_Gate_Text_Scientist1_Text_0
	showmonpic SPECIES_DEOXYS, 10, 3
	delay 100
	hidemonpic
	release
	end


MossdeepCity_Gate_Text_Scientist2::
	msgbox MossdeepCity_Gate_Text_Scientist2_Text_0, MSGBOX_NPC
	end


MossdeepCity_Gate_Text_Man2::
	msgbox MossdeepCity_Gate_Text_Man2_Text_0, MSGBOX_NPC
	end


MossdeepCity_Gate_Text_Policeman_Text_0:
	.string "Welcome to MOSSDEEP SPATIAL CENTER$"

MossdeepCity_Gate_Text_Man_Text_0:
	.string "I'm a representant of the Spatial\nCenter.\lHOENN's authorities gave us the mission\lto explore space and study everything\lrelated to it.$"

MossdeepCity_Gate_Text_Scientist1_Text_0:
	.string "I'm working on a big telescope.\nI think I saw something in space\llooking like this :$"

MossdeepCity_Gate_Text_Scientist2_Text_0:
	.string "Heard about JAMES WEBB?\nWell our telescope is gonna be much\lbetter!\lI hope...$"

MossdeepCity_Gate_Text_Man2_Text_0:
	.string "So much things to do...\nI'm pulling my hair so hard!\lArrrg!$"
