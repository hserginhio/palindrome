/*
** EPITECH PROJECT, 2024
** B-SYN-200-RUN-2-1-palindrome-serginhio.hamidouni
** File description:
** begin
*/
#include "../lib/my/my.h"
#include "palindrome.h"


int renverse_nb(int nb)
{
    int reverse = 0;

    while (nb > 0) {
        reverse = reverse * 10;
        reverse = reverse + nb % 10;
        nb /= 10;
    }
    return reverse;
}

bool palindrome(int nb)
{
    int reverse = renverse_nb(nb);

    if (nb == reverse) {
        return true;
    }
    return false;
}

bool verify_opt(opt_t *opt, char **argv)
{
    for (int i = 1; argv[i + 1] != NULL; i++) {
        if (my_strcmp(argv[i], "-n") == 0) {
            opt->n = atoi(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-b") == 0) {
            opt->b = atoi(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-p") == 0) {
            opt->pal = atoi(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-imin") == 0) {
            opt->imin = atoi(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-imax") == 0) {
            opt->imax = atoi(argv[i + 1]);
        }
    }
    return true;
}

void init_opt(opt_t *opt)
{
    opt->b = 10;
    opt->n = 0;
    opt->pal = 0;
    opt->imin = 0;
    opt->imax = 100;
}
