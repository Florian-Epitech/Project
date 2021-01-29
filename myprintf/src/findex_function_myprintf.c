/*
** EPITECH PROJECT, 2020
** function printfg
** File description:
** findex
*/

#include "../include/my.h"

int findex(char *tab, char find)
{
    for (int index = 0; tab[index] != 0; index++) {
        if (tab[index] == find)
            return (index);
    }
    return (0);
}