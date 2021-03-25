/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen (char const *str)
{
    int a = 0;

    for (int b = 0; str[b] != '\0'; b++){
        a++;
    }
    return (a);
}