; SymbolicIntegerConstants.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 10/02/2016
; A3 - Symbolic Integer Constants
; SymbolicIntegerConstants.asm - creates symbolic constants for days of the week and uses them to initialize array

ExitProcess proto

.data
SUN = 0
MON = 1
TUE = 2
WED = 3
THU = 4
FRI = 5
SAT = 6
WEEK DWORD SUN, MON, TUE, WED, THU, FRI, SAT


.code
main proc ;Step over and watch EAX to see the content of the array WEEK
	mov eax, [WEEK] 
	mov eax, [WEEK + 4]
	mov eax, [WEEK + 8]
	mov eax, [WEEK + 12]
	mov eax, [WEEK + 16]
	mov eax, [WEEK + 20]
	mov eax, [WEEK + 24]
main endp
end