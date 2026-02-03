; Written by Aeyth8
;
; https://github.com/Aeyth8
; 
; Copyright (C) 2025 Aeyth8
;
; [Optional] Proxy8 DLL Entrypoint

;;; Main function name to jump to after entry
	CPPENTRY textequ <_DllMainCRTStartup>

;;; Macros for compiling both x64 and x86

ifndef B64
	rax textequ <eax>
	rsp textequ <esp>
	rcx textequ <ecx>
	rbx textequ <ebx>
	rdx textequ <edx>
	rbp textequ <ebp>

	overflow textequ <0FFFFF000h>
	maxword textequ <dword>
	pebindex textequ <fs>
	bitnum textequ <30h>
	ntstack textequ <16>
	ImageBase textequ <8>

	.486
	.model flat
	;.model flat, stdcall
	ASSUME FS:NOTHING ; Stupid nonsense fix for an error.

	;;; SIDENOTE! In x86 the stupid name is actually __DllMainCRTStartup@12
	;;; I am done wasting my time with this nonsense, this is good enough.
	CPPENTRY textequ <__DllMainCRTStartup@12>
	extern CPPENTRY:near
else
	overflow textequ <0FFFFFFFFFFFFF000h>
	maxword textequ <qword>
	pebindex textequ <gs>
	bitnum textequ <60h>
	ntstack textequ <48>
	ImageBase textequ <16>

	extern CPPENTRY:near
endif

.code

extern NTDLL:maxword
extern HOST:maxword
extern GBA:maxword
extern PEB:maxword

PUBLIC ProxyEntrypoint

ProxyEntrypoint PROC
 ; Grabs the PEB starting address
	mov rax, pebindex:[bitnum]
	mov PEB, rax
	mov HOST, rcx 

 ; Grabs the base address for the "host" DLL, the program executing this code
	mov rax, [rax + ImageBase]
	mov GBA, rax

 ; Grabs some random address from NTDLL in the stack
	mov rax, [rsp + ntstack]
	push rbx

 ; Bitwise align it to 0x1000
	and rax, overflow

 ; Finds the base of NTDLL

BaseLoop:
	cmp word ptr [rax], 5A4Dh
	jne NextPage
	mov ebx, dword ptr [rax + 3Ch]
	add rbx, rax
	cmp dword ptr [rbx], 4550h
	je EndLoop

NextPage:
	sub rax, 1000h
	jmp BaseLoop

EndLoop:
	mov NTDLL, rax
	pop rbx

	jmp CPPENTRY
ProxyEntrypoint ENDP

END