; BigEndianToLittleEndian.asm
; Khalid Hourani
; Computer Organization
; COSC 2325 2801
; 10/09/2016
; A4 - Big Endian to Little Endian
; BigEndianToLittleEndian.asm - copies the value from variable bigEndian to variable littleEndian, reversing the order of the bytes.

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
 bigEndian   BYTE 12h, 34h, 56h, 78h
 littleEndian DWORD ?				
 
 .code						
 main PROC
 mov ah, BYTE PTR bigEndian			;move first byte into ah
 mov al, BYTE PTR [bigEndian + 1]	;move second byte into al
 mov WORD PTR [littleEndian + 2], ax ;move ax into last two bytes of littleEndian
 mov ah, BYTE PTR [bigEndian + 2] ;move third byte into ah
 mov al, BYTE PTR [bigEndian + 3] ;move fourth byte into al
 mov WORD PTR [littleEndian], ax  ;move ax into first two bytes of littleEndian

 invoke ExitProcess, 0
 main ENDP
 END main