/*
** EPITECH PROJECT, 2020
** isnum
** File description:
** my isnum
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 48 && str[i] > 57)
            a++;
    }
    if (a != 0)
        return (0);
    if (str[0] == '\0')
        return (1);
    else
        return (1);
}