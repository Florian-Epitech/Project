/*
** EPITECH PROJECT, 2020
** putstr
** File description:
** my
*/

#include "my.h"

int my_putstr(char const *str)
{
    write (1, str, my_strlen(str));
    return (0);
}