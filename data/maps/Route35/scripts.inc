Route35_MapScripts::
	.byte 0


Route35_Text_Camper::
	trainerbattle_single TRAINER_HALEY_2, Route35_Text_Camper_Text_0, Route35_Text_Camper_Text_1
	msgbox Route35_Text_Camper_Text_2, MSGBOX_NPC
	end


Route35_Text_Picnicker::
	trainerbattle_single TRAINER_HALEY_3, Route35_Text_Camper_Text_0, Route35_Text_Camper_Text_1
	msgbox Route35_Text_Camper_Text_2, MSGBOX_NPC
	end


Route35_Text_Youngster::
	trainerbattle_single TRAINER_HALEY_4, Route35_Text_Camper_Text_0, Route35_Text_Camper_Text_1
	msgbox Route35_Text_Camper_Text_2, MSGBOX_NPC
	end


Route35_Text_Bugcatcher1::
	trainerbattle_single TRAINER_JAMES_2, Route35_Text_Camper_Text_0, Route35_Text_Camper_Text_1
	msgbox Route35_Text_Camper_Text_2, MSGBOX_NPC
	end


Route35_Text_Bugcatcher2::
	trainerbattle_single TRAINER_JAMES_3, Route35_Text_Camper_Text_0, Route35_Text_Camper_Text_1
	msgbox Route35_Text_Camper_Text_2, MSGBOX_NPC
	end


Route35_Text_Firebreather::
	trainerbattle_single TRAINER_JAMES_4, Route35_Text_Camper_Text_0, Route35_Text_Camper_Text_1
	msgbox Route35_Text_Camper_Text_2, MSGBOX_NPC
	end


Route35_Text_Sign::
	msgbox Route35_Text_Sign_Text_0, MSGBOX_NPC
	end


Route35_Text_Camper_Text_0:
	.string "Are you in a hurry?\nNo?\lWell, let's fight!$"

Route35_Text_Camper_Text_1:
	.string "Outch outch! Sorry...$"

Route35_Text_Camper_Text_2:
	.string "AZALEA is just a few miles away. You\ncan't really miss it.\lWhat's good to see?\lHmmm... The well and KURT I think?$"

Route35_Text_Sign_Text_0:
	.string "ROUTE 35\n{UP_ARROW} NATIONAL PARK$"
