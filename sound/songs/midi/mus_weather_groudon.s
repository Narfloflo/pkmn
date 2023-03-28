	.include "MPlayDef.s"

	.equ	mus_weather_groudon_grp, voicegroup080
	.equ	mus_weather_groudon_pri, 0
	.equ	mus_weather_groudon_rev, reverb_set+50
	.equ	mus_weather_groudon_mvl, 100
	.equ	mus_weather_groudon_key, 0
	.equ	mus_weather_groudon_tbs, 1
	.equ	mus_weather_groudon_exg, 1
	.equ	mus_weather_groudon_cmp, 1

	.section .rodata
	.global	mus_weather_groudon
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_weather_groudon_1:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
@ 001   ----------------------------------------
	.byte	TEMPO , 150*mus_weather_groudon_tbs/2
	.byte		VOICE , 87
	.byte		VOL   , 70*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N24   , Cn1 , v100
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Fn1 
	.byte	W24
@ 002   ----------------------------------------
mus_weather_groudon_1_002:
	.byte		N12   , Ds1 , v100
	.byte	W24
	.byte		N24   , As0 
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
mus_weather_groudon_1_003:
	.byte		N24   , Cn1 , v100
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte	PEND
@ 004   ----------------------------------------
mus_weather_groudon_1_004:
	.byte		N12   , Fn1 , v100
	.byte	W24
	.byte		N24   , As0 
	.byte	W24
	.byte		N12   , Cs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte	PEND
@ 005   ----------------------------------------
mus_weather_groudon_1_005:
	.byte		N24   , Cn1 , v100
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Fn1 
	.byte	W24
	.byte	PEND
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
mus_weather_groudon_1_B1:
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 038   ----------------------------------------
mus_weather_groudon_1_038:
	.byte		N12   , Ds1 , v100
	.byte	W24
	.byte		N72   , As0 
	.byte	W72
	.byte	PEND
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 040   ----------------------------------------
	.byte		N12   , Fn1 , v100
	.byte	W24
	.byte		N72   , As0 
	.byte	W72
@ 041   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_038
@ 043   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 045   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_005
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_002
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_003
@ 052   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_1_004
	.byte	GOTO
	 .word	mus_weather_groudon_1_B1
mus_weather_groudon_1_B2:
@ 053   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_weather_groudon_2:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 24
	.byte		VOL   , 120*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
mus_weather_groudon_2_B1:
@ 008   ----------------------------------------
mus_weather_groudon_2_008:
	.byte		N12   , Ds5 , v100
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte	PEND
@ 009   ----------------------------------------
mus_weather_groudon_2_009:
	.byte		N12   , Dn5 , v100
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
mus_weather_groudon_2_010:
	.byte		N12   , Cs5 , v100
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Cs5 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Cs5 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte	PEND
@ 011   ----------------------------------------
mus_weather_groudon_2_011:
	.byte		N12   , Cn5 , v100
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte	W96
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
	.byte	W96
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 045   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_008
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_009
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_010
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_2_011
	.byte	GOTO
	 .word	mus_weather_groudon_2_B1
mus_weather_groudon_2_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_weather_groudon_3:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 81
	.byte		VOL   , 58*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
mus_weather_groudon_3_B1:
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte		VOL   , 58*mus_weather_groudon_mvl/mxv
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte		VOICE , 81
	.byte		PAN   , c_v+0
	.byte	W48
	.byte		N48   , Ds4 , v100
	.byte	W48
@ 017   ----------------------------------------
mus_weather_groudon_3_017:
	.byte		N12   , Fn4 , v100
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		N24   , As3 
	.byte	W24
	.byte		N12   , Dn4 
	.byte	W12
	.byte		N24   , Gn4 
	.byte	W24
	.byte	PEND
