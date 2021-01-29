/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** str
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (a != n && src[a] != '\0'){
        dest[a] = src[a];
        a += 1;
    }
    if (src[a] == '\0')
        dest[a] = '\0';
    return (dest);
}