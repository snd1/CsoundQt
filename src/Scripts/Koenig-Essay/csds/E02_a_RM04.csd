<CsoundSynthesizer>

; Id: E02_a_RM04.CSD mg (2006, rev.2009)
; author: marco gasperini (marcogsp at yahoo dot it)

; G.M. Koenig
; ESSAY (1957)

<CsOptions>
-W -f -oE02_a_RM04.wav
</CsOptions>

<CsInstruments>

sr     = 192000
kr     = 192000
ksmps  = 1
nchnls = 1

;====================================
; 251.a.4 RING MODULATION
;====================================
	instr 1
ifreq	= p4
ibw	= ifreq * .05
ifile	= p5

a1	diskin2 ifile, 1

a2	rand 1, .5 , 1			; filtered noise (N)
afilt	butterbp a2 , ifreq , ibw
afilt	butterbp afilt*11 , ifreq , ibw

aout	= (a1 * afilt * .7)+(a1*.7)

	out aout
	endin
;====================================

</CsInstruments>
<CsScore>
f1 0 4096 10 1

t0	4572		; 76.2 cm/sec. tape speed (durations in cm)

;			p4	p5
;			ifreq	ifile
;			[Hz]
i1	0	449	1600 	"E01_a.wav"

e

</CsScore>
</CsoundSynthesizer>