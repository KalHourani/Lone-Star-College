; TestScoreEvaluation.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 11/16/2016
; A9 - Test Score Evaluation
; Evaluates the letter grade corresponding to a test score. 

ExitProcess proto

.data
val1 sword ?

.code

main PROC
PUSH 0 
POPF 

mov al,  00001111b
test  al,  00000010b 
mov al, 00000110b
cmp al, 00000101b
main ENDP

END