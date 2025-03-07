MahoganyTown_MapScripts::
	.byte 0


MahoganyTown_Text_Oldwoman::
	lock
	faceplayer
	msgbox MahoganyTown_Text_Oldwoman_Text_0
	release
	end


MahoganyTown_Text_Man::
	lock
	faceplayer
	msgbox MahoganyTown_Text_Man_Text_0
	release
	end


MahoganyTown_Text_Man2::
	lock
	faceplayer
	msgbox MahoganyTown_Text_Man2_Text_0
	release
	end


MahoganyTown_Text_GymSign::
	msgbox MahoganyTown_Text_GymSign_Text_0, MSGBOX_SIGN
	end


MahoganyTown_Text_Inn::
	msgbox MahoganyTown_Text_Inn_Text_0, MSGBOX_SIGN
	end


MahoganyTown_Text_TownSign::
	lock
	faceplayer
	msgbox MahoganyTown_Text_TownSign_Text_0
	release
	end


MahoganyTown_Text_MartSign::
	msgbox MahoganyTown_Text_MartSign_Text_0, MSGBOX_SIGN
	end


MahoganyTown_Text_Oldwoman_Text_0:
	.string "Did you know that MAHOGANY TOWN used\n"
	.string "to be a NINJA TOWN ? I heard that\l"
	.string "KOGA's original clan is from here. What\l"
	.string "you don't know KOGA ? Your lack of\l"
	.string "culture will lead you to your end kid.$"

MahoganyTown_Text_Man_Text_0:
	.string "The LAKE OF RAGE up there bring a lot of\n"
	.string "tourists here !$"

MahoganyTown_Text_Man2_Text_0:
	.string "Since you came this far, take the time\n"
	.string "to do some sightseeing. You should\l"
	.string "head north and check out LAKE OF RAGE\l"
	.string "right now.$"

MahoganyTown_Text_GymSign_Text_0:
	.string "MAHOGANY TOWN\nPOKéMON GYM LEADER: PRYCE\lThe Teacher of Winter's Harshness$"

MahoganyTown_Text_Inn_Text_0:
	.string "MAHOGANY TOWN INN\nRest your soul and your body$"

MahoganyTown_Text_TownSign_Text_0:
	.string "MAHOGANY TOWN\p"
	.string "Welcome to the Home of the Ninja$"

MahoganyTown_Text_MartSign_Text_0:
	.string "MAHOGANY TOWN Old Market.\nCome have a taste of the RAGE CANDY!$"
