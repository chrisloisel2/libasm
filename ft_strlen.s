section .text
        global ft_strlen

    ft_strlen:
        mov     rax, rdi        ;. copies parameter address to leave it untouched

    ft_strlen_loop:
        mov     cl, byte [rax]  ;. takes the actual char value
        inc     rax             ;. inc before test because it would change the
                                ; value of the zero flag that we are going to
                                ; test and read
        test    cl, cl          ;. set ZF to 1 if cl == 0
        jnz     ft_strlen_loop  ;. jumps if ZF == 0, jne jumps if ZF != 1
                                ; we choose jnz as a better mnemonic

        sub     rax, rdi        ;. calculate the dif between addresses resuting
                                ; in string length + null byte
        dec     rax             ; exclude '\0'
        ret
