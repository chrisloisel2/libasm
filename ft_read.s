section .text
        global ft_read

    ft_read:
        mov     rax, 0
        syscall
        test    rax, rax
        ret