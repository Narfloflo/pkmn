LavaridgeTown_Cave_MapScripts::
	.byte 0


LavaridgeTown_Cave_TextSchoolKidM::
	msgbox LavaridgeTown_Cave_TextSchoolKidM_Text_0, MSGBOX_NPC
	end


LavaridgeTown_Cave_TextSchoolKidF::
	msgbox LavaridgeTown_Cave_TextSchoolKidF_Text_0, MSGBOX_NPC
	end


LavaridgeTown_Cave_TextScientist::
	msgbox LavaridgeTown_Cave_TextScientist_Text_0, MSGBOX_NPC
	end


LavaridgeTown_Cave_Text_Numel::
	lock
	faceplayer
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
	waitmoncry
	msgbox LavaridgeTown_Cave_Text_Numel_Text_0, MSGBOX_DEFAULT
	release
	end


LavaridgeTown_Cave_TextSchoolKidM_Text_0:
	.string "If you go through this cave, you'll end\nin ROUTE 112.$"

LavaridgeTown_Cave_TextSchoolKidF_Text_0:
	.string "Hayyah! I wanted to leave LAVARIDGE but\nI forgot to teach my POKéMON SMASH\lROCK...\lI should've taken the ABRA to teleport\lmyself...$"

LavaridgeTown_Cave_TextScientist_Text_0:
	.string "Oh yes, I'm looking at the volcanics\nactivities around here.\lIt would be pretty bad if an earthquake\ldestroyed LAVARIDGE.$"

LavaridgeTown_Cave_Text_Numel_Text_0:
	.string "Nunu!$"
