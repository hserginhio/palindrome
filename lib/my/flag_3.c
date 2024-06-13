/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "my.h"

int flag_e(va_list list)
{
    return (exponent(va_arg(list, double)));
}

int flag_e_cap(va_list list)
{
    return (exponent_cap(va_arg(list, double)));
}
