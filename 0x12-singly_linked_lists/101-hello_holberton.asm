section .data
hello db "Hello, Holberton",0
format db "%s",10,0

section .text
global main
extern printf

main:
; Push format string onto the stack
push format
; Push hello string onto the stack
push hello
; Call printf
call printf
; Clean up the stack
add rsp, 16

; Exit the program
mov rax, 60         ; syscall: exit
xor rdi, rdi        ; status: 0
syscall