@ 018   ----------------------------------------
	.byte		N72   , Fn4 
	.byte	W72
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 019   ----------------------------------------
	.byte		N84   , Gn4 
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		N24   , Gs4 
	.byte	W24
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		N24   , Gn4 
	.byte	W24
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
@ 025   ----------------------------------------
	.byte		        Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		N24   , Fn4 
	.byte	W24
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
@ 026   ----------------------------------------
	.byte		N24   , Fn4 
	.byte	W24
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 027   ----------------------------------------
	.byte		N96   , Ds4 
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte	W48
	.byte		N48   
	.byte	W48
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_3_017
@ 034   ----------------------------------------
	.byte		N96   , Fn4 , v100
	.byte	W96
@ 035   ----------------------------------------
	.byte		        Ds4 
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte	W48
	.byte		VOICE , 80
	.byte		N12   , Fn2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		N24   , Gs2 
	.byte	W24
@ 038   ----------------------------------------
	.byte		N96   , Ds3 
	.byte	W96
@ 039   ----------------------------------------
	.byte		N12   , Fn3 
	.byte	W48
	.byte		        Gs2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		N24   , Gs2 
	.byte	W24
@ 040   ----------------------------------------
	.byte		N96   , Ds3 
	.byte	W96
@ 041   ----------------------------------------
	.byte	W48
	.byte		N12   , Fn3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		N24   , Gs3 
	.byte	W24
@ 042   ----------------------------------------
	.byte		N96   , Gn3 
	.byte	W96
@ 043   ----------------------------------------
	.byte		N12   , Fn3 
	.byte	W96
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W96
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte		VOICE , 17
	.byte		VOL   , 125*mus_weather_groudon_mvl/mxv
	.byte	W96
@ 048   ----------------------------------------
mus_weather_groudon_3_048:
	.byte		PAN   , c_v+0
	.byte		N96   , Ds5 , v100
	.byte	W96
	.byte	PEND
@ 049   ----------------------------------------
	.byte		PAN   , c_v-24
	.byte		N96   , Dn5 
	.byte	W96
@ 050   ----------------------------------------
	.byte		PAN   , c_v+24
	.byte		N96   , Fn5 
	.byte	W96
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_3_048
	.byte	GOTO
	 .word	mus_weather_groudon_3_B1
mus_weather_groudon_3_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_weather_groudon_4:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 38
	.byte		VOL   , 90*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N24   , Cn1 , v100
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Fn1 
	.byte	W24
@ 001   ----------------------------------------
mus_weather_groudon_4_001:
	.byte		N12   , Ds1 , v100
	.byte	W24
	.byte		N24   , As0 
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte	PEND
@ 002   ----------------------------------------
mus_weather_groudon_4_002:
	.byte		N24   , Cn1 , v100
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
mus_weather_groudon_4_003:
	.byte		N12   , Fn1 , v100
	.byte	W24
	.byte		N24   , As0 
	.byte	W24
	.byte		N12   , Cs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte	PEND
@ 004   ----------------------------------------
mus_weather_groudon_4_004:
	.byte		N24   , Cn1 , v100
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Ds1 
	.byte	W24
	.byte		N12   , Gn1 
	.byte	W12
	.byte		N24   , Fn1 
	.byte	W24
	.byte	PEND
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
mus_weather_groudon_4_B1:
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_004
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_001
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_003
@ 036   ----------------------------------------
mus_weather_groudon_4_036:
	.byte		N24   , Cn2 , v100
	.byte	W24
	.byte		N12   , Gn2 
	.byte	W12
	.byte		N24   , Ds2 
	.byte	W24
	.byte		N12   , Gn2 
	.byte	W12
	.byte		N24   , Fn2 
	.byte	W24
	.byte	PEND
@ 037   ----------------------------------------
mus_weather_groudon_4_037:
	.byte		N12   , Ds2 , v100
	.byte	W24
	.byte		N72   , As1 
	.byte	W72
	.byte	PEND
@ 038   ----------------------------------------
mus_weather_groudon_4_038:
	.byte		N24   , Cn2 , v100
	.byte	W24
	.byte		N12   , Gn2 
	.byte	W12
	.byte		N24   , Ds2 
	.byte	W24
	.byte		N12   , Gn2 
	.byte	W12
	.byte		N24   , Ds2 
	.byte	W24
	.byte	PEND
