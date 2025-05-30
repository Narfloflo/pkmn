Fanclub_Vermilion_MapScripts::
	.byte 0


VermilionFanclub_Text_Chairman::
	lock
	faceplayer
	msgbox VermilionFanclub_Text_Chairman_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne VermilionFanclub_Text_Chairman_1
	msgbox VermilionFanclub_Text_Chairman_Text_4
	release
	end

VermilionFanclub_Text_Chairman_1:
	msgbox VermilionFanclub_Text_Chairman_Text_1
	playfanfare MUS_OBTAIN_ITEM
	msgbox VermilionFanclub_Text_Chairman_Text_2
	waitbuttonpress
	msgbox VermilionFanclub_Text_Chairman_Text_3
	release
	end


VermilionFanclub_Text_Woman::
	lock
	faceplayer
	msgbox VermilionFanclub_Text_Woman_Text_0
	release
	end


VermilionFanclub_Text_Pikachu::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VermilionFanclub_Text_Pikachu_Text_0
	waitmoncry
	release
	end


VermilionFanclub_Text_Fatman::
	lock
	faceplayer
	msgbox VermilionFanclub_Text_Fatman_Text_0
	release
	end


VermilionFanclub_Text_Woman2::
	lock
	faceplayer
	msgbox VermilionFanclub_Text_Woman2_Text_0
	release
	end


VermilionFanclub_Text_Chairman_Text_0:
	.string "I chair the POKéMON Fan Club!\pI raise more than a hundred\nPOKéMON!\pI'm very fussy when it comes to\nPOKéMON! I surely am!\pSo...\pDid you come visit to hear about\nmy POKéMON?$"

VermilionFanclub_Text_Chairman_Text_1:
	.string "Good!\n"
	.string "Then listen up!\p"
	.string "My favorite RAPIDASH... It's... cute...\n"
	.string "lovely... smart... plus... amazing... you\l"
	.string "think so?.. oh yes...it's...stunning...\l"
	.string "kindly... love it! Hug it... when...\l"
	.string "sleeping... warm and cuddly...\l"
	.string "spectacular... ravishing... ...Oops! Look\l"
	.string "at the time! I kept you too long!\l"
	.string "Thanks for hearing me out! I want you\l"
	.string "to have this!$"

VermilionFanclub_Text_Chairman_Text_2:
	.string "{PLAYER} received a HANDSHAKE\nfrom the CHAIRMAN.$"

VermilionFanclub_Text_Chairman_Text_3:
	.string "CHAIRMAN : Haha that's all I can give\n"
	.string "you these days !$"

VermilionFanclub_Text_Chairman_Text_4:
	.string "Oh. Come back when you want to\nhear my story!$"

VermilionFanclub_Text_Woman_Text_0:
	.string "Our CHAIRMAN is very vocal about\nPOKéMON.$"

VermilionFanclub_Text_Pikachu_Text_0:
	.string "PIKACHU: Chu! Pikachu!$"

VermilionFanclub_Text_Fatman_Text_0:
	.string "Won't you admire my PIKACHU's\nadorable tail?$"

VermilionFanclub_Text_Woman2_Text_0:
	.string "I just adore my SEEL!\nIt's so lovable!\pIt squeals, “Kyuuuh”, when I\nhug it!$"
