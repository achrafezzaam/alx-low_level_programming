section .data
	hello: db "Hello, Holberton", 10
	hellolen: equ $-hello

section .text
	global _start

	_start:
		mov rax, 1
		mov rdi, 1
		mov rsi, hello
		mov rdx, hellolen
		syscall

		mov rax,60
		mov rdi, 0
		syscall
