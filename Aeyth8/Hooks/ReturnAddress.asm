; Written by Aeyth8 : https://github.com/Aeyth8
; Due to assembly not being supported anymore (for no reason probably) you will need to include this file if you want to make proxy hooks.


option casemap:none

.code

PUBLIC GetReturnAddress

GetReturnAddress PROC
	mov rax, [rsp + 20]
	ret
GetReturnAddress ENDP

END
