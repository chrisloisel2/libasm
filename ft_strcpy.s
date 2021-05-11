section .text
        global ft_strcpy

    ft_strcpy:
        mov     rax, rdi
        mov     rdx, rsi
        jmp     ft_loop_strcpy
    
    ft_loop_strcpy:
        mov     cl, byte [rdx]
        mov     byte [rax], cl
        inc     rax
        inc     rdx
        test    cl, cl
        jnz     ft_loop_strcpy
        jmp     ft_strcpy_exit

    ft_strcpy_exit:
        mov     rax, rdi
        ret