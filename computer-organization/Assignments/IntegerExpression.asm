; IntegerExpression.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 09/18/2016
; A2 - Integer Expression Calculation
; IntegerExpression.asm - calculates expression A = (A + B) - (C + D)

ExitProcess proto

.data
sum sdword 0

.code
main proc
	mov	  eax, 12 ; A = 12
	mov	  ebx, 92 ; B = 92
	mov   ecx, 123 ; C = 123
	mov   edx, 17 ; D = 17

	add   eax, ebx ; A = A + B
	add   ecx, edx ; C = C + D
	add   sum, eax ; sum = A + B
	sub   sum, ecx ; sum = (A + B) - (C + D)
	mov   eax,sum
	call  ExitProcess
main endp
end