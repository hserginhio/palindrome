/*
** EPITECH PROJECT, 2024
** B-SYN-200-RUN-2-1-palindrome-serginhio.hamidouni
** File description:
** requirement
*/

#include <stdio.h>
#include <stdlib.h>

int my_factrec_synthesis(int nb)
{
    if (nb < 0)
        return 0;
    if (nb >= 13)
        return 0;
    if (nb == 0)
        return 1;
    return nb * my_factrec_synthesis(nb - 1);
}

int my_squareroot_synthesis(int nb)
{
    if (nb < 0)
        return -1;
    for (int i = 0; i * i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return -1;
}
