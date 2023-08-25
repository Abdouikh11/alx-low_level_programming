section .data
    hello db 'Hello, Holberton',0xA,0

section .text
    global _start

    extern printf

_start:
    ; print the string using printf
    push rbp
    mov rdi, hello
    xor eax, eax
    call printf
    pop rbp

    ; exit the program
    xor rax, rax
    mov rax, 60
    xor rdi, rdi
    syscall
