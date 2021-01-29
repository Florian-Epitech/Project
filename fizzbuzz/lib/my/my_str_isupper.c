/*
** EPITECH PROJECT, 2020
** str_isupper
** File description:
** isupper
*/

#include "../../include/my.h"

int my_str_isupper(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 65 && str[i] > 90)
            a++;
    }
    if (a != 0)
        return (0);
    if (str[0] == '\0')
        return (1);
    else
        return (1);
}