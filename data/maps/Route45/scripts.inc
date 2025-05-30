Route45_MapScripts::
	.byte 0


Route45_Text_Sign::
	lock
	faceplayer
	msgbox Route45_Text_Sign_Text_0
	release
	end


Route45_Text_Hiker::
	lock
	faceplayer
	msgbox Route45_Text_Hiker_Text_0
	release
	end


Route45_Text_Sign_Text_0:
	.string "ROUTE 46\n"
	.string "MOUNTAIN RD. AHEAD$"

Route45_Text_Hiker_Text_0:
	.string "You can't climb ledges. But you can\njump down them to take a shortcut.\lAlthought there are a few slops\laround...\lI wonder if we can get over them...$"
