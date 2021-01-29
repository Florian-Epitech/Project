/*
** EPITECH PROJECT, 2020
** mystrcat
** File description:
** str
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = 0;
    b = my_strlen(dest);

    while (src[b] != '\0'){
        a++;
        dest[a+b] = src[a];
    }
    dest[a+b] = '\0';
    return (dest);
}