@ 039   ----------------------------------------
	.byte		N12   , Fn2 
	.byte	W24
	.byte		N72   , As1 
	.byte	W72
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_036
@ 041   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_037
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_038
@ 043   ----------------------------------------
mus_weather_groudon_4_043:
	.byte		N12   , Fn2 , v100
	.byte	W24
	.byte		N24   , As1 
	.byte	W24
	.byte		N12   , Cs2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		N24   , Cs2 
	.byte	W24
	.byte	PEND
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_036
@ 045   ----------------------------------------
mus_weather_groudon_4_045:
	.byte		N12   , Ds2 , v100
	.byte	W24
	.byte		N24   , As1 
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		N24   , Cs2 
	.byte	W24
	.byte	PEND
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_038
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_043
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_036
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_045
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_038
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_4_043
	.byte	GOTO
	 .word	mus_weather_groudon_4_B1
mus_weather_groudon_4_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_weather_groudon_5:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 48
	.byte		PAN   , c_v-6
	.byte		VOL   , 115*mus_weather_groudon_mvl/mxv
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
mus_weather_groudon_5_B1:
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		VOICE , 48
	.byte		VOL   , 115*mus_weather_groudon_mvl/mxv
	.byte	W48
	.byte		N48   , Cn5 , v100
	.byte	W48
@ 013   ----------------------------------------
mus_weather_groudon_5_013:
	.byte		N12   , Dn5 , v100
	.byte	W12
	.byte		        Cn5 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		N24   , Gn4 
	.byte	W24
	.byte		N12   , As4 
	.byte	W12
	.byte		N24   , Dn5 
	.byte	W24
	.byte	PEND
@ 014   ----------------------------------------
	.byte		N96   , Cs5 
	.byte	W96
@ 015   ----------------------------------------
	.byte		        Cn5 
	.byte	W96
@ 016   ----------------------------------------
	.byte	W48
	.byte		N48   
	.byte	W48
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_5_013
@ 018   ----------------------------------------
	.byte		N72   , Cs5 , v100
	.byte	W72
	.byte		N12   , Cn5 
	.byte	W12
	.byte		        Cs5 
	.byte	W12
@ 019   ----------------------------------------
	.byte		N84   , Ds5 
	.byte	W96
@ 020   ----------------------------------------
	.byte		VOL   , 115*mus_weather_groudon_mvl/mxv
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte		N24   , Fn4 
	.byte	W24
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		N24   , Ds4 
	.byte	W24
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
@ 025   ----------------------------------------
	.byte		        Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Dn4 
	.byte	W24
	.byte		N12   , Cn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
@ 026   ----------------------------------------
	.byte		N24   , Cs4 
	.byte	W24
	.byte		N12   , Cn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
@ 027   ----------------------------------------
	.byte		N84   , Cn4 
	.byte	W96
@ 028   ----------------------------------------
	.byte	W48
	.byte		N48   , Cn5 
	.byte	W48
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_5_013
@ 030   ----------------------------------------
	.byte		N96   , Cs5 , v100
	.byte	W96
@ 031   ----------------------------------------
	.byte		        Cn5 
	.byte	W96
@ 032   ----------------------------------------
	.byte	W48
	.byte		N48   
	.byte	W48
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_5_013
@ 034   ----------------------------------------
	.byte		N96   , Cs5 , v100
	.byte	W96
@ 035   ----------------------------------------
	.byte		        Cn5 
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W48
	.byte		N12   , As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Cs4 
	.byte	W24
@ 038   ----------------------------------------
	.byte		N96   , Cn4 
	.byte	W96
@ 039   ----------------------------------------
	.byte	W48
	.byte		N12   , Cs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Cs4 
	.byte	W24
@ 040   ----------------------------------------
	.byte		N96   , Cn4 
	.byte	W96
