NewMap1_MapScripts::
	.byte 0


ForgottenIslandInside_Text_Hiker::
	msgbox ForgottenIslandInside_Text_Hiker_Text_0, MSGBOX_NPC
	end


ForgottenIslandInside_Text_OldWoman::
	msgbox ForgottenIslandInside_Text_OldWoman_Text_0, MSGBOX_NPC
	end


ForgottenIslandInside_Text_Blackbelt::
	msgbox ForgottenIslandInside_Text_Blackbelt_Text_0, MSGBOX_NPC
	end


ForgottenIslandInside_Text_LadyVendor::
	lock
	faceplayer
	msgbox ForgottenIslandInside_Text_LadyVendor_Text_0, MSGBOX_DEFAULT
	waitmessage
	pokemart ForgottenIslandInsideMart
	msgbox ForgottenIslandInside_Text_LadyVendor_Text_1, MSGBOX_AUTOCLOSE
	release
	end


	.align 2
ForgottenIslandInsideMart:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

ForgottenIslandInside_Text_Hiker_Text_0:
	.string "Hey kid! You came from HOENN's mainland\nright?\lFinally someone came here!\lI went to explore the mountains south\lof PACIFIDLOG and found this villages\lyears ago!\lI got married to this beautiful lady\lbut I miss civilisation!\lAnyway, glad to talk to some Hoennian\lfellow!$"

ForgottenIslandInside_Text_OldWoman_Text_0:
	.string "Did you know that this place was\noriginally a big city. The biggest city\lin HOENN, or what it was called back\lthere.\lOn the western point of the island\lthere is a tower that was link\lto another one we called the SKY\lPILLAR.\lNo idea why our ancestors built this...$"

ForgottenIslandInside_Text_Blackbelt_Text_0:
	.string "I'm meditating all the days.\nThis is amazing!$"

ForgottenIslandInside_Text_LadyVendor_Text_0:
	.string "Oh hello!\pDo you need anything?$"

ForgottenIslandInside_Text_LadyVendor_Text_1:
	.string "Hope to see you soon!$"
