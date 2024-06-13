/*
** EPITECH PROJECT, 2024
** //
** File description:
** strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}

int is_alphnum(char c)
{
    if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
        return 1;
    if ('0' <= c && '9' >= c)
        return 1;
    return 0;
}

int is_separator(char c)
{
    return !is_alphnum(c);
}
