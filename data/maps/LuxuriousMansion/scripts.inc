LuxuriousMansion_MapScripts::
	.byte 0


LuxuriousMansion_Text_Maid1::
	lock
	faceplayer
	msgbox LuxuriousMansion_Text_Maid1_Text_0
	release
	end


LuxuriousMansion_Text_Maid2::
	lock
	faceplayer
	msgbox LuxuriousMansion_Text_Maid2_Text_0
	release
	end


LuxuriousMansion_Text_Maid1_Text_0:
	.string "Hello.\p"
	.string "The masters are not here currently. You\n"
	.string "can wander around but please do not go\l"
	.string "upstairs.$"

LuxuriousMansion_Text_Maid2_Text_0:
	.string "Hi, it's really nice of you to come visit\n"
	.string "us. But we are really busy. I advise you\l"
	.string "to leave.$"
