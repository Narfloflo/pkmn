Route16_MapScripts::
	.byte 0


Route16_Text_Biker1::
	trainerbattle_single TRAINER_ELLIOT_3, Route16_Text_Biker1_Text_0, Route16_Text_Biker1_Text_1
	msgbox Route16_Text_Biker1_Text_2, MSGBOX_AUTOCLOSE
	end


Route16_Text_Biker2::
	trainerbattle_single TRAINER_ELLIOT_4, Route16_Text_Biker2_Text_0, Route16_Text_Biker2_Text_1
	msgbox Route16_Text_Biker2_Text_2, MSGBOX_AUTOCLOSE
	end


Route16_Text_NoticeSign::
	lock
	msgbox Route16_Text_NoticeSign_Text_0
	release
	end


Route16_Text_Biker1_Text_0:
	.string "That's a wonderful BIKE here !\nCan I have it ?$"

Route16_Text_Biker1_Text_1:
	.string "It was for my sick sister !$"

Route16_Text_Biker1_Text_2:
	.string "It's the second time I try to racket\n"
	.string "some kid's BIKE, and it didn't went well\l"
	.string "for me...$"

Route16_Text_Biker2_Text_0:
	.string "Everybody says I should create a gang.\nWanna be part of it ?$"

Route16_Text_Biker2_Text_1:
	.string "Well I would be the underling of my gang\nif I hired you !$"

Route16_Text_Biker2_Text_2:
	.string "We, the BIKERS, are not all a bunch of\n"
	.string "jerks. Some are, some are less. But in\l"
	.string "the end we all are enjoying freedom !$"

Route16_Text_NoticeSign_Text_0:
	.string "NOTICE !\n"
	.string "Some adjustments have been done on\l"
	.string "the ROUTE 16 and 17 : The slope has\l"
	.string "been reduced. You should bike happily.$"
