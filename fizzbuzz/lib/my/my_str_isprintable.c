/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** isprintable
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 32 && str[i] > 126)
            a++;
    }
    if (a != 0)
        return (0);
    if (str[0] == '\0')
        return (1);
    else
        return (1);
}