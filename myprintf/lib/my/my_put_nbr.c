/*
** EPITECH PROJECT, 2020
** nbr
** File description:
** nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int division = 1;

    if (nb == -2147483648) {
        write(1, "-2147482648", 11);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    while (nb / division >= 10) {
        division = division * 10;
    }
    while (division > 0) {
        my_putchar(((nb / division) % 10) + 48);
        division = division / 10;
    }
    return (0);
}