Desert_MapScripts::
	.byte 0

Desert_Text_Hiker::
	lock
	faceplayer
	msgbox Desert_Text_Hiker_Text_0
	release
	end


Deser_Text_Scientist::
	msgbox Deser_Text_Scientist_Text_0, MSGBOX_NPC
	end


Desert_Text_Hiker_Text_0:
	.string "Don't get me wrong, there are treasure\n"
	.string "here, I know it!$"

Deser_Text_Scientist_Text_0:
	.string "I'm close to it!\nI know! The mystery behind this place\lis somewhere. I can feel it!\lFinally this operation isn't a total\ldisaster.\l(Maybe for the three people who\ldisappeared without a trace, sadly.)$"
