Route33_MapScripts::
	.byte 0


Route33_Text_Sign::
	msgbox Route33_Text_Sign_Text_0, MSGBOX_NPC
	end


Route33_Text_Hiker::
	trainerbattle_single TRAINER_JACKSON_4, Route33_Text_Hiker_Text_0, Route33_Text_Hiker_Text_1
	msgbox Route33_Text_Hiker_Text_2, MSGBOX_NPC
	end


Route33_Text_Sign_Text_0:
	.string "ROUTE 33$"

Route33_Text_Hiker_Text_0:
	.string "Are you in a hurry?\nNo?\lWell, let's fight!$"

Route33_Text_Hiker_Text_1:
	.string "Outch outch! Sorry...$"

Route33_Text_Hiker_Text_2:
	.string "AZALEA is just a few miles away. You\ncan't really miss it.\lWhat's good to see?\lHmmm... The well and KURT I think?$"
