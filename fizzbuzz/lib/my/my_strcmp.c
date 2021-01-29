/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** cmp
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    while (a != n - 1 && s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
        a += 1;
    return (s1[a] - s2[a]);
}