@ 041   ----------------------------------------
	.byte		N12   , Ds4 
	.byte	W48
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Cs4 
	.byte	W24
@ 042   ----------------------------------------
	.byte		N96   , Cn4 
	.byte	W96
@ 043   ----------------------------------------
	.byte		N12   , As3 
	.byte	W48
	.byte		        Cs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Cs4 
	.byte	W24
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W96
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte	W96
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte	W96
@ 050   ----------------------------------------
	.byte	W96
@ 051   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_weather_groudon_5_B1
mus_weather_groudon_5_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_weather_groudon_6:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 48
	.byte		PAN   , c_v-16
	.byte		VOL   , 80*mus_weather_groudon_mvl/mxv
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte		        90*mus_weather_groudon_mvl/mxv
	.byte		N96   , Ds3 , v100
	.byte	W96
@ 005   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 006   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 007   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
mus_weather_groudon_6_B1:
@ 008   ----------------------------------------
	.byte		VOICE , 48
	.byte		PAN   , c_v-16
	.byte		VOL   , 60*mus_weather_groudon_mvl/mxv
	.byte		N96   , Ds3 , v100
	.byte	W96
@ 009   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 010   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 011   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
@ 012   ----------------------------------------
	.byte		VOICE , 82
	.byte		PAN   , c_v-64
	.byte		VOL   , 50*mus_weather_groudon_mvl/mxv
	.byte		N96   , Ds3 
	.byte	W96
@ 013   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 014   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 015   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
@ 016   ----------------------------------------
	.byte		        Ds3 
	.byte	W96
@ 017   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 018   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 019   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
@ 020   ----------------------------------------
	.byte		N48   , Gs3 
	.byte	W48
	.byte		        Ds3 
	.byte	W48
@ 021   ----------------------------------------
	.byte		        Gn3 
	.byte	W48
	.byte		        Dn3 
	.byte	W48
@ 022   ----------------------------------------
	.byte		        Fn3 
	.byte	W48
	.byte		        Cs3 
	.byte	W48
@ 023   ----------------------------------------
	.byte		        Ds3 
	.byte	W48
	.byte		        Gn3 
	.byte	W48
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte		N96   , Ds3 
	.byte	W96
@ 029   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 030   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 031   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
@ 032   ----------------------------------------
	.byte		        Ds3 
	.byte	W96
@ 033   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 035   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte		VOICE , 48
	.byte		PAN   , c_v-16
	.byte		VOL   , 60*mus_weather_groudon_mvl/mxv
	.byte		N12   , Gn3 
	.byte	W48
	.byte		        As2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		N24   , Cs3 
	.byte	W24
@ 042   ----------------------------------------
	.byte		N96   , Ds3 
	.byte	W96
@ 043   ----------------------------------------
	.byte		N12   , As2 
	.byte	W48
	.byte		        Gs3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		N24   , Gs3 
	.byte	W24
@ 044   ----------------------------------------
	.byte		N96   , Ds3 
	.byte	W96
@ 045   ----------------------------------------
	.byte		        Dn3 
	.byte	W96
@ 046   ----------------------------------------
	.byte		        Cs3 
	.byte	W96
@ 047   ----------------------------------------
	.byte		        Cn3 
	.byte	W96
@ 048   ----------------------------------------
	.byte		VOICE , 88
	.byte		VOL   , 60*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N96   , Ds5 
	.byte	W96
@ 049   ----------------------------------------
	.byte		PAN   , c_v-64
	.byte		N96   , Dn5 
	.byte	W96
@ 050   ----------------------------------------
	.byte		PAN   , c_v+63
	.byte		N96   , Fn5 
	.byte	W96
@ 051   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		N96   , Ds5 
	.byte	W96
	.byte	GOTO
	 .word	mus_weather_groudon_6_B1
mus_weather_groudon_6_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

mus_weather_groudon_7:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 60
	.byte		VOL   , 80*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte		VOL   , 90*mus_weather_groudon_mvl/mxv
	.byte		N96   , Gn3 , v100
	.byte	W96
