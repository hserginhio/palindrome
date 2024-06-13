/*
** EPITECH PROJECT, 2023
** octal
** File description:
** octal
*/

#include "my.h"

unsigned octal(unsigned int nb)
{
    char *oct = "01234567";
    int cmpt = 0;

    if (nb < 8) {
        my_putchar(oct[nb]);
        cmpt = cmpt + 1;
    }
    if (nb >= 8) {
        cmpt = cmpt + octal(nb / 8);
        my_putchar(nb % 8 + 48);
        cmpt = cmpt + 1;
    }
    return (cmpt);
}
