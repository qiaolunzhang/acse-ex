	.data
L0 : 	.SPACE 20
L1 : 	.WORD 3
	.text
	MOVA R1 L0
	MOVA R2 0
	ADD (R1) R0 R2
	MOVA R1 L0
	ADDI R1 R1 #1
	MOVA R2 1
	ADD (R1) R0 R2
	MOVA R1 L0
	ADDI R1 R1 #2
	MOVA R2 2
	ADD (R1) R0 R2
	MOVA R1 L0
	ADDI R1 R1 #3
	MOVA R2 3
	ADD (R1) R0 R2
	MOVA R1 L0
	ADDI R1 R1 #4
	MOVA R2 4
	ADD (R1) R0 R2
	MOVA R1 0
L3 : 	MOVA R2 L0
	ADD R2 R2 R1
	ADD R3 R0 (R2)
	SUBI R2 R3 #2
	SGT R2 0
	ADDI R1 R1 #1
	SUBI R3 R1 #5
	SLT R3 0
	SUBI R4 R2 #0
	SUB R4 R0 R4
	SEQ R4 0
	ANDB R2 R3 R4
	BNE L3
	SUBI R1 R4 #0
	SUB R1 R0 R1
	SEQ R1 0
	ANDB R1 R1 R1
	BEQ L2
	MOVA R1 1
	WRITE R1 0
L2 : 	HALT