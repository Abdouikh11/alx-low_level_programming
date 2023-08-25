section .data
	hello_msgs db "Hello, Holberton", 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, hello_msgs
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
