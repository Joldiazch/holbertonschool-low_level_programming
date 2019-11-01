section .rodata
msg: db 'Hello, Holberton', 10
str: equ $-msg

section .text
global main
main:
; write(1, msg, str)
mov rdi, 1
mov rsi, msg
mov rdx, str
mov rax, 1
syscall
; return 0
mov rax, 0
ret
