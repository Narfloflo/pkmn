SaffronCity_MapScripts::
	.byte 0


SaffronCity_Text_ManPidgeot::
	lock
	faceplayer
	msgbox SaffronCity_Text_ManPidgeot_Text_0
	release
	end


SaffronCity_Text_FanClubGirl::
	lock
	faceplayer
	msgbox SaffronCity_Text_FanClubGirl_Text_0
	release
	end


SaffronCity_Text_Youngster::
	lock
	faceplayer
	msgbox SaffronCity_Text_Youngster_Text_0
	release
	end


SaffronCity_Text_ManImpressed::
	lock
	faceplayer
	checktrainerflag TRAINER_RED
	goto_if 1, SaffronCity_Text_ManImpressed_2
	msgbox SaffronCity_Text_ManImpressed_Text_1
SaffronCity_Text_ManImpressed_1:
	release
	end

SaffronCity_Text_ManImpressed_2:
	msgbox SaffronCity_Text_ManImpressed_Text_0
	goto SaffronCity_Text_ManImpressed_1


SaffronCity_Text_Dojo::
	msgbox SaffronCity_Text_Dojo_Text_0
	release
	end


SaffronCity_Text_SaffronGym::
	msgbox SaffronCity_Text_SaffronGym_Text_0
	release
	end


SaffronCity_Text_SilphCo::
	msgbox SaffronCity_Text_SilphCo_Text_0
	release
	end


SaffronCity_Text_Lass::
	lock
	faceplayer
	msgbox SaffronCity_Text_Lass_Text_0
	release
	end


SaffronCity_Text_Boy::
	lock
	faceplayer
	msgbox SaffronCity_Text_Boy_Text_0
	release
	end


SaffronCity_Text_SaffronSign::
	msgbox SaffronCity_Text_SaffronSign_Text_0
	release
	end


SaffronCity_Text_FanClub::
	msgbox SaffronCity_Text_FanClub_Text_0
	release
	end


SaffronCity_Text_SilphDesc::
	msgbox SaffronCity_Text_SilphDesc_Text_0
	release
	end


SaffronCity_Text_PsychicHouse::
	msgbox SaffronCity_Text_PsychicHouse_Text_0
	release
	end


SaffronCity_Text_MagnetTrain::
	msgbox SaffronCity_Text_MagnetTrain_Text_0
	release
	end


SaffronCity_Text_Pigdeot::
	lock
	faceplayer
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox SaffronCity_Text_Pigdeot_Text_0
	release
	end


SaffronCity_Text_Salaryman::
	lock
	msgbox SaffronCity_Text_Salaryman_Text_0
	release
	end


SaffronCity_Text_ManMagnetTrain::
	lock
	faceplayer
	msgbox SaffronCity_Text_ManMagnetTrain_Text_0
	release
	end


SaffronCity_Text_OldMan::
	lock
	faceplayer
	msgbox SaffronCity_Text_OldMan_Text_0
	release
	end


SaffronCity_Text_RunningBoy::
	lock
	faceplayer
	msgbox SaffronCity_Text_RunningBoy_Text_0
	release
	end


SaffronCity_Text_Boy2::
	lock
	faceplayer
	msgbox SaffronCity_Text_Boy2_Text_0
	release
	end


SaffronCity_Text_Worker::
	lock
	msgbox SaffronCity_Text_Worker_Text_0
	release
	end


SaffronCity_Text_Scientist::
	lock
	faceplayer
	msgbox SaffronCity_Text_Scientist_Text_0
	release
	end


SaffronCity_Text_Policeman::
	lock
	faceplayer
	msgbox SaffronCity_Text_Policeman_Text_0
	release
	end


SaffronCity_Text_Policeman2::
	lock
	faceplayer
	msgbox SaffronCity_Text_Policeman2_Text_0
	release
	end


SaffronCity_Text_GymGuy::
	lock
	faceplayer
	msgbox SaffronCity_Text_GymGuy_Text_0
	release
	end


SaffronCity_Text_BlackBelt::
	lock
	faceplayer
	msgbox SaffronCity_Text_BlackBelt_Text_0
	release
	end


SaffronCity_Text_ManPidgeot_Text_0:
	.string "I flew here on my PIDGEOT when I read\n"
	.string "about SILPH.\p"
	.string "It's already over? I missed the media\n"
	.string "action...$"

SaffronCity_Text_FanClubGirl_Text_0:
	.string "This FAN CLUB...\n"
	.string "No one here has a clue!\p"
	.string "How could they not recognize\n"
	.string "the brilliance that is LANCE?\p"
	.string "He stands for justice!\n"
	.string "He's cool, and yet passionate!\l"
	.string "He's the greatest, LANCE!$"

