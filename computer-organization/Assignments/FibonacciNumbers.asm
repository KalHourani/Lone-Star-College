; FibonacciNumbers.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 10/14/2016
; A4 - Fibonacci Numbers
; FibonacciNumbers.asm - uses a loop to calculate the first seven values of the Fibonacci number sequence

ExitProcess proto

.data
Fib DWORD 1,1


.code
main proc 
mov ecx, 7 - 2 ;initialize loop counter

L1:
	fib[7 - ecx] = fib[7 - ecx - 1] + fib[7 - ecx - 2]
	Loop L1
main endp
end