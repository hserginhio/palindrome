/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>

int count_line(char const *buffer)
{
    int i = 0;
    int cmpt = 0;

        while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            cmpt = cmpt + 1;
        }
        i = i + 1;
    }
    return cmpt;
}

int count_columns(char const *buffer)
{
    int i = 0;
    int cmp = 0;
    int y = 0;

    if (buffer == NULL) {
        return 0;
    }
    while (y < 2) {
        if (buffer[i] == '\n')
            y = y + 1;
        if (buffer[i] != '\n' && y > 0)
            cmp = cmp + 1;
        i = i + 1;
    }
    return cmp;
}
