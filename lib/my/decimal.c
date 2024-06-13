/*
** EPITECH PROJECT, 2023
** decimal.c
** File description:
** decimal.c
*/
#include "my.h"

unsigned int decimal(unsigned int nb)
{
    int i = 0;

    if (nb >= 10) {
        i = i + decimal(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    i = i + 1;
    return i;
}