SaffronCity_Text_Youngster_Text_0:
	.string "Yeah! TEAM ROCKET is gone!\n"
	.string "It's safe to go out again!$"

SaffronCity_Text_ManImpressed_Text_0:
	.string "You beat RED?! You are so strong!\n"
	.string "Amazing!$"

SaffronCity_Text_ManImpressed_Text_1:
	.string "Haven't you heard the news? A boy\n"
	.string "named RED beat TEAM ROCKET all alone!\p"
	.string "That's amazing!$"

SaffronCity_Text_Dojo_Text_0:
	.string "FIGHTING DOJO$"

SaffronCity_Text_SaffronGym_Text_0:
	.string "SAFFRON CITY POKéMON GYM\nLEADER: SABRINA\lThe Master of PSYCHIC POKéMON!$"

SaffronCity_Text_SilphCo_Text_0:
	.string "SILPH CO. OFFICE BUILDING$"

SaffronCity_Text_Lass_Text_0:
	.string "People fled from here in droves\n"
	.string "when those ROCKETS came.\p"
	.string "They should be flocking back to\n"
	.string "SAFFRON now.$"

SaffronCity_Text_Boy_Text_0:
	.string "I saw the ROCKET BOSS escaping SILPH's\n"
	.string "building.$"

SaffronCity_Text_SaffronSign_Text_0:
	.string "SAFFRON CITY\nShining, Golden Land of Commerce$"

SaffronCity_Text_FanClub_Text_0:
	.string "1st floor:\nPOKéMON TRAINER FAN CLUB$"

SaffronCity_Text_SilphDesc_Text_0:
	.string "SILPH's latest product!\nRelease to be determined...$"

SaffronCity_Text_PsychicHouse_Text_0:
	.string "MR. PSYCHIC'S HOUSE$"

SaffronCity_Text_MagnetTrain_Text_0:
	.string "Soon, the MAGNET TRAIN will be build\n"
	.string "here to link KANTO and JOHTO.$"

SaffronCity_Text_Pigdeot_Text_0:
	.string "PIDGEOT: Bi bibii!$"

SaffronCity_Text_Salaryman_Text_0:
	.string "I hope there is a job for me... Since the\n"
	.string "RUSTURF TUNNEL incident, DEVON\l"
	.string "haven't been keen on me...$"

SaffronCity_Text_ManMagnetTrain_Text_0:
	.string "They are building a TRAIN that go to\n"
	.string "JOHTO. They are renovating the old\l"
	.string "POWER PLANT too. I hope the POKéMON\l"
	.string "living there are well...$"

SaffronCity_Text_OldMan_Text_0:
	.string "Well it was a big ruckus in the SILPH Co\n"
	.string "building.\p"
	.string "All those thieves in black left in panic.\n"
	.string "Good riddance!$"

SaffronCity_Text_RunningBoy_Text_0:
	.string "Now that TEAM ROCKET is gone, SAFFRON\n"
	.string "CITY can be a safe place.\p"
	.string "I can't wait to start investing. Money\n"
	.string "is gonna flow here again!$"

SaffronCity_Text_Boy2_Text_0:
	.string "A few things are gonna change around\n"
	.string "with the MAGNET TRAIN. But It's not\l"
	.string "soon to be usable.$"

SaffronCity_Text_Worker_Text_0:
	.string "Come on lads! You need to prepare the\n"
	.string "ground with DIGLETT! It's easier that\l"
	.string "way!$"

SaffronCity_Text_Scientist_Text_0:
	.string "Yes we are building the MAGNET TRAIN\n"
	.string "terminus here in SAFFRON CITY. There is\l"
	.string "only another way for none TRAINERS to\l"
	.string "go in JOHTO, it's the SHIP. But the cost\l"
	.string "is high...$"

SaffronCity_Text_Policeman_Text_0:
	.string "This place is still under construction.\n"
	.string "Sorry I can't let you pass.$"

SaffronCity_Text_Policeman2_Text_0:
	.string "With the recents events we can't allow\n"
	.string "people to enter the SILPH CO. freely.$"

SaffronCity_Text_GymGuy_Text_0:
	.string "The guy in front of the DOJO think I\n"
	.string "want to eye challenge him. But That's\l"
	.string "wrong ! Now I'm stuck with him. I'm too\l"
	.string "scare to move an inch...$"

SaffronCity_Text_BlackBelt_Text_0:
	.string "The guy in front of the GYM is such a\n"
	.string "master at eye challenge. I don't think\l"
	.string "I'll win... ARRRRRG !$"
