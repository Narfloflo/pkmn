	.include "MPlayDef.s"

	.equ	mus_littleroot_test_grp, voicegroup006
	.equ	mus_littleroot_test_pri, 0
	.equ	mus_littleroot_test_rev, reverb_set+50
	.equ	mus_littleroot_test_mvl, 85
	.equ	mus_littleroot_test_key, 0
	.equ	mus_littleroot_test_tbs, 1
	.equ	mus_littleroot_test_exg, 1
	.equ	mus_littleroot_test_cmp, 1

	.section .rodata
	.global	mus_littleroot_test
	.align	2

@**************** Track 1 (Midi-Chn.2) ****************@

mus_littleroot_test_1:
	.byte	KEYSH , mus_littleroot_test_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , 90*mus_littleroot_test_tbs/2
	.byte		VOICE , 4
	.byte		VOL   , 124*mus_littleroot_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		TIE   , As2 , v036
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 002   ----------------------------------------
	.byte		TIE   , Ds3 , v052
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 004   ----------------------------------------
	.byte		TIE   , As2 , v044
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 006   ----------------------------------------
	.byte		TIE   , Ds3 , v048
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 008   ----------------------------------------
	.byte		TIE   , As2 , v040
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 010   ----------------------------------------
	.byte		TIE   , Ds3 , v052
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 012   ----------------------------------------
	.byte		TIE   , As2 , v036
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 014   ----------------------------------------
	.byte		TIE   , Ds3 , v056
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 016   ----------------------------------------
	.byte		TIE   , Ds3 , v048
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 018   ----------------------------------------
	.byte		TIE   , As3 
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 020   ----------------------------------------
	.byte		TIE   , Ds3 , v036
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 022   ----------------------------------------
	.byte		TIE   , As3 , v052
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 024   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.4) ****************@

mus_littleroot_test_2:
	.byte	KEYSH , mus_littleroot_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 38
	.byte		VOL   , 112*mus_littleroot_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N12   , Ds1 , v064
	.byte	W12
	.byte		        As1 , v080
	.byte	W84
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
mus_littleroot_test_2_002:
	.byte		N12   , Ds1 , v068
	.byte	W12
	.byte		        As1 , v084
	.byte	W84
	.byte	PEND
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte		        Ds1 , v072
	.byte	W12
	.byte		        As1 , v088
	.byte	W84
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte		        Ds1 , v072
	.byte	W12
	.byte		        As1 , v076
	.byte	W84
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte		        Ds1 , v064
	.byte	W12
	.byte		        As1 , v080
	.byte	W84
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
mus_littleroot_test_2_010:
	.byte		N12   , Ds1 , v072
	.byte	W12
	.byte		        As1 , v080
	.byte	W84
	.byte	PEND
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
mus_littleroot_test_2_012:
	.byte		N12   , Ds1 , v068
	.byte	W12
	.byte		        As1 , v080
	.byte	W84
	.byte	PEND
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_test_2_012
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_test_2_012
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte		N12   , Ds1 , v072
	.byte	W12
	.byte		        As1 , v084
	.byte	W84
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_test_2_002
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_test_2_010
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_test_2_002
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte		N12   , Ds1 , v072
	.byte	W12
	.byte		        As1 , v080
	.byte	W12
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_littleroot_test_3:
	.byte	KEYSH , mus_littleroot_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		VOL   , 112*mus_littleroot_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N06   , Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v052
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
	.byte		        Ds3 , v064
	.byte	W06
	.byte		        Fn3 , v068
	.byte	W06
	.byte		        Ds3 , v056
	.byte	W06
	.byte		        Fn3 , v072
	.byte	W06
	.byte		        Ds3 , v048
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
	.byte		        Ds3 , v052
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
@ 001   ----------------------------------------
	.byte		        Ds3 , v036
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v036
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
@ 002   ----------------------------------------
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v036
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v060
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v056
	.byte	W06
	.byte		        As3 , v064
	.byte	W06
	.byte		        Gs3 , v056
	.byte	W06
	.byte		        As3 , v068
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
@ 003   ----------------------------------------
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v036
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
@ 004   ----------------------------------------
	.byte		        Ds3 , v036
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v048
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
	.byte		        Ds3 , v048
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
	.byte		        Ds3 , v060
	.byte	W06
	.byte		        Fn3 , v068
	.byte	W06
	.byte		        Ds3 , v060
	.byte	W06
	.byte		        Fn3 , v068
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
@ 005   ----------------------------------------
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v036
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v036
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
@ 006   ----------------------------------------
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v056
	.byte	W06
	.byte		        As3 , v064
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
@ 007   ----------------------------------------
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
@ 008   ----------------------------------------
	.byte		        Ds3 , v032
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
	.byte		        Ds3 , v052
	.byte	W06
	.byte		        Fn3 , v060
	.byte	W06
	.byte		        Ds3 , v056
	.byte	W06
	.byte		        Fn3 , v064
	.byte	W06
	.byte		        Ds3 , v060
	.byte	W06
	.byte		        Fn3 , v068
	.byte	W06
	.byte		        Ds3 , v052
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v048
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
@ 009   ----------------------------------------
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
@ 010   ----------------------------------------
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v040
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v060
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 , v064
	.byte	W06
	.byte		        Gs3 , v060
	.byte	W06
	.byte		        As3 , v064
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
@ 011   ----------------------------------------
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
@ 012   ----------------------------------------
	.byte		        Ds3 , v032
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v060
	.byte	W06
	.byte		        Fn3 , v068
	.byte	W06
	.byte		        Ds3 , v056
	.byte	W06
	.byte		        Fn3 , v068
	.byte	W06
	.byte		        Ds3 , v052
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v056
	.byte	W06
