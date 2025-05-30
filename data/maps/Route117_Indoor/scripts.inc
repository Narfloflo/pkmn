Route117_Indoor_MapScripts::
	.byte 0


Route117_Indoor_Text_Aroma::
	msgbox Route117_Indoor_Text_Aroma_Text_0, MSGBOX_NPC
	end


Route117_Indoor_Text_Zigzagoon::
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox Route117_Indoor_Text_Zigzagoon_Text_0, MSGBOX_NPC
	end


Route117_Indoor_Text_SchoolGirl::
	msgbox Route117_Indoor_Text_SchoolGirl_Text_0, MSGBOX_NPC
	end


Route117_Indoor_Text_SchoolBoy::
	msgbox Route117_Indoor_Text_SchoolBoy_Text_0, MSGBOX_NPC
	end


Route117_Indoor_Text_Aroma_Text_0:
	.string "You know that my LINOONE found a RARE\nCANDY in the grass?\lMy ZIGZAGOON couldn't. I wonder why?\l$"

Route117_Indoor_Text_Zigzagoon_Text_0:
	.string "Ziggy?$"

Route117_Indoor_Text_SchoolGirl_Text_0:
	.string "I fought against WHISMUR, and my\nPOKéMON now have a lot of HP!$"

Route117_Indoor_Text_SchoolBoy_Text_0:
	.string "If you train you POKéMON earlier,\nthey'll have better EV.$"
