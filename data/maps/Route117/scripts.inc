.set LOCALID_DAYCARE_MAN, 3

Route117_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
	.byte 0

Route117_OnTransition:
	call Route117_EventScript_TryMoveDayCareMan
	end

Route117_EventScript_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
	setobjectxyperm LOCALID_DAYCARE_MAN, 40, 15
Route117_EventScript_StopMoveDayCareMan::
	return

Route117_EventScript_Woman::
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
	end

Route117_EventScript_LittleBoy::
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
	end

Route117_EventScript_Girl::
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
	end

Route117_EventScript_RouteSignVerdanturf::
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
	end

Route117_EventScript_RouteSignMauville::
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route117_EventScript_DayCareSign::
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
	end

Route117_EventScript_Isaac::
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterIsaac::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ISAAC_1
	release
	end

Route117_EventScript_RematchIsaac::
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Lydia::
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterLydia::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LYDIA_1
	release
	end

Route117_EventScript_RematchLydia::
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Dylan::
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterDylan::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DYLAN_1
	release
	end

Route117_EventScript_RematchDylan::
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Maria::
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterMaria::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MARIA_1
	release
	end

Route117_EventScript_RematchMaria::
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Derek::
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Anna::
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterAnna::
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ANNA_AND_MEG_1
	release
	end

Route117_EventScript_RematchAnna::
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Meg::
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterMeg::
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ANNA_AND_MEG_1
	release
	end

Route117_EventScript_RematchMeg::
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Melina::
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Brandi::
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Aisha::
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_Text_DayCarePokemonHadNewMove:
	.string "I left my POKéMON at the DAY CARE.\p"
	.string "When I got it back, it had a new move\n"
	.string "that I didn't teach it.\l"
	.string "I was really, really surprised.$"

Route117_Text_ArentTheseFlowersPretty:
	.string "What do you think?\n"
	.string "Aren't these flowers pretty?\p"
	.string "I planted them all!$"

Route117_Text_AirIsTastyHere:
	.string "The air is tasty here!$"

Route117_Text_RouteSignVerdanturf:
	.string "ROUTE 117\n"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"

Route117_Text_RouteSignMauville:
	.string "ROUTE 117\n"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"

Route117_Text_DayCareSign:
	.string "POKéMON DAY CARE\n"
	.string "“Let us raise your POKéMON.”$"

Route117_EventScript_Prof::
	lock
	faceplayer
	msgbox Route117_EventScript_Prof_Text_0
	release
	end


Route117_EventScript_StudentM::
	lock
	faceplayer
	msgbox Route117_EventScript_StudentM_Text_0
	release
	end


Route117_EventScript_StudentF::
	lock
	faceplayer
	msgbox Route117_EventScript_StudentF_Text_0
	release
	end


Route117_Text_SchoolSign::
	lock
	msgbox Route117_Text_SchoolSign_Text_0
	release
	end


Route117_EventScript_LostGuy::
	lock
	faceplayer
	msgbox Route117_EventScript_LostGuy_Text_0
	release
	end


Route117_EventScript_RunningWoman::
	lock
	faceplayer
	msgbox Route117_EventScript_RunningWoman_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Route117_EventScript_RunningWoman_1
	msgbox Route117_EventScript_RunningWoman_Text_2
	release
	end

Route117_EventScript_RunningWoman_1:
	message Route117_EventScript_RunningWoman_Text_1
	call Route117_EventScript_ChooseMonRand
	release
	end


Route117_EventScript_ChooseMonRand::
	random 3
	switch VAR_RESULT
	case 0, Route117_EventScript_ChooseMonRand_3
	case 1, Route117_EventScript_ChooseMonRand_4
	case 2, Route117_EventScript_ChooseMonRand_5
Route117_EventScript_ChooseMonRand_1:
	return

Route117_EventScript_ChooseMonRand_3:
	call Route117_EventScript_Medicham
	goto Route117_EventScript_ChooseMonRand_1

Route117_EventScript_ChooseMonRand_4:
	call Route117_EventScript_Hariyama
	goto Route117_EventScript_ChooseMonRand_1

Route117_EventScript_ChooseMonRand_5:
	call Route117_EventScript_Machamp
	goto Route117_EventScript_ChooseMonRand_1


Route117_EventScript_Medicham::
	playmoncry SPECIES_MEDICHAM, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_MEDICHAM, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route117_EventScript_Medicham_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route117_EventScript_Medicham_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route117_EventScript_Medicham_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route117_EventScript_Medicham_5
