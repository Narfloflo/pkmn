NewMap1_MapScripts::
	.byte 0


NewMap1_Text_RestaurantKid::
	lock
	faceplayer
	msgbox NewMap1_Text_RestaurantKid_Text_0
	release
	end


NewMap1_Text_GuyInSuit::
	lock
	msgbox NewMap1_Text_GuyInSuit_Text_0
	release
	end


NewMap1_Text_Cook::
	lock
	faceplayer
	msgbox NewMap1_Text_Cook_Text_0
	release
	end


NewMap1_Text_Vendor::
	lock
	message NewMap1_Text_Vendor_Text_0
	waitmessage
	pokemart FoodItems
	msgbox NewMap1_Text_Vendor_Text_1
	release
	return


	.align 2
FoodItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

NewMap1_Text_RestaurantKidF::
	lock
	faceplayer
	msgbox NewMap1_Text_RestaurantKidF_Text_0
	release
	end


NewMap1_Text_GameKid::
	lock
	faceplayer
	msgbox NewMap1_Text_GameKid_Text_0
	release
	end


NewMap1_Text_RestaurantKid_Text_0:
	.string "So basically, I'm here everyday eating\n"
	.string "the same stuff\p"
	.string "I need a proper life...$"

NewMap1_Text_GuyInSuit_Text_0:
	.string "EMPLOYEE: Can I take your order\n"
	.string "please?\p"
	.string "GUY in the suit: I'll have Two number 9s,\n"
	.string "number 9 large. Number 6, extra dip !\l"
	.string "Number 7, extra d-7. Two 45s, one 40\l"
	.string "cheese. Extra extra large cheese soda.\l"
	.string "Number 9 dip, extra 6. 45 cheese, 69\l"
	.string "aaah ! 7-Eleven, and a large soda!\p"
	.string "{PLAYER}: YUCK!$"

NewMap1_Text_Cook_Text_0:
	.string "Welcome in the one and only FAST FOOD\n"
	.string "chain of HOENN !\p"
	.string "Our restaurants are so similar that we\n"
	.string "can swear it's always the same\l"
	.string "location, but duplicated !\p"
	.string "{PLAYER}: I think it is. The developer\n"
	.string "is fucking lazy!$"

NewMap1_Text_Vendor_Text_0:
	.string "Welcome to HOENN BURGER, what can I get\n"
	.string "you ?$"

NewMap1_Text_Vendor_Text_1:
	.string "Come again soon.$"

NewMap1_Text_RestaurantKidF_Text_0:
	.string "I don't care what people think. I'm here\n"
	.string "to gain the most weight possible and\l"
	.string "beat a SNORLAX.\p"
	.string "{PLAYER}: What the fuck ?$"

NewMap1_Text_GameKid_Text_0:
	.string "Kid: Humm yes ? You wanna try my brand\n"
	.string "new NINTENDO SWITCH ?\p"
	.string "{PLAYER}: Hell yeah !\p"
	.string "Kid: Well no way I'm letting a dirty\n"
	.string "TRAINER like you touching my device.\l"
	.string "Screw you !\p"
	.string "{PLAYER}: Selfish bastard...$"
