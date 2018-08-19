; DrawColors.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 10/23/2016
; A6 - DrawColors
; DrawColors.asm - displays the same string in four different colors, using a loop

includelib C:\Irvine\Kernel32.Lib
includelib C:\Irvine\User32.Lib
includelib C:\Irvine\Irvine32.lib
include Irvine32.inc

.data
str1 byte "This line is displayed in color",0

.code
main proc

mov eax, black + (white * 16) ; black on white backgrouund
mov ecx,4 ; loop counter

L1: call SetTextColor
mov edx,OFFSET str1
call WriteString
call Crlf
add eax,2 ; add 2 to foreground color
loop L1

exit
main endp
end main