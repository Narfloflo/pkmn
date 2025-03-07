LavendarTownCemetery_MapScripts::
	.byte 0


LaverdarpkmnTower_Text_OldMan::
	lock
	faceplayer
	msgbox LaverdarpkmnTower_Text_OldMan_Text_0
	release
	end


LaverdarpkmnTower_Text_Woman::
	lock
	faceplayer
	msgbox LaverdarpkmnTower_Text_Woman_Text_0
	release
	end


LaverdarpkmnTower_Text_Channeler::
	lock
	faceplayer
	msgbox LaverdarpkmnTower_Text_Channeler_Text_0
	release
	end


LaverdarpkmnTower_Text_Rocket::
	lock
	faceplayer
	msgbox LaverdarpkmnTower_Text_Rocket_Text_0
	release
	end


LaverdarpkmnTower_Text_Sage::
	lock
	faceplayer
	msgbox LaverdarpkmnTower_Text_Sage_Text_0
	release
	end


LaverdarpkmnTower_Text_Youngster::
	lock
	faceplayer
	msgbox LaverdarpkmnTower_Text_Youngster_Text_0
	release
	end


LaverdarpkmnTower_Text_RattataTomb::
	lock
	msgbox LaverdarpkmnTower_Text_RattataTomb_Text_0
	release
	end


LaverdarpkmnTower_Text_Blue::
	lock
	faceplayer
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	checktrainerflag TRAINER_WATTSON_4
	goto_if 0, LaverdarpkmnTower_Text_Blue_2
	checktrainerflag TRAINER_WATTSON_4
	goto_if 1, LaverdarpkmnTower_Text_Blue_3
LaverdarpkmnTower_Text_Blue_1:
	playbgm MUS_RG_POKE_TOWER, FALSE
	release
	end

LaverdarpkmnTower_Text_Blue_2:
	msgbox LaverdarpkmnTower_Text_Blue_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LaverdarpkmnTower_Text_Blue_6
	msgbox LaverdarpkmnTower_Text_Blue_Text_1
	goto LaverdarpkmnTower_Text_Blue_1

LaverdarpkmnTower_Text_Blue_3:
	goto LaverdarpkmnTower_Text_BlueRematch
	goto LaverdarpkmnTower_Text_Blue_1

LaverdarpkmnTower_Text_Blue_6:
	goto LaverdarpkmnTower_Text_BlueFight
	goto LaverdarpkmnTower_Text_Blue_1


LaverdarpkmnTower_Text_BlueFight::
	trainerbattle_single TRAINER_WATTSON_4, LaverdarpkmnTower_Text_BlueFight_Text_0, LaverdarpkmnTower_Text_BlueFight_Text_1
	release
	end


LaverdarpkmnTower_Text_BlueRematch::
	msgbox LaverdarpkmnTower_Text_BlueRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LaverdarpkmnTower_Text_BlueRematch_2
	msgbox LaverdarpkmnTower_Text_Blue_Text_1
LaverdarpkmnTower_Text_BlueRematch_1:
	playbgm MUS_RG_POKE_TOWER, FALSE
	release
	end

LaverdarpkmnTower_Text_BlueRematch_2:
	cleartrainerflag TRAINER_WATTSON_4
	trainerbattle_single TRAINER_WATTSON_4, LaverdarpkmnTower_Text_BlueRematch_Text_1, LaverdarpkmnTower_Text_BlueRematch_Text_2
	goto LaverdarpkmnTower_Text_BlueRematch_1


LaverdarpkmnTower_Text_OldMan_Text_0:
	.string "I came to pray for my CLEFAIRY. Sniff !\n"
	.string "I can't stop crying...$"

LaverdarpkmnTower_Text_Woman_Text_0:
	.string "Did you come to pay respects? Bless you\n"
	.string "!$"

LaverdarpkmnTower_Text_Channeler_Text_0:
	.string "I am a Channeler ! There are spirits up\n"
	.string "to mischief ! Oh yeah by the way you\l"
	.string "can't go upstairs because of what the\l"
	.string "ROCKET did...$"

LaverdarpkmnTower_Text_Rocket_Text_0:
	.string "I know that I've been a bad person. Now\n"
	.string "I want to amend myself...$"

LaverdarpkmnTower_Text_Sage_Text_0:
	.string "I'm praying for the tormented spirits. I\n"
	.string "help them to stop suffering.$"

LaverdarpkmnTower_Text_Youngster_Text_0:
	.string "...$"

LaverdarpkmnTower_Text_RattataTomb_Text_0:
	.string "Here lies the remains of BLUE OAK's\n"
	.string "RATTATA$"

LaverdarpkmnTower_Text_Blue_Text_0:
	.string "Snif... Huh what do you want ? Yeah I'm\n"
	.string "crying so what ? Because I lost to RED\l"
	.string "? Pffff ! I don't care ! So you wanna\l"
	.string "fight ?$"

LaverdarpkmnTower_Text_Blue_Text_1:
	.string "Yeah yeah smell ya later...$"

LaverdarpkmnTower_Text_BlueFight_Text_0:
	.string "I'll kick you hard !$"

LaverdarpkmnTower_Text_BlueFight_Text_1:
	.string "Tssst !$"

LaverdarpkmnTower_Text_BlueRematch_Text_0:
	.string "I'm pretty sure you won because you\n"
	.string "were lucky. You want a revenge ?$"

LaverdarpkmnTower_Text_BlueRematch_Text_1:
	.string "Oh oh you are so not ready !$"

LaverdarpkmnTower_Text_BlueRematch_Text_2:
	.string "What ? Again ?$"
