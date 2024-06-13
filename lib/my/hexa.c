/*
** EPITECH PROJECT, 2023
** hexa
** File description:
** hexa
*/

#include "my.h"

unsigned hexadecimal(unsigned int nb)
{
    char *hexa = "0123456789abcdef";
    int cmpt = 0;

    if (nb < 16) {
        my_putchar(hexa[nb]);
        cmpt = cmpt + 1;
    }
    if (nb >= 16) {
        cmpt = cmpt + hexadecimal(nb / 16);
        my_putchar(nb % 16 + 48);
        cmpt = cmpt + 1;
    }
    return (cmpt);
}
