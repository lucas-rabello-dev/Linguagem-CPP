section .text
global soma

soma:
    mov eax, edi      ; primeiro argumento (int a)
    add eax, esi      ; segundo argumento (int b)
    ret
