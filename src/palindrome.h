/*
** EPITECH PROJECT, 2024
** B-SYN-200-RUN-2-1-palindrome-serginhio.hamidouni
** File description:
** palindrome
*/

#ifndef INCLUDED_PALINDROME_H
    #define INCLUDED_PALINDROME_H
    #include "../lib/my/my.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <ctype.h>

typedef struct info {
    int nb;
    int nb_begin;
    int nb_loop;
    int pal;
} info_t;

typedef struct opt {
    int n;
    int pal;
    int b;
    int imin;
    int imax;
} opt_t;

int renverse_nb(int nb);
info_t *verify_solution(int nb, opt_t *opt);
bool verify_opt(opt_t *opt, char **argv);
bool palindrome(int nb);
void init_opt(opt_t *opt);
info_t *palindrome_p(opt_t *opt);
int convert_base(opt_t *opt);
void display_n(int nb, opt_t *opt);
// opt_t *verify_opt(opt_t *opt, char **argv);
// int verify_solution(int nb);


#endif
