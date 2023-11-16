SECTION .data
    my_msg:  db "Hello, Holberton", 0
    my_fmt:  db "%s", 10, 0

SECTION .text
    extern printf
    global main

main:
    ; Set up arguments for printf
    mov esi, my_msg   ; pointer to the string
    mov edi, my_fmt   ; pointer to the format string
    mov eax, 0        ; format specifier (0 corresponds to %s)

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0
    ret
