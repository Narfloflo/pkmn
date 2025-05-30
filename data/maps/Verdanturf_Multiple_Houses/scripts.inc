Verdanturf_Multiple_Houses_MapScripts::
	.byte 0


Verdanturf_Multiple_Houses_Text_Skitty::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_Skitty_Text_0
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	waitmoncry
	msgbox Verdanturf_Multiple_Houses_Text_Skitty_Text_1
	setwildbattle SPECIES_SKITTY, 100
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Verdanturf_Multiple_Houses_Text_Skitty_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Verdanturf_Multiple_Houses_Text_Skitty_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Verdanturf_Multiple_Houses_Text_Skitty_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Verdanturf_Multiple_Houses_Text_Skitty_5
Verdanturf_Multiple_Houses_Text_Skitty_1:
	return

Verdanturf_Multiple_Houses_Text_Skitty_2:
	removeobject 10
	goto Verdanturf_Multiple_Houses_Text_Skitty_1

Verdanturf_Multiple_Houses_Text_Skitty_3:
	removeobject 10
	goto Verdanturf_Multiple_Houses_Text_Skitty_1

Verdanturf_Multiple_Houses_Text_Skitty_4:
	removeobject 10
	goto Verdanturf_Multiple_Houses_Text_Skitty_1

Verdanturf_Multiple_Houses_Text_Skitty_5:
	removeobject 10
	goto Verdanturf_Multiple_Houses_Text_Skitty_1


Verdanturf_Multiple_Houses_Text_OldMan::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_OldMan_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_PokefanF::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_PokefanF_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_AthleteM::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_AthleteM_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_Woman::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_Woman_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_BaldMan::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_BaldMan_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_Boy::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_Boy_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_WarriorF::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_WarriorF_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_PokefanM::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_PokefanM_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_Fatman::
	lock
	faceplayer
	msgbox Verdanturf_Multiple_Houses_Text_Fatman_Text_0
	release
	end


Verdanturf_Multiple_Houses_Text_Skitty_Text_0:
	.string "{PLAYER}: I wonder where this\n"
	.string "POKéMON's trainer is...$"

Verdanturf_Multiple_Houses_Text_Skitty_Text_1:
	.string "{PLAYER}: Urgh!I feel like it's trying\nto kill me!$"

Verdanturf_Multiple_Houses_Text_OldMan_Text_0:
	.string "There is nothing that interesting to do\n"
	.string "in VERDANTURF.\l"
	.string "All the kids are moving to MAUVILLE\l"
	.string "after they are graduated.\l"
	.string "So there are only older people here.\l"
	.string "But it's fine!$"

Verdanturf_Multiple_Houses_Text_PokefanF_Text_0:
	.string "Ah, the aroma of flowers in Verdanturf\n"
	.string "is simply delightful. You know that\l"
	.string "the FLOWER SHOP in ROUTE 104 is taking\l"
	.string "flowers from here?\l"
	.string "A bouquet from there can convey more\l"
	.string "than words!$"

Verdanturf_Multiple_Houses_Text_AthleteM_Text_0:
	.string "When I was a famous athlete, I was\n"
	.string "sponsored by RYDEL!\l"
	.string "But I took an arrow in the knee...\l"
	.string "{PLAYER}: What the what?!$"

Verdanturf_Multiple_Houses_Text_Woman_Text_0:
	.string "My husband was an athlete but he got\n"
	.string "injured during a marathon on MT.\l"
	.string "CHIMNEY.\l"
	.string "Since that day, he still wear his\l"
	.string "athlete clothes.\l"
	.string "I'm afraid his nostalgic...$"

Verdanturf_Multiple_Houses_Text_BaldMan_Text_0:
	.string "My daughter's husband is a total\n"
	.string "parasite!\l"
	.string "He can't cook, wash things because he\l"
	.string "said he has to train outside.\l"
	.string "But this idiot is just delusional about\l"
	.string "himself.\l"
	.string "So I'm doing all the domestics tasks\l"
	.string "because my daughter cannot!\l"
	.string "I'm so pissed...$"

Verdanturf_Multiple_Houses_Text_Boy_Text_0:
	.string "I wonder if there are other POKéMON\n"
	.string "outside?\l"
	.string "Do you think that in others REGIONS\l"
	.string "some POKéMON are unknown by us in\l"
	.string "HOENN?$"

Verdanturf_Multiple_Houses_Text_WarriorF_Text_0:
	.string "If I were a few decades younger, I\n"
	.string "would explore the world with my\l"
	.string "POKéMON.\l"
	.string "Today the only thing I'm capable of is\l"
	.string "to climb MT. CHIMNEY to get into\l"
	.string "LAVARIDGE's HOT BATH!$"

Verdanturf_Multiple_Houses_Text_PokefanM_Text_0:
	.string "A few time ago there were a CONTEST\n"
	.string "HALL in VERDANTURF.\l"
	.string "It was replace by a BATTLE TENT, which\l"
	.string "is pretty nice too.\l"
	.string "It brings us a few tourists. That's not\l"
	.string "so bad!$"

Verdanturf_Multiple_Houses_Text_Fatman_Text_0:
	.string "I have a cousin in KANTO.\n"
	.string "He spend his time napping in his\l"
	.string "town...\l"
	.string "He told me his dreams were eaten.\l"
	.string "He is so weird!$"