@ 005   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 006   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 007   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
mus_weather_groudon_7_B1:
@ 008   ----------------------------------------
	.byte		VOL   , 60*mus_weather_groudon_mvl/mxv
	.byte		N96   , Gn3 , v100
	.byte	W96
@ 009   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 010   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 011   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
@ 012   ----------------------------------------
mus_weather_groudon_7_012:
	.byte		PAN   , c_v+26
	.byte		N96   , Gn3 , v100
	.byte	W96
	.byte	PEND
@ 013   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 014   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 015   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
@ 016   ----------------------------------------
	.byte		N96   
	.byte	W96
@ 017   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 018   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 019   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
@ 020   ----------------------------------------
	.byte		VOL   , 110*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+6
	.byte		N24   , Fn4 
	.byte	W24
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		N24   , Ds4 
	.byte	W24
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
@ 021   ----------------------------------------
	.byte		        Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Dn4 
	.byte	W24
	.byte		N12   , Cn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
@ 022   ----------------------------------------
	.byte		N48   , Cs4 
	.byte	W48
	.byte		        As3 
	.byte	W48
@ 023   ----------------------------------------
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		N48   , Cn4 
	.byte	W48
@ 024   ----------------------------------------
	.byte		PAN   , c_v+16
	.byte		VOL   , 60*mus_weather_groudon_mvl/mxv
	.byte		N48   , Gs3 
	.byte	W48
	.byte		        Ds3 
	.byte	W48
@ 025   ----------------------------------------
	.byte		        Gn3 
	.byte	W48
	.byte		        Dn3 
	.byte	W48
@ 026   ----------------------------------------
	.byte		        Fn3 
	.byte	W48
	.byte		        Cs3 
	.byte	W48
@ 027   ----------------------------------------
	.byte		        Ds3 
	.byte	W48
	.byte		        Cn3 
	.byte	W48
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_7_012
@ 029   ----------------------------------------
	.byte		N96   , As3 , v100
	.byte	W96
@ 030   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 031   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
@ 032   ----------------------------------------
	.byte		N96   
	.byte	W96
@ 033   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 035   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte		PAN   , c_v+16
	.byte	W48
	.byte		N12   , Fn3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		N24   , Gs3 
	.byte	W24
@ 038   ----------------------------------------
	.byte		N96   , Gn3 
	.byte	W96
@ 039   ----------------------------------------
	.byte	W48
	.byte		N12   , Gs3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		N24   , Gs3 
	.byte	W24
@ 040   ----------------------------------------
	.byte		N96   , Gn3 
	.byte	W96
@ 041   ----------------------------------------
	.byte	W96
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
	.byte		N12   , Fn3 
	.byte	W96
@ 044   ----------------------------------------
	.byte		N96   , Gn3 
	.byte	W96
@ 045   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 046   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 047   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
@ 048   ----------------------------------------
	.byte		N96   
	.byte	W96
@ 049   ----------------------------------------
	.byte		        As3 
	.byte	W96
@ 050   ----------------------------------------
	.byte		        Fn3 
	.byte	W96
@ 051   ----------------------------------------
	.byte		        Gn3 
	.byte	W96
	.byte	GOTO
	 .word	mus_weather_groudon_7_B1
mus_weather_groudon_7_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 8 (Midi-Chn.8) ****************@

mus_weather_groudon_8:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 127
	.byte		VOL   , 70*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+16
	.byte		N03   , Ds5 , v100
	.byte	W48
	.byte		N03   
	.byte	W48
@ 001   ----------------------------------------
	.byte		N03   
	.byte	W96
@ 002   ----------------------------------------
mus_weather_groudon_8_002:
	.byte		N03   , Ds5 , v100
	.byte	W48
	.byte		N03   
	.byte	W48
	.byte	PEND
@ 003   ----------------------------------------
	.byte		N03   
	.byte	W96
