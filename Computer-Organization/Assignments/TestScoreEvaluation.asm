; TestScoreEvaluation.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 11/16/2016
; A9 - Test Score Evaluation
; Evaluates the letter grade corresponding to a test score. 

includelib C:\Irvine\Kernel32.Lib
includelib C:\Irvine\User32.Lib
includelib C:\Irvine\Irvine32.lib
include Irvine32.inc

.data
counter BYTE ?

.code

main PROC
	CALL Randomize
	MOV ecx, 11 ; set loop counter to 10
	L:
		MOV eax, 51 ; for generating random grade between 50 and 100
		CALL RandomRange ; generates random grade between 0 and 50
		ADD eax, 50 ; grade is now a random number from 50 to 100
		CALL CalcGrade
		LOOP L ; repeat loop
main ENDP

CalcGrade PROC

Grade_A:
	CMP eax, 90 ; compare eax with 90
	JL Grade_B ; if eax < 90, jump to Grade_B
	mov al, 'A' ; else grade is an A
	JMP finished
Grade_B:
	CMP eax, 80 ; compare eax with 80
	JL Grade_C ; if eax < 80, jump to Grade_C
	mov al, 'B' ; else grade is a B
	JMP finished
Grade_C:
	CMP eax, 70 ; compare eax with 70
	JL Grade_D ; if eax < 70, jump to Grade_D
	mov al, 'C' ; else grade is a C
	JMP finished
Grade_D:
	CMP eax, 60 ; compare eax with 60
    JL Grade_F ; if eax < 60, jump to Grade_F
	mov al, 'D' ; else, grade is a D
	JMP finished
Grade_F:
	mov al, 'F' ; grade is an F
	JMP finished
finished:
    ret
CalcGrade ENDP

END