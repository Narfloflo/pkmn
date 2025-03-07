Rustoboro_HallTown_MapScripts::
	.byte 0


RustoboroHallTown_Text_Checking::
	lock
	goto_if_set FLAG_IS_CHAMPION, RustoboroHallTown_Text_Checking_2
	goto RustoboroHallTown_Text_CheckingKO
	release
	end

RustoboroHallTown_Text_Checking_2:
	end


RustoboroHallTown_Text_CheckingKO::
	lock
	msgbox RustoboroHallTown_Text_CheckingKO_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, RustoboroHallTown_Move_Refuse
	waitmovement 0
	release
	end


RustoboroHallTown_Move_Refuse:
	walk_right
	step_end

RustoboroHallTown_Text_Reception::
	msgbox RustoboroHallTown_Text_Reception_Text_0, MSGBOX_NPC
	end


RustoboroHallTown_Text_Scientist1F::
	msgbox RustoboroHallTown_Text_Scientist1F_Text_0, MSGBOX_NPC
	end


RustoboroHallTown_Text_1FPolice::
	msgbox RustoboroHallTown_Text_1FPolice_Text_0, MSGBOX_NPC
	end


RustoboroHallTown_Text_1FGuard::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_1FGuard_Text_0
	release
	end


RustoboroHallTown_Text_2FPolice::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_2FPolice_Text_0
	release
	end


RustoboroHallTown_Text_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, RustoboroHallTown_Text_OldWoman_2
	msgbox RustoboroHallTown_Text_OldWoman_Text_1
RustoboroHallTown_Text_OldWoman_1:
	release
	end

RustoboroHallTown_Text_OldWoman_2:
	msgbox RustoboroHallTown_Text_OldWoman_Text_0
	goto RustoboroHallTown_Text_OldWoman_1


RustoboroHallTown_Text_Salaryman::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_Salaryman_Text_0
	release
	end


RustoboroHallTown_Text_Wallace::
	goto_if_defeated TRAINER_MOHA, RustoboroHallTown_Text_WallaceDefeated
	goto_if_not_defeated TRAINER_MOHA, RustoboroHallTown_Text_WallaceUndefeated
	return


RustoboroHallTown_Text_WallaceUndefeated::
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustoboroHallTown_Text_WallaceYes
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, RustoboroHallTown_Text_WallaceNo
	return


RustoboroHallTown_Text_WallaceNo::
	lock
	msgbox RustoboroHallTown_Text_WallaceNo_Text_0
	release
	end


RustoboroHallTown_Text_WallaceYes::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_WallaceYes_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustoboroHallTown_Text_WallaceBattle
	goto_if_eq VAR_RESULT, NO, RustoboroHallTown_Text_WallaceNoAnswer
	release
	end


RustoboroHallTown_Text_WallaceDefeated::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_WallaceDefeated_Text_0
	release
	end


RustoboroHallTown_Text_WallaceBattle::
	trainerbattle_single TRAINER_MOHA, RustoboroHallTown_Text_WallaceIntro, RustoboroHallTown_Text_WallaceDefeat, RustoboroHallTown_Text_WallaceGiveEgg
	return


RustoboroHallTown_Text_WallaceNoAnswer::
	msgbox RustoboroHallTown_Text_WallaceNoAnswer_Text_0
	release
	end


RustoboroHallTown_Text_WallaceGiveEgg::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox RustoboroHallTown_Text_WallaceGiveEgg_Text_0
	call RustoboroHallTown_Text_GiveJirachi
	release
	end


RustoboroHallTown_Text_GiveJirachi::
	giveegg SPECIES_JIRACHI
	playfanfare MUS_OBTAIN_ITEM
	compare MON_GIVEN_TO_PARTY, 0
	goto_if_ne RustoboroHallTown_Text_GiveJirachi_2
	compare MON_GIVEN_TO_PC, 0
	goto_if_ne RustoboroHallTown_Text_GiveJirachi_3
RustoboroHallTown_Text_GiveJirachi_1:
	return

RustoboroHallTown_Text_GiveJirachi_2:
	msgbox RustoboroHallTown_Text_GiveJirachi_Text_0
	goto RustoboroHallTown_Text_GiveJirachi_1

RustoboroHallTown_Text_GiveJirachi_3:
	msgbox RustoboroHallTown_Text_GiveJirachi_Text_1
	goto RustoboroHallTown_Text_GiveJirachi_1


RustoboroHallTown_Text_Woman::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_Woman_Text_0
	release
	end


RustoboroHallTown_Text_ScientistF::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_ScientistF_Text_0
	release
	end


RustoboroHallTown_Text_OldMan::
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, RustoboroHallTown_Text_OldMan_1
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_OldMan_Text_1
	release
	end

RustoboroHallTown_Text_OldMan_1:
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_OldMan_Text_0
	release
	end


