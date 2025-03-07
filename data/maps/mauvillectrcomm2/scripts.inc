mauvillectrcomm2_MapScripts::
	.byte 0


mauvillectrcomm2_Text_RichGuy::
	lock
	faceplayer
	msgbox mauvillectrcomm2_Text_RichGuy_Text_0
	release
	end


mauvillectrcomm2_Text_Aroma::
	lock
	faceplayer
	msgbox mauvillectrcomm2_Text_Aroma_Text_0
	release
	end


mauvillectrcomm2_Text_ScientistF::
	lock
	faceplayer
	msgbox mauvillectrcomm2_Text_ScientistF_Text_0
	release
	end


mauvillectrcomm2_Text_RichGuy_Text_0:
	.string "My brother is a real geek:\nHe is stuck in the MALL with his\lGameBoy and he proposes to exchange\lyour own POKéMON for your own POKéMON.\lYeah weird I know... I don't see the\lpoint.$"

mauvillectrcomm2_Text_Aroma_Text_0:
	.string "Our electricity is generated under the\n"
	.string "city by an old generator.\l"
	.string "I'm a bit scared if it explode...!$"

mauvillectrcomm2_Text_ScientistF_Text_0:
	.string "You can find a lot of ELECTRIC POKéMON\n"
	.string "under MAUVILLE.$"