Route117_EventScript_Medicham_1:
	return

Route117_EventScript_Medicham_2:
	msgbox Route117_EventScript_Medicham_Text_0
	goto Route117_EventScript_Medicham_1

Route117_EventScript_Medicham_3:
	msgbox Route117_EventScript_Medicham_Text_1
	goto Route117_EventScript_Medicham_1

Route117_EventScript_Medicham_4:
	msgbox Route117_EventScript_Medicham_Text_2
	goto Route117_EventScript_Medicham_1

Route117_EventScript_Medicham_5:
	msgbox Route117_EventScript_Medicham_Text_2
	goto Route117_EventScript_Medicham_1


Route117_EventScript_Hariyama::
	playmoncry SPECIES_HARIYAMA, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_HARIYAMA, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route117_EventScript_Hariyama_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route117_EventScript_Hariyama_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route117_EventScript_Hariyama_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route117_EventScript_Hariyama_5
Route117_EventScript_Hariyama_1:
	return

Route117_EventScript_Hariyama_2:
	msgbox Route117_EventScript_Hariyama_Text_0
	goto Route117_EventScript_Hariyama_1

Route117_EventScript_Hariyama_3:
	msgbox Route117_EventScript_Medicham_Text_1
	goto Route117_EventScript_Hariyama_1

Route117_EventScript_Hariyama_4:
	msgbox Route117_EventScript_Medicham_Text_2
	goto Route117_EventScript_Hariyama_1

Route117_EventScript_Hariyama_5:
	msgbox Route117_EventScript_Medicham_Text_2
	goto Route117_EventScript_Hariyama_1


Route117_EventScript_Machamp::
	playmoncry SPECIES_MACHAMP, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_MACHAMP, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route117_EventScript_Machamp_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route117_EventScript_Machamp_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route117_EventScript_Machamp_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route117_EventScript_Machamp_5
Route117_EventScript_Machamp_1:
	return

Route117_EventScript_Machamp_2:
	msgbox Route117_EventScript_Machamp_Text_0
	goto Route117_EventScript_Machamp_1

Route117_EventScript_Machamp_3:
	msgbox Route117_EventScript_Medicham_Text_1
	goto Route117_EventScript_Machamp_1

Route117_EventScript_Machamp_4:
	msgbox Route117_EventScript_Medicham_Text_2
	goto Route117_EventScript_Machamp_1

Route117_EventScript_Machamp_5:
	msgbox Route117_EventScript_Medicham_Text_2
	goto Route117_EventScript_Machamp_1


Route117_EventScript_Prof_Text_0:
	.string "The students are all running around. I'm\n"
	.string "kinda useless$"

Route117_EventScript_StudentM_Text_0:
	.string "If you are lucky enough, you can find a\n"
	.string "EEVEE in the GRASS here.$"

Route117_EventScript_StudentF_Text_0:
	.string "I bet you've come across several\n"
	.string "SCHOOLS during your journey? The\l"
	.string "authorities thought it was a good idea\l"
	.string "to build SCHOOLS everywhere to\l"
	.string "prevent us to beat all the GYMS.\p"
	.string "So lame!$"

Route117_Text_SchoolSign_Text_0:
	.string "MAUVILLE and VERDANTURF SCHOOL\p"
	.string "“If you are tired of CASINOS, come and\n"
	.string "learn a few moves.”$"

Route117_EventScript_LostGuy_Text_0:
	.string "Leave me, I'm meditating.$"

Route117_EventScript_RunningWoman_Text_0:
	.string "So you just think you can stop me from\n"
	.string "my training? You have to pay for this!\l"
	.string "Wanna try your strength?$"

Route117_EventScript_RunningWoman_Text_1:
	.string "Oh you are so dead!$"

Route117_EventScript_RunningWoman_Text_2:
	.string "Pfff you so weak, so weak!$"

Route117_EventScript_Medicham_Text_0:
	.string "YOU CHEATED! MEDICHAM IS THE BEST$"

Route117_EventScript_Medicham_Text_1:
	.string "... Yeah, you were just lucky...$"

Route117_EventScript_Medicham_Text_2:
	.string "AH! I knew you were weak!$"

Route117_EventScript_Hariyama_Text_0:
	.string "YOU CHEATED! HARIYAMA IS THE BEST$"

Route117_EventScript_Machamp_Text_0:
	.string "YOU CHEATED! MACHAMP IS THE BEST$"
