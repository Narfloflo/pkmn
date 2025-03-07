CaveOfOrigin_UnusedRubySapphireMap3_MapScripts::
	.byte 0


CherrygroveInside_Text_Vendor::
	lockall
	faceplayer
	message CherrygroveInside_Text_Vendor_Text_0
	waitmessage
	pokemart CherrygroveInside_IceCream
	msgbox CherrygroveInside_Text_Vendor_Text_1
	releaseall
	end


	.align 2
CherrygroveInside_IceCream:
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_STBRICECREAM
	.2byte ITEM_BLKICECREAM
	.2byte ITEM_WHTICECREAM
	.2byte ITEM_SANDWICH
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_NONE

CherrygroveInside_Text_LassinResto::
	lock
	faceplayer
	msgbox CherrygroveInside_Text_LassinResto_Text_0
	release
	end


CherrygroveInside_Text_YoungsterinResto::
	lock
	faceplayer
	msgbox CherrygroveInside_Text_YoungsterinResto_Text_0
	release
	end


CherrygroveInside_Text_Guide::
	lock
	faceplayer
	msgbox CherrygroveInside_Text_Guide_Text_0
	release
	end


CherrygroveInside_Text_Littlekid::
	lock
	faceplayer
	msgbox CherrygroveInside_Text_Littlekid_Text_0
	release
	end


CherrygroveInside_Text_Woman::
	lock
	faceplayer
	msgbox CherrygroveInside_Text_Woman_Text_0
	release
	end


CherrygroveInside_Text_Meowth::
	lock
	faceplayer
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox CherrygroveInside_Text_Meowth_Text_0
	release
	end


CherrygroveInside_Text_Pikachu::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox CherrygroveInside_Text_Pikachu_Text_0
	release
	end


CherrygroveInside_Text_Birdkeeper::
	lock
	faceplayer
	msgbox CherrygroveInside_Text_Birdkeeper_Text_0
	release
	end


CherrygroveInside_Text_Vendor_Text_0:
	.string "What ! I have something on my face ?\n"
	.string "Buy something or scram !$"

CherrygroveInside_Text_Vendor_Text_1:
	.string "Yeah yeah see you later...$"

CherrygroveInside_Text_LassinResto_Text_0:
	.string "The patron here is and old BIKER\n"
	.string "member. But left KANTO and open this\l"
	.string "restaurant. He is scary but I know he\l"
	.string "has a good heart.$"

CherrygroveInside_Text_YoungsterinResto_Text_0:
	.string "I came here yesterday, but I couldn't\n"
	.string "finish my dish... So the patron made me\l"
	.string "come here to wash dishes... Oh my\l"
	.string "ARCEUS ! He's looking at me !$"

CherrygroveInside_Text_Guide_Text_0:
	.string "When I was a wee lad, I was a hotshot\n"
	.string "trainer ! Here's a word of advice :\l"
	.string "Catch lots of POKéMON ! Treat them all\l"
	.string "with kindness !$"

CherrygroveInside_Text_Littlekid_Text_0:
	.string "When a POKéMON gain experience, it may\n"
	.string "change ! {PLAYER} : I know that...$"

CherrygroveInside_Text_Woman_Text_0:
	.string "{PLAYER} : So what are you going to\n"
	.string "teach me ? If I walk into the grass I\l"
	.string "may find some wild POKéMON ? Come on,\l"
	.string "why are you here if you don't have\l"
	.string "anything to say ?$"

CherrygroveInside_Text_Meowth_Text_0:
	.string "Miuuuuuuuu !$"

CherrygroveInside_Text_Pikachu_Text_0:
	.string "Pi pika !$"

CherrygroveInside_Text_Birdkeeper_Text_0:
	.string "I use to have a lot of BIRD POKéMON,\n"
	.string "they all flew away. Now I just have a\l"
	.string "mouse and a cat... I feel like I belong\l"
	.string "to a cartoon...$"
