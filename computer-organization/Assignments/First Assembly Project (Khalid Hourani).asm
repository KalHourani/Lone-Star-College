;First Assembly Project (Khalid Hourani)
;Khalid Hourani
;Computer Organization
;COSC 2325 2801
;09/05/2016
;A1 - First Assembly Project - AddTwo.asm
;AddTwo.asm - adds two 32-bit integers.
;Chapter 3 example

.386
.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword

.code
main proc
	mov	eax,5				
	add	eax,6				

	invoke ExitProcess,0
main endp
end main