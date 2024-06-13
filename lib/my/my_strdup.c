/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** my_strdup.c
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *str = malloc(sizeof(char) * (len + 1));
    int c = 0;

    while (c < len) {
        str[c] = src[c];
        c++;
    }
    str[c] = '\0';
    return str;
}
