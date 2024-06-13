/*
** EPITECH PROJECT, 2024
** B-SYN-200-RUN-2-1-palindrome-serginhio.hamidouni
** File description:
** main
*/
#include "palindrome.h"

void help(void)
{
    my_printf("USAGE\n");
    my_printf("\t./palindrome -n number -p palindrome [-b base] [-imin i] ");
    my_printf("[-imax i]\n\n");
    my_printf("DESCRIPTION\n");
    my_printf("\t-n n\t\tinteger to be transformed (>=0)\n");
    my_printf("\t-p pal\t\tpalindromic number to be obtained (incompatible ");
    my_printf("with the -n option) (>=0)\n");
    my_printf("\t\t\tif defined, all fitting values of n will be output\n");
    my_printf("\t-b base\t\tbase in which the procedure will be executed ");
    my_printf("(1<b<=10) [def: 10]\n");
    my_printf("\t-imin i\t\tminimum number of iterations, included (>=0) ");
    my_printf("[def: 0]\n");
    my_printf("\t-imax i\t\tmaximum number of iterations, included (>=0) ");
    my_printf("[def: 100]\n");
}

int main(int argc, char **argv)
{
    opt_t *opt = malloc(sizeof(opt_t));

    init_opt(opt);
    if (argc < 3 || argc == 4) {
        my_printf("invalid argument\n");
        return 84;
    }
    verify_opt(opt, argv);
    if (my_strcmp(argv[1], "-n") == 0) {
        display_n(opt->n, opt);
    }
    if (my_strcmp(argv[1], "-p") == 0) {
        palindrome_p(opt);
    }
    return 0;
}
