Route118_119Junction_MapScripts::
	.byte 0


Route118_119Junction_Text_Fisherman::
	goto_if_unset FLAG_BADGE05_GET, Route118_119Junction_Text_Fisherman_1
	msgbox Route118_119Junction_Text_Fisherman_Text_0, MSGBOX_NPC
	end

Route118_119Junction_Text_Fisherman_1:
	call Route118_119Junction_Text_Fisherman_MovetoMauville
	end


Route118_119Junction_Text_Gyarados::
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
	msgbox Route118_119Junction_Text_Gyarados_Text_0, MSGBOX_NPC
	end


Route118_119Junction_Text_Fisherman_MovetoMauville::
	lock
	faceplayer
	msgbox Route118_119Junction_Text_Fisherman_MovetoMauville_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Route118_119Junction_Text_Fisherman_MovetoMauville_1
	msgbox Route118_119Junction_Text_Fisherman_MovetoMauville_Text_2, MSGBOX_NPC
	release
	end

Route118_119Junction_Text_Fisherman_MovetoMauville_1:
	msgbox Route118_119Junction_Text_Fisherman_MovetoMauville_Text_1, MSGBOX_DEFAULT
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
	waitmoncry
	fadescreen FADE_TO_BLACK
	warp MAP_ROUTE118, 15, 14
	fadescreen FADE_FROM_BLACK
	release
	end


Route118_119Junction_Text_Fisherman_Text_0:
	.string "Hey kid! Have you seen my dear SUSHI?\nSo beautiful!\lAnd to say that it was a mere MAGIKARP\ljust a few months ago.$"

Route118_119Junction_Text_Gyarados_Text_0:
	.string "SUSHI: Grooooowaa!$"

Route118_119Junction_Text_Fisherman_MovetoMauville_Text_0:
	.string "Wow kid! You came from this forest!\nIt's like huge! I wont put my legs\linside.\lAnyway, you look stuck here.\lDo you want to ride with my lovely\lSUSHI to ROUTE 118?$"

Route118_119Junction_Text_Fisherman_MovetoMauville_Text_1:
	.string "Alright! let's go SUSHI!$"

Route118_119Junction_Text_Fisherman_MovetoMauville_Text_2:
	.string "Ah I see! You are trying to find the\nbest place to fish right?\lA true master!$"
