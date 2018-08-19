; FillArray.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 11/06/2016
; A8 - Filling an Array
; Fills an array of doublewords with N random integers, making sure the values fall within the range j...k, inclusive.

includelib C:\Irvine\Kernel32.Lib
includelib C:\Irvine\User32.Lib
includelib C:\Irvine\Irvine32.lib
include Irvine32.inc

.data
intArray SDWORD 50 DUP(?) ; declare integer array
count DWORD 0 ; initialize a counter

.code
main proc
call Randomize
mov esi, intArray
mov ecx, lengthof intArray
mov ebx, 11 ; lower limit
mov eax, 75 ; upper limit
call fillWithRandom

mov ebx, 5 ; lower limit
mov eax, 50 ; upper limit
mov ecx, lengthof intArray
call fillWithRandom
exit
main endp

fillWithRandom proc
pushad
sub eax, ebx ; calculate interval size, store in eax
inc eax ; increment eax

L1:
	mov edx, eax ; save interval size
	call RandomRange ; generates random value and stores in eax
	add eax, ebx ; add random value to base
	mov intArray[esi], eax ; move eax into esi array
	pop eax
	add esi, 4 ; move to next entry in esi array
	mov eax, edx ; restore interval size
	loop L1

popad
ret

fillWithRandom endp
end main