RustoboroHallTown_Text_Gentleman::
	lock
	faceplayer
	msgbox RustoboroHallTown_Text_Gentleman_Text_0
	release
	end


RustoboroHallTown_Text_Azumarill::
	lock
	faceplayer
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox RustoboroHallTown_Text_Azumarill_Text_0
	release
	end


RustoboroHallTown_Text_CheckingKO_Text_0:
	.string "Excuse me, but you are not an\n"
	.string "authorized person.$"

RustoboroHallTown_Text_Reception_Text_0:
	.string "Welcome to RUSTOBORO CITY HALL.\nOn the left is the meeting room.\lOn the right is the waiting room and\lthe administrative wing.$"

RustoboroHallTown_Text_Scientist1F_Text_0:
	.string "Can you believe it?\nDEVON's building is greater that the\lCity Hall!\lThe seat of power of HOENN's citizen is\lnothing compare to a big company.\lI can't believe it!$"

RustoboroHallTown_Text_1FPolice_Text_0:
	.string "Please, remain calm in this area.\pGood day to you.$"

RustoboroHallTown_Text_1FGuard_Text_0:
	.string "This area is restricted to unauthorized\n"
	.string "person.$"

RustoboroHallTown_Text_2FPolice_Text_0:
	.string "Excuse me, but I'm working. Please\n"
	.string "proceed to your occupation and leave\l"
	.string "me.$"

RustoboroHallTown_Text_OldWoman_Text_0:
	.string "I've been here for so much time that I\n"
	.string "forgot were I lived... SIGH...\p"
	.string "Being old is bad.$"

RustoboroHallTown_Text_OldWoman_Text_1:
	.string "I'm suppose to have a meeting with the\n"
	.string "MAYOR, but apparently he is busy...$"

RustoboroHallTown_Text_Salaryman_Text_0:
	.string "I think the MAYOR was a GYM LEADER, but\n"
	.string "I'm not sure...$"

RustoboroHallTown_Text_WallaceNo_Text_0:
	.string "WALLACE : ...And what about the others\n"
	.string "CITIES ?...$"

RustoboroHallTown_Text_WallaceYes_Text_0:
	.string "Oh hello {PLAYER}. I've heard about\n"
	.string "you after the SOOTOPOLIS CITY\l"
	.string "incident. It seems you are the new\l"
	.string "CHAMPION of HOENN ? I'm the former\l"
	.string "CHAMPION, then came your MOM... She\l"
	.string "beat me hard...\p"
	.string "Anyway, talking about this makes me\n"
	.string "want to BATTLE. Are you ready ?$"

RustoboroHallTown_Text_WallaceDefeated_Text_0:
	.string "I hope you can hatch this EGG. Some\n"
	.string "shady guy gave it to me in RHODES.$"

RustoboroHallTown_Text_WallaceNoAnswer_Text_0:
	.string "No ? Well don't worry, I'm a bit busy\n"
	.string "anyway.$"

RustoboroHallTown_Text_WallaceGiveEgg_Text_0:
	.string "WALLACE : I really enjoy this fight. Please have this, I don't have the time to take care of it.$"

RustoboroHallTown_Text_GiveJirachi_Text_0:
	.string "You received an EGG!$"

RustoboroHallTown_Text_GiveJirachi_Text_1:
	.string "You received an EGG!\p"
	.string "It was sent to the PC.$"

RustoboroHallTown_Text_Woman_Text_0:
	.string "My report concern the FAUNA in HOENN,\n"
	.string "and specifically the water POKéMON.$"

RustoboroHallTown_Text_ScientistF_Text_0:
	.string "You know there are a lot of SCIENTIST\n"
	.string "all around the REGION, but we are not\l"
	.string "slacking around like PROF. BIRCH does !\p"
	.string "We actually write reports and don't\n"
	.string "charges kids some errands...$"

RustoboroHallTown_Text_OldMan_Text_0:
	.string "Now that the incident with the\n"
	.string "LEGENDARY POKéMON is closed we can\l"
	.string "talk about business again !$"

RustoboroHallTown_Text_OldMan_Text_1:
	.string "Kid, we are in the middle of an important\n"
	.string "discussion involving DEVON !$"

RustoboroHallTown_Text_Gentleman_Text_0:
	.string "The MAYOR always have the best advices\n"
	.string "regarding HOENN interests !$"

RustoboroHallTown_Text_Azumarill_Text_0:
	.string "Azu-zuu !\n"
	.string "{PLAYER} : Yeah I know the HUMAN\l"
	.string "WORLD is boring...$"

RustoboroHallTown_Text_WallaceIntro::
	.string "Yeah I love this spirit !$"

RustoboroHallTown_Text_WallaceDefeat::
	.string "Just what I expect from a CHAMPION !$"