@ 004   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 005   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 007   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
mus_weather_groudon_8_B1:
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 009   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 011   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 013   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 015   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 017   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 019   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 021   ----------------------------------------
mus_weather_groudon_8_021:
	.byte		N03   , Ds5 , v100
	.byte	W48
	.byte		        Ds4 
	.byte	W48
	.byte	PEND
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_021
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_021
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 027   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 029   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 031   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 033   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 035   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 037   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 039   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 041   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 043   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 045   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 047   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 049   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_8_002
@ 051   ----------------------------------------
	.byte		N03   , Ds5 , v100
	.byte	W96
	.byte	GOTO
	 .word	mus_weather_groudon_8_B1
mus_weather_groudon_8_B2:
@ 052   ----------------------------------------
	.byte	FINE

@**************** Track 9 (Midi-Chn.9) ****************@

mus_weather_groudon_9:
	.byte	KEYSH , mus_weather_groudon_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		VOL   , 80*mus_weather_groudon_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N06   , Cn1 , v100
	.byte	W48
	.byte		N06   
	.byte	W48
@ 001   ----------------------------------------
mus_weather_groudon_9_001:
	.byte		N06   , Cn1 , v100
	.byte	W24
	.byte		        En1 , v120
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W24
	.byte	PEND
@ 002   ----------------------------------------
mus_weather_groudon_9_002:
	.byte		N06   , Cn1 , v100
	.byte	W48
	.byte		N06   
	.byte	W48
	.byte	PEND
@ 003   ----------------------------------------
mus_weather_groudon_9_003:
	.byte		N06   , Cn1 , v100
	.byte	W24
	.byte		        En1 , v120
	.byte	W48
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 004   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
mus_weather_groudon_9_B1:
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
@ 020   ----------------------------------------
mus_weather_groudon_9_020:
	.byte		N24   , Cn1 , v120
	.byte	W24
	.byte		        Cs1 
	.byte	W24
	.byte		N12   , Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte	PEND
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_020
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_020
@ 023   ----------------------------------------
	.byte		N12   , Cs1 , v120
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N48   , Dn1 
	.byte	W48
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_020
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_020
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_020
@ 027   ----------------------------------------
	.byte		N08   , Dn2 , v120
	.byte	W12
	.byte		        Bn1 
	.byte	W12
	.byte		        Gn1 
	.byte	W06
	.byte		        Fn1 
	.byte	W06
	.byte		N12   , Cs1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   
	.byte	W24
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
@ 036   ----------------------------------------
mus_weather_groudon_9_036:
	.byte		N48   , Cn1 , v120
	.byte	W48
	.byte		N72   , Dn1 
	.byte	W48
	.byte	PEND
@ 037   ----------------------------------------
mus_weather_groudon_9_037:
	.byte	W24
	.byte		N24   , Cs1 , v120
	.byte	W24
	.byte		N12   , Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Cs1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_036
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_037
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_036
@ 041   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_037
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_036
@ 043   ----------------------------------------
	.byte	W24
	.byte		N12   , Cs1 , v120
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N16   , Dn2 
	.byte	W16
	.byte		        An1 
	.byte	W16
	.byte		        Fn1 
	.byte	W16
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 045   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_001
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_002
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_weather_groudon_9_003
	.byte	GOTO
	 .word	mus_weather_groudon_9_B1
mus_weather_groudon_9_B2:
@ 052   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

mus_weather_groudon:
	.byte	9	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_weather_groudon_pri	@ Priority
	.byte	mus_weather_groudon_rev	@ Reverb.

	.word	mus_weather_groudon_grp

	.word	mus_weather_groudon_1
	.word	mus_weather_groudon_2
	.word	mus_weather_groudon_3
	.word	mus_weather_groudon_4
	.word	mus_weather_groudon_5
	.word	mus_weather_groudon_6
	.word	mus_weather_groudon_7
	.word	mus_weather_groudon_8
	.word	mus_weather_groudon_9

	.end
