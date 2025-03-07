Route26Indoor_MapScripts::
	.byte 0


Route26_Text_WomanHeal::
	lock
	faceplayer
	msgbox Route26_Text_WomanHeal_Text_0
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route26_Text_WomanHeal_Text_1
	release
	end


Route26_Text_WomanHeal_Text_0:
	.string "Your POKéMON look a little tired.\nYou should rest them a while.$"

Route26_Text_WomanHeal_Text_1:
	.string "There!\nYour POKéMON are looking good!\lKeep at it!$"
