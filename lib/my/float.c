/*
** EPITECH PROJECT, 2023
** float
** File description:
** float
*/

#include <unistd.h>
#include "my.h"

float my_round(double nb)
{
    float float_nb = nb;
    int round_nb;

    float_nb = float_nb * 10000000;
    round_nb = (int)float_nb;
    round_nb = round_nb % 10;
    if (round_nb > 5) {
        nb = nb + 0.000001;
    }
    if (round_nb < -5) {
        nb = nb - 0.000001;
    }
    return nb;
}

int display_whole(float nb)
{
    int cmp = 0;
    int whole = (int)nb;

    cmp = cmp + my_put_nbr(whole);
    my_putchar('.');
    cmp = cmp + 1;
    return cmp;
}

int display_float(float nb)
{
    int whole = (int)nb;
    float decimal = nb - whole;
    int number = 0;
    int i = 0;
    int cmp = 0;

    cmp = cmp + display_whole(nb);
    if (decimal < 0) {
        decimal = -decimal;
    }
    while (i < 6) {
        decimal = decimal * 10;
        number = (int)decimal;
        my_put_nbr(number);
        decimal = decimal - number;
        i = i + 1;
        cmp = cmp + 1;
    }
    return cmp;
}

int my_float(float nb)
{
    return (display_float(my_round(nb)));
}
