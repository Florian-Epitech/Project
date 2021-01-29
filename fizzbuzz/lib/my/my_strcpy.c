/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** cpy
*/

#include "../../include/my.h"

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