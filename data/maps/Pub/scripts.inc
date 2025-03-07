Pub_MapScripts::
	.byte 0

MauvillePub_Text_Vendor::
	lock
	faceplayer
	message MauvillePub_Text_Vendor_Text_0
	waitmessage
	pokemart MauvillePubItems
	msgbox MauvillePub_Text_Vendor_Text_1
	release
	return


	.align 2
MauvillePubItems:
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_SANDWICH
	.2byte ITEM_NONE

MauvillePub_Text_Lass::
	msgbox MauvillePub_Text_Lass_Text_0, MSGBOX_NPC
	end


MauvillePub_Text_Employee::
	msgbox MauvillePub_Text_Employee_Text_0, MSGBOX_NPC
	end


MauvillePub_Text_Worker::
	msgbox MauvillePub_Text_Worker_Text_0, MSGBOX_NPC
	end


MauvillePub_Text_Cook::
	msgbox MauvillePub_Text_Cook_Text_0, MSGBOX_NPC
	end


MauvillePub_Text_Vendor_Text_0:
	.string "Oh a kid! No booze for you.$"

MauvillePub_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

MauvillePub_Text_Lass_Text_0:
	.string "Oh wait!\nI'm finishing my spaghetti!$"

MauvillePub_Text_Employee_Text_0:
	.string "Sigh!\nI have such a long work day...\lIt tiresome to sell POTIONS.$"

MauvillePub_Text_Worker_Text_0:
	.string "Heard about NEW MAUVILLE?\nIt was WATTSON's old project to fuel\lMAUVILLE with a brand new electricity.\lIt didn't really worked well.$"

MauvillePub_Text_Cook_Text_0:
	.string "I used to cook for the greatest!\nOn the SS ANNE, I could feed CYNTHIA,\lLANCE, RED etc.\lNow I'm just stuck in this CITY...$"
