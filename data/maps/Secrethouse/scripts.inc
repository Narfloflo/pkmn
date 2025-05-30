Secrethouse_MapScripts::
	.byte 0


Secrethouse_Text_Man::
	msgbox Secrethouse_Text_Man_Text_0, MSGBOX_NPC
	end


Secrethouse_Text_OldMan::
	msgbox Secrethouse_Text_OldMan_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Secrethouse_Text_OldMan_1
	msgbox Secrethouse_Text_OldMan_Text_2, MSGBOX_NPC
	end

Secrethouse_Text_OldMan_1:
	msgbox Secrethouse_Text_OldMan_Text_1, MSGBOX_NPC
	end


Secrethouse_Text_Man_Text_0:
	.string "I've never seen you before.\nWho are you? A HOENN citizen?\lPlease don't spread the word that we\llive here.\lI don't want to see tourists...$"

Secrethouse_Text_OldMan_Text_0:
	.string "Do you want to know more about the\nhistory of this place?$"

Secrethouse_Text_OldMan_Text_1:
	.string "This town used to be a major city a\nlong time ago.\lIt was a really long time ago.\lThe ancient civilization who built the\lMIRAGE TOWER was settled here.\lThe desert was a very fertile place\lwith a guardian living in a cave,\lwatching over these people.\lBut at some point a tragedy occured.\lThe guardian was locked in his cave and\lthe environment became harsh.\lThe civilization collapsed, but we\lstay here.\lWe are not a lot, but we can survive.\lThat's more than enough!$"

Secrethouse_Text_OldMan_Text_2:
	.string "Alright, have a good day kiddo!$"