@ 013   ----------------------------------------
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v044
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v040
	.byte	W06
	.byte		        Fn3 , v048
	.byte	W06
	.byte		        Ds3 , v044
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fn3 , v052
	.byte	W06
@ 014   ----------------------------------------
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v060
	.byte	W06
	.byte		        As3 , v068
	.byte	W06
	.byte		        Gs3 , v056
	.byte	W06
	.byte		        As3 , v068
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v060
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
@ 015   ----------------------------------------
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v036
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
@ 016   ----------------------------------------
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v060
	.byte	W06
	.byte		        As3 , v068
	.byte	W06
	.byte		        Gs3 , v060
	.byte	W06
	.byte		        As3 , v064
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
@ 017   ----------------------------------------
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v052
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
@ 018   ----------------------------------------
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v036
	.byte	W06
	.byte		        Ds4 , v044
	.byte	W06
	.byte		        Cs4 , v052
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Ds4 , v052
	.byte	W06
	.byte		        Cs4 , v056
	.byte	W06
	.byte		        Ds4 , v064
	.byte	W06
	.byte		        Cs4 , v060
	.byte	W06
	.byte		        Ds4 , v064
	.byte	W06
	.byte		        Cs4 , v048
	.byte	W06
	.byte		        Ds4 , v052
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Ds4 , v056
	.byte	W06
@ 019   ----------------------------------------
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 , v044
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 , v052
	.byte	W06
@ 020   ----------------------------------------
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v036
	.byte	W06
	.byte		        As3 , v044
	.byte	W06
	.byte		        Gs3 , v052
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v060
	.byte	W06
	.byte		        Gs3 , v056
	.byte	W06
	.byte		        As3 , v068
	.byte	W06
	.byte		        Gs3 , v056
	.byte	W06
	.byte		        As3 , v068
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
	.byte		        Gs3 , v048
	.byte	W06
	.byte		        As3 , v056
	.byte	W06
