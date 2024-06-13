/*
** EPITECH PROJECT, 2023
** HEXA
** File description:
** HEXA
*/

#include "my.h"

unsigned hexa_cap(unsigned int nb)
{
    char *hexa = "0123456789ABCDEF";
    int cmpt = 0;

    if (nb < 16) {
        my_putchar(hexa[nb]);
        cmpt = cmpt + 1;
    }
    if (nb >= 16) {
        cmpt = cmpt + hexa_cap(nb / 16);
        my_putchar(hexa[nb % 16]);
        cmpt = cmpt + 1;
    }
    return (cmpt);
}
