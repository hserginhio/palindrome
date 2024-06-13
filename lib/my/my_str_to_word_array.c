/*
** EPITECH PROJECT, 2024
** ..
** File description:
** my_str_to_word_array
*/
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int parsing(char *str)
{
    int i = 0;
    int cmpt = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' '
        && (i - 1) >= 0 && str[i + 1] != '\0') {
            cmpt += 1;
        }
        i += 1;
    }
    return cmpt;
}

char **malloc_array(int lines, char *str)
{
    int i = 0;
    int cmpt = 0;
    char **array = malloc(sizeof(char *) * (lines + 1));
    int count = 0;

    while (str[i] != '\0') {
        while (str[i] != ' ' && str[i] != '\0') {
            i += 1;
        }
        while (str[i] != ' ' && str[i] != '\0') {
            cmpt += 1;
            i += 1;
        }
        array[count] = malloc(sizeof(char) * (cmpt + 1));
        i += 1;
        cmpt = 0;
        count += 1;
    }
    return array;
}

char **my_str_to_word_array(char *str, int i)
{
    int lines = parsing(str);
    int cmpt = 0;
    int count = 0;
    char **array = malloc_array((lines + 1), str);

    for (i = 0; str[i] != '\0'; i += 1) {
        while (str[i] == ' ' && str[i] != '\0')
            i += 1;
        for (i = i; str[i] != ':' && str[i] != '\0'; i += 1) {
            array[count][cmpt] = str[i];
            cmpt += 1;
        }
        array[count][cmpt] = '\0';
        count += 1;
        cmpt = 0;
    }
    array[count] = NULL;
    return array;
}
