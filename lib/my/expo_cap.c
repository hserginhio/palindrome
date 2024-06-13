/*
** EPITECH PROJECT, 2023
** expo.c
** File description:
** expo.c
*/
#include "my.h"

int number_neg_cap(double nb)
{
    int cmpt = 0;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        cmpt = cmpt + 1;
    }
    return cmpt;
}

int exp_pos_cap(double nb)
{
    int i = 0;
    int cmpt = 0;

    number_neg_cap(nb);
    while (nb >= 10) {
        nb = nb / 10;
        i = i + 1;
    }
    cmpt = cmpt + my_float(nb);
    cmpt = cmpt + my_putstr("E+");
    if (i < 10) {
        cmpt = cmpt + my_put_nbr(0);
        cmpt = cmpt + my_put_nbr(i);
    } else if (i >= 10) {
        cmpt = cmpt + my_put_nbr(i);
    }
    return cmpt;
}

int exp_neg_cap(double nb)
{
    int i = 0;
    int cmpt = 0;

    number_neg_cap(nb);
    while (nb <= 1) {
        nb = nb * 10;
        i = i + 1;
    }
    cmpt = cmpt + my_float(nb);
    cmpt = cmpt + my_putstr("E-");
    if (i < 10) {
        cmpt = cmpt + my_put_nbr(0);
        cmpt = cmpt + my_put_nbr(i);
    } else if (i >= 10) {
        cmpt = cmpt + my_put_nbr(i);
    }
    return cmpt;
}

int exponent_cap(double nb)
{
    if (nb >= 1) {
        return (exp_pos_cap(nb));
    }
    if (nb < 1) {
        return (exp_neg_cap(nb));
    }
    return 0;
}
