KurtHouse_MapScripts::
	.byte 0


AzaleaInside_Text_Kurt::
	goto_if_set FLAG_UNUSED_0x027, AzaleaInside_Text_Kurt_2
	goto_if_set FLAG_UNUSED_0x026, AzaleaInside_Text_Kurt_5
	checkitem ITEM_OAKS_PARCEL
	compare VAR_RESULT, 1
	goto_if_eq AzaleaInside_Text_Kurt_8
	checkitem ITEM_GS_BALL
	compare VAR_RESULT, 1
	goto_if_eq AzaleaInside_Text_Kurt_13
	return

AzaleaInside_Text_Kurt_2:
	msgbox AzaleaInside_Text_Kurt_Text_0, MSGBOX_NPC
	end

AzaleaInside_Text_Kurt_5:
	lock
	faceplayer
	msgbox AzaleaInside_Text_Kurt_Text_1, MSGBOX_YESNO
	release
	compare VAR_RESULT, 1
	goto_if_eq AzaleaInside_Text_Kurt_10
	msgbox AzaleaInside_Text_Kurt_Text_3, MSGBOX_NPC
	end

AzaleaInside_Text_Kurt_8:
	msgbox AzaleaInside_Text_Kurt_Text_4, MSGBOX_NPC
	removeitem ITEM_OAKS_PARCEL
	applymovement 3, ExclamationSolo
	waitmovement 3
	giveitem ITEM_GS_BALL
	msgbox AzaleaInside_Text_Kurt_Text_5, MSGBOX_NPC
	end

AzaleaInside_Text_Kurt_10:
	setflag FLAG_UNUSED_0x027
	removeitem ITEM_GS_BALL, 1
	msgbox AzaleaInside_Text_Kurt_Text_2, MSGBOX_NPC
	end

AzaleaInside_Text_Kurt_13:
	msgbox AzaleaInside_Text_Kurt_Text_6, MSGBOX_NPC
	end


AzaleaInside_Text_Kurt_Text_0:
	.string "By the way you can now access to my\nshop. I'm making balls with APRIC...\lWAIT WAIT! You come from HOENN right?!\lMeaning you have access to the DEVON'S\lBALLS right?\lGET OUT MY HOUSE! They stole everything\lfrom me!$"

AzaleaInside_Text_Kurt_Text_1:
	.string "Wha-what?! You saw the ILEX Guardian?!\nSo you put the GS BALL in the shrine?\lYou took it back right?\lCan I have it?$"

AzaleaInside_Text_Kurt_Text_2:
	.string "Thanks !! It's a dream come true!\nI can finally study a legendary BALL\l(don't look at me like that!) and\limprove my devices.$"

AzaleaInside_Text_Kurt_Text_3:
	.string "Urh... I'm pissed but I understand...$"

AzaleaInside_Text_Kurt_Text_4:
	.string "Hello kiddo! Huh? This is for me? From\nPROF. OAK?\lLet me see...$"

AzaleaInside_Text_Kurt_Text_5:
	.string "Oh! such a rare BALL! I think I saw\nsomething about it in an old book.\lOh yeah! It has something to do with\lthe ILEX FOREST!\lI think SAM wanted you to investigate\lthis because you are capable, or so it\lseems...\lWell off you go now!$"

AzaleaInside_Text_Kurt_Text_6:
	.string "Well, what are you looking for? Go to\nthe ILEX FOREST!$"
