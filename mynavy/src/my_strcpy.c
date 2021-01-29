/*
** EPITECH PROJECT, 2020
** str copy
** File description:
** my_strcpy
*/

#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    while (src[a] != '\0')
    {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';

    return (dest);
}
