/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0') {
        if (s1[i] == s2[i])
            i = i + 1;
        else
            return 1;
    }
    return 0;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && i < n) {
        if (s1[i] == s2[i])
            i = i + 1;
        else
            return 1;
    }
    return 0;
}
