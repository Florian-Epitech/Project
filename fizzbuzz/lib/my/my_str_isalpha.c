/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** isalpha
*/

#include "../../include/my.h"

int my_str_isalpha(char *str)
{
    int a;

    while (str[a]) {
        if (str[a] >= 'A' && str[a] <= 'Z')
            a++;
        else if (str[a] >= 'a' && str[a] <= 'z')
            a++;
        else
            return (0);
    }
    return (1);
}