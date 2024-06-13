/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/

#include <stdarg.h>

#ifndef MY_H
    #define MY_H

int my_put_nbr(int nb);
// int parsing(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
int is_separator(char c);
int is_alphnum(char c);
int my_printf(const char *restrict format, ...);
int my_putstr(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcat(char *dest, char const *src);
// char **malloc_array(int lines, char *str);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
char **my_str_to_word_array(char *str, int i);
void my_putchar(char c);
unsigned octal(unsigned int nb);
unsigned hexadecimal(unsigned int nb);
unsigned hexa_cap(unsigned int nb);
unsigned int decimal(unsigned int nb);
int my_float(float nb);
int exponent(double nb);
int exponent_cap(double nb);
int flag_g(va_list list);
int flag_d(va_list list);
int flag_i(va_list list);
int flag_c(va_list list);
int flag_s(va_list list);
int flag_perc(va_list list);
int flag_o(va_list list);
int flag_x(va_list list);
int flag_x_cap(va_list list);
int flag_f(va_list list);
int flag_u(va_list list);
int flag_e(va_list list);
int flag_e_cap(va_list list);
int fonction(char c, va_list list);
int percent(char c);
int float_or_expo(double nb);

typedef struct flag {
    char c;
    int (*fonction)(va_list);
} flag_t;

#endif
