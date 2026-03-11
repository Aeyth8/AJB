; Written by Aeyth8
; Directly retrieves CPU registers


.code

PUBLIC GetRax
PUBLIC GetRbx
PUBLIC GetRcx
PUBLIC GetRdx
PUBLIC GetRsi
PUBLIC GetRdi
PUBLIC GetRbp
PUBLIC GetRsp

PUBLIC GetR8
PUBLIC GetR9
PUBLIC GetR10
PUBLIC GetR11
PUBLIC GetR12
PUBLIC GetR13
PUBLIC GetR14
PUBLIC GetR15

;PUBLIC GetRIP

;PUBLIC GetReturnAddress


GetRax PROC
	mov rax, rax
	ret
GetRax ENDP

GetRbx PROC
	mov rax, rbx
	ret
GetRbx ENDP

GetRcx PROC
	mov rax, rcx
	ret
GetRcx ENDP

GetRdx PROC
	mov rax, rdx
	ret
GetRdx ENDP

GetRsi PROC
	mov rax, rsi
	ret
GetRsi ENDP

GetRdi PROC
	mov rax, rdi
	ret
GetRdi ENDP

GetRbp PROC
	mov rax, rbp
	ret
GetRbp ENDP

GetRsp PROC
	mov rax, rsp
	ret
GetRsp ENDP

; //////////////////////////////

GetR8 PROC
	mov rax, r8
	ret
GetR8 ENDP

GetR9 PROC
	mov rax, r9
	ret
GetR9 ENDP

GetR10 PROC
	mov rax, r10
	ret
GetR10 ENDP

GetR11 PROC
	mov rax, r11
	ret
GetR11 ENDP

GetR12 PROC
	mov rax, r12
	ret
GetR12 ENDP

GetR13 PROC
	mov rax, r13
	ret
GetR13 ENDP

GetR14 PROC
	mov rax, r14
	ret
GetR14 ENDP

GetR15 PROC
	mov rax, r15
	ret
GetR15 ENDP

; //////////////////////////////

;GetRIP PROC
;	lea rax, [rax + 4]
;l	ret
;GetRIP ENDP

; //////////////////////////////

;GetReturnAddress PROC
;	lea rax, [rbp + 8]
;	ret
;GetReturnAddress ENDP

END