FallaeborResto_MapScripts::
	.byte 0


FallarborResto_Text_Vendor::
	lock
	faceplayer
	message FallarborResto_Text_Vendor_Text_0
	waitmessage
	pokemart FallarborResto_RestoPubItems
	msgbox FallarborResto_Text_Vendor_Text_1
	release
	return


	.align 2
FallarborResto_RestoPubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

FallarborResto_Text_OldMan::
	msgbox FallarborResto_Text_OldMan_Text_0, MSGBOX_NPC
	end


FallarborResto_Text_Vendor_Text_0:
	.string "Welcome,\n"
	.string "We don't have much but it's tasty!$"

FallarborResto_Text_Vendor_Text_1:
	.string "Don't choke yourself while eating. We\nare not responsible of that.$"

FallarborResto_Text_OldMan_Text_0:
	.string "I heard that there is also a restaurant\non ROUTE 115. I don't know why.\lI mean, there is everything we need\lhere.$"
