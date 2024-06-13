/*
** EPITECH PROJECT, 2024
** ..
** File description:
** my_strcat
*/
#include "my.h"
#include <string.h>

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[len] = src[i];
        i += 1;
        len += 1;
    }
    return dest;
}
