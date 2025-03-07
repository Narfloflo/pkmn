PacifidlogDungeon_Underwater2_MapScripts::
	.byte 0


CeruleanCity_Text_Machoke::
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	waitmoncry
	msgbox CeruleanCity_Text_Machoke_Text_0, MSGBOX_NPC
	end


CeruleanCity_Text_TVMan::
	checktrainerflag TRAINER_RED
	goto_if 1, CeruleanCity_Text_TVMan_2
	checktrainerflag TRAINER_NORMAN_4
	goto_if 1, CeruleanCity_Text_TVMan_5
CeruleanCity_Text_TVMan_4:
	msgbox CeruleanCity_Text_TVMan_Text_2, MSGBOX_NPC
	end

CeruleanCity_Text_TVMan_2:
	msgbox CeruleanCity_Text_TVMan_Text_0, MSGBOX_NPC
	giveitem ITEM_STARF_BERRY, 4
	end

CeruleanCity_Text_TVMan_5:
	msgbox CeruleanCity_Text_TVMan_Text_1, MSGBOX_NPC
	giveitem ITEM_PETAYA_BERRY, 4
	goto CeruleanCity_Text_TVMan_4


CeruleanCity_Text_Machoke_Text_0:
	.string "Cho-Chooooke!\n{PLAYER}: The MACHOKE is preventing the\lprisoners from running away.$"

CeruleanCity_Text_TVMan_Text_0:
	.string "Oh, oh!\nTh-this news report!\lHmm...\lAmazing!\lSo you beat the famous TRAINER RED?\lThanks for sharing this fantastic news.\lHave a bunch of BERRIES!$"

CeruleanCity_Text_TVMan_Text_1:
	.string "Ah!\nA news report!\lHmmm...\lI see!\lThat was quite informative!\lThanks for beating the old OAK. This\lbastard owe me a few bucks for ages!\lAs my thanks for sharing the news with\lme, I want you to have this.$"

CeruleanCity_Text_TVMan_Text_2:
	.string "Sigh...\nToo much time, too little to do...\lIs nothing entertaining happening\lanywhere?$"
