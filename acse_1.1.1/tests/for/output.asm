	.data
L0 : 	.WORD 0
L1 : 	.WORD 0
	.text
	MOVA R1 1
	STORE R1 L1
	MOVA R2 0
	STORE R2 L0
L2 : 	LOAD R2 L0
	SUBI R3 R2 #10
	STORE R2 L0
	SLT R3 0
	ANDB R3 R3 R3
	BEQ L3
	BT L4
L5 : 	LOAD R2 L0
	ADDI R3 R2 #1
	ADD R2 R0 R3
	STORE R2 L0
	BT L2
L4 : 	LOAD R2 L0
	WRITE R2 0
	STORE R2 L0
	LOAD R1 L1
	WRITE R1 0
	STORE R1 L1
	BT L5
L3 : 	HALT
