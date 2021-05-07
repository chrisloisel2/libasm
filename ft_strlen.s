section .text
        global ft_strlen

    ft_strlen:
        mov     rax, 0
        jmp     ft_icr

    ft_icr:
        cmp [rdi + rax], byte 0
        je  ft_exit
        inc rax
        jmp ft_icr
    
    ft_exit:
        ret