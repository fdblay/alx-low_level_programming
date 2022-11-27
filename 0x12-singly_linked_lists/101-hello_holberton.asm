;prints Hello, Holberton followed by a new line

section .text
	default rel
	extern printf
	global main
main:
	push rbp

	mov rdi, fmt
	mov rsi, msg
	mov rax, 0

	;call printf with relation to procedure linkage table
	call printf wrt ..plt

	pop rbp		; pop stack

	mov rax,0	; Exit code 0
	ret 		; Return

section .data
	msg: db	"Hello, Holberton", 0xa, 0
	fmt: db "%s", 0xa, 0
