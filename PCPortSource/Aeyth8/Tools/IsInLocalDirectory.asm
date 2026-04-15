.code

PUBLIC IsInLocalDirectory

IsInLocalDirectory PROC
	mov rax, 2e002f002e002eh		; L "./.."
	cmp [rcx], rax
	jnz ROUTE_2						; Fallback to backslashes
	
	mov rax, 2e002e002f002eh		; L "../."
	cmp [rcx + 8], rax
	jz CLEAR_RAX

 ROUTE_2:
	mov rax, 2e005c002e002eh		; L "..\."
	cmp [rcx], rax
	jnz CLEAR_RAX

	mov rax, 2e002e005c002eh		; L ".\.."
	cmp [rcx + 8], rax

 CLEAR_RAX:
	push 0
	pop rax
	setz al
	ret
IsInLocalDirectory ENDP

END