/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#include "../../include/my.h"

char char_transfo(int a)
{
    return (a + 48);
}

unsigned int my_put_nbr_unsigned(unsigned int number)
{
    if (number < 0) {
        number += -1;
        my_putchar('-');
    }
    if (number > 9) {
        my_put_nbr_unsigned(number / 10);
        my_putchar(char_transfo(number % 10));
    } else {
        my_putchar(char_transfo(number));
    }
    return (0);
}