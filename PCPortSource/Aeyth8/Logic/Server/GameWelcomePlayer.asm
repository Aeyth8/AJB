.code

PUBLIC ASMGrabRedirectURL

extern RedirectURLAddress:qword
extern PointerOfAgony:qword

ASMGrabRedirectURL PROC
	
	mov RedirectURLAddress, r8
	mov [rcx + 32], rdx
	mov [rcx + 40], rax
		
	mov rax, [rcx + 8]				; CopyString Address
	mov rdx, [rcx + 16]				; New RedirectURL
	mov rcx, [RedirectURLAddress]	; EmptyRedirectURL

	call rax

	mov rcx, PointerOfAgony
	mov rdx, [rcx + 32]
	mov rax, [rcx + 40]

	mov rcx, [rcx]
	jmp rcx
ASMGrabRedirectURL ENDP

END