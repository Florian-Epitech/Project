/*
** EPITECH PROJECT, 2020
** my_islower
** File description:
** islower
*/

#include "../../include/my.h"

int my_str_islower(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 97 && str[i] > 122)
            a++;
    }
    if (a != 0)
        return (0);
    if (str[0] == '\0')
        return (1);
    else
        return (1);
}