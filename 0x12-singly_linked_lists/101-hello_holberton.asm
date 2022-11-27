;prints Hello, Holberton followed by a new line

	extern printf
section .text
	global main
main:
	push rbp

	mov rdi, fmt
	mov rsi, msg
	mov rax, 0

	call printf	;call printf 

	pop rbp		; pop stack

	mov rax,0	; Exit code 0
	ret 		; Return

section .data
	msg: db	"Hello, Holberton", 0
	fmt: db "%s", 0xa, 0
