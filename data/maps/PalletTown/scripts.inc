PalletTown_MapScripts::
	.byte 0


PalletTown_Text_Fatman::
	lock
	faceplayer
	msgbox PalletTown_Text_Fatman_Text_0
	release
	end


PalletTown_Text_CitySign::
	lock
	msgbox PalletTown_Text_CitySign_Text_0
	release
	end


PalletTown_Text_RedSign::
	lock
	msgbox PalletTown_Text_RedSign_Text_0
	release
	end


PalletTown_Text_BlueSign::
	lock
	msgbox PalletTown_Text_BlueSign_Text_0
	release
	end


PalletTown_Text_GreenSign::
	lock
	msgbox PalletTown_Text_GreenSign_Text_0
	release
	end


PalletTown_Text_Woman::
	lock
	faceplayer
	msgbox PalletTown_Text_Woman_Text_0
	release
	end


PalletTown_Text_OldWoman::
	lock
	faceplayer
	msgbox PalletTown_Text_OldWoman_Text_0
	release
	end


PalletTown_Text_Fatman_Text_0:
	.string "Look ! They've built a POKéMART here in\n"
	.string "PALLET TOWN. But there is no\l"
	.string "POKéCENTER... So what are we supposed\l"
	.string "to do if we want to rest ? Sleep at\l"
	.string "RED's MOM ?$"

PalletTown_Text_CitySign_Text_0:
	.string "PALLET TOWN\n"
	.string "Shades of your journey await !$"

PalletTown_Text_RedSign_Text_0:
	.string "RED's House$"

PalletTown_Text_BlueSign_Text_0:
	.string "Prof OAK's House$"

PalletTown_Text_GreenSign_Text_0:
	.string "LEAF's House$"

PalletTown_Text_Woman_Text_0:
	.string "I raise POKéMON too, but they serve as\n"
	.string "my private guard !$"

PalletTown_Text_OldWoman_Text_0:
	.string "Since RED, BLUE and GREEN became so\n"
	.string "famous, PALLET TOWN is booming in\l"
	.string "population ! We have three more houses\l"
	.string "! That massive even for us !$"
