VerdanturfResto_MapScripts::
	.byte 0


VerdanturfResto_Text_Vendor::
	lock
	faceplayer
	message VerdanturfResto_Text_Vendor_Text_0
	waitmessage
	pokemart VerdanturfResto_RestoPubItems
	msgbox VerdanturfResto_Text_Vendor_Text_1
	release
	return


	.align 2
VerdanturfResto_RestoPubItems:
	.2byte ITEM_SANDWICH
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_NONE

VerdanturfResto_Text_Employee::
	msgbox VerdanturfResto_Text_Employee_Text_0, MSGBOX_NPC
	end


VerdanturfResto_Text_Guy::
	msgbox VerdanturfResto_Text_Guy_Text_0, MSGBOX_NPC
	applymovement 3, VerdanturfResto_Text_ResetCharacter
	end


VerdanturfResto_Text_Farmer::
	msgbox VerdanturfResto_Text_Farmer_Text_0, MSGBOX_NPC
	applymovement 2, VerdanturfResto_Text_ResetCharacter
	end


VerdanturfResto_Text_ResetCharacter:
	face_original_direction
	step_end

VerdanturfResto_Text_Vendor_Text_0:
	.string "Welcome to our Restaurant.\nWhat would you order?$"

VerdanturfResto_Text_Vendor_Text_1:
	.string "Don't forget to drink with moderation.$"

VerdanturfResto_Text_Employee_Text_0:
	.string "I heard that POKéMON loves eating\nhuman's food.\lWell I don't like POKéMON's food!$"

VerdanturfResto_Text_Guy_Text_0:
	.string "You know, my SKITTY went mad because I\ndon't have any BADGES.\lNow it's runing wild in my house.\lThat's why I'm stuck here.$"

VerdanturfResto_Text_Farmer_Text_0:
	.string "I wonder what's the meat is made of...\nActually no. Better not thinking about\lit!$"
