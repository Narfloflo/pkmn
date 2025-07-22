Route114_Pub_MapScripts::
	.byte 0


Route114_Pub_Text_Vendor::
	lock
	faceplayer
	message Route114_Pub_Text_Vendor_Text_0
	waitmessage
	pokemart Route114PubItems
	msgbox Route114_Pub_Text_Vendor_Text_1
	release
	return


	.align 2
Route114PubItems:
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_SANDWICH
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

Route114_Pub_Text_Kindler::
	msgbox Route114_Pub_Text_Kindler_Text_0, MSGBOX_NPC
	end


Route114_Pub_Text_Hiker::
	msgbox Route114_Pub_Text_Hiker_Text_0, MSGBOX_NPC
	end


Route114_Pub_Text_Vendor_Text_0:
	.string "Welcome welcome,\n"
	.string "What should I get you?$"

Route114_Pub_Text_Vendor_Text_1:
	.string "Don't choke yourself while eating. We\nare not responsible of that.$"

Route114_Pub_Text_Kindler_Text_0:
	.string "I asked for a spicy sauce, but turned\nout it's way too spicy for me!\lI can't handle it!$"

Route114_Pub_Text_Hiker_Text_0:
	.string "I'll eat a quick meal and I'm up on to\nthe mountains again! You should eat\ltoo, you look so thin.$"
