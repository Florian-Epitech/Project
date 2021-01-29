/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** strn
*/

#include "../../include/my.h"

int my_strncmp(char const *s1, char const *s2)
{
    int n = 0;
    int a = 0;

    while (a != n - 1 && s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
        a += 1;
    return (s1[a] - s2[a]);
}