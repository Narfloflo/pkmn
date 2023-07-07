SecretCity_MapScripts::
	.byte 0

SecretCity_Text_LocationSign::
	lock
	msgbox SecretCity_Text_LocationSign_Text_0
	release
	end


SecretCity_Text_OldWoman::
	lock
	faceplayer
	msgbox SecretCity_Text_OldWoman_Text_0
	release
	end


SecretCity_Text_OldMan::
	lock
	faceplayer
	msgbox SecretCity_Text_OldMan_Text_0
	release
	end


SecretCity_Text_MountainMan::
	lock
	faceplayer
	applymovement 4, SecretCity_Move_Hicker
	waitmovement 0
	msgbox SecretCity_Text_MountainMan_Text_0
	release
	end


SecretCity_Move_Hicker:
	emote_exclamation_mark
	walk_in_place_left
	face_player
	step_end

SecretCity_Text_Kid::
	lock
	faceplayer
	msgbox SecretCity_Text_Kid_Text_0
	release
	end


SecretCity_Text_Woman::
	lock
	faceplayer
	msgbox SecretCity_Text_Woman_Text_0
	release
	end


SecretCity_Text_LocationSign_Text_0:
	.string "Village of...........\p"
	.string "Looks like time erase what was written\n"
	.string "here.$"

SecretCity_Text_OldWoman_Text_0:
	.string "Oh ! I've never seen you before! Where\n"
	.string "are you from?.......\p"
	.string "I see, so that's how HOENN's been so\n"
	.string "far. That's interesting. Thanks child.$"

SecretCity_Text_OldMan_Text_0:
	.string "Here is the wood that lead out of the\n"
	.string "village. We usually don't really leave\l"
	.string "this place.\p"
	.string "We have all we need here.$"

SecretCity_Text_MountainMan_Text_0:
	.string "Oh ! You made it that far! You must be a\n"
	.string "strong TRAINER!\p"
	.string "Have you seen the ruins in the DESERT?\n"
	.string "We used to live here years ago.$"

SecretCity_Text_Kid_Text_0:
	.string "I'm one of the only kid here. It's boring\n"
	.string "to live with old guys, but somehow\l"
	.string "satisfying.\p"
	.string "I'm treating like a king here.$"

SecretCity_Text_Woman_Text_0:
	.string "Oh hello. Here are the crops of the\n"
	.string "village. The weather is always good, and\l"
	.string "we have a few water. We are self\l"
	.string "sufficient. In a way we can say that we\l"
	.string "are a hippie community or some\l"
	.string "libertarians wankers.\p"
	.string "Hahahahahaha!$"