@ 021   ----------------------------------------
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 , v040
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Gs3 , v036
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v040
	.byte	W06
	.byte		        As3 , v048
	.byte	W06
	.byte		        Gs3 , v044
	.byte	W06
	.byte		        As3 
	.byte	W06
@ 022   ----------------------------------------
	.byte		        Cs4 , v052
	.byte	W06
	.byte		        Ds4 , v040
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Ds4 , v056
	.byte	W06
	.byte		        Cs4 , v048
	.byte	W06
	.byte		        Ds4 , v052
	.byte	W06
	.byte		        Cs4 , v060
	.byte	W06
	.byte		        Ds4 , v064
	.byte	W06
	.byte		        Cs4 , v052
	.byte	W06
	.byte		        Ds4 , v068
	.byte	W06
	.byte		        Cs4 , v048
	.byte	W06
	.byte		        Ds4 , v056
	.byte	W06
	.byte		        Cs4 , v048
	.byte	W06
	.byte		        Ds4 , v056
	.byte	W06
@ 023   ----------------------------------------
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v036
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v044
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 , v044
	.byte	W06
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 , v044
	.byte	W06
	.byte		        Cs4 , v040
	.byte	W06
	.byte		        Ds4 , v048
	.byte	W06
@ 024   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.1) ****************@

mus_littleroot_test_4:
	.byte	KEYSH , mus_littleroot_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 45
	.byte		VOL   , 112*mus_littleroot_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte		N42   , Cs4 , v072
	.byte	W36
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v-4
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-12
	.byte		        c_v-16
	.byte		        c_v-20
	.byte	W01
	.byte		        c_v-24
	.byte		        c_v-28
	.byte	W01
	.byte		        c_v-32
	.byte		        c_v-36
	.byte		        c_v-40
	.byte	W01
	.byte		        c_v-44
	.byte		        c_v-48
	.byte		        c_v-52
	.byte	W01
	.byte		        c_v-56
	.byte		        c_v-60
	.byte	W01
	.byte		        c_v+0
	.byte		N06   , Cn4 , v076
	.byte	W06
	.byte		TIE   , Fs3 , v068
	.byte	W48
@ 005   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte		N42   , Cs4 
	.byte	W36
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v-4
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-12
	.byte		        c_v-16
	.byte		        c_v-20
	.byte	W01
	.byte		        c_v-24
	.byte		        c_v-28
	.byte	W01
	.byte		        c_v-32
	.byte		        c_v-36
	.byte		        c_v-40
	.byte	W01
	.byte		        c_v-44
	.byte		        c_v-48
	.byte		        c_v-52
	.byte	W01
	.byte		        c_v-56
	.byte		        c_v-60
	.byte	W01
	.byte		        c_v+0
	.byte		N06   , Cn4 , v076
	.byte	W06
	.byte		TIE   , Fs3 , v060
	.byte	W48
@ 009   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 010   ----------------------------------------
	.byte		TIE   , Gs3 , v080
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte		N24   , Ds3 , v068
	.byte	W24
	.byte		        Bn3 , v092
	.byte	W24
	.byte		        As3 , v072
	.byte	W24
	.byte		        Fs3 , v068
	.byte	W24
@ 017   ----------------------------------------
	.byte		N96   , Fn3 , v072
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte		N24   , Ds3 , v068
	.byte	W24
	.byte		        Bn3 , v092
	.byte	W24
	.byte		        As3 , v076
	.byte	W24
	.byte		        Fs3 , v068
	.byte	W24
@ 021   ----------------------------------------
	.byte		N96   , Fn3 , v076
	.byte	W96
@ 022   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

mus_littleroot_test:
	.byte	4	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_littleroot_test_pri	@ Priority
	.byte	mus_littleroot_test_rev	@ Reverb.

	.word	mus_littleroot_test_grp

	.word	mus_littleroot_test_1
	.word	mus_littleroot_test_2
	.word	mus_littleroot_test_3
	.word	mus_littleroot_test_4

	.end
