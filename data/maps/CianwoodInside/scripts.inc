CianwoodInside_MapScripts::
	.byte 0


CianwoodInside_Text_Photografer::
	msgbox CianwoodInside_Text_Photografer_Text_0, MSGBOX_NPC
	end


CianwoodInside_Text_Blackbelt::
	msgbox CianwoodInside_Text_Blackbelt_Text_0, MSGBOX_NPC
	end


CianwoodInside_Text_Vendor::
	lock
	faceplayer
	message CianwoodInside_Text_Vendor_Text_0
	waitmessage
	pokemart CianwoodInsideVendor
	msgbox CianwoodInside_Text_Vendor_Text_1
	release
	return


	.align 2
CianwoodInsideVendor:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_SACRED_ASH
	.2byte ITEM_NONE

CianwoodInside_Text_Photografer_Text_0:
	.string "Hum... I'm sorry but I can't take any\npicture now.\lI need to fix my camera.$"

CianwoodInside_Text_Blackbelt_Text_0:
	.string "I need to train really hard to earn my\nplace at the GYM.\lBut I also want to start a family...\lDamn!$"

CianwoodInside_Text_Vendor_Text_0:
	.string "Oh hello, I sell medicines. Have a\n"
	.string "look.$"

CianwoodInside_Text_Vendor_Text_1:
	.string "Please come again!$"
