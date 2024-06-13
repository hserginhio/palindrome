/*
** EPITECH PROJECT, 2023
** ;;
** File description:
** ;;
*/

#include "my.h"

int flag_o(va_list list)
{
    return (octal(va_arg(list, unsigned int)));
}

int flag_x(va_list list)
{
    return (hexadecimal(va_arg(list, unsigned int)));
}

int flag_x_cap(va_list list)
{
    return (hexa_cap(va_arg(list, unsigned int)));
}

int flag_f(va_list list)
{
    return (my_float(va_arg(list, double)));
}

int flag_u(va_list list)
{
    return (decimal(va_arg(list, unsigned int)));
}
