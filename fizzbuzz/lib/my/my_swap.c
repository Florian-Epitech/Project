/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap
*/

#include "../../include/my.h"

int my_swap(int *a, int *b)
{
    int d;

    d = *a;
    *a = *b;
    *b = d;
    return (0);
}