SaffronGateSouth_MapScripts::
	.byte 0


SaffronGateSouth_Text_Guard::
	lock
	msgbox SaffronGateSouth_Text_Guard_Text_0
	release
	end


SaffronGateSouth_Text_GuardRoute7::
	lock
	checktrainerflag TRAINER_WINSTON_3 || TRAINER_WINSTON_4
	goto_if 1, SaffronGateSouth_Text_GuardRoute7_1
	msgbox SaffronGateSouth_Text_GuardRoute7_Text_0
	release
	end

SaffronGateSouth_Text_GuardRoute7_1:
	call SaffronGateSouth_Text_GuardRoute7YesNo
	return


SaffronGateSouth_Text_GuardRoute7YesNo::
	msgbox SaffronGateSouth_Text_GuardRoute7YesNo_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SaffronGateSouth_Text_GuardRoute7YesNo_1
	msgbox SaffronGateSouth_Text_GuardRoute7YesNo_Text_2
	release
	end

SaffronGateSouth_Text_GuardRoute7YesNo_1:
	cleartrainerflag TRAINER_WINSTON_3
	cleartrainerflag TRAINER_WINSTON_4
	playse SE_POKENAV_CALL
	waitse
	msgbox SaffronGateSouth_Text_GuardRoute7YesNo_Text_1
	release
	end


SaffronGateSouth_Text_Guard_Text_0:
	.string "I'm on guard duty.\nBut I think I'm a terrible guard since\lTEAM ROCKET could raid SAFFRON CITY.\lFortunatly a TRAINER kick them out!\lI guess I have\lno worry about my career!$"

SaffronGateSouth_Text_GuardRoute7_Text_0:
	.string "I'm on guard duty.\n"
	.string "But I think I'm a terrible guard since\l"
	.string "TEAM ROCKET could raid SAFFRON CITY.\l"
	.string "Fortunatly a TRAINER kick them out!\l"
	.string "I guess I have\l"
	.string "no worry about my career!$"

SaffronGateSouth_Text_GuardRoute7YesNo_Text_0:
	.string "I'm on guard duty.\nBut you know I really enjoy watching\lyou beat the TRAINERS on ROUTE 7.\lWanna rematch them?$"

SaffronGateSouth_Text_GuardRoute7YesNo_Text_1:
	.string "Alright!\nYou can now go back to ROUTE 7!\lThey'll pretend they've never seen you.$"

SaffronGateSouth_Text_GuardRoute7YesNo_Text_2:
	.string "So boring...$"
