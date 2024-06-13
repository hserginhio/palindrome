/*
** EPITECH PROJECT, 2024
** B-SYN-200-RUN-2-1-palindrome-serginhio.hamidouni
** File description:
** palindrome
*/

#include "../lib/my/my.h"
#include "palindrome.h"

info_t *verify_solution(int nb, opt_t *opt)
{
    info_t *result = malloc(sizeof(info_t));
    int nb_reversed = 0;

    result->nb_begin = nb;
    while (!palindrome(nb) && result->nb_loop <= opt->imax) {
        nb_reversed = renverse_nb(nb);
        nb = nb + nb_reversed;
        result->nb_loop++;
        if (result->nb_loop > opt->imax) {
            my_printf("no solution\n");
            exit(84);
        }
    }
    result->nb = nb;
    return result;
}

void display_n(int nb, opt_t *opt)
{
    info_t *result = verify_solution(nb, opt);

    my_printf("%d leads to %d in %d iteration(s) in base %d\n",
    result->nb_begin, result->nb, result->nb_loop, opt->b);
}

void display_p(int i, info_t *info, opt_t *opt)
{
    my_printf("%d leads to %d in %d iteration(s) in base %d\n",
    i, opt->pal, info->nb_loop, opt->b);
}

info_t *palindrome_p(opt_t *opt)
{
    info_t *result = malloc(sizeof(info_t));
    int nb_reversed = 0;
    int nb = 0;

    if (!palindrome(nb)) {
        my_printf("invalid argument\n");
        exit(84);
    }
    for (int i = 1; i <= opt->pal; i++) {
        result->nb_loop = 0;
        nb = i;
        while (nb != opt->pal && result->nb_loop < opt->imax) {
            nb_reversed = renverse_nb(nb);
            nb = nb + nb_reversed;
            result->nb_loop++;
        }
        if (nb == opt->pal && result->nb_loop >= opt->imin)
            display_p(i, result, opt);
    }
    return result;
}
