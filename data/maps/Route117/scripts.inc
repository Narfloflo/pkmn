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


Route117_Text_Beauty::
	lock
	faceplayer
	msgbox Route117_Text_Beauty_Text_0
	release
	end


Route117_Text_Fatman::
	lock
	faceplayer
	msgbox Route117_Text_Fatman_Text_0
	release
	end


Route117_Event_SchoolClosed::
	gettime
	compare VAR_0x8003, TIME_NIGHT
	goto_if_eq Route117_Event_SchoolClosed_2
	compare VAR_0x8003, TIME_MIDNIGHT
	goto_if_eq Route117_Event_SchoolClosed_2
	release
	end

Route117_Event_SchoolClosed_2:
	lock
	applymovement 25, Route117_Move_DirectorTriggered
	msgbox Route117_Event_SchoolClosed_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Route117_Move_Stepback
	waitmovement 0
	release
	end


Route117_Move_DirectorTriggered:
	emote_exclamation_mark
	face_original_direction
	jump_in_place_left
	step_end

Route117_Move_Stepback:
	walk_down
	step_end

Route117_EventScript_Prof_Text_0:
	.string "The students are all running around. I'm\n"
	.string "kinda useless$"

Route117_EventScript_StudentM_Text_0:
	.string "I wish I had an EEVEE!\nIt so fluffy and beautiful!$"

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

Route117_Text_Beauty_Text_0:
	.string "You know, a bit south, there is a\n"
	.string "house where a old lady is living.\l"
	.string "She's\l"
	.string "been living all alone for a\l"
	.string "while, and I think she's really\l"
	.string "disturbed...$"

Route117_Text_Fatman_Text_0:
	.string "VERDANTURF's hospital is really\n"
	.string "famous!\l"
	.string "They take care of people AND\l"
	.string "POKéMON!\l"
	.string "So amazing!$"

Route117_Event_SchoolClosed_Text_0:
	.string "Humm... The SCHOOL is closed during the\nnight...\lCome back later.$"
