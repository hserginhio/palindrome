/*
** EPITECH PROJECT, 2024
** B-SYN-200-RUN-2-1-palindrome-serginhio.hamidouni
** File description:
** base
*/
#include "palindrome.h"

int convert_base(opt_t *opt)
{
    int nb = 0;
    int res = 0;
    int qot = 0;

    while (nb != 0) {
        res *= 10;
        res += nb / opt->b;
        nb / opt->b;
    }
    return res;
}
