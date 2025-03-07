AlphaRuins_MapScripts::
	.byte 0


AlphRuins_Text_Center::
	msgbox AlphRuins_Text_Center_Text_0, MSGBOX_SIGN
	end


AlphRuins_Text_Engineer::
	msgbox AlphRuins_Text_Engineer_Text_0, MSGBOX_NPC
	end


AlphRuins_Text_Scientist1::
	msgbox AlphRuins_Text_Scientist1_Text_0, MSGBOX_NPC
	end


AlphRuins_Text_Scientist2::
	msgbox AlphRuins_Text_Scientist2_Text_0, MSGBOX_NPC
	end


AlphRuins_Text_Thief::
	trainerbattle_single TRAINER_TRENT_2, AlphRuins_Text_Thief_Text_0, AlphRuins_Text_Thief_Text_1
	msgbox AlphRuins_Text_Thief_Text_2, MSGBOX_NPC
	end


AlphRuins_Text_Center_Text_0:
	.string "Ruins of Alph\nResearch Center\lThe Authority On The Ruins of Alph$"

AlphRuins_Text_Engineer_Text_0:
	.string "I'm trying to break the boulders here.\nBut I feel something odd around...\lLike a milions eyes watching me...\lGlups!$"

AlphRuins_Text_Scientist1_Text_0:
	.string "We've been investigating this site for\n7 years.\lYet we have made any major\lbreakthrough.$"

AlphRuins_Text_Scientist2_Text_0:
	.string "There are some panel in the differents\nruins.\lWe can't figure this out...$"

AlphRuins_Text_Thief_Text_0:
	.string "Are you in a hurry?\nNo?\lWell, let's fight!$"

AlphRuins_Text_Thief_Text_1:
	.string "Outch outch! Sorry...$"

AlphRuins_Text_Thief_Text_2:
	.string "AZALEA is just a few miles away. You\ncan't really miss it.\lWhat's good to see?\lHmmm... The well and KURT I think?$"
