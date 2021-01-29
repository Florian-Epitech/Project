/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** str
*/

#include "../../include/my.h"

int my_putstr (char const *str)
{
    for (int u = 0;str[u] != '\0'; u++){
        my_putchar(str[u]);
    }
    return (0);
}