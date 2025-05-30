EcruteakKimono_MapScripts::
	.byte 0


EcruteakKimono_Text_Zuki::
	lock
	faceplayer
	checktrainerflag TRAINER_LOLA_2
	goto_if 0, EcruteakKimono_Text_Zuki_2
	goto EcruteakKimono_Text_ZukiRematch
EcruteakKimono_Text_Zuki_1:
	release
	end

EcruteakKimono_Text_Zuki_2:
	goto EcruteakKimono_Text_FightZuki
	goto EcruteakKimono_Text_Zuki_1


EcruteakKimono_Text_FightZuki::
	msgbox EcruteakKimono_Text_FightZuki_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakKimono_Text_FightZuki_2
	msgbox EcruteakKimono_Text_FightZuki_Text_3
EcruteakKimono_Text_FightZuki_1:
	release
	end

EcruteakKimono_Text_FightZuki_2:
	trainerbattle_single TRAINER_LOLA_2, EcruteakKimono_Text_FightZuki_Text_1, EcruteakKimono_Text_FightZuki_Text_2
	goto EcruteakKimono_Text_FightZuki_1


EcruteakKimono_Text_ZukiRematch::
	msgbox EcruteakKimono_Text_ZukiRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakKimono_Text_ZukiRematch_2
	msgbox EcruteakKimono_Text_FightZuki_Text_3
EcruteakKimono_Text_ZukiRematch_1:
	release
	end

EcruteakKimono_Text_ZukiRematch_2:
	cleartrainerflag TRAINER_LOLA_2
	trainerbattle_single TRAINER_LOLA_2, EcruteakKimono_Text_ZukiRematch_Text_1, EcruteakKimono_Text_ZukiRematch_Text_2
	goto EcruteakKimono_Text_ZukiRematch_1


EcruteakKimono_Text_Naoko::
	lock
	faceplayer
	checktrainerflag TRAINER_LOLA_3
	goto_if 0, EcruteakKimono_Text_Naoko_2
	goto EcruteakKimono_Text_NaokoRematch
EcruteakKimono_Text_Naoko_1:
	release
	end

EcruteakKimono_Text_Naoko_2:
	goto EcruteakKimono_Text_FightNaoko
	goto EcruteakKimono_Text_Naoko_1


EcruteakKimono_Text_FightNaoko::
	msgbox EcruteakKimono_Text_FightNaoko_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakKimono_Text_FightNaoko_2
	msgbox EcruteakKimono_Text_FightZuki_Text_3
EcruteakKimono_Text_FightNaoko_1:
	release
	end

EcruteakKimono_Text_FightNaoko_2:
	trainerbattle_single TRAINER_LOLA_3, EcruteakKimono_Text_FightNaoko_Text_1, EcruteakKimono_Text_FightNaoko_Text_2
	goto EcruteakKimono_Text_FightNaoko_1


EcruteakKimono_Text_NaokoRematch::
	msgbox EcruteakKimono_Text_NaokoRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakKimono_Text_NaokoRematch_2
	msgbox EcruteakKimono_Text_FightZuki_Text_3
EcruteakKimono_Text_NaokoRematch_1:
	release
	end

EcruteakKimono_Text_NaokoRematch_2:
	cleartrainerflag TRAINER_LOLA_3
	trainerbattle_single TRAINER_LOLA_3, EcruteakKimono_Text_NaokoRematch_Text_1, EcruteakKimono_Text_NaokoRematch_Text_2
	goto EcruteakKimono_Text_NaokoRematch_1


EcruteakKimono_Text_Miki::
	lock
	faceplayer
	checktrainerflag TRAINER_LOLA_4
	goto_if 0, EcruteakKimono_Text_Miki_2
	goto EcruteakKimono_Text_MikiRematch
EcruteakKimono_Text_Miki_1:
	release
	end

EcruteakKimono_Text_Miki_2:
	goto EcruteakKimono_Text_FightMiki
	goto EcruteakKimono_Text_Miki_1


EcruteakKimono_Text_FightMiki::
	msgbox EcruteakKimono_Text_FightMiki_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakKimono_Text_FightMiki_2
	msgbox EcruteakKimono_Text_FightZuki_Text_3
EcruteakKimono_Text_FightMiki_1:
	release
	end

EcruteakKimono_Text_FightMiki_2:
	trainerbattle_single TRAINER_LOLA_4, EcruteakKimono_Text_FightMiki_Text_1, EcruteakKimono_Text_FightMiki_Text_2
	goto EcruteakKimono_Text_FightMiki_1


EcruteakKimono_Text_MikiRematch::
	msgbox EcruteakKimono_Text_MikiRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakKimono_Text_MikiRematch_2
	msgbox EcruteakKimono_Text_FightZuki_Text_3
EcruteakKimono_Text_MikiRematch_1:
	release
	end

EcruteakKimono_Text_MikiRematch_2:
	cleartrainerflag TRAINER_LOLA_4
	trainerbattle_single TRAINER_LOLA_4, EcruteakKimono_Text_MikiRematch_Text_1, EcruteakKimono_Text_MikiRematch_Text_2
	goto EcruteakKimono_Text_MikiRematch_1


EcruteakDanceHall_Text_OldMan::
	lock
	faceplayer
	msgbox EcruteakDanceHall_Text_OldMan_Text_0
	release
	end


EcruteakDanceHall_Text_Beauty::
	lock
	faceplayer
	msgbox EcruteakDanceHall_Text_Beauty_Text_0
	release
	end


EcruteakDanceHall_Text_Eevee::
	lock
	faceplayer
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	msgbox EcruteakDanceHall_Text_Eevee_Text_0
	release
	end


EcruteakDanceHall_Text_OldMan2::
	lock
	faceplayer
	msgbox EcruteakDanceHall_Text_OldMan2_Text_0
	release
	end


EcruteakDanceHall_Text_OldWoman::
	lock
	faceplayer
	msgbox EcruteakDanceHall_Text_OldWoman_Text_0
	release
	end


EcruteakDanceHall_Text_Morty::
	lock
	faceplayer
	checktrainerflag TRAINER_FLANNERY_3
	goto_if 0, EcruteakDanceHall_Text_Morty_2
	checktrainerflag TRAINER_FLANNERY_3
	goto_if 1, EcruteakDanceHall_Text_Morty_3
EcruteakDanceHall_Text_Morty_1:
	release
	end

EcruteakDanceHall_Text_Morty_2:
	msgbox EcruteakDanceHall_Text_Morty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakDanceHall_Text_Morty_6
	msgbox EcruteakDanceHall_Text_Morty_Text_1
	goto EcruteakDanceHall_Text_Morty_1

EcruteakDanceHall_Text_Morty_3:
	goto EcruteakDanceHall_Text_MortyRematch
	goto EcruteakDanceHall_Text_Morty_1

EcruteakDanceHall_Text_Morty_6:
	goto EcruteakDanceHall_Text_MortyFight
	goto EcruteakDanceHall_Text_Morty_1


EcruteakDanceHall_Text_MortyFight::
	trainerbattle_single TRAINER_FLANNERY_3, EcruteakDanceHall_Text_MortyFight_Text_0, EcruteakDanceHall_Text_MortyFight_Text_1
	release
	end


EcruteakDanceHall_Text_MortyRematch::
	msgbox EcruteakDanceHall_Text_MortyRematch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EcruteakDanceHall_Text_MortyRematch_2
	msgbox EcruteakDanceHall_Text_MortyRematch_Text_3
EcruteakDanceHall_Text_MortyRematch_1:
	release
	end

EcruteakDanceHall_Text_MortyRematch_2:
	cleartrainerflag TRAINER_FLANNERY_3
	trainerbattle_single TRAINER_FLANNERY_3, EcruteakDanceHall_Text_MortyRematch_Text_1, EcruteakDanceHall_Text_MortyRematch_Text_2
	goto EcruteakDanceHall_Text_MortyRematch_1


EcruteakKimono_Text_FightZuki_Text_0:
	.string "Hey, you mind if we have a small fight\n"
	.string "between two DANCES ?$"

EcruteakKimono_Text_FightZuki_Text_1:
	.string "Let's enjoy this !$"

EcruteakKimono_Text_FightZuki_Text_2:
	.string "Good fight !$"

EcruteakKimono_Text_FightZuki_Text_3:
	.string "It's okay, I have people to entertain.$"

EcruteakKimono_Text_ZukiRematch_Text_0:
	.string "I keep dancing but I don't mind to take\n"
	.string "a break if you want a rematch.$"

EcruteakKimono_Text_ZukiRematch_Text_1:
	.string "Let's follow the rythme$"

