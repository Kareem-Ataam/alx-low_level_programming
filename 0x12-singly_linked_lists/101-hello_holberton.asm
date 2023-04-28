section .data
    message db 'Hello, Holberton', 0Ah
section .text
    global _begin

_begin:
    mov eax, 4
    mov ebx, 1
    mov ecx, message
    mov edx, 16
    int 0x80

    mov eax, 1
    xor ebx, ebx
    int 0x80
