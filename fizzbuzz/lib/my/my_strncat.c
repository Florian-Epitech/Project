/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** strn
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    while (dest[a])
        a += 1;
    while (src[b] && b < nb)
    {
        dest[a] = src[b];
        a += 1;
        b += 1;
    }
    dest[a] = '\0';
    return dest;
}