EcruteakKimono_Text_ZukiRematch_Text_2:
	.string "I had no chance !$"

EcruteakKimono_Text_FightNaoko_Text_0:
	.string "You think we should fight each other in\n"
	.string "front of the public ?$"

EcruteakKimono_Text_FightNaoko_Text_1:
	.string "Yeah dance with me !$"

EcruteakKimono_Text_FightNaoko_Text_2:
	.string "Ahah good temper !$"

EcruteakKimono_Text_NaokoRematch_Text_0:
	.string "I have to say I'm confident in my dance\n"
	.string "skill but not in my TRAINER one. You\l"
	.string "still want a rematch ?$"

EcruteakKimono_Text_NaokoRematch_Text_1:
	.string "Admire my dance then !$"

EcruteakKimono_Text_NaokoRematch_Text_2:
	.string "I'll have to dance more !$"

EcruteakKimono_Text_FightMiki_Text_0:
	.string "Oh you want to ask for a private\n"
	.string "dancing lesson ?$"

EcruteakKimono_Text_FightMiki_Text_1:
	.string "Come here kid, I'll teach you the basics\n"
	.string "!$"

EcruteakKimono_Text_FightMiki_Text_2:
	.string "You are the one you taught me the\n"
	.string "basics of battle !$"

EcruteakKimono_Text_MikiRematch_Text_0:
	.string "You need to improve your dancing skills\n"
	.string "?$"

EcruteakKimono_Text_MikiRematch_Text_1:
	.string "Stretch your legs and then fight !$"

EcruteakKimono_Text_MikiRematch_Text_2:
	.string "Be careful with sore muscles !$"

EcruteakDanceHall_Text_OldMan_Text_0:
	.string "Not only are the KIMONO GIRLS great\n"
	.string "dancers, they're also skilled at\l"
	.string "POKéMON. I always challenge them, but\l"
	.string "I've never even left a scratch... I wish\l"
	.string "my POKéMON were as elegant as the\l"
	.string "KIMONO GIRLS...$"

EcruteakDanceHall_Text_Beauty_Text_0:
	.string "I always though the man with his hat\n"
	.string "was the owner of the place, but no. He\l"
	.string "just enjoy being defeated by the\l"
	.string "KIMONO GIRLS. Such a strange kink.$"

EcruteakDanceHall_Text_Eevee_Text_0:
	.string "Veeeee !$"

EcruteakDanceHall_Text_OldMan2_Text_0:
	.string "You know, there was a contest in the\n"
	.string "past for being a KIMONO DANCER ! Only\l"
	.string "the most talented girls could become\l"
	.string "one. Not only in term of dancing, but\l"
	.string "also in training !$"

EcruteakDanceHall_Text_OldWoman_Text_0:
	.string "Hum, these girls are good, but at my\n"
	.string "time, we were better ! Of course I was\l"
	.string "one of the best ! Every men wanted to\l"
	.string "go out with me ! Yeah it was the past...$"

EcruteakDanceHall_Text_Morty_Text_0:
	.string "Humm yes? Oh the GYM is closed?\n"
	.string "Well yes, look I'm a little busy\l"
	.string "watching the dance so I won't\l"
	.string "open it just for you.\l"
	.string "Ah you want to fight here instead?\l"
	.string "Ok! I can do that!\l"
	.string "Are you ready?$"

EcruteakDanceHall_Text_Morty_Text_1:
	.string "You serious?\n"
	.string "You disturbed me for nothing?\l"
	.string "Not a good game lad!$"

EcruteakDanceHall_Text_MortyFight_Text_0:
	.string "Let the fog invade you!$"

EcruteakDanceHall_Text_MortyFight_Text_1:
	.string "Humm...\nI'm the one who've been blured!$"

EcruteakDanceHall_Text_MortyRematch_Text_0:
	.string "Look this is my favourite dance!\n"
	.string "You can't understand how peaceful\l"
	.string "this is. It's a good way to\l"
	.string "appease the death!\l"
	.string "Humm... You want to fight again?$"

EcruteakDanceHall_Text_MortyRematch_Text_1:
	.string "Let's hurry before the next dance begin!$"

EcruteakDanceHall_Text_MortyRematch_Text_2:
	.string "I was focus on the dances!$"

EcruteakDanceHall_Text_MortyRematch_Text_3:
	.string "Anyway, the next dance is great too so\n"
	.string "I don't mind.$"
