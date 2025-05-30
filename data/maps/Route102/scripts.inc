Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_Text_Farmer::
	lock
	faceplayer
	switch VAR_STARTER_MON
	case 0, Route102_Text_Farmer_3
	case 1, Route102_Text_Farmer_4
	case 2, Route102_Text_Farmer_5
Route102_Text_Farmer_1:
	end

Route102_Text_Farmer_3:
	call Route102_Text_FarmerTreecko
	goto Route102_Text_Farmer_1

Route102_Text_Farmer_4:
	call Route102_Text_FarmerTorchic
	goto Route102_Text_Farmer_1

Route102_Text_Farmer_5:
	call Route102_Text_FarmerMudkip
	goto Route102_Text_Farmer_1


Route102_Text_FarmerTreecko::
	msgbox Route102_Text_FarmerTreecko_Text_0, MSGBOX_NPC
	end


Route102_Text_FarmerTorchic::
	msgbox Route102_Text_FarmerTorchic_Text_0, MSGBOX_NPC
	end


Route102_Text_FarmerMudkip::
	msgbox Route102_Text_FarmerMudkip_Text_0, MSGBOX_NPC
	end


Route102_Text_Farmer2::
	msgbox Route102_Text_Farmer2_Text_0, MSGBOX_NPC
	end


Route102_Text_Baldman::
	lock
	faceplayer
	msgbox Route102_Text_Baldman_Text_0
	release
	end


Route102_Text_Aroma::
	msgbox Route102_Text_Aroma_Text_0, MSGBOX_NPC
	end


Route102_Text_MineSign::
	msgbox Route102_Text_MineSign_Text_0, MSGBOX_SIGN
	end


Route102_Text_Torchic::
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
	msgbox Route102_Text_Torchic_Text_0, MSGBOX_NPC
	end


Route102_Text_FarmerTreecko_Text_0:
	.string "Oh! I can see in your POKéDEX you have\na TREECKO?\lPretty sure you found it in PETALBURG\lWOOD.\lYou know here and in ROUTE 103 you can\lfind a TORCHIC and a\lMUDKIP?$"

Route102_Text_FarmerTorchic_Text_0:
	.string "Oh! I can see in your POKéDEX you have\na TORCHIC?\lPretty sure you found it around here.\lYou know in PETALBURG WOOD and in ROUTE\l103 you can find a TREECKO and a\lMUDKIP?$"

Route102_Text_FarmerMudkip_Text_0:
	.string "Oh! I can see in your POKéDEX you have\na MUDKIP?\lPretty sure you found it around in\lROUTE 103.\lYou know in PETALBURG WOOD\land around here you can find a TREECKO\land a TORCHIC?$"

Route102_Text_Farmer2_Text_0:
	.string "Not everybody left their doors opened.\nSomething you'll see that some houses\lare unreachable.\lBut hey, what do you want? We are not\lall dumb to let kids enter our\lhouses freely!$"

Route102_Text_Baldman_Text_0:
	.string "You can find the mine here. Some\n"
	.string "POKéMON only live in this kind of\l"
	.string "area. But I suppose you already\l"
	.string "know this.$"

Route102_Text_Aroma_Text_0:
	.string "This tree is very strange.\nThere is a similar one in PETALBURG.\lBut the twins are always around it, I\lcan't really observe it properly.$"

Route102_Text_MineSign_Text_0:
	.string "PETALBURG COALMINE$"

Route102_Text_Torchic_Text_0:
	.string "Tawahooo